/*
 * uiInitOptions
 * Defined in file ui.h @ line 37
 */

#include "mruby_UI.h"

#if BIND_InitOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::initialize */
/* sha: d075e68bd3b8e82c6a4b540c55c5ee4a575a00a923cc4f10175f0a0f98c208f1 */
#if BIND_InitOptions_INITIALIZE
mrb_value
mrb_UI_InitOptions_initialize(mrb_state* mrb, mrb_value self) {
  uiInitOptions* native_object = (uiInitOptions*)calloc(1, sizeof(uiInitOptions));
  mruby_gift_uiInitOptions_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: InitOptions::Size_reader */
/* sha: 730ee404fa71654e57309bbacee7569aff76314495b010597f1839514b3acf57 */
#if BIND_InitOptions_Size_FIELD_READER
mrb_value
mrb_UI_InitOptions_get_Size(mrb_state* mrb, mrb_value self) {
  uiInitOptions * native_self = mruby_unbox_uiInitOptions(self);

  int native_Size = native_self->Size;

  mrb_value Size = mrb_fixnum_value(native_Size);

  return Size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::Size_writer */
/* sha: 04879b763dc4209c4548ebdcdcf80a524f0925f1596c84cd31a6db0014f410a4 */
#if BIND_InitOptions_Size_FIELD_WRITER
mrb_value
mrb_UI_InitOptions_set_Size(mrb_state* mrb, mrb_value self) {
  uiInitOptions * native_self = mruby_unbox_uiInitOptions(self);
  mrb_int native_Size;

  mrb_get_args(mrb, "i", &native_Size);

  native_self->Size = native_Size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_InitOptions_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::class_definition */
/* sha: f0626ad93b92b42113f82f27909dbd268d779920c0ac8bc75be6084d4ce49af9 */
  struct RClass* InitOptions_class = mrb_define_class_under(mrb, UI_module(mrb), "InitOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(InitOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::class_method_definitions */
/* sha: 9119d9c68674b81dd8bf144a964f5b287ada62392ff46c25a88d6f117a3e9b90 */
#if BIND_InitOptions_INITIALIZE
  mrb_define_method(mrb, InitOptions_class, "initialize", mrb_UI_InitOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::attr_definitions */
/* sha: 719a65e41ab4fd3f1c5f815ebce568a553aa58872250a7610cbc120033d3e2bc */
  /*
   * Fields
   */
#if BIND_InitOptions_Size_FIELD_READER
  mrb_define_method(mrb, InitOptions_class, "Size", mrb_UI_InitOptions_get_Size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InitOptions_Size_FIELD_WRITER
  mrb_define_method(mrb, InitOptions_class, "Size=", mrb_UI_InitOptions_set_Size, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: InitOptions::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
