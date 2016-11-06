/*
 * uiDrawBrushGradientStop
 * Defined in file ui.h @ line 343
 */

#include "mruby_UI.h"

#if BIND_UiDrawBrushGradientStop_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::initialize */
/* sha: f013958b0814dead89fab94b6079e0be637696fd8931e0b232fd008107344c4d */
#if BIND_UiDrawBrushGradientStop_INITIALIZE
mrb_value
mrb_UI_UiDrawBrushGradientStop_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawBrushGradientStop* native_object = (uiDrawBrushGradientStop*)calloc(1, sizeof(uiDrawBrushGradientStop));
  mruby_gift_uiDrawBrushGradientStop_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiDrawBrushGradientStop::Pos_reader */
/* sha: 343a0b02fe47ebd412926a6d2371c7dd6431c80cca445e8426d5d19b4fc11d5a */
#if BIND_UiDrawBrushGradientStop_Pos_FIELD_READER
mrb_value
mrb_UI_UiDrawBrushGradientStop_get_Pos(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_Pos = native_self->Pos;

  mrb_value Pos = mrb_float_value(mrb, native_Pos);

  return Pos;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::Pos_writer */
/* sha: fcd8439be3cdcfadd9640e0f366f635665dd7eaf1cfb870fcfb3fd828581745f */
#if BIND_UiDrawBrushGradientStop_Pos_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrushGradientStop_set_Pos(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);
  mrb_float native_Pos;

  mrb_get_args(mrb, "f", &native_Pos);

  native_self->Pos = native_Pos;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::R_reader */
/* sha: d8060e7e0246af7329c78542b0a5d83489a101b3a8f76a7542d30c50242a95bc */
#if BIND_UiDrawBrushGradientStop_R_FIELD_READER
mrb_value
mrb_UI_UiDrawBrushGradientStop_get_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_R = native_self->R;

  mrb_value R = mrb_float_value(mrb, native_R);

  return R;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::R_writer */
/* sha: 30cab0bce7eb6e0c8edba310ff66f5c151488b9bb76aa092aeb2a08d41aa3f43 */
#if BIND_UiDrawBrushGradientStop_R_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrushGradientStop_set_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);
  mrb_float native_R;

  mrb_get_args(mrb, "f", &native_R);

  native_self->R = native_R;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::G_reader */
/* sha: a9863d58a3c8cfdf6010317911248778ec47ade183bcb744e835131ee38ab6f5 */
#if BIND_UiDrawBrushGradientStop_G_FIELD_READER
mrb_value
mrb_UI_UiDrawBrushGradientStop_get_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_G = native_self->G;

  mrb_value G = mrb_float_value(mrb, native_G);

  return G;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::G_writer */
/* sha: c312dc9151359c6bf38030a3d600c47dbf0b7fd73ce10c2c85845b730c0cf515 */
#if BIND_UiDrawBrushGradientStop_G_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrushGradientStop_set_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);
  mrb_float native_G;

  mrb_get_args(mrb, "f", &native_G);

  native_self->G = native_G;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::B_reader */
/* sha: 5a9886991b4a168acf970c88fabbd40274a65aff7e9244ad5912412be2f69f14 */
#if BIND_UiDrawBrushGradientStop_B_FIELD_READER
mrb_value
mrb_UI_UiDrawBrushGradientStop_get_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_B = native_self->B;

  mrb_value B = mrb_float_value(mrb, native_B);

  return B;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::B_writer */
/* sha: a72d565ca2641464bad3577c675885f2ab94cfe9c8b1f252ea91dc99714763b0 */
#if BIND_UiDrawBrushGradientStop_B_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrushGradientStop_set_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);
  mrb_float native_B;

  mrb_get_args(mrb, "f", &native_B);

  native_self->B = native_B;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::A_reader */
/* sha: 651193fd856eecdf7baa2adad516d9447f13f00a6a6fd7264e9a1722d7b28886 */
#if BIND_UiDrawBrushGradientStop_A_FIELD_READER
mrb_value
mrb_UI_UiDrawBrushGradientStop_get_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_A = native_self->A;

  mrb_value A = mrb_float_value(mrb, native_A);

  return A;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::A_writer */
/* sha: f33e8f3038f0125040deb1b1726bae795ad60f4fd4848b7bc6144863334b240f */
#if BIND_UiDrawBrushGradientStop_A_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrushGradientStop_set_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);
  mrb_float native_A;

  mrb_get_args(mrb, "f", &native_A);

  native_self->A = native_A;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawBrushGradientStop_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::class_definition */
/* sha: 1d91a983daacea6502ad06f03d645f66e3e5d88a6ebe76736cc68285825b9ef1 */
  struct RClass* UiDrawBrushGradientStop_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawBrushGradientStop", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawBrushGradientStop_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::class_method_definitions */
/* sha: 66379e5cd3627b2336c258cfcd8a305e40baa7a87193920d632f0e6f4553d7ff */
#if BIND_UiDrawBrushGradientStop_INITIALIZE
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "initialize", mrb_UI_UiDrawBrushGradientStop_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrushGradientStop::attr_definitions */
/* sha: ae416e213dae143a6cff709d1daae0a4b0cad740dee8bd217d0aa0f6edac0cd9 */
  /*
   * Fields
   */
#if BIND_UiDrawBrushGradientStop_Pos_FIELD_READER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "Pos", mrb_UI_UiDrawBrushGradientStop_get_Pos, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrushGradientStop_Pos_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "Pos=", mrb_UI_UiDrawBrushGradientStop_set_Pos, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrushGradientStop_R_FIELD_READER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "R", mrb_UI_UiDrawBrushGradientStop_get_R, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrushGradientStop_R_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "R=", mrb_UI_UiDrawBrushGradientStop_set_R, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrushGradientStop_G_FIELD_READER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "G", mrb_UI_UiDrawBrushGradientStop_get_G, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrushGradientStop_G_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "G=", mrb_UI_UiDrawBrushGradientStop_set_G, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrushGradientStop_B_FIELD_READER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "B", mrb_UI_UiDrawBrushGradientStop_get_B, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrushGradientStop_B_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "B=", mrb_UI_UiDrawBrushGradientStop_set_B, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrushGradientStop_A_FIELD_READER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "A", mrb_UI_UiDrawBrushGradientStop_get_A, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrushGradientStop_A_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrushGradientStop_class, "A=", mrb_UI_UiDrawBrushGradientStop_set_A, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawBrushGradientStop::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
