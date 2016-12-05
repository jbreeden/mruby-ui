module UI
  module ControlTracking
    def self.wrap(name)
      self.define_method(name) do |*args|
        control = super(*args)
        lookup = UI.instance_variable_get(:@control_lookup)
        if lookup.nil?
          lookup = {}
          UI.instance_variable_set(:@control_lookup, lookup)
        end
        lookup[control.ptr_addr] = control
        control
      end
    end

    wrap :newArea
    wrap :newButton
    wrap :newCheckbox
    wrap :newColorButton
    wrap :newCombobox
    wrap :newDatePicker
    wrap :newDateTimePicker
    wrap :newEditableCombobox
    wrap :newEntry
    wrap :newFontButton
    wrap :newForm
    wrap :newGrid
    wrap :newGroup
    wrap :newHorizontalBox
    wrap :newHorizontalSeparator
    wrap :newLabel
    wrap :newMenu
    wrap :newMultilineEntry
    wrap :newNonWrappingMultilineEntry
    wrap :newPasswordEntry
    wrap :newProgressBar
    wrap :newRadioButtons
    wrap :newScrollingArea
    wrap :newSearchEntry
    wrap :newSlider
    wrap :newSpinbox
    wrap :newTab
    wrap :newTimePicker
    wrap :newVerticalBox
    wrap :newVerticalSeparator
    wrap :newWindow
  end

  class << self
    prepend ControlTracking
  end
end
