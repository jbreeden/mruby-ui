/*
 * uiDrawTextFontDescriptor
 * Defined in file ui.h @ line 491
 */

#include "mruby_UI.h"

#if BIND_UiDrawTextFontDescriptor_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::initialize */
/* sha: 015f73eac0d768dd51daf6924eae579f192be75d2a040f0939d76d0e45ddbf70 */
#if BIND_UiDrawTextFontDescriptor_INITIALIZE
mrb_value
mrb_UI_UiDrawTextFontDescriptor_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextFontDescriptor* native_object = (uiDrawTextFontDescriptor*)calloc(1, sizeof(uiDrawTextFontDescriptor));
  mruby_gift_uiDrawTextFontDescriptor_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Family_reader */
/* sha: 7f7ca3eb35a5cc1dde654c15a01c98367bbafac69b7613890db74a6e2dd85928 */
#if BIND_UiDrawTextFontDescriptor_Family_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_get_Family(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  const char * native_Family = native_self->Family;

  mrb_value Family = native_Family == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_Family);

  return Family;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Family_writer */
/* sha: 18f085426d397ebc99800a71f6f99adc55d8a2eacd87b0e45ab1eeaa2faf93d5 */
#if BIND_UiDrawTextFontDescriptor_Family_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_set_Family(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);
  char * native_Family = NULL;

  mrb_get_args(mrb, "z", &native_Family);

  native_self->Family = native_Family;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Size_reader */
/* sha: d71a7c342309ba24e2efc4513ba8cb55e6ad13fe2ec2e622095cbf68ae85b0e7 */
#if BIND_UiDrawTextFontDescriptor_Size_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_get_Size(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  double native_Size = native_self->Size;

  mrb_value Size = mrb_float_value(mrb, native_Size);

  return Size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Size_writer */
/* sha: d497a69489b43cdff9854047d7ac3e4f2626986c5c1f2a55870810c43f4d9b7e */
#if BIND_UiDrawTextFontDescriptor_Size_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_set_Size(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);
  mrb_float native_Size;

  mrb_get_args(mrb, "f", &native_Size);

  native_self->Size = native_Size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Weight_reader */
/* sha: 9a9de904cdf8a062a5c10caf2336f282ed126259acfc72505b90252fe8ddf0cd */
#if BIND_UiDrawTextFontDescriptor_Weight_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_get_Weight(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextWeight native_Weight = native_self->Weight;

  mrb_value Weight = TODO_mruby_box_uiDrawTextWeight(mrb, native_Weight);

  return Weight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Weight_writer */
/* sha: 34945f199300d52bb7c59730f92ef71fc5831e8fdc106b407381eb64201361fb */
#if BIND_UiDrawTextFontDescriptor_Weight_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_set_Weight(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);
  mrb_value Weight;

  mrb_get_args(mrb, "o", &Weight);

  /* type checking */
  TODO_type_check_uiDrawTextWeight(Weight);

  uiDrawTextWeight native_Weight = TODO_mruby_unbox_uiDrawTextWeight(Weight);

  native_self->Weight = native_Weight;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Italic_reader */
/* sha: 91de0c1522e864a957acea001cdf5ad016576a69e7b379b225c8471017ed5602 */
#if BIND_UiDrawTextFontDescriptor_Italic_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_get_Italic(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextItalic native_Italic = native_self->Italic;

  mrb_value Italic = TODO_mruby_box_uiDrawTextItalic(mrb, native_Italic);

  return Italic;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Italic_writer */
/* sha: fbcbbd814f2d60f40a7885448804ad93704974634dc3a09a40c5b7af808301a5 */
#if BIND_UiDrawTextFontDescriptor_Italic_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_set_Italic(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);
  mrb_value Italic;

  mrb_get_args(mrb, "o", &Italic);

  /* type checking */
  TODO_type_check_uiDrawTextItalic(Italic);

  uiDrawTextItalic native_Italic = TODO_mruby_unbox_uiDrawTextItalic(Italic);

  native_self->Italic = native_Italic;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Stretch_reader */
/* sha: 0cda6521ca61c8dfab9b41b47c1871e7a4cd77a43fdc9ab0c9228e6410733414 */
#if BIND_UiDrawTextFontDescriptor_Stretch_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_get_Stretch(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextStretch native_Stretch = native_self->Stretch;

  mrb_value Stretch = TODO_mruby_box_uiDrawTextStretch(mrb, native_Stretch);

  return Stretch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::Stretch_writer */
/* sha: 8615e6e1c19b7b2b384425777aa67166fce750aade9c79208a524a2101326f39 */
#if BIND_UiDrawTextFontDescriptor_Stretch_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontDescriptor_set_Stretch(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);
  mrb_value Stretch;

  mrb_get_args(mrb, "o", &Stretch);

  /* type checking */
  TODO_type_check_uiDrawTextStretch(Stretch);

  uiDrawTextStretch native_Stretch = TODO_mruby_unbox_uiDrawTextStretch(Stretch);

  native_self->Stretch = native_Stretch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawTextFontDescriptor_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::class_definition */
/* sha: d75e88470a59a3ade5da37dedf6c0b8888b3e92b3c6a718f1fce5119300ffcab */
  struct RClass* UiDrawTextFontDescriptor_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawTextFontDescriptor", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawTextFontDescriptor_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::class_method_definitions */
/* sha: 5617d0ed0d1287ec5d8e826e1547e1a53cc87c0db7789dcd946f67ad2a784371 */
#if BIND_UiDrawTextFontDescriptor_INITIALIZE
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "initialize", mrb_UI_UiDrawTextFontDescriptor_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontDescriptor::attr_definitions */
/* sha: f8896be91a904eced56a0a7bd614afed4fc4813f955698ac41ab5323b9ad7eb0 */
  /*
   * Fields
   */
#if BIND_UiDrawTextFontDescriptor_Family_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Family", mrb_UI_UiDrawTextFontDescriptor_get_Family, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Family_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Family=", mrb_UI_UiDrawTextFontDescriptor_set_Family, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Size_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Size", mrb_UI_UiDrawTextFontDescriptor_get_Size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Size_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Size=", mrb_UI_UiDrawTextFontDescriptor_set_Size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Weight_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Weight", mrb_UI_UiDrawTextFontDescriptor_get_Weight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Weight_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Weight=", mrb_UI_UiDrawTextFontDescriptor_set_Weight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Italic_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Italic", mrb_UI_UiDrawTextFontDescriptor_get_Italic, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Italic_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Italic=", mrb_UI_UiDrawTextFontDescriptor_set_Italic, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Stretch_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Stretch", mrb_UI_UiDrawTextFontDescriptor_get_Stretch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontDescriptor_Stretch_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontDescriptor_class, "Stretch=", mrb_UI_UiDrawTextFontDescriptor_set_Stretch, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawTextFontDescriptor::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
