/*
 * uiDrawTextFontMetrics
 * Defined in file ui.h @ line 492
 */

#include "mruby_UI.h"

#if BIND_UiDrawTextFontMetrics_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::initialize */
/* sha: 43a3a297c8d23b13a184a800de8db9ad680b08452c20cedda65a368ab3d386a3 */
#if BIND_UiDrawTextFontMetrics_INITIALIZE
mrb_value
mrb_UI_UiDrawTextFontMetrics_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextFontMetrics* native_object = (uiDrawTextFontMetrics*)calloc(1, sizeof(uiDrawTextFontMetrics));
  mruby_gift_uiDrawTextFontMetrics_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Ascent_reader */
/* sha: 6a151dc4bb477ee3ad0823788e53d6ca65c57afb4a20a814fbd5d48f18560de8 */
#if BIND_UiDrawTextFontMetrics_Ascent_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontMetrics_get_Ascent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Ascent = native_self->Ascent;

  mrb_value Ascent = mrb_float_value(mrb, native_Ascent);

  return Ascent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Ascent_writer */
/* sha: f0d07afc3c5a4b62a86f843a24d9002818e9c0e97e4d8600211940c6a3435321 */
#if BIND_UiDrawTextFontMetrics_Ascent_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontMetrics_set_Ascent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);
  mrb_float native_Ascent;

  mrb_get_args(mrb, "f", &native_Ascent);

  native_self->Ascent = native_Ascent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Descent_reader */
/* sha: 505e2577ad7a1410caf88d59036928f692ca45c20400cb2c40910b7dadb94141 */
#if BIND_UiDrawTextFontMetrics_Descent_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontMetrics_get_Descent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Descent = native_self->Descent;

  mrb_value Descent = mrb_float_value(mrb, native_Descent);

  return Descent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Descent_writer */
/* sha: fd7f6f4befb3ff4ce5830a4e12852a7cfdb25f8242efd25deafe34e062de3cbe */
#if BIND_UiDrawTextFontMetrics_Descent_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontMetrics_set_Descent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);
  mrb_float native_Descent;

  mrb_get_args(mrb, "f", &native_Descent);

  native_self->Descent = native_Descent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Leading_reader */
/* sha: 454818aeae1f312dd30973f2c9ccb54dd08e80ea18421fcb20d082597282dfe5 */
#if BIND_UiDrawTextFontMetrics_Leading_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontMetrics_get_Leading(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Leading = native_self->Leading;

  mrb_value Leading = mrb_float_value(mrb, native_Leading);

  return Leading;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::Leading_writer */
/* sha: d7606ec137ed90006361dee92722e02274b58a58d2d60c52331a956f36695671 */
#if BIND_UiDrawTextFontMetrics_Leading_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontMetrics_set_Leading(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);
  mrb_float native_Leading;

  mrb_get_args(mrb, "f", &native_Leading);

  native_self->Leading = native_Leading;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::UnderlinePos_reader */
/* sha: 934ab0662e1d526947ba0b91eaf980729a658f5c06d9d7bf3508f281dfc189e4 */
#if BIND_UiDrawTextFontMetrics_UnderlinePos_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontMetrics_get_UnderlinePos(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_UnderlinePos = native_self->UnderlinePos;

  mrb_value UnderlinePos = mrb_float_value(mrb, native_UnderlinePos);

  return UnderlinePos;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::UnderlinePos_writer */
/* sha: 104844bc7a9dab75704b7718e628b820e179899752930f460ac48a2298e57785 */
#if BIND_UiDrawTextFontMetrics_UnderlinePos_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontMetrics_set_UnderlinePos(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);
  mrb_float native_UnderlinePos;

  mrb_get_args(mrb, "f", &native_UnderlinePos);

  native_self->UnderlinePos = native_UnderlinePos;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::UnderlineThickness_reader */
/* sha: 7e4a63e8d973bfa26c3302910e518ffa954089c326728093f991865c366a0f4c */
#if BIND_UiDrawTextFontMetrics_UnderlineThickness_FIELD_READER
mrb_value
mrb_UI_UiDrawTextFontMetrics_get_UnderlineThickness(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_UnderlineThickness = native_self->UnderlineThickness;

  mrb_value UnderlineThickness = mrb_float_value(mrb, native_UnderlineThickness);

  return UnderlineThickness;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::UnderlineThickness_writer */
/* sha: 129fe72cba6a5b45fbeeffe1f7022fc07e55bbdcd601d456ffdae7c4e444f52a */
#if BIND_UiDrawTextFontMetrics_UnderlineThickness_FIELD_WRITER
mrb_value
mrb_UI_UiDrawTextFontMetrics_set_UnderlineThickness(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);
  mrb_float native_UnderlineThickness;

  mrb_get_args(mrb, "f", &native_UnderlineThickness);

  native_self->UnderlineThickness = native_UnderlineThickness;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawTextFontMetrics_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::class_definition */
/* sha: b60370abe01543e6744f23b94d53616827131fe32be64fa1587ae09b12d0c27d */
  struct RClass* UiDrawTextFontMetrics_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawTextFontMetrics", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawTextFontMetrics_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::class_method_definitions */
/* sha: 70b5f4e98ff172227df58f5a8a0dfc9eb970fca69a86cc82664b70f50adcefd1 */
#if BIND_UiDrawTextFontMetrics_INITIALIZE
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "initialize", mrb_UI_UiDrawTextFontMetrics_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFontMetrics::attr_definitions */
/* sha: 92541538cbc2aa2c6c78c1c74780db72efc4fd0aafcaa1db25a9513f42f922f6 */
  /*
   * Fields
   */
#if BIND_UiDrawTextFontMetrics_Ascent_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Ascent", mrb_UI_UiDrawTextFontMetrics_get_Ascent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontMetrics_Ascent_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Ascent=", mrb_UI_UiDrawTextFontMetrics_set_Ascent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontMetrics_Descent_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Descent", mrb_UI_UiDrawTextFontMetrics_get_Descent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontMetrics_Descent_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Descent=", mrb_UI_UiDrawTextFontMetrics_set_Descent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontMetrics_Leading_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Leading", mrb_UI_UiDrawTextFontMetrics_get_Leading, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontMetrics_Leading_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "Leading=", mrb_UI_UiDrawTextFontMetrics_set_Leading, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontMetrics_UnderlinePos_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "UnderlinePos", mrb_UI_UiDrawTextFontMetrics_get_UnderlinePos, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontMetrics_UnderlinePos_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "UnderlinePos=", mrb_UI_UiDrawTextFontMetrics_set_UnderlinePos, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawTextFontMetrics_UnderlineThickness_FIELD_READER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "UnderlineThickness", mrb_UI_UiDrawTextFontMetrics_get_UnderlineThickness, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawTextFontMetrics_UnderlineThickness_FIELD_WRITER
  mrb_define_method(mrb, UiDrawTextFontMetrics_class, "UnderlineThickness=", mrb_UI_UiDrawTextFontMetrics_set_UnderlineThickness, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawTextFontMetrics::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
