/*
 * uiDrawBrush
 * Defined in file ui.h @ line 339
 */

#include "mruby_UI.h"

#if BIND_UiDrawBrush_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::initialize */
/* sha: dedefab0514c1fe53135c16db7cb9a0006951cab868e39f680e6961cd596874c */
#if BIND_UiDrawBrush_INITIALIZE
mrb_value
mrb_UI_UiDrawBrush_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::Type_reader */
/* sha: 0305875ee30924fcb6d0b4b1d473d84964c5517cf39bd31d522a4ed1d2bf3dac */
#if BIND_UiDrawBrush_Type_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_Type(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  uiDrawBrushType native_Type = native_self->Type;

  mrb_value Type = TODO_mruby_box_uiDrawBrushType(mrb, native_Type);

  return Type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::Type_writer */
/* sha: 12c5077fea7ad08989597c847cf4c8951a7edbec29651db608cfff848d369dbc */
#if BIND_UiDrawBrush_Type_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_Type(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::R_reader */
/* sha: fd7ea1b0fceaf6cad07c61e9f93914d0b99b306af7cad838639d3021dfd43afd */
#if BIND_UiDrawBrush_R_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_R = native_self->R;

  mrb_value R = mrb_float_value(mrb, native_R);

  return R;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::R_writer */
/* sha: 2ffa9e353b76c58df780dc72a28bdb51e37b5530c6dbd34fd645ffeda2153ab2 */
#if BIND_UiDrawBrush_R_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_R(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::G_reader */
/* sha: 0bc230ce86df6e90eceb8ce26e647df022519f6f22011abf733e69c20e02c5e7 */
#if BIND_UiDrawBrush_G_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_G = native_self->G;

  mrb_value G = mrb_float_value(mrb, native_G);

  return G;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::G_writer */
/* sha: ec29e2cab505688941cf6c4df70779bb6013a47f7dd79b487851627af1dc2359 */
#if BIND_UiDrawBrush_G_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_G(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::B_reader */
/* sha: d2d13a5da276f6a9053eae1f1c97938bc0462cd8a8d05978608e422262105c9d */
#if BIND_UiDrawBrush_B_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_B = native_self->B;

  mrb_value B = mrb_float_value(mrb, native_B);

  return B;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::B_writer */
/* sha: 0edc0ce003349b679003a7f37d7816348790a884cf6055c9f2ca66ea723a1745 */
#if BIND_UiDrawBrush_B_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_B(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::A_reader */
/* sha: 57ab9912983e3ee1d4965ad07fc30aa41d70f5d9cbda2742b39f020b3e450f08 */
#if BIND_UiDrawBrush_A_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_A = native_self->A;

  mrb_value A = mrb_float_value(mrb, native_A);

  return A;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::A_writer */
/* sha: 8fff61847aad1528645057ca868c98767de5e61a8263829ad152559cfea05b79 */
#if BIND_UiDrawBrush_A_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_A(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::X0_reader */
/* sha: ef1eb13d59a86e31bdedc856cd46a2258e174eb786818998af29483a5207c2c1 */
#if BIND_UiDrawBrush_X0_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_X0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_X0 = native_self->X0;

  mrb_value X0 = mrb_float_value(mrb, native_X0);

  return X0;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::X0_writer */
/* sha: 0fcb855167bce620dcf9a1e97b49c7a72fb37f71f68d95b5dad0e5c392918fff */
#if BIND_UiDrawBrush_X0_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_X0(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::Y0_reader */
/* sha: 96aa4fba813760084bb9c0a70d9d170c1542df3013fd3dcac68c62c2b8abe14d */
#if BIND_UiDrawBrush_Y0_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_Y0(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_Y0 = native_self->Y0;

  mrb_value Y0 = mrb_float_value(mrb, native_Y0);

  return Y0;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::Y0_writer */
/* sha: 3ced432ac922ffb093ae32b9054815064671a0efc4b85521d1090c84f4206e78 */
#if BIND_UiDrawBrush_Y0_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_Y0(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::X1_reader */
/* sha: cded4e21c60ee63dda66b22da9517af08245967a4f13365bb697d00fb7a2afc2 */
#if BIND_UiDrawBrush_X1_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_X1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_X1 = native_self->X1;

  mrb_value X1 = mrb_float_value(mrb, native_X1);

  return X1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::X1_writer */
/* sha: 87ab0b0a8e5d3605f9975ec71291f7f843e874914c098d2eecc733a96660e881 */
#if BIND_UiDrawBrush_X1_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_X1(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::Y1_reader */
/* sha: 84802e21d001e6fbd027ba5d10b6529951844136fa48fcef84ca7269f0a4eff2 */
#if BIND_UiDrawBrush_Y1_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_Y1(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_Y1 = native_self->Y1;

  mrb_value Y1 = mrb_float_value(mrb, native_Y1);

  return Y1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::Y1_writer */
/* sha: 854a10ae1bec41d602a8c264fa50334cb7c070ef5970ac866b67ddd631aa9dd7 */
#if BIND_UiDrawBrush_Y1_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_Y1(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::OuterRadius_reader */
/* sha: 48f9ef13dca77c32912302d9557e6ff678f7453a568e97c14abf7c4f09858ff1 */
#if BIND_UiDrawBrush_OuterRadius_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_OuterRadius(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  double native_OuterRadius = native_self->OuterRadius;

  mrb_value OuterRadius = mrb_float_value(mrb, native_OuterRadius);

  return OuterRadius;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::OuterRadius_writer */
/* sha: 4d02425d7a695c997ac438f6a645ba2316c813f9ab513814f331db9bc922d889 */
#if BIND_UiDrawBrush_OuterRadius_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_OuterRadius(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawBrush::Stops_reader */
/* sha: 9bc98faff7aef07cc867c1d66447d0d48f293f6ad4b7d7527028ade9b3195cac */
#if BIND_UiDrawBrush_Stops_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_Stops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  uiDrawBrushGradientStop * native_Stops = native_self->Stops;

  mrb_value Stops = (native_Stops == NULL ? mrb_nil_value() : mruby_box_uiDrawBrushGradientStop(mrb, native_Stops));

  return Stops;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::Stops_writer */
/* sha: e51478c842867c7174f50833579a933dfc274062874302a473b0b62ae7096303 */
#if BIND_UiDrawBrush_Stops_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_Stops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);
  mrb_value Stops;

  mrb_get_args(mrb, "o", &Stops);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, Stops, UiDrawBrushGradientStop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawBrushGradientStop expected");
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

/* MRUBY_BINDING: UiDrawBrush::NumStops_reader */
/* sha: cd411c76f90e6480df8ce1085f3930e5c1a8b7d863243348b0ad6ec90aee013c */
#if BIND_UiDrawBrush_NumStops_FIELD_READER
mrb_value
mrb_UI_UiDrawBrush_get_NumStops(mrb_state* mrb, mrb_value self) {
  uiDrawBrush * native_self = mruby_unbox_uiDrawBrush(self);

  int native_NumStops = native_self->NumStops;

  mrb_value NumStops = mrb_fixnum_value(native_NumStops);

  return NumStops;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::NumStops_writer */
/* sha: fec762b8044b3a1b8851c4c20079ba298ccc75d18e1f6c13d359275ab8262a61 */
#if BIND_UiDrawBrush_NumStops_FIELD_WRITER
mrb_value
mrb_UI_UiDrawBrush_set_NumStops(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_UiDrawBrush_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::class_definition */
/* sha: 53b0357a8705ff37757b16b98ee6e2ba04627354e963e6050a71ad6b88c79c9c */
  struct RClass* UiDrawBrush_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawBrush", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawBrush_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::class_method_definitions */
/* sha: 615bd35df5f2bd385283af9b42d168aab2f9dad031443f6fbb7d1de39282fd04 */
#if BIND_UiDrawBrush_INITIALIZE
  mrb_define_method(mrb, UiDrawBrush_class, "initialize", mrb_UI_UiDrawBrush_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawBrush::attr_definitions */
/* sha: 1cb3281adf717b442f0e078fb8814b2326d38c2db42634735723f88b725c0944 */
  /*
   * Fields
   */
#if BIND_UiDrawBrush_Type_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "Type", mrb_UI_UiDrawBrush_get_Type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_Type_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "Type=", mrb_UI_UiDrawBrush_set_Type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_R_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "R", mrb_UI_UiDrawBrush_get_R, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_R_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "R=", mrb_UI_UiDrawBrush_set_R, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_G_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "G", mrb_UI_UiDrawBrush_get_G, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_G_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "G=", mrb_UI_UiDrawBrush_set_G, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_B_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "B", mrb_UI_UiDrawBrush_get_B, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_B_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "B=", mrb_UI_UiDrawBrush_set_B, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_A_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "A", mrb_UI_UiDrawBrush_get_A, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_A_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "A=", mrb_UI_UiDrawBrush_set_A, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_X0_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "X0", mrb_UI_UiDrawBrush_get_X0, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_X0_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "X0=", mrb_UI_UiDrawBrush_set_X0, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_Y0_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "Y0", mrb_UI_UiDrawBrush_get_Y0, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_Y0_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "Y0=", mrb_UI_UiDrawBrush_set_Y0, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_X1_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "X1", mrb_UI_UiDrawBrush_get_X1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_X1_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "X1=", mrb_UI_UiDrawBrush_set_X1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_Y1_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "Y1", mrb_UI_UiDrawBrush_get_Y1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_Y1_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "Y1=", mrb_UI_UiDrawBrush_set_Y1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_OuterRadius_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "OuterRadius", mrb_UI_UiDrawBrush_get_OuterRadius, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_OuterRadius_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "OuterRadius=", mrb_UI_UiDrawBrush_set_OuterRadius, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_Stops_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "Stops", mrb_UI_UiDrawBrush_get_Stops, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_Stops_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "Stops=", mrb_UI_UiDrawBrush_set_Stops, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawBrush_NumStops_FIELD_READER
  mrb_define_method(mrb, UiDrawBrush_class, "NumStops", mrb_UI_UiDrawBrush_get_NumStops, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawBrush_NumStops_FIELD_WRITER
  mrb_define_method(mrb, UiDrawBrush_class, "NumStops=", mrb_UI_UiDrawBrush_set_NumStops, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawBrush::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
