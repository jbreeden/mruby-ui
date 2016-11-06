/*
 * uiDrawStrokeParams
 * Defined in file ui.h @ line 340
 */

#include "mruby_UI.h"

#if BIND_DrawStrokeParams_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::initialize */
/* sha: 28d546919d6e92a55b9985ac3c99720546813335bedfeb9ef42c02f40930149b */
#if BIND_DrawStrokeParams_INITIALIZE
mrb_value
mrb_UI_DrawStrokeParams_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawStrokeParams* native_object = (uiDrawStrokeParams*)calloc(1, sizeof(uiDrawStrokeParams));
  mruby_gift_uiDrawStrokeParams_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DrawStrokeParams::Cap_reader */
/* sha: 89559c5226a9976bc164b4ac2b75fbdefa550bdd5f9e8e7f45e71c5c75ca6644 */
#if BIND_DrawStrokeParams_Cap_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_Cap(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  uiDrawLineCap native_Cap = native_self->Cap;

  mrb_value Cap = TODO_mruby_box_uiDrawLineCap(mrb, native_Cap);

  return Cap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Cap_writer */
/* sha: 87d01eafb13d41fcff45300e300a26f1c4bc50a8d12af1daa635c712730498a0 */
#if BIND_DrawStrokeParams_Cap_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_Cap(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_value Cap;

  mrb_get_args(mrb, "o", &Cap);

  /* type checking */
  TODO_type_check_uiDrawLineCap(Cap);

  uiDrawLineCap native_Cap = TODO_mruby_unbox_uiDrawLineCap(Cap);

  native_self->Cap = native_Cap;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Join_reader */
/* sha: 9f7030c386078dbd332748f8afe8c5e0dd5e98ce5b6ad63b9dd20c7cfa13ca77 */
#if BIND_DrawStrokeParams_Join_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_Join(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  uiDrawLineJoin native_Join = native_self->Join;

  mrb_value Join = TODO_mruby_box_uiDrawLineJoin(mrb, native_Join);

  return Join;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Join_writer */
/* sha: b5bdbc64ec909b926e93a6442772f92ac71c2c2d3681ff000fe11a1731f55d26 */
#if BIND_DrawStrokeParams_Join_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_Join(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_value Join;

  mrb_get_args(mrb, "o", &Join);

  /* type checking */
  TODO_type_check_uiDrawLineJoin(Join);

  uiDrawLineJoin native_Join = TODO_mruby_unbox_uiDrawLineJoin(Join);

  native_self->Join = native_Join;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Thickness_reader */
/* sha: bc652e72ce1f4907a54872f433f928a6210166498a1b3d8d40e47811cf687456 */
#if BIND_DrawStrokeParams_Thickness_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_Thickness(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_Thickness = native_self->Thickness;

  mrb_value Thickness = mrb_float_value(mrb, native_Thickness);

  return Thickness;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Thickness_writer */
/* sha: 82d56897a020d58e6cf8bf5e8312af1285357dfc488043e1936fd8af969e1ebb */
#if BIND_DrawStrokeParams_Thickness_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_Thickness(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_float native_Thickness;

  mrb_get_args(mrb, "f", &native_Thickness);

  native_self->Thickness = native_Thickness;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::MiterLimit_reader */
/* sha: d6b033af857f9e5eef634c3c8253f0c60f7a7a0f8a689c34e502e4b0f891d56a */
#if BIND_DrawStrokeParams_MiterLimit_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_MiterLimit(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_MiterLimit = native_self->MiterLimit;

  mrb_value MiterLimit = mrb_float_value(mrb, native_MiterLimit);

  return MiterLimit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::MiterLimit_writer */
/* sha: 7fc8ae41ca3ac3db8ac43a4002b3adadb45e48643a30df43e2a552bbafd3ef40 */
#if BIND_DrawStrokeParams_MiterLimit_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_MiterLimit(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_float native_MiterLimit;

  mrb_get_args(mrb, "f", &native_MiterLimit);

  native_self->MiterLimit = native_MiterLimit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Dashes_reader */
/* sha: 426d97bfc8e7d2efbd8e84f4c431fc704015b940a7dbbb2e699ee5955b720de5 */
#if BIND_DrawStrokeParams_Dashes_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_Dashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double * native_Dashes = native_self->Dashes;

  mrb_value Dashes = TODO_mruby_box_double_PTR(mrb, native_Dashes);

  return Dashes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::Dashes_writer */
/* sha: 70ef13cbe6cd6bf96da4e51dbcd304cbe733f9c44a0f69f0abed7c84a81b2c4c */
#if BIND_DrawStrokeParams_Dashes_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_Dashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_value Dashes;

  mrb_get_args(mrb, "o", &Dashes);

  /* type checking */
  TODO_type_check_double_PTR(Dashes);

  double * native_Dashes = TODO_mruby_unbox_double_PTR(Dashes);

  native_self->Dashes = native_Dashes;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::NumDashes_reader */
/* sha: 7925e1cb88ca45b5aa28c56a3149846fb76e15fa320703652bd22eac23797ed2 */
#if BIND_DrawStrokeParams_NumDashes_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_NumDashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  int native_NumDashes = native_self->NumDashes;

  mrb_value NumDashes = mrb_fixnum_value(native_NumDashes);

  return NumDashes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::NumDashes_writer */
/* sha: 67e4887f7bada2061d4f749cab54a5ee427e0c7904d8c95d490ee87389ba3bf4 */
#if BIND_DrawStrokeParams_NumDashes_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_NumDashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_int native_NumDashes;

  mrb_get_args(mrb, "i", &native_NumDashes);

  native_self->NumDashes = native_NumDashes;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::DashPhase_reader */
/* sha: b6d6dfde3042ba5702dcfcdc9684373039da0f44290a5a08d0afa14db9dc0569 */
#if BIND_DrawStrokeParams_DashPhase_FIELD_READER
mrb_value
mrb_UI_DrawStrokeParams_get_DashPhase(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_DashPhase = native_self->DashPhase;

  mrb_value DashPhase = mrb_float_value(mrb, native_DashPhase);

  return DashPhase;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::DashPhase_writer */
/* sha: 574fc8ef0ffecac53600e1701cf6ed4740b43fd048539120bf6fb77fcadd3340 */
#if BIND_DrawStrokeParams_DashPhase_FIELD_WRITER
mrb_value
mrb_UI_DrawStrokeParams_set_DashPhase(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);
  mrb_float native_DashPhase;

  mrb_get_args(mrb, "f", &native_DashPhase);

  native_self->DashPhase = native_DashPhase;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawStrokeParams_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::class_definition */
/* sha: 7177906701d9806d41ea55cec7da494f36c7360a944188ac3ece49a9e9499b52 */
  struct RClass* DrawStrokeParams_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawStrokeParams", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawStrokeParams_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::class_method_definitions */
/* sha: 8f1e853b836f22ed2a4388dcc08d09dec5bf5a601c63ea7e4efae3f58b15074d */
#if BIND_DrawStrokeParams_INITIALIZE
  mrb_define_method(mrb, DrawStrokeParams_class, "initialize", mrb_UI_DrawStrokeParams_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::attr_definitions */
/* sha: 7bf4a0276738896f85ba6a339a0bc77ea43057f9770866b151be85dcf675bfb4 */
  /*
   * Fields
   */
#if BIND_DrawStrokeParams_Cap_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "Cap", mrb_UI_DrawStrokeParams_get_Cap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_Cap_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "Cap=", mrb_UI_DrawStrokeParams_set_Cap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_Join_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "Join", mrb_UI_DrawStrokeParams_get_Join, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_Join_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "Join=", mrb_UI_DrawStrokeParams_set_Join, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_Thickness_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "Thickness", mrb_UI_DrawStrokeParams_get_Thickness, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_Thickness_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "Thickness=", mrb_UI_DrawStrokeParams_set_Thickness, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_MiterLimit_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "MiterLimit", mrb_UI_DrawStrokeParams_get_MiterLimit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_MiterLimit_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "MiterLimit=", mrb_UI_DrawStrokeParams_set_MiterLimit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_Dashes_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "Dashes", mrb_UI_DrawStrokeParams_get_Dashes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_Dashes_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "Dashes=", mrb_UI_DrawStrokeParams_set_Dashes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_NumDashes_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "NumDashes", mrb_UI_DrawStrokeParams_get_NumDashes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_NumDashes_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "NumDashes=", mrb_UI_DrawStrokeParams_set_NumDashes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawStrokeParams_DashPhase_FIELD_READER
  mrb_define_method(mrb, DrawStrokeParams_class, "DashPhase", mrb_UI_DrawStrokeParams_get_DashPhase, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawStrokeParams_DashPhase_FIELD_WRITER
  mrb_define_method(mrb, DrawStrokeParams_class, "DashPhase=", mrb_UI_DrawStrokeParams_set_DashPhase, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawStrokeParams::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
