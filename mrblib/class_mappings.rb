module UI
  def self.delegate(klass, method, target)
    if !UI.respond_to?(target)
      raise "Attempting to delegate to method that doesn't exist: #{target}"
    end
    klass.class_eval {
      define_method(method) { |*args, &block|
        UI.send(target, self, *args, &block)
      }
    }
  end

  def self.constructor(klass, constructor, constructor_name = nil)
    if !UI.respond_to?(constructor)
      raise "Attempting to use a constructor that doesn't exist: #{constructor}"
    end
    klass.define_singleton_method(constructor_name || :new) { |*args, &block|
      UI.send(constructor, *args, &block)
    }
  end

  #class:	Area
  constructor Area, :newScrollingArea
  delegate Area, :beginUserWindowMove, :areaBeginUserWindowMove
  #TODO: UI.beginUserWindowResize is not yet bound
  delegate Area, :beginUserWindowResize, :areaBeginUserWindowResize
  delegate Area, :queueRedrawAll, :areaQueueRedrawAll
  delegate Area, :scrollTo, :areaScrollTo
  delegate Area, :setSize, :areaSetSize

  #class:	AreaDrawParams
  #class:	AreaHandler
  #class:	AreaKeyEvent

  #class:	AreaMouseEvent

  #class:	Box
  constructor Box, :newHorizontalBox, :newHorizontal
  constructor Box, :newVerticalBox, :newVertical
  delegate Box, :append, :boxAppend
  delegate Box, :delete, :boxDelete
  delegate Box, :padded, :boxPadded
  delegate Box, :setPadded, :boxSetPadded

  #class:	Button
  constructor Button, :newButton
  delegate Button, :onClicked, :buttonOnClicked
  delegate Button, :setText, :buttonSetText
  delegate Button, :text, :buttonText

  #class:	Checkbox
  constructor Checkbox, :newCheckbox
  delegate Checkbox, :checked, :checkboxChecked
  delegate Checkbox, :onToggled, :checkboxOnToggled
  delegate Checkbox, :setChecked, :checkboxSetChecked
  delegate Checkbox, :setText, :checkboxSetText
  delegate Checkbox, :text, :checkboxText

  #class:	ColorButton
  constructor ColorButton, :newColorButton
  delegate ColorButton, :color, :colorButtonColor
  delegate ColorButton, :onChanged, :colorButtonOnChanged
  delegate ColorButton, :setColor, :colorButtonSetColor

  #class:	Combobox
  constructor Combobox, :newCombobox
  delegate Combobox, :append, :comboboxAppend
  delegate Combobox, :onSelected, :comboboxOnSelected
  delegate Combobox, :selected, :comboboxSelected
  delegate Combobox, :setSelected, :comboboxSetSelected

  #class:	Control
  delegate Control, :destroy, :controlDestroy
  delegate Control, :disable, :controlDisable
  delegate Control, :enable, :controlEnable
  delegate Control, :enabled, :controlEnabled
  delegate Control, :enabledToUser, :controlEnabledToUser
  #TODO: UI.controlHandle not yet bound
  #delegate Control, :handle, :controlHandle
  delegate Control, :hide, :controlHide
  delegate Control, :parent, :controlParent
  delegate Control, :setParent, :controlSetParent
  delegate Control, :show, :controlShow
  delegate Control, :toplevel, :controlToplevel
  delegate Control, :verifySetParent, :controlVerifySetParent
  delegate Control, :visible, :controlVisible
  
  #class:	DatePicker
  constructor DateTimePicker, :newDatePicker, :newDatePicker

  #class:	TimePicker
  constructor DateTimePicker, :newTimePicker, :newTimePicker

  #class:	DateTimePicker
  constructor DateTimePicker, :newDateTimePicker
  DateTimePicker.class_eval {
    def self.newDatetimePicker(*args, &block)
      self.new(*args, &block)
    end
  }

  #class:	DrawBrush
  #class:	DrawBrushGradientStop
  #function:  DrawClip
  #class:	DrawContext
  #function:  DrawFill

  #class:	DrawFontFamilies
  delegate DrawFontFamilies, :family, :drawFontFamiliesFamily
  delegate DrawFontFamilies, :numFamilies, :drawFontFamiliesNumFamilies

  #function:  DrawFreeFontFamilies
  #function:  DrawFreePath
  #function:  DrawFreeTextFont
  #function:  DrawFreeTextLayout
  #function:  DrawListFontFamilies
  #function:  DrawLoadClosestFont

  #class:	DrawMatrix
  delegate DrawMatrix, :invert, :drawMatrixInvert
  delegate DrawMatrix, :invertible, :drawMatrixInvertible
  delegate DrawMatrix, :multiply, :drawMatrixMultiply
  delegate DrawMatrix, :rotate, :drawMatrixRotate
  delegate DrawMatrix, :scale, :drawMatrixScale
  delegate DrawMatrix, :setIdentity, :drawMatrixSetIdentity
  delegate DrawMatrix, :skew, :drawMatrixSkew
  delegate DrawMatrix, :transformPoint, :drawMatrixTransformPoint
  delegate DrawMatrix, :transformSize, :drawMatrixTransformSize
  delegate DrawMatrix, :translate, :drawMatrixTranslate

  #function:  DrawNewPath
  #function:  DrawNewTextLayout

  #class:	DrawPath
  delegate DrawPath, :addRectangle, :drawPathAddRectangle
  delegate DrawPath, :arcTo, :drawPathArcTo
  delegate DrawPath, :bezierTo, :drawPathBezierTo
  delegate DrawPath, :closeFigure, :drawPathCloseFigure
  delegate DrawPath, :end, :drawPathEnd
  delegate DrawPath, :lineTo, :drawPathLineTo
  delegate DrawPath, :newFigure, :drawPathNewFigure
  delegate DrawPath, :newFigureWithArc, :drawPathNewFigureWithArc

  #function:  DrawRestore
  #function:  DrawSave
  #function:  DrawStroke
  #class:	DrawStrokeParams
  #function:  DrawText
  
  #class:	DrawTextFont
  delegate DrawTextFont, :describe, :drawTextFontDescribe

  #class:	DrawTextFontDescriptor
  #function:  DrawTextFontGetMetrics
  #function:  DrawTextFontHandle

  #class:	DrawTextFontMetrics

  #class:	DrawTextLayout
  delegate DrawTextLayout, :extents, :drawTextLayoutExtents
  delegate DrawTextLayout, :setColor, :drawTextLayoutSetColor
  delegate DrawTextLayout, :setWidth, :drawTextLayoutSetWidth

  #function:  DrawTransform

  #class:	EditableCombobox
  constructor EditableCombobox, :newEditableCombobox
  delegate EditableCombobox, :append, :editableComboboxAppend
  delegate EditableCombobox, :onChanged, :editableComboboxOnChanged
  delegate EditableCombobox, :setText, :editableComboboxSetText
  delegate EditableCombobox, :text, :editableComboboxText

  #class:	Entry
  constructor Entry, :newEntry
  constructor Entry, :newPasswordEntry, :newPassword
  constructor Entry, :newSearchEntry, :newSearch
  delegate Entry, :onChanged, :entryOnChanged
  delegate Entry, :readOnly, :entryReadOnly
  delegate Entry, :setReadOnly, :entrySetReadOnly
  delegate Entry, :setText, :entrySetText
  delegate Entry, :text, :entryText

  #class:	FontButton
  constructor FontButton, :newFontButton
  delegate FontButton, :font, :fontButtonFont
  delegate FontButton, :onChanged, :fontButtonOnChanged

  #class:	Form
  constructor Form, :newForm
  delegate Form, :append, :formAppend
  delegate Form, :delete, :formDelete
  delegate Form, :padded, :formPadded
  delegate Form, :setPadded, :formSetPadded

  #function:  FreeControl
  #function:  FreeInitError
  #function:  FreeText

  #class: Separator
  constructor Separator, :newHorizontalSeparator, :newHorizontal
  constructor Separator, :newVerticalSeparator, :newVertical

  #class:	Grid
  constructor Grid, :newGrid
  delegate Grid, :append, :gridAppend
  delegate Grid, :insertAt, :gridInsertAt
  delegate Grid, :padded, :gridPadded
  delegate Grid, :setPadded, :gridSetPadded

  #class:	Group
  constructor Group, :newGroup
  delegate Group, :margined, :groupMargined
  delegate Group, :setChild, :groupSetChild
  delegate Group, :setMargined, :groupSetMargined
  delegate Group, :setTitle, :groupSetTitle
  delegate Group, :title, :groupTitle

  #function:  Init
  #class:	InitOptions

  #class:	Label
  constructor Label, :newLabel
  delegate Label, :setText, :labelSetText
  delegate Label, :text, :labelText

  #function:  Main
  #function:  MainStep
  #function:  MainSteps

  #class:	Menu
  constructor Menu, :newMenu
  delegate Menu, :appendAboutItem, :menuAppendAboutItem
  delegate Menu, :appendCheckItem, :menuAppendCheckItem
  delegate Menu, :appendItem, :menuAppendItem
  delegate Menu, :appendPreferencesItem, :menuAppendPreferencesItem
  delegate Menu, :appendQuitItem, :menuAppendQuitItem
  delegate Menu, :appendSeparator, :menuAppendSeparator

  #class:	MenuItem
  delegate MenuItem, :checked, :menuItemChecked
  delegate MenuItem, :disable, :menuItemDisable
  delegate MenuItem, :enable, :menuItemEnable
  delegate MenuItem, :onClicked, :menuItemOnClicked
  delegate MenuItem, :setChecked, :menuItemSetChecked

  #function:  MsgBox
  #function:  MsgBoxError

  #class:	MultilineEntry
  constructor MultilineEntry, :newMultilineEntry
  constructor MultilineEntry, :newNonWrappingMultilineEntry, :newNonWrapping
  delegate MultilineEntry, :append, :multilineEntryAppend
  delegate MultilineEntry, :onChanged, :multilineEntryOnChanged
  delegate MultilineEntry, :readOnly, :multilineEntryReadOnly
  delegate MultilineEntry, :setReadOnly, :multilineEntrySetReadOnly
  delegate MultilineEntry, :setText, :multilineEntrySetText
  delegate MultilineEntry, :text, :multilineEntryText


  #function:  OnShouldQuit
  #function:  OpenFile

  #class:	ProgressBar
  constructor ProgressBar, :newProgressBar
  delegate ProgressBar, :setValue, :progressBarSetValue
  delegate ProgressBar, :value, :progressBarValue

  #function:  QueueMain
  #function:  Quit

  #class:	RadioButtons
  constructor RadioButtons, :newRadioButtons
  delegate RadioButtons, :append, :radioButtonsAppend
  delegate RadioButtons, :onSelected, :radioButtonsOnSelected
  delegate RadioButtons, :selected, :radioButtonsSelected
  delegate RadioButtons, :setSelected, :radioButtonsSetSelected

  #function:  SaveFile

  #class:	Slider
  constructor Slider, :newSlider
  delegate Slider, :onChanged, :sliderOnChanged
  delegate Slider, :setValue, :sliderSetValue
  delegate Slider, :value, :sliderValue

  #class:	Spinbox
  constructor Spinbox, :newSpinbox
  delegate Spinbox, :onChanged, :spinboxOnChanged
  delegate Spinbox, :setValue, :spinboxSetValue
  delegate Spinbox, :value, :spinboxValue

  #class:	Tab
  constructor Tab, :newTab
  delegate Tab, :append, :tabAppend
  delegate Tab, :delete, :tabDelete
  delegate Tab, :insertAt, :tabInsertAt
  delegate Tab, :margined, :tabMargined
  delegate Tab, :numPages, :tabNumPages
  delegate Tab, :setMargined, :tabSetMargined

  #function:  Uninit
  #function:  UserBugCannotSetParentOnToplevel

  #class:	Window
  constructor Window, :newWindow
  delegate Window, :borderless, :windowBorderless
  delegate Window, :contentSize, :windowContentSize
  delegate Window, :fullscreen, :windowFullscreen
  delegate Window, :margined, :windowMargined
  delegate Window, :onClosing, :windowOnClosing
  delegate Window, :onContentSizeChanged, :windowOnContentSizeChanged
  delegate Window, :setBorderless, :windowSetBorderless
  delegate Window, :setChild, :windowSetChild
  delegate Window, :setContentSize, :windowSetContentSize
  delegate Window, :setFullscreen, :windowSetFullscreen
  delegate Window, :setMargined, :windowSetMargined
  delegate Window, :setTitle, :windowSetTitle
  delegate Window, :title, :windowTitle
end
