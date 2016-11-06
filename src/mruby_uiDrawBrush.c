/*
 * uiDrawBrush
 * Defined in file ui.h @ line 339
 */

#include "mruby_UI.h"

#if BIND_DrawBrush_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::initialize */
/* sha: bbddc7c103b9d88bb4fd5cfb576e810b579559bebfddbab0e34b414f6ad67c80 */
#if BIND_DrawBrush_INITIALIZE
mrb_value
mrb_UI_DrawBrush_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawBrush* native_object = (uiDrawBrush*)calloc(1, sizeof(uiDrawBrush));
  mruby_gift_uiDrawBrush_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DrawBrush::Type_reader */
/* sha: d5d46535a79e4d577a3d46f15a84dc43ae39b6883aba8f7bfe5aa6aa4d493efd */
#if BIND_DrawBrush_Type_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_Type(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  uiDrawBrushType native_Type = native_self->Type;

  mrb_value Type = TODO_mruby_box_uiDrawBrushType(mrb, native_Type);

  return Type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Type_writer */
/* sha: 3b7a1e979a49295c3f651c3c71df5a83d538b762bc04f9037babbfa46eebf20a */
#if BIND_DrawBrush_Type_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_Type(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_value Type;

  mrb_get_args(mrb, "o", &Type);

  /* type checking */
  TODO_type_check_uiDrawBrushType(Type);

  uiDrawBrushType native_Type = TODO_mruby_unbox_uiDrawBrushType(Type);

  native_self->Type = native_Type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::R_reader */
/* sha: 97d44e247f089eb725a33b2f529506aedf744d058a1a5d341ffb781026c1ea1c */
#if BIND_DrawBrush_R_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_R = native_self->R;

  mrb_value R = mrb_float_value(mrb, native_R);

  return R;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::R_writer */
/* sha: 837225615913e14b021f56b97c5b0f172cbad89c6928279c145d3708edfe0979 */
#if BIND_DrawBrush_R_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_R;

  mrb_get_args(mrb, "f", &native_R);

  native_self->R = native_R;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::G_reader */
/* sha: 1e54e382a5067c0572c31611761d9a2632be1e4b0e0e381ea3009198ad072977 */
#if BIND_DrawBrush_G_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_G = native_self->G;

  mrb_value G = mrb_float_value(mrb, native_G);

  return G;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::G_writer */
/* sha: 41a7162004d3a526c16ca492217433b06a1d22e8e9bf6ed79412387dda30352e */
#if BIND_DrawBrush_G_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_G;

  mrb_get_args(mrb, "f", &native_G);

  native_self->G = native_G;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::B_reader */
/* sha: 9678aaa84067feb33ffbfcd2d959c5a699856393dee8c55357fcbd3ebc370cdc */
#if BIND_DrawBrush_B_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_B = native_self->B;

  mrb_value B = mrb_float_value(mrb, native_B);

  return B;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::B_writer */
/* sha: 0bb103139e7d607b2d4ca2f1eb84fc66a2135a1688e47db19f2432d4c0af8ae1 */
#if BIND_DrawBrush_B_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_B;

  mrb_get_args(mrb, "f", &native_B);

  native_self->B = native_B;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::A_reader */
/* sha: f3feafc4a0169402d54a7c30a2c317606adfe478a5db9f077f00011e1988deea */
#if BIND_DrawBrush_A_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_A = native_self->A;

  mrb_value A = mrb_float_value(mrb, native_A);

  return A;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::A_writer */
/* sha: 250f83d2673efd5615732afe7f635ab35c271af054dd4d9f7f5de80ed8bc1f7c */
#if BIND_DrawBrush_A_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_A;

  mrb_get_args(mrb, "f", &native_A);

  native_self->A = native_A;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::X0_reader */
/* sha: 27dee999058f0c5de2d5e52e2d9cfc563ef4a5e7d2ae3e1f56e01ffc59bec528 */
#if BIND_DrawBrush_X0_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_X0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_X0 = native_self->X0;

  mrb_value X0 = mrb_float_value(mrb, native_X0);

  return X0;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::X0_writer */
/* sha: df7842743e5492c46c7f60258cfe931f163c047566a8bd851b668d19ce45ceed */
#if BIND_DrawBrush_X0_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_X0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_X0;

  mrb_get_args(mrb, "f", &native_X0);

  native_self->X0 = native_X0;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Y0_reader */
/* sha: a42a67533db456aa04cc96dc5b30342223d7a2495476877b393d6812a729091e */
#if BIND_DrawBrush_Y0_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_Y0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_Y0 = native_self->Y0;

  mrb_value Y0 = mrb_float_value(mrb, native_Y0);

  return Y0;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Y0_writer */
/* sha: 540321fad288ca04c76eb057234d23b496ab772bb25e5fe0bdac3c66c2e3b16f */
#if BIND_DrawBrush_Y0_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_Y0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_Y0;

  mrb_get_args(mrb, "f", &native_Y0);

  native_self->Y0 = native_Y0;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::X1_reader */
/* sha: 69be41c99139889f1d959ea13d66b7355b115b2a1f669559b173871295d6298b */
#if BIND_DrawBrush_X1_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_X1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_X1 = native_self->X1;

  mrb_value X1 = mrb_float_value(mrb, native_X1);

  return X1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::X1_writer */
/* sha: 24cdedd0b7574499581010f707674d9aaa07b95ce7b063694cc2e9d848770733 */
#if BIND_DrawBrush_X1_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_X1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_X1;

  mrb_get_args(mrb, "f", &native_X1);

  native_self->X1 = native_X1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Y1_reader */
/* sha: 1ea699629314ec4b4a5a729fbf2db90439638e98f6e0d34704b37287b5d3a700 */
#if BIND_DrawBrush_Y1_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_Y1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_Y1 = native_self->Y1;

  mrb_value Y1 = mrb_float_value(mrb, native_Y1);

  return Y1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Y1_writer */
/* sha: deb78aa63d172e4f130cd1a7bd9d1ec427982e1905e044800e72e7fda38d2b0c */
#if BIND_DrawBrush_Y1_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_Y1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_Y1;

  mrb_get_args(mrb, "f", &native_Y1);

  native_self->Y1 = native_Y1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::OuterRadius_reader */
/* sha: 3b62ae882ad269f31bb9eb3e94a33215a8d8469c7a29f30a7f2290174df40f54 */
#if BIND_DrawBrush_OuterRadius_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_OuterRadius(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_OuterRadius = native_self->OuterRadius;

  mrb_value OuterRadius = mrb_float_value(mrb, native_OuterRadius);

  return OuterRadius;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::OuterRadius_writer */
/* sha: 3c75c3ea154e0d7d6aa89401b0a120552b0f7ca5701a8a6c0394da7a7be2e9dd */
#if BIND_DrawBrush_OuterRadius_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_OuterRadius(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_float native_OuterRadius;

  mrb_get_args(mrb, "f", &native_OuterRadius);

  native_self->OuterRadius = native_OuterRadius;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Stops_reader */
/* sha: a484e598c694a17ebe314950643755ea5e873bdfb4f5a625db4635b5465f7de9 */
#if BIND_DrawBrush_Stops_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_Stops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  uiDrawBrushGradientStop * native_Stops = native_self->Stops;

  mrb_value Stops = (native_Stops == NULL ? mrb_nil_value() : mruby_box_uiDrawBrushGradientStop(mrb, native_Stops));

  return Stops;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::Stops_writer */
/* sha: f5b7def7a6579c2e8f275788844084b0b62894f7b79837691a30bb155b22e84f */
#if BIND_DrawBrush_Stops_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_Stops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_value Stops;

  mrb_get_args(mrb, "o", &Stops);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, Stops, DrawBrushGradientStop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawBrushGradientStop expected");
    return mrb_nil_value();
  }

  uiDrawBrushGradientStop * native_Stops = (mrb_nil_p(Stops) ? NULL : mruby_unbox_uiDrawBrushGradientStop(Stops));

  native_self->Stops = native_Stops;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::NumStops_reader */
/* sha: 2cf03a86ee52f7245fe695ff7f4fdd22902bd5a82ce223c17825b62b41c798a7 */
#if BIND_DrawBrush_NumStops_FIELD_READER
mrb_value
mrb_UI_DrawBrush_get_NumStops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  int native_NumStops = native_self->NumStops;

  mrb_value NumStops = mrb_fixnum_value(native_NumStops);

  return NumStops;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::NumStops_writer */
/* sha: f353fbf1cac2edae96fc0d34daa2acf214e8ca47ce0168e489d27671cb8c825f */
#if BIND_DrawBrush_NumStops_FIELD_WRITER
mrb_value
mrb_UI_DrawBrush_set_NumStops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_int native_NumStops;

  mrb_get_args(mrb, "i", &native_NumStops);

  native_self->NumStops = native_NumStops;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawBrush_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::class_definition */
/* sha: 49c22f2f061852e9c3524bb3473ecf76a26711d312753409c9ae0b23f974ad8b */
  struct RClass* DrawBrush_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrush", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawBrush_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::class_method_definitions */
/* sha: 9e277b6917ef08870bb7ca5acbd4354550cb31d40a8bca6e79be6e769b8c3e23 */
#if BIND_DrawBrush_INITIALIZE
  mrb_define_method(mrb, DrawBrush_class, "initialize", mrb_UI_DrawBrush_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::attr_definitions */
/* sha: 346b423b0f3fd0e045bc2b1c853ffa8c9b81abf21703849b42691784841a1f43 */
  /*
   * Fields
   */
#if BIND_DrawBrush_Type_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "Type", mrb_UI_DrawBrush_get_Type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_Type_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "Type=", mrb_UI_DrawBrush_set_Type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_R_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "R", mrb_UI_DrawBrush_get_R, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_R_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "R=", mrb_UI_DrawBrush_set_R, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_G_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "G", mrb_UI_DrawBrush_get_G, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_G_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "G=", mrb_UI_DrawBrush_set_G, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_B_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "B", mrb_UI_DrawBrush_get_B, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_B_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "B=", mrb_UI_DrawBrush_set_B, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_A_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "A", mrb_UI_DrawBrush_get_A, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_A_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "A=", mrb_UI_DrawBrush_set_A, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_X0_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "X0", mrb_UI_DrawBrush_get_X0, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_X0_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "X0=", mrb_UI_DrawBrush_set_X0, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_Y0_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "Y0", mrb_UI_DrawBrush_get_Y0, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_Y0_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "Y0=", mrb_UI_DrawBrush_set_Y0, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_X1_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "X1", mrb_UI_DrawBrush_get_X1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_X1_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "X1=", mrb_UI_DrawBrush_set_X1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_Y1_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "Y1", mrb_UI_DrawBrush_get_Y1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_Y1_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "Y1=", mrb_UI_DrawBrush_set_Y1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_OuterRadius_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "OuterRadius", mrb_UI_DrawBrush_get_OuterRadius, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_OuterRadius_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "OuterRadius=", mrb_UI_DrawBrush_set_OuterRadius, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_Stops_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "Stops", mrb_UI_DrawBrush_get_Stops, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_Stops_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "Stops=", mrb_UI_DrawBrush_set_Stops, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrush_NumStops_FIELD_READER
  mrb_define_method(mrb, DrawBrush_class, "NumStops", mrb_UI_DrawBrush_get_NumStops, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrush_NumStops_FIELD_WRITER
  mrb_define_method(mrb, DrawBrush_class, "NumStops=", mrb_UI_DrawBrush_set_NumStops, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawBrush::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
