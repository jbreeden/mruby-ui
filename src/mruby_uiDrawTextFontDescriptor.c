/*
 * uiDrawTextFontDescriptor
 * Defined in file ui.h @ line 491
 */

#include "mruby_UI.h"

#if BIND_DrawTextFontDescriptor_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::initialize */
/* sha: 7e803ac9eb41bca0df21e89710ff4f9c8bd033e5be62020051b27fc1d6c52c64 */
#if BIND_DrawTextFontDescriptor_INITIALIZE
mrb_value
mrb_UI_DrawTextFontDescriptor_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontDescriptor::Family_reader */
/* sha: 013b4955e5fb64acc27d51f8a2d833ff602c0bd147243f9ba1bef37c2e88bb31 */
#if BIND_DrawTextFontDescriptor_Family_FIELD_READER
mrb_value
mrb_UI_DrawTextFontDescriptor_get_Family(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  const char * native_Family = native_self->Family;

  mrb_value Family = native_Family == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_Family);

  return Family;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::Family_writer */
/* sha: 0da94e145a404fe5e3cd2518df36800e4524499fe48e7dd1fbd25a804b6867d8 */
#if BIND_DrawTextFontDescriptor_Family_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontDescriptor_set_Family(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontDescriptor::Size_reader */
/* sha: 23a92fddd2d500ee883960c08d764140ecc47140e9e611b8e40f3320d2736c93 */
#if BIND_DrawTextFontDescriptor_Size_FIELD_READER
mrb_value
mrb_UI_DrawTextFontDescriptor_get_Size(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  double native_Size = native_self->Size;

  mrb_value Size = mrb_float_value(mrb, native_Size);

  return Size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::Size_writer */
/* sha: 759ed2d31346b5d9a316e96d60e537cfe3d0d01a82c2c92c23d11fdb23748b28 */
#if BIND_DrawTextFontDescriptor_Size_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontDescriptor_set_Size(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontDescriptor::Weight_reader */
/* sha: 6f971a103caef3cf645bdee584727753716b4a77c7ba55bd8812dd91df545b06 */
#if BIND_DrawTextFontDescriptor_Weight_FIELD_READER
mrb_value
mrb_UI_DrawTextFontDescriptor_get_Weight(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextWeight native_Weight = native_self->Weight;

  mrb_value Weight = TODO_mruby_box_uiDrawTextWeight(mrb, native_Weight);

  return Weight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::Weight_writer */
/* sha: 5fc5c7366788c6e3c377924ef5903c0a0460a54070fdb2ca42e590fa1d0b63be */
#if BIND_DrawTextFontDescriptor_Weight_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontDescriptor_set_Weight(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontDescriptor::Italic_reader */
/* sha: 24a8f4f32a6f17d1cccda148ecc27b4149625d7b8be28adb7174f4ce97f86f5f */
#if BIND_DrawTextFontDescriptor_Italic_FIELD_READER
mrb_value
mrb_UI_DrawTextFontDescriptor_get_Italic(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextItalic native_Italic = native_self->Italic;

  mrb_value Italic = TODO_mruby_box_uiDrawTextItalic(mrb, native_Italic);

  return Italic;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::Italic_writer */
/* sha: cba3181429479efb88540b80a934d5e2d30d445c2e21de95654f8b2a3d37edfd */
#if BIND_DrawTextFontDescriptor_Italic_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontDescriptor_set_Italic(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontDescriptor::Stretch_reader */
/* sha: 820803fbc1df94eb7f0ac8103d31eb1540a615cab05260828f5c2de49e4b2fe3 */
#if BIND_DrawTextFontDescriptor_Stretch_FIELD_READER
mrb_value
mrb_UI_DrawTextFontDescriptor_get_Stretch(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontDescriptor * native_self = mruby_unbox_uiDrawTextFontDescriptor(self);

  uiDrawTextStretch native_Stretch = native_self->Stretch;

  mrb_value Stretch = TODO_mruby_box_uiDrawTextStretch(mrb, native_Stretch);

  return Stretch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::Stretch_writer */
/* sha: c464b9c72d27af0099794a992a9eb22f748954bee7dee5b6ff90c008b1d5c3e5 */
#if BIND_DrawTextFontDescriptor_Stretch_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontDescriptor_set_Stretch(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_DrawTextFontDescriptor_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::class_definition */
/* sha: 3ab133a73edb51c74127df5b5ad79ee2070e464baf5db580d3268cf8ed791d98 */
  struct RClass* DrawTextFontDescriptor_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontDescriptor", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawTextFontDescriptor_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::class_method_definitions */
/* sha: d423e027a3b62c84b40d8a4ccba2f7e04bef4034b7b95ff29f14fb53a6a6dd0b */
#if BIND_DrawTextFontDescriptor_INITIALIZE
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "initialize", mrb_UI_DrawTextFontDescriptor_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::attr_definitions */
/* sha: 251026970f0effffaec8ae95e0a1f80f8f0adce6634059ce02348605081ccdd7 */
  /*
   * Fields
   */
#if BIND_DrawTextFontDescriptor_Family_FIELD_READER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Family", mrb_UI_DrawTextFontDescriptor_get_Family, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontDescriptor_Family_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Family=", mrb_UI_DrawTextFontDescriptor_set_Family, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontDescriptor_Size_FIELD_READER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Size", mrb_UI_DrawTextFontDescriptor_get_Size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontDescriptor_Size_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Size=", mrb_UI_DrawTextFontDescriptor_set_Size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontDescriptor_Weight_FIELD_READER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Weight", mrb_UI_DrawTextFontDescriptor_get_Weight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontDescriptor_Weight_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Weight=", mrb_UI_DrawTextFontDescriptor_set_Weight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontDescriptor_Italic_FIELD_READER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Italic", mrb_UI_DrawTextFontDescriptor_get_Italic, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontDescriptor_Italic_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Italic=", mrb_UI_DrawTextFontDescriptor_set_Italic, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontDescriptor_Stretch_FIELD_READER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Stretch", mrb_UI_DrawTextFontDescriptor_get_Stretch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontDescriptor_Stretch_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontDescriptor_class, "Stretch=", mrb_UI_DrawTextFontDescriptor_set_Stretch, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawTextFontDescriptor::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
