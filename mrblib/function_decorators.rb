module UI
  module FunctionDecorators
    def self.returns_cstr(name)
      self.define_method(name) do |*args|
        void_ptr = super(*args)
        if void_ptr.nil?
          nil
        else
          void_ptr.read_cstr
        end
      end
    end

    returns_cstr :buttonText
    returns_cstr :checkboxText
    returns_cstr :editableComboboxText
    returns_cstr :entryText
    returns_cstr :groupTitle
    returns_cstr :labelText
    returns_cstr :multilineEntryText
    returns_cstr :openFile
    returns_cstr :saveFile
    returns_cstr :windowTitle

    def self.returns_bool(name)
      self.define_method(name) do |*args|
        fixnum_value = super(*args)
        fixnum_value != 0
      end
    end

    returns_bool :boxPadded
    returns_bool :checkboxChecked
    returns_bool :comboboxSelected
    returns_bool :controlEnabled
    returns_bool :controlEnabledToUser
    returns_bool :controlToplevel
    returns_bool :controlVisible
    returns_bool :drawMatrixInvertible
    returns_bool :entryReadOnly
    returns_bool :formPadded
    returns_bool :gridPadded
    returns_bool :groupMargined
    returns_bool :menuItemChecked
    returns_bool :multilineEntryReadOnly
    returns_bool :radioButtonSelected
    returns_bool :tabMargined
    returns_bool :windowBorderless
    returns_bool :windowFullscreen
    returns_bool :windowMargined

    
    def self.expects_bool(name)
      self.define_method(name) do |obj, bool|
        super(obj, bool ? 1 : 0)
      end
    end

    expects_bool :boxSetPadded
    expects_bool :checkboxSetChecked
    expects_bool :comboboxSetSelected
    expects_bool :entrySetReadOnly
    expects_bool :formSetPadded
    expects_bool :gridSetPadded
    expects_bool :groupSetMargined
    expects_bool :menuItemSetChecked
    expects_bool :multilineEntrySetReadOnly
    expects_bool :radioButtonsSetSelected
    expects_bool :windowSetBorderless
    expects_bool :windowSetFullscreen
    expects_bool :windowSetMargined

    def tabSetMargined(tab, page, margined)
      super(tab, page, margined ? 1 : 0)
    end


    ## May not be able to rely on GC for these.
    #def self.giftwrap(name)
    #  self.define_method(name) do |*args|
    #    result = super(*args)
    #    result.ptr_managed = true
    #    result
    #  end
    #end
    #giftwrap :newArea
    #giftwrap :newButton
    #giftwrap :newCheckbox
    #giftwrap :newColorButton
    #giftwrap :newCombobox
    #giftwrap :newDatePicker
    #giftwrap :newDateTimePicker
    #giftwrap :newEditableCombobox
    #giftwrap :newEntry
    #giftwrap :newFontButton
    #giftwrap :newForm
    #giftwrap :newGrid
    #giftwrap :newGroup
    #giftwrap :newHorizontalBox
    #giftwrap :newHorizontalSeparator
    #giftwrap :newLabel
    #giftwrap :newMenu
    #giftwrap :newMultilineEntry
    #giftwrap :newNonWrappingMultilineEntry
    #giftwrap :newPasswordEntry
    #giftwrap :newProgressBar
    #giftwrap :newRadioButtons
    #giftwrap :newScrollingArea
    #giftwrap :newSearchEntry
    #giftwrap :newSlider
    #giftwrap :newSpinbox
    #giftwrap :newTab
    #giftwrap :newTimePicker
    #giftwrap :newVerticalBox
    #giftwrap :newVerticalSeparator
    #giftwrap :newWindow
  end

  class << self
    prepend FunctionDecorators
  end
end
