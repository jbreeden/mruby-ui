module MRuby::Bindings
  module Hooks
    def self.module_name
      "UI"
    end

    def self.gem_name
      "mruby-ui"
    end

    def self.translate_type_name_to_ruby(name)
      name.sub(/^struct\s*/, '').
        sub(/^ui(_?)/, '').
        sub(/_(s|t)$/, '').
        each_char.reduce('') { |acc, cur|
          if acc[acc.length - 1] == '_' || acc == ''
            cur = cur.upcase
          end
          acc + cur
        }.gsub('_', '')
    end

    def self.translate_field_name_to_ruby(name)
      return name.sub(/^ui(_?)/i, '')
    end

    def self.translate_enum_constant_to_ruby(name)
      name.sub(/^ui(_?)/i, '')
    end

    def self.translate_function_name_to_ruby(name)
      name = name.sub(/^ui(_?)/i, '')
      name[0].downcase + name[1..-1]
    end

    def self.define_builtin_ctypes
      CTypes.make_alias('int', 'uiAlign')
      CTypes.make_alias('int', 'uiAt')
      CTypes.make_alias('int', 'uiWindowResizeEdge')
      CTypes.make_alias('int', 'uiDrawBrushType')
      CTypes.make_alias('int', 'uiDrawLineCap')
      CTypes.make_alias('int', 'uiDrawLineJoin')
      CTypes.make_alias('int', 'uiDrawFillMode')
      CTypes.make_alias('int', 'uiDrawTextWeight')
      CTypes.make_alias('int', 'uiDrawTextItalic')
      CTypes.make_alias('int', 'uiDrawTextStretch')
      CTypes.make_alias('int', 'uiModifiers')
      CTypes.make_alias('int', 'uiExtKey')
      CTypes.make_alias('int', 'uiAlign')
      CTypes.make_alias('int', 'uiAt')
    end
  end
end

