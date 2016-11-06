/*
 * uiDrawMatrix
 * Defined in file ui.h @ line 341
 */

#include "mruby_UI.h"

#if BIND_UiDrawMatrix_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::initialize */
/* sha: bf2488538364b92a56e3a1cdfd732f48a26cce1a5fd97a999751e99397d2d9d8 */
#if BIND_UiDrawMatrix_INITIALIZE
mrb_value
mrb_UI_UiDrawMatrix_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M11_reader */
/* sha: ac780503369928322698623cc03e658dd3e7f9e27f105afdd95f20704581f555 */
#if BIND_UiDrawMatrix_M11_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M11(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M11 = native_self->M11;

  mrb_value M11 = mrb_float_value(mrb, native_M11);

  return M11;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M11_writer */
/* sha: 9b59efffe2d46d8b1e48b691b4df0de02952bc020452b6420f27284f1cbf5ba6 */
#if BIND_UiDrawMatrix_M11_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M11(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M12_reader */
/* sha: 401898e3873f22267a99be83b137dab03889bd03350ac0a2f66bb4e158009dea */
#if BIND_UiDrawMatrix_M12_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M12(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M12 = native_self->M12;

  mrb_value M12 = mrb_float_value(mrb, native_M12);

  return M12;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M12_writer */
/* sha: 00935ac465a4d1a8e7042d4a524d9760dc7d063fbb3d8fed325bc3bf31df5a9a */
#if BIND_UiDrawMatrix_M12_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M12(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M21_reader */
/* sha: ad2571d157573197c28c726ccaadb57edb1e101742eadf45e1637d454e821ba1 */
#if BIND_UiDrawMatrix_M21_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M21(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M21 = native_self->M21;

  mrb_value M21 = mrb_float_value(mrb, native_M21);

  return M21;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M21_writer */
/* sha: fb633771028747fc28d54acddf9481fc71fc90de509476d1dc84f1045347c560 */
#if BIND_UiDrawMatrix_M21_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M21(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M22_reader */
/* sha: ed4809df320a03728e0ee675c9a45a04fd32aa11c079d20aff2fe0c4b6c8809b */
#if BIND_UiDrawMatrix_M22_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M22(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M22 = native_self->M22;

  mrb_value M22 = mrb_float_value(mrb, native_M22);

  return M22;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M22_writer */
/* sha: eefec0cc311c26a803c74b3ac4a2a78f018ef51c71f05138f9cac076f403b00b */
#if BIND_UiDrawMatrix_M22_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M22(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M31_reader */
/* sha: dd3124c03a40f107a95e9033c09e47845a5ec6deea5cc5c01d479d8510556352 */
#if BIND_UiDrawMatrix_M31_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M31(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M31 = native_self->M31;

  mrb_value M31 = mrb_float_value(mrb, native_M31);

  return M31;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M31_writer */
/* sha: 079cc57b236bed3f2fec234296fd91adf56e954c8667fcff0b89eb2d7dd810fe */
#if BIND_UiDrawMatrix_M31_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M31(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawMatrix::M32_reader */
/* sha: 4d424d29e1ecf7cd7a8d318204c004db41641abfbcd2c52814c81c0d0947d2d7 */
#if BIND_UiDrawMatrix_M32_FIELD_READER
mrb_value
mrb_UI_UiDrawMatrix_get_M32(mrb_state* mrb, mrb_value self) {
  uiDrawMatrix * native_self = mruby_unbox_uiDrawMatrix(self);

  double native_M32 = native_self->M32;

  mrb_value M32 = mrb_float_value(mrb, native_M32);

  return M32;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::M32_writer */
/* sha: cbd0541b1226b9739b94c6841ee860dfe22cf05e265bcbd197aa5aec79b14ce4 */
#if BIND_UiDrawMatrix_M32_FIELD_WRITER
mrb_value
mrb_UI_UiDrawMatrix_set_M32(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_UiDrawMatrix_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::class_definition */
/* sha: 86de9b444e57200f041c0da7ace2010d78dabd9dd9db19cec326826055650460 */
  struct RClass* UiDrawMatrix_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawMatrix", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawMatrix_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::class_method_definitions */
/* sha: 59654d332c8967c536051c8c530359600e90a602e22ac000171d79fa1cad853b */
#if BIND_UiDrawMatrix_INITIALIZE
  mrb_define_method(mrb, UiDrawMatrix_class, "initialize", mrb_UI_UiDrawMatrix_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawMatrix::attr_definitions */
/* sha: 91ec394bfa0e4957e367c4ad0941410a6da16442220f5ba2fa5d9613caef187a */
  /*
   * Fields
   */
#if BIND_UiDrawMatrix_M11_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M11", mrb_UI_UiDrawMatrix_get_M11, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M11_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M11=", mrb_UI_UiDrawMatrix_set_M11, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawMatrix_M12_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M12", mrb_UI_UiDrawMatrix_get_M12, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M12_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M12=", mrb_UI_UiDrawMatrix_set_M12, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawMatrix_M21_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M21", mrb_UI_UiDrawMatrix_get_M21, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M21_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M21=", mrb_UI_UiDrawMatrix_set_M21, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawMatrix_M22_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M22", mrb_UI_UiDrawMatrix_get_M22, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M22_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M22=", mrb_UI_UiDrawMatrix_set_M22, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawMatrix_M31_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M31", mrb_UI_UiDrawMatrix_get_M31, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M31_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M31=", mrb_UI_UiDrawMatrix_set_M31, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawMatrix_M32_FIELD_READER
  mrb_define_method(mrb, UiDrawMatrix_class, "M32", mrb_UI_UiDrawMatrix_get_M32, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawMatrix_M32_FIELD_WRITER
  mrb_define_method(mrb, UiDrawMatrix_class, "M32=", mrb_UI_UiDrawMatrix_set_M32, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawMatrix::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
