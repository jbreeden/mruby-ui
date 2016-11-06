/*
 * uiDrawMatrix
 * Defined in file ui.h @ line 341
 */

#include "mruby_UI.h"

#if BIND_DrawMatrix_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::initialize */
/* sha: 473540396b35908843ab6e5eaadbfe63adfa291b0a725e4280bd0a06997f7699 */
#if BIND_DrawMatrix_INITIALIZE
mrb_value
mrb_UI_DrawMatrix_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawMatrix* native_object = (uiDrawMatrix*)calloc(1, sizeof(uiDrawMatrix));
  mruby_gift_uiDrawMatrix_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DrawMatrix::M11_reader */
/* sha: 5b3851ba5e9b2362e6378d9e0476e8bd739445775c86b552449a3af5bb528ce4 */
#if BIND_DrawMatrix_M11_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M11(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M11 = native_self->M11;

  mrb_value M11 = mrb_float_value(mrb, native_M11);

  return M11;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M11_writer */
/* sha: ea91b71a66fe0d007119a1bbbea172b79ca33023f3792f99f4c18de8f77a80ac */
#if BIND_DrawMatrix_M11_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M11(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M11;

  mrb_get_args(mrb, "f", &native_M11);

  native_self->M11 = native_M11;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M12_reader */
/* sha: 54865d02c5d8c31373da8875db3345717ba3ef63ae96308c37ab565e46987ed9 */
#if BIND_DrawMatrix_M12_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M12(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M12 = native_self->M12;

  mrb_value M12 = mrb_float_value(mrb, native_M12);

  return M12;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M12_writer */
/* sha: 9b51dd243b64f49e503622657c7ac2f470a3f395f12eb67b34a7e1c8aa8e06f6 */
#if BIND_DrawMatrix_M12_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M12(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M12;

  mrb_get_args(mrb, "f", &native_M12);

  native_self->M12 = native_M12;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M21_reader */
/* sha: b5594b3e5f5cd6da5857a138110babb3e464bbdec17057ee3caaccea0ad608a2 */
#if BIND_DrawMatrix_M21_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M21(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M21 = native_self->M21;

  mrb_value M21 = mrb_float_value(mrb, native_M21);

  return M21;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M21_writer */
/* sha: 7e5dada800bc7be7a8ebebf79b10d926db7f031cc71bad141287ebe25319e8f4 */
#if BIND_DrawMatrix_M21_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M21(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M21;

  mrb_get_args(mrb, "f", &native_M21);

  native_self->M21 = native_M21;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M22_reader */
/* sha: 745cb77ab8749a582e9ad18a6489edce02c2cc5bdecc0a79f9ee63f1c3b858f2 */
#if BIND_DrawMatrix_M22_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M22(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M22 = native_self->M22;

  mrb_value M22 = mrb_float_value(mrb, native_M22);

  return M22;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M22_writer */
/* sha: 2e6f7cdb0ba199847916c36a084a82e168908f51cf80ac3effccd7b7bbc1ab94 */
#if BIND_DrawMatrix_M22_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M22(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M22;

  mrb_get_args(mrb, "f", &native_M22);

  native_self->M22 = native_M22;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M31_reader */
/* sha: 375b592c3443556c0c08639e10e2c166cfff511168e8f9fab03d35870b001a2a */
#if BIND_DrawMatrix_M31_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M31(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M31 = native_self->M31;

  mrb_value M31 = mrb_float_value(mrb, native_M31);

  return M31;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M31_writer */
/* sha: 55af29408756719ba377c34c7cfa53bb511d199254adae3c9d1be2aa7fbc7ac8 */
#if BIND_DrawMatrix_M31_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M31(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M31;

  mrb_get_args(mrb, "f", &native_M31);

  native_self->M31 = native_M31;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M32_reader */
/* sha: adc4c6f19525755ef4354e09bd57dffe70053d5803f052924e8303999c0fc260 */
#if BIND_DrawMatrix_M32_FIELD_READER
mrb_value
mrb_UI_DrawMatrix_get_M32(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M32 = native_self->M32;

  mrb_value M32 = mrb_float_value(mrb, native_M32);

  return M32;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::M32_writer */
/* sha: 909122b7634f26ef5951272ddce36838e2aefe663cc7c0ac217de49be1bb4992 */
#if BIND_DrawMatrix_M32_FIELD_WRITER
mrb_value
mrb_UI_DrawMatrix_set_M32(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);
  mrb_float native_M32;

  mrb_get_args(mrb, "f", &native_M32);

  native_self->M32 = native_M32;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawMatrix_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::class_definition */
/* sha: e19ab5250e88d9c714b341c9c0851bcbc4c1dbd4613497ce9160bba62b46fa14 */
  struct RClass* DrawMatrix_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawMatrix", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawMatrix_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::class_method_definitions */
/* sha: 13e58e7eddf33dce21d74ac7b27f205dde223a957b823fdcc61ba89ad9e12424 */
#if BIND_DrawMatrix_INITIALIZE
  mrb_define_method(mrb, DrawMatrix_class, "initialize", mrb_UI_DrawMatrix_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::attr_definitions */
/* sha: 366e19ce9de0c0b130a50557d7ebe265232d3e38af5e15c82c62ae538e87395d */
  /*
   * Fields
   */
#if BIND_DrawMatrix_M11_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M11", mrb_UI_DrawMatrix_get_M11, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M11_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M11=", mrb_UI_DrawMatrix_set_M11, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawMatrix_M12_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M12", mrb_UI_DrawMatrix_get_M12, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M12_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M12=", mrb_UI_DrawMatrix_set_M12, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawMatrix_M21_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M21", mrb_UI_DrawMatrix_get_M21, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M21_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M21=", mrb_UI_DrawMatrix_set_M21, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawMatrix_M22_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M22", mrb_UI_DrawMatrix_get_M22, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M22_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M22=", mrb_UI_DrawMatrix_set_M22, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawMatrix_M31_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M31", mrb_UI_DrawMatrix_get_M31, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M31_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M31=", mrb_UI_DrawMatrix_set_M31, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawMatrix_M32_FIELD_READER
  mrb_define_method(mrb, DrawMatrix_class, "M32", mrb_UI_DrawMatrix_get_M32, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawMatrix_M32_FIELD_WRITER
  mrb_define_method(mrb, DrawMatrix_class, "M32=", mrb_UI_DrawMatrix_set_M32, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawMatrix::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
