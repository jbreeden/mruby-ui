def makeBasicControlsPage
  vbox = UI::Box.newVertical
  vbox.setPadded(true)

  hbox = UI::Box.newHorizontal
  hbox.setPadded(true)

  vbox.append(hbox, false)

  hbox.append(UI::Button.new("Button"), false)
  checkbox = UI::Checkbox.new("Checkbox")
  hbox.append(checkbox, false)

  vbox.append(UI::Label.new("This is a label. Right now, labels can only span one line."), 0)

  vbox.append(UI::Separator.newHorizontal, false)

  group = UI::Group.new("Entries")
  group.setMargined(true)
  vbox.append(group, true)

  entryForm = UI::Form.new
  entryForm.setPadded(true)
  group.setChild(entryForm)

  entryForm.append("Entry", UI::Entry.new, false)
  entryForm.append("Password Entry", UI::Entry.newPassword, false)
  entryForm.append("Search Entry", UI::Entry.newSearch, false)
  entryForm.append("Multiline Entry", UI::MultilineEntry.new, true)
  entryForm.append("Multiline Entry No Wrap", UI::MultilineEntry.newNonWrapping, true)

  vbox
end

$spinbox = nil
$slider = nil
$pbar = nil

def makeNumbersPage()
  hbox = UI::Box.newHorizontal
  hbox.setPadded(true)

  group = UI::Group.new("Numbers")
  group.setMargined(true)
  hbox.append(group, true)

  vbox = UI::Box.newVertical()
  vbox.setPadded(true)
  group.setChild(vbox)

  $spinbox = UI::Spinbox.new(0, 100)
  $slider = UI::Slider.new(0, 100)
  $pbar = UI::ProgressBar.new

  $spinbox.onChanged {
    $slider.setValue($spinbox.value)
    $pbar.setValue($spinbox.value)
  }

  $slider.onChanged {
    $spinbox.setValue($slider.value)
    $pbar.setValue($slider.value)
  }
  vbox.append($spinbox, false)
  vbox.append($slider, false)
  vbox.append($pbar, false)

  ip = UI::ProgressBar.new()
  ip.setValue(-1)
  vbox.append(ip, false)

  group = UI::Group.new("Lists")
  group.setMargined(true)
  hbox.append(group, true)

  vbox = UI::Box.newVertical
  vbox.setPadded(true)
  group.setChild(vbox)

  cbox = UI::Combobox.new
  cbox.append("Combobox Item 1")
  cbox.append("Combobox Item 2")
  cbox.append("Combobox Item 3")
  vbox.append(cbox, false)

  ecbox = UI::EditableCombobox.new
  ecbox.append("Editable Item 1")
  ecbox.append("Editable Item 2")
  ecbox.append("Editable Item 3")
  UI.boxAppend(vbox, ecbox, false)

  rb = UI::RadioButtons.new
  rb.append("Radio Button 1")
  rb.append("Radio Button 2")
  rb.append("Radio Button 3")
  vbox.append(rb, false)

  hbox
end

$mainwin = nil

def makeDataChoosersPage()
  hbox = UI::Box.newHorizontal
  hbox.setPadded(true)

  vbox = UI::Box.newVertical
  vbox.setPadded(true)
  hbox.append(vbox, false)

  vbox.append(UI::DateTimePicker.newDatePicker, false)
  vbox.append(UI::DateTimePicker.newTimePicker, false)
  vbox.append(UI::DateTimePicker.new, false)

  vbox.append(UI::FontButton.new, false)
  vbox.append(UI::ColorButton.new, false)

  hbox.append(UI::Separator.newVertical, false)

  vbox = UI::Box.newVertical
  vbox.setPadded(true)
  hbox.append(vbox, true)

  grid = UI::Grid.new
  grid.setPadded(true)
  vbox.append(grid, false)

  open_file_button = UI::Button.new("Open File")
  open_file_entry = UI::Entry.new
  open_file_entry.setReadOnly(true)
  open_file_button.onClicked {
    filename = UI.openFile($mainwin)
    if filename.nil?
      UI.entrySetText(open_file_entry, "(cancelled)")
    else
      UI.entrySetText(open_file_entry, filename)
    end
  }

  grid.append(open_file_button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  grid.append(open_file_entry,
    1, 0, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  save_file_button = UI::Button.new("Save File")
  save_file_entry = UI::Entry.new
  save_file_entry.setReadOnly(1)

  save_file_button.onClicked {
    filename = UI.saveFile($mainwin)
    if filename.nil?
      UI.entrySetText(save_file_entry, "(cancelled)")
    else
      UI.entrySetText(save_file_entry, filename)
    end
  }

  grid.append(save_file_button,
    0, 1, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  grid.append(save_file_entry,
    1, 1, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  msggrid = UI::Grid.new
  msggrid.setPadded(true)
  grid.append(msggrid,
    0, 2, 2, 1,
    0, UI::ALIGN_CENTER, 0, UI::ALIGN_START)

  message_button = UI::Button.new("Message Box")
  message_button.onClicked {
    UI.msgBox($mainwin,
              "This is a normal message box.",
              "More detailed information can be shown here.")
  }
  msggrid.append(message_button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  error_button = UI::Button.new("Error Box")
  error_button.onClicked {
    UI.msgBoxError($mainwin,
                   "This message box describes an error.",
                   "More detailed information can be shown here.")
  }
  msggrid.append(error_button,
    1, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  return hbox
end

options = UI::InitOptions.new

err = UI.init(options)
if !err.nil?
  raise "Error initializing libui: #{err}"
end

$mainwin = UI::Window.new("libui Control Gallery", 640, 480, 1)

$mainwin.onClosing {
  UI.quit
  1
}

UI.onShouldQuit do
  UI.controlDestroy($mainwin)
  1
end

tab = UI::Tab.new
$mainwin.setChild(tab)
$mainwin.setMargined(false)

tab.append("Basic Controls", makeBasicControlsPage())
tab.setMargined(0, true)

tab.append("Numbers and Lists", makeNumbersPage())
tab.setMargined(1, true)

tab.append("Data Choosers", makeDataChoosersPage())
tab.setMargined(2, true)

$mainwin.show
UI.main()
