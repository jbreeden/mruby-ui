def makeBasicControlsPage
  vbox = UI::Box.newVertical
  vbox.setPadded(1)

  hbox = UI::Box.newHorizontal
  hbox.setPadded(1)

  vbox.append(hbox, 0)

  hbox.append(UI::Button.new("Button"), 0)
  hbox.append(UI::Checkbox.new("Checkbox"), 0)

  vbox.append(UI::Label.new("This is a label. Right now, labels can only span one line."), 0)

  vbox.append(UI::Separator.newHorizontal, 0)

  group = UI::Group.new("Entries")
  group.setMargined(1)
  vbox.append(group, 1)

  entryForm = UI::Form.new
  entryForm.setPadded(1)
  group.setChild(entryForm)

  entryForm.append("Entry", UI::Entry.new, 0)
  entryForm.append("Password Entry", UI::Entry.newPassword, 0)
  entryForm.append("Search Entry", UI::Entry.newSearch, 0)
  entryForm.append("Multiline Entry", UI::MultilineEntry.new, 1)
  entryForm.append("Multiline Entry No Wrap", UI::MultilineEntry.newNonWrapping, 1)

  vbox
end

$spinbox = nil
$slider = nil
$pbar = nil

def makeNumbersPage()
  hbox = UI::Box.newHorizontal
  hbox.setPadded(1)

  group = UI::Group.new("Numbers")
  group.setMargined(1)
  hbox.append(group, 1)

  vbox = UI::Box.newVertical()
  vbox.setPadded(1)
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
  vbox.append($spinbox, 0)
  vbox.append($slider, 0)
  vbox.append($pbar, 0)

  ip = UI::ProgressBar.new()
  ip.setValue(-1)
  vbox.append(ip, 0)

  group = UI::Group.new("Lists")
  group.setMargined(1)
  hbox.append(group, 1)

  vbox = UI::Box.newVertical
  vbox.setPadded(1)
  group.setChild(vbox)

  cbox = UI::Combobox.new
  cbox.append("Combobox Item 1")
  cbox.append("Combobox Item 2")
  cbox.append("Combobox Item 3")
  vbox.append(cbox, 0)

  ecbox = UI::EditableCombobox.new
  ecbox.append("Editable Item 1")
  ecbox.append("Editable Item 2")
  ecbox.append("Editable Item 3")
  UI.boxAppend(vbox, ecbox, 0)

  rb = UI::RadioButtons.new
  rb.append("Radio Button 1")
  rb.append("Radio Button 2")
  rb.append("Radio Button 3")
  vbox.append(rb, 0)

  hbox
end

$mainwin = nil

def makeDataChoosersPage()
  hbox = UI::Box.newHorizontal
  hbox.setPadded(1)

  vbox = UI::Box.newVertical
  vbox.setPadded(1)
  hbox.append(vbox, 0)

  vbox.append(UI::DateTimePicker.newDatePicker, 0)
  vbox.append(UI::DateTimePicker.newTimePicker, 0)
  vbox.append(UI::DateTimePicker.new, 0)

  vbox.append(UI::FontButton.new, 0)
  vbox.append(UI::ColorButton.new, 0)

  hbox.append(UI::Separator.newVertical, 0)

  vbox = UI::Box.newVertical
  vbox.setPadded(1)
  hbox.append(vbox, 1)

  grid = UI::Grid.new
  grid.setPadded(1)
  vbox.append(grid, 0)

  button = UI::Button.new("Open File")
  open_file_entry = UI::Entry.new
  open_file_entry.setReadOnly(1)
  button.onClicked {
    filename = UI.openFile($mainwin)
    if filename.nil?
      UI.entrySetText(open_file_entry, "(cancelled)")
    else
      UI.entrySetText(open_file_entry, filename)
    end
  }

  grid.append(button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  grid.append(open_file_entry,
    1, 0, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  button = UI::Button.new("Save File")
  save_file_entry = UI::Entry.new
  save_file_entry.setReadOnly(1)

  button.onClicked {
    filename = UI.saveFile($mainwin)
    if filename.nil?
      UI.entrySetText(save_file_entry, "(cancelled)")
    else
      UI.entrySetText(save_file_entry, filename)
    end
  }

  grid.append(button,
    0, 1, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  grid.append(save_file_entry,
    1, 1, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  msggrid = UI::Grid.new
  msggrid.setPadded(1)
  grid.append(msggrid,
    0, 2, 2, 1,
    0, UI::ALIGN_CENTER, 0, UI::ALIGN_START)

  button = UI::Button.new("Message Box")
  button.onClicked {
    UI.msgBox($mainwin,
              "This is a normal message box.",
              "More detailed information can be shown here.")
  }
  msggrid.append(button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  button = UI::Button.new("Error Box")
  button.onClicked {
    UI.msgBoxError($mainwin,
                   "This message box describes an error.",
                   "More detailed information can be shown here.")
  }
  msggrid.append(button,
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

UI.onShouldQuit {
  UI.controlDestroy($mainwin)
  1
}

tab = UI::Tab.new
$mainwin.setChild(tab)
$mainwin.setMargined(0)

tab.append("Basic Controls", makeBasicControlsPage())
tab.setMargined(0, 1)

tab.append("Numbers and Lists", makeNumbersPage())
tab.setMargined(1, 1)

tab.append("Data Choosers", makeDataChoosersPage())
tab.setMargined(2, 1)

$mainwin.show
UI.main()
