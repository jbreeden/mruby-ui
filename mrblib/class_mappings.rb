module UI
  def self.delegate(klass, method, target)
    if !UI.respond_to?(target)
      #raise "Attempting to delegate to function that doesn't exist: #{target}"
    end
    klass.class_eval {
      define_method(method) { |*args, &block|
        UI.send(target, self, *args, &block)
      }
    }
  end

  def self.class_delegate(klass, method, target)
    if !UI.respond_to?(target)
      raise "Attempting to delegate to a function that doesn't exist: #{target}"
    end
    klass.define_singleton_method(method) { |*args, &block|
      UI.send(target, *args, &block)
    }
  end

  #class:	Area
  class_delegate Area, :new, :newArea
  class_delegate Area, :newScrolling, :newScrollingArea 
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
  class_delegate Box, :newHorizontal, :newHorizontalBox
  class_delegate Box, :newVertical, :newVerticalBox
  delegate Box, :append, :boxAppend
  delegate Box, :delete, :boxDelete
  delegate Box, :padded, :boxPadded
  delegate Box, :setPadded, :boxSetPadded

  #class:	Button
  class_delegate Button, :new, :newButton
  delegate Button, :onClicked, :buttonOnClicked
  delegate Button, :setText, :buttonSetText
  delegate Button, :text, :buttonText

  #class:	Checkbox
  class_delegate Checkbox, :new, :newCheckbox
  delegate Checkbox, :checked, :checkboxChecked
  delegate Checkbox, :onToggled, :checkboxOnToggled
  delegate Checkbox, :setChecked, :checkboxSetChecked
  delegate Checkbox, :setText, :checkboxSetText
  delegate Checkbox, :text, :checkboxText

  #class:	ColorButton
  class_delegate ColorButton, :new, :newColorButton
  delegate ColorButton, :color, :colorButtonColor
  delegate ColorButton, :onChanged, :colorButtonOnChanged
  delegate ColorButton, :setColor, :colorButtonSetColor

  #class:	Combobox
  class_delegate Combobox, :new, :newCombobox
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
  class_delegate DateTimePicker, :newDatePicker, :newDatePicker

  #class:	TimePicker
  class_delegate DateTimePicker, :newTimePicker, :newTimePicker

  #class:	DateTimePicker
  class_delegate DateTimePicker, :new, :newDateTimePicker
  class_delegate DateTimePicker, :newDateTimePicker, :newDateTimePicker

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
  class_delegate EditableCombobox, :new, :newEditableCombobox
  delegate EditableCombobox, :append, :editableComboboxAppend
  delegate EditableCombobox, :onChanged, :editableComboboxOnChanged
  delegate EditableCombobox, :setText, :editableComboboxSetText
  delegate EditableCombobox, :text, :editableComboboxText

  #class:	Entry
  class_delegate Entry, :new, :newEntry
  class_delegate Entry, :newPassword, :newPasswordEntry
  class_delegate Entry, :newSearch, :newSearchEntry
  delegate Entry, :onChanged, :entryOnChanged
  delegate Entry, :readOnly, :entryReadOnly
  delegate Entry, :setReadOnly, :entrySetReadOnly
  delegate Entry, :setText, :entrySetText
  delegate Entry, :text, :entryText

  #class:	FontButton
  class_delegate FontButton, :new, :newFontButton
  delegate FontButton, :font, :fontButtonFont
  delegate FontButton, :onChanged, :fontButtonOnChanged

  #class:	Form
  class_delegate Form, :new, :newForm
  delegate Form, :append, :formAppend
  delegate Form, :delete, :formDelete
  delegate Form, :padded, :formPadded
  delegate Form, :setPadded, :formSetPadded

  #function:  FreeControl
  #function:  FreeInitError
  #function:  FreeText

  #class: Separator
  class_delegate Separator, :newHorizontal, :newHorizontalSeparator
  class_delegate Separator, :newVertical, :newVerticalSeparator

  #class:	Grid
  class_delegate Grid, :new, :newGrid
  delegate Grid, :append, :gridAppend
  delegate Grid, :insertAt, :gridInsertAt
  delegate Grid, :padded, :gridPadded
  delegate Grid, :setPadded, :gridSetPadded

  #class:	Group
  class_delegate Group, :new, :newGroup
  delegate Group, :margined, :groupMargined
  delegate Group, :setChild, :groupSetChild
  delegate Group, :setMargined, :groupSetMargined
  delegate Group, :setTitle, :groupSetTitle
  delegate Group, :title, :groupTitle

  #function:  Init
  #class:	InitOptions

  #class:	Label
  class_delegate Label, :new, :newLabel
  delegate Label, :setText, :labelSetText
  delegate Label, :text, :labelText

  #function:  Main
  #function:  MainStep
  #function:  MainSteps

  #class:	Menu
  class_delegate Menu, :new, :newMenu
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
  class_delegate MultilineEntry, :new, :newMultilineEntry
  class_delegate MultilineEntry, :newNonWrapping, :newNonWrappingMultilineEntry
  delegate MultilineEntry, :append, :multilineEntryAppend
  delegate MultilineEntry, :onChanged, :multilineEntryOnChanged
  delegate MultilineEntry, :readOnly, :multilineEntryReadOnly
  delegate MultilineEntry, :setReadOnly, :multilineEntrySetReadOnly
  delegate MultilineEntry, :setText, :multilineEntrySetText
  delegate MultilineEntry, :text, :multilineEntryText


  #function:  OnShouldQuit
  #function:  OpenFile

  #class:	ProgressBar
  class_delegate ProgressBar, :new, :newProgressBar
  delegate ProgressBar, :setValue, :progressBarSetValue
  delegate ProgressBar, :value, :progressBarValue

  #function:  QueueMain
  #function:  Quit

  #class:	RadioButtons
  class_delegate RadioButtons, :new, :newRadioButtons
  delegate RadioButtons, :append, :radioButtonsAppend
  delegate RadioButtons, :onSelected, :radioButtonsOnSelected
  delegate RadioButtons, :selected, :radioButtonsSelected
  delegate RadioButtons, :setSelected, :radioButtonsSetSelected

  #function:  SaveFile

  #class:	Slider
  class_delegate Slider, :new, :newSlider
  delegate Slider, :onChanged, :sliderOnChanged
  delegate Slider, :setValue, :sliderSetValue
  delegate Slider, :value, :sliderValue

  #class:	Spinbox
  class_delegate Spinbox, :new, :newSpinbox
  delegate Spinbox, :onChanged, :spinboxOnChanged
  delegate Spinbox, :setValue, :spinboxSetValue
  delegate Spinbox, :value, :spinboxValue

  #class:	Tab
  class_delegate Tab, :new, :newTab
  delegate Tab, :append, :tabAppend
  delegate Tab, :delete, :tabDelete
  delegate Tab, :insertAt, :tabInsertAt
  delegate Tab, :margined, :tabMargined
  delegate Tab, :numPages, :tabNumPages
  delegate Tab, :setMargined, :tabSetMargined

  #function:  Uninit
  #function:  UserBugCannotSetParentOnToplevel

  #class:	Window
  class_delegate Window, :new, :newWindow
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
