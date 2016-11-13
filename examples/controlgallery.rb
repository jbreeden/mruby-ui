$onClosing = proc {
  UI.quit
  1
}

$onShouldQuit = proc {
  puts "Destorying window"
  UI.controlDestroy(mainwin)
  1
}

def makeBasicControlsPage
  vbox = UI.newVerticalBox()
  UI.boxSetPadded(vbox, 1)

  hbox = UI.newHorizontalBox()
  UI.boxSetPadded(hbox, 1)
  UI.boxAppend(vbox, hbox, 0)

  UI.boxAppend(hbox, UI.newButton("Button"), 0)
  UI.boxAppend(hbox, UI.newCheckbox("Checkbox"), 0)

  UI.boxAppend(vbox, UI.newLabel("This is a label. Right now, labels can only span one line."), 0)

  UI.boxAppend(vbox, UI.newHorizontalSeparator(), 0)

  group = UI.newGroup("Entries")
  UI.groupSetMargined(group, 1)
  UI.boxAppend(vbox, group, 1)

  entryForm = UI.newForm()
  UI.formSetPadded(entryForm, 1)
  UI.groupSetChild(group, entryForm)

  UI.formAppend(entryForm, "Entry", UI.newEntry(), 0)
  UI.formAppend(entryForm, "Password Entry", UI.newPasswordEntry(), 0)
  UI.formAppend(entryForm, "Search Entry", UI.newSearchEntry(), 0)
  UI.formAppend(entryForm, "Multiline Entry", UI.newMultilineEntry(), 1)
  UI.formAppend(entryForm, "Multiline Entry No Wrap", UI.newNonWrappingMultilineEntry(), 1)

  vbox
end

$spinbox = nil
$slider = nil
$pbar = nil

$onSpinboxChanged = proc { |s|
  UI.sliderSetValue($slider, UI.spinboxValue(s))
  UI.progressBarSetValue($pbar, UI.spinboxValue(s))
}

$onSliderChanged = proc { |s|
  UI.spinboxSetValue($spinbox, UI.sliderValue(s))
  UI.progressBarSetValue($pbar, UI.sliderValue(s))
}

def makeNumbersPage()
  hbox = UI.newHorizontalBox()
  UI.boxSetPadded(hbox, 1)

  group = UI.newGroup("Numbers")
  UI.groupSetMargined(group, 1)
  UI.boxAppend(hbox, group, 1)

  vbox = UI.newVerticalBox()
  UI.boxSetPadded(vbox, 1)
  UI.groupSetChild(group, vbox)

  $spinbox = UI.newSpinbox(0, 100)
  $slider = UI.newSlider(0, 100)
  $pbar = UI.newProgressBar()
  UI.spinboxOnChanged($spinbox, &$onSpinboxChanged)
  UI.sliderOnChanged($slider, &$onSliderChanged)
  UI.boxAppend(vbox, $spinbox, 0)
  UI.boxAppend(vbox, $slider, 0)
  UI.boxAppend(vbox, $pbar, 0)

  ip = UI.newProgressBar()
  UI.progressBarSetValue(ip, -1)
  UI.boxAppend(vbox, ip, 0)

  group = UI.newGroup("Lists")
  UI.groupSetMargined(group, 1)
  UI.boxAppend(hbox, group, 1)

  vbox = UI.newVerticalBox()
  UI.boxSetPadded(vbox, 1)
  UI.groupSetChild(group, vbox)

  cbox = UI.newCombobox()
  UI.comboboxAppend(cbox, "Combobox Item 1")
  UI.comboboxAppend(cbox, "Combobox Item 2")
  UI.comboboxAppend(cbox, "Combobox Item 3")
  UI.boxAppend(vbox, cbox, 0)

  ecbox = UI.newEditableCombobox()
  UI.editableComboboxAppend(ecbox, "Editable Item 1")
  UI.editableComboboxAppend(ecbox, "Editable Item 2")
  UI.editableComboboxAppend(ecbox, "Editable Item 3")
  UI.boxAppend(vbox, ecbox, 0)

  rb = UI.newRadioButtons()
  UI.radioButtonsAppend(rb, "Radio Button 1")
  UI.radioButtonsAppend(rb, "Radio Button 2")
  UI.radioButtonsAppend(rb, "Radio Button 3")
  UI.boxAppend(vbox, rb, 0)

  hbox
end

mainwin = nil

$onOpenFileClicked = proc { |b|
  # TODO TODO TODO TODO
  entry = b.instance_variable_get(:@entry)

  filename = UI.openFile(mainwin)
  if filename.nil?
    UI.entrySetText(entry, "(cancelled)")
  else
    UI.entrySetText(entry, filename)
  end
}

$onSaveFileClicked = proc { |b|
  # TODO TODO TODO
  entry = b.instance_variable_get(:@entry)

  filename = UI.saveFile(mainwin)
  if filename.nil?
    UI.entrySetText(entry, "(cancelled)")
  else
    UI.entrySetText(entry, filename)
  end
}

$onMsgBoxClicked = proc { |b|
  UI.msgBox(mainwin,
    "This is a normal message box.",
    "More detailed information can be shown here.")
}

$onMsgBoxErrorClicked = proc { |b|
  UI.msgBoxError(mainwin,
    "This message box describes an error.",
    "More detailed information can be shown here.")
}

def makeDataChoosersPage()
  hbox = UI.newHorizontalBox()
  UI.boxSetPadded(hbox, 1)

  vbox = UI.newVerticalBox()
  UI.boxSetPadded(vbox, 1)
  UI.boxAppend(hbox, vbox, 0)

  UI.boxAppend(vbox, UI.newDatePicker(), 0)
  UI.boxAppend(vbox, UI.newTimePicker(), 0)
  UI.boxAppend(vbox, UI.newDateTimePicker(), 0)

  UI.boxAppend(vbox, UI.newFontButton(), 0)
  UI.boxAppend(vbox, UI.newColorButton(), 0)

  UI.boxAppend(hbox, UI.newVerticalSeparator(), 0)

  vbox = UI.newVerticalBox()
  UI.boxSetPadded(vbox, 1)
  UI.boxAppend(hbox, vbox, 1)

  grid = UI.newGrid()
  UI.gridSetPadded(grid, 1)
  UI.boxAppend(vbox, grid, 0)

  button = UI.newButton("Open File")
  entry = UI.newEntry()
  UI.entrySetReadOnly(entry, 1)
  # TODO TODO TODO TODO TODO TODO TODO TODO TODO
  button.instance_variable_set(:@entry, entry)
  UI.buttonOnClicked(button, &$onOpenFileClicked)
  UI.gridAppend(grid, button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  UI.gridAppend(grid, entry,
    1, 0, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  button = UI.newButton("Save File")
  entry = UI.newEntry()
  UI.entrySetReadOnly(entry, 1)

  button.instance_variable_set(:@entry, entry)
  UI.buttonOnClicked(button, &$onSaveFileClicked)

  UI.gridAppend(grid, button,
    0, 1, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  UI.gridAppend(grid, entry,
    1, 1, 1, 1,
    1, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  msggrid = UI.newGrid()
  UI.gridSetPadded(msggrid, 1)
  UI.gridAppend(grid, msggrid,
    0, 2, 2, 1,
    0, UI::ALIGN_CENTER, 0, UI::ALIGN_START)

  button = UI.newButton("Message Box")
  UI.buttonOnClicked(button, &$onMsgBoxClicked)
  UI.gridAppend(msggrid, button,
    0, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)
  button = UI.newButton("Error Box")
  UI.buttonOnClicked(button, &$onMsgBoxErrorClicked)
  UI.gridAppend(msggrid, button,
    1, 0, 1, 1,
    0, UI::ALIGN_FILL, 0, UI::ALIGN_FILL)

  return hbox
end

options = UI::InitOptions.new

err = UI.init(options)
if !err.nil?
  fprintf(stderr, "error initializing libui: %s", err)
  UI.freeInitError(err)
  return 1
end

mainwin = UI.newWindow("libui Control Gallery", 640, 480, 1)
UI.windowOnClosing(mainwin, &$onClosing)
UI.onShouldQuit(&$onShouldQuit)

tab = UI.newTab()
UI.windowSetChild(mainwin, tab)
UI.windowSetMargined(mainwin, 1)

UI.tabAppend(tab, "Basic Controls", makeBasicControlsPage())
UI.tabSetMargined(tab, 0, 1)

UI.tabAppend(tab, "Numbers and Lists", makeNumbersPage())
UI.tabSetMargined(tab, 1, 1)

UI.tabAppend(tab, "Data Choosers", makeDataChoosersPage())
UI.tabSetMargined(tab, 2, 1)

UI.controlShow(mainwin)
UI.main()
