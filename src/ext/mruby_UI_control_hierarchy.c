{
  struct RClass *Control_class = mrb_define_class_under(mrb, UI_module(mrb), "Control", mrb->object_class);
  MRB_SET_INSTANCE_TT(Control_class, MRB_TT_DATA);

#define CONTROL_SUBCLASS(name) \
  { struct RClass* subclass = mrb_define_class_under(mrb, UI_module(mrb), #name, Control_class); \
    mrb_include_module(mrb, subclass, UI_NativeObject_module(mrb)); }

  CONTROL_SUBCLASS(Area)
  CONTROL_SUBCLASS(Box)
  CONTROL_SUBCLASS(Button)
  CONTROL_SUBCLASS(Checkbox)
  CONTROL_SUBCLASS(ColorButton)
  CONTROL_SUBCLASS(Combobox)
  CONTROL_SUBCLASS(DateTimePicker)
  CONTROL_SUBCLASS(EditableCombobox)
  CONTROL_SUBCLASS(Entry)
  CONTROL_SUBCLASS(FontButton)
  CONTROL_SUBCLASS(Form)
  CONTROL_SUBCLASS(Grid)
  CONTROL_SUBCLASS(Group)
  CONTROL_SUBCLASS(Label)
  CONTROL_SUBCLASS(MultilineEntry)
  CONTROL_SUBCLASS(ProgressBar)
  CONTROL_SUBCLASS(RadioButtons)
  CONTROL_SUBCLASS(Separator)
  CONTROL_SUBCLASS(Slider)
  CONTROL_SUBCLASS(Spinbox)
  CONTROL_SUBCLASS(Tab)
  CONTROL_SUBCLASS(Window)
}
