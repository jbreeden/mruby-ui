module UI
  module TypeCoercions
    module ReturnsCstr
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
    end
    include ReturnsCstr

    module ReturnsBool
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
    end
    include ReturnsBool

    module ExpectsBool
      def self.expects_bool(name)
        self.define_method(name) do |obj, bool|
          bool = case bool
          when false, nil, 0
            0
          else
            1
          end

          super(obj, bool)
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

      def self.expects_bool_at(name, pos)
        zeroed_index = pos - 1
        self.define_method(name) do |*args|
          args[zeroed_index] = case args[zeroed_index]
          when false, nil, 0
            0
          else
            1
          end
          super(*args)
        end
      end

      expects_bool_at(:boxAppend, 3)
      expects_bool_at(:formAppend, 4)
    end
    include ExpectsBool

    def tabSetMargined(tab, page, margined)
      super(tab, page, margined ? 1 : 0)
    end
  end

  class << self
    prepend TypeCoercions
  end
end
