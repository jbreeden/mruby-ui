/*
 * uiDrawStrokeParams
 * Defined in file ui.h @ line 340
 */

#include "mruby_UI.h"

#if BIND_UiDrawStrokeParams_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::initialize */
/* sha: 224c0cab5f541511c89ce79130b0e8f85cd611d317fd38c9cb1ccffa947713d0 */
#if BIND_UiDrawStrokeParams_INITIALIZE
mrb_value
mrb_UI_UiDrawStrokeParams_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::Cap_reader */
/* sha: d7e04446589f8d356c44b7afeeeba742ccdaae82c9f7d9901aa5e18868414fb8 */
#if BIND_UiDrawStrokeParams_Cap_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_Cap(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  uiDrawLineCap native_Cap = native_self->Cap;

  mrb_value Cap = TODO_mruby_box_uiDrawLineCap(mrb, native_Cap);

  return Cap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::Cap_writer */
/* sha: e98beeac2510a847a33ea4fb0c175c4a4d33a8a725665ead87a23d1a95a02ebd */
#if BIND_UiDrawStrokeParams_Cap_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_Cap(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::Join_reader */
/* sha: 521cd8842cb92e02cd4863befbf6b2011fcb11e84b4b886deb5fba559fe5f7d1 */
#if BIND_UiDrawStrokeParams_Join_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_Join(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  uiDrawLineJoin native_Join = native_self->Join;

  mrb_value Join = TODO_mruby_box_uiDrawLineJoin(mrb, native_Join);

  return Join;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::Join_writer */
/* sha: 7b37ad0f93da335daa95976d429aebf4300a258bf35d875485fe9726df256226 */
#if BIND_UiDrawStrokeParams_Join_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_Join(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::Thickness_reader */
/* sha: 4f92b7b3a8f4dd09ac5ae5f7a3af4690dbd084ca4141bf4ffaf38c3e06501dd4 */
#if BIND_UiDrawStrokeParams_Thickness_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_Thickness(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_Thickness = native_self->Thickness;

  mrb_value Thickness = mrb_float_value(mrb, native_Thickness);

  return Thickness;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::Thickness_writer */
/* sha: 5df9afb48b3aff8fb389197ed56962c07c1b4cc56bd40c1932b3cdaa96907377 */
#if BIND_UiDrawStrokeParams_Thickness_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_Thickness(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::MiterLimit_reader */
/* sha: ed66d7148349240532d9ff56a189bec73b7b09564e6b09d05f964b1bbf2899c1 */
#if BIND_UiDrawStrokeParams_MiterLimit_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_MiterLimit(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_MiterLimit = native_self->MiterLimit;

  mrb_value MiterLimit = mrb_float_value(mrb, native_MiterLimit);

  return MiterLimit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::MiterLimit_writer */
/* sha: 8d2c49b2dcfa962e4f338ac3e7e23716ae72b62e630073542be6d39240bd0a52 */
#if BIND_UiDrawStrokeParams_MiterLimit_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_MiterLimit(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::Dashes_reader */
/* sha: 5307a406f1e2df9a852bba6c26ed19e29b414f602bcccf8b04dc0a0f68d68b78 */
#if BIND_UiDrawStrokeParams_Dashes_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_Dashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double * native_Dashes = native_self->Dashes;

  mrb_value Dashes = TODO_mruby_box_double_PTR(mrb, native_Dashes);

  return Dashes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::Dashes_writer */
/* sha: cf03ea8152319917122465666b6d94612107dbcd2548e625149bd25bc8ce83ad */
#if BIND_UiDrawStrokeParams_Dashes_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_Dashes(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::NumDashes_reader */
/* sha: fda1e5de757301cc0597f91c8f85d79478ab02208d0b8a7d3f04549c9712ec87 */
#if BIND_UiDrawStrokeParams_NumDashes_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_NumDashes(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  int native_NumDashes = native_self->NumDashes;

  mrb_value NumDashes = mrb_fixnum_value(native_NumDashes);

  return NumDashes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::NumDashes_writer */
/* sha: 3b243e4e7274e86fbf5a6fc63b6564c11bdbaf6e6e0fb7059d2661d8ba840daa */
#if BIND_UiDrawStrokeParams_NumDashes_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_NumDashes(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiDrawStrokeParams::DashPhase_reader */
/* sha: 261f3797f9d4688dd7d31df94727b0d8a3118708b6425bb557e6d4ef2d785df8 */
#if BIND_UiDrawStrokeParams_DashPhase_FIELD_READER
mrb_value
mrb_UI_UiDrawStrokeParams_get_DashPhase(mrb_state* mrb, mrb_value self) {
  uiDrawStrokeParams * native_self = mruby_unbox_uiDrawStrokeParams(self);

  double native_DashPhase = native_self->DashPhase;

  mrb_value DashPhase = mrb_float_value(mrb, native_DashPhase);

  return DashPhase;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::DashPhase_writer */
/* sha: 8a9ab72c0b357b3c282855789e1fd8276e8b0717acc356e676b89fd150c7fec7 */
#if BIND_UiDrawStrokeParams_DashPhase_FIELD_WRITER
mrb_value
mrb_UI_UiDrawStrokeParams_set_DashPhase(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_UiDrawStrokeParams_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::class_definition */
/* sha: a1c1eb5c5ad281e35cf9771f2136fed3d8f6edef0ce41442ca86e365e494a7bc */
  struct RClass* UiDrawStrokeParams_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawStrokeParams", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawStrokeParams_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::class_method_definitions */
/* sha: 906263be7420b602c5fa5124f716278d1fc7f0d62184b5dfed7046f45a622b96 */
#if BIND_UiDrawStrokeParams_INITIALIZE
  mrb_define_method(mrb, UiDrawStrokeParams_class, "initialize", mrb_UI_UiDrawStrokeParams_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawStrokeParams::attr_definitions */
/* sha: c18d4c66a218f795359b97624684217a28b7c0d55153a11d6c4040022977de03 */
  /*
   * Fields
   */
#if BIND_UiDrawStrokeParams_Cap_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Cap", mrb_UI_UiDrawStrokeParams_get_Cap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_Cap_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Cap=", mrb_UI_UiDrawStrokeParams_set_Cap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_Join_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Join", mrb_UI_UiDrawStrokeParams_get_Join, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_Join_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Join=", mrb_UI_UiDrawStrokeParams_set_Join, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_Thickness_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Thickness", mrb_UI_UiDrawStrokeParams_get_Thickness, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_Thickness_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Thickness=", mrb_UI_UiDrawStrokeParams_set_Thickness, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_MiterLimit_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "MiterLimit", mrb_UI_UiDrawStrokeParams_get_MiterLimit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_MiterLimit_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "MiterLimit=", mrb_UI_UiDrawStrokeParams_set_MiterLimit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_Dashes_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Dashes", mrb_UI_UiDrawStrokeParams_get_Dashes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_Dashes_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "Dashes=", mrb_UI_UiDrawStrokeParams_set_Dashes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_NumDashes_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "NumDashes", mrb_UI_UiDrawStrokeParams_get_NumDashes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_NumDashes_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "NumDashes=", mrb_UI_UiDrawStrokeParams_set_NumDashes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiDrawStrokeParams_DashPhase_FIELD_READER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "DashPhase", mrb_UI_UiDrawStrokeParams_get_DashPhase, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiDrawStrokeParams_DashPhase_FIELD_WRITER
  mrb_define_method(mrb, UiDrawStrokeParams_class, "DashPhase=", mrb_UI_UiDrawStrokeParams_set_DashPhase, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiDrawStrokeParams::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
