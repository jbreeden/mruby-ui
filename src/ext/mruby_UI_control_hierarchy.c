{
  struct RClass *Control_class = mrb_define_class_under(mrb, UI_module(mrb), "Control", mrb->object_class);
#define CONTROL_SUBCLASS(name) { mrb_define_class_under(mrb, UI_module(mrb), #name, Control_class); }
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
#undef CONTROL_SUBCLASS
}
