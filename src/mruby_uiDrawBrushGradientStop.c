/*
 * uiDrawBrushGradientStop
 * Defined in file ui.h @ line 343
 */

#include "mruby_UI.h"

#if BIND_DrawBrushGradientStop_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::initialize */
/* sha: 5140f942c7d3f797046cb111588ed7cd24ac37094072d48af904e76842f7fce3 */
#if BIND_DrawBrushGradientStop_INITIALIZE
mrb_value
mrb_UI_DrawBrushGradientStop_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawBrushGradientStop::Pos_reader */
/* sha: f46b3f4fa9590ebcda419b0495076edf6d392a9fe8876d9413ce05bae52d56e0 */
#if BIND_DrawBrushGradientStop_Pos_FIELD_READER
mrb_value
mrb_UI_DrawBrushGradientStop_get_Pos(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_Pos = native_self->Pos;

  mrb_value Pos = mrb_float_value(mrb, native_Pos);

  return Pos;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::Pos_writer */
/* sha: 1b4cdc327432e02ab6c76258c3af0514bdd9fc881ec6eddde6c46afea6d4fb32 */
#if BIND_DrawBrushGradientStop_Pos_FIELD_WRITER
mrb_value
mrb_UI_DrawBrushGradientStop_set_Pos(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawBrushGradientStop::R_reader */
/* sha: 989a9871eba8a276de9d2e6c7df46320d3e7ff7d824b94e05f8cb28dae03f49b */
#if BIND_DrawBrushGradientStop_R_FIELD_READER
mrb_value
mrb_UI_DrawBrushGradientStop_get_R(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_R = native_self->R;

  mrb_value R = mrb_float_value(mrb, native_R);

  return R;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::R_writer */
/* sha: 029801f70f8236e0ffd74ba657b0fc0e89547a1ae68e5ddf9c1fc6a5ef8b8e1c */
#if BIND_DrawBrushGradientStop_R_FIELD_WRITER
mrb_value
mrb_UI_DrawBrushGradientStop_set_R(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawBrushGradientStop::G_reader */
/* sha: 473536c9e4cb51b9c460c6580843a5b94e26456f420506b706dce9da72014921 */
#if BIND_DrawBrushGradientStop_G_FIELD_READER
mrb_value
mrb_UI_DrawBrushGradientStop_get_G(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_G = native_self->G;

  mrb_value G = mrb_float_value(mrb, native_G);

  return G;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::G_writer */
/* sha: aabd4b7a65732c5c559edd7761091f3305cf18a81b33aa279e4533881443c52e */
#if BIND_DrawBrushGradientStop_G_FIELD_WRITER
mrb_value
mrb_UI_DrawBrushGradientStop_set_G(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawBrushGradientStop::B_reader */
/* sha: 7c80b3f043b04f60b7d2d7cd1dfa34d6e057a3381fe3b2e41872ad830d217c9d */
#if BIND_DrawBrushGradientStop_B_FIELD_READER
mrb_value
mrb_UI_DrawBrushGradientStop_get_B(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_B = native_self->B;

  mrb_value B = mrb_float_value(mrb, native_B);

  return B;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::B_writer */
/* sha: c364d329fd0f748d3bbe56b9b13cd5f19f000a29d68056a7307e1a58664cb9ba */
#if BIND_DrawBrushGradientStop_B_FIELD_WRITER
mrb_value
mrb_UI_DrawBrushGradientStop_set_B(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawBrushGradientStop::A_reader */
/* sha: 0c5c8c64d53c004ad2614b7b7eb2596a4629ba454cf962e4936ed1c2401cdb54 */
#if BIND_DrawBrushGradientStop_A_FIELD_READER
mrb_value
mrb_UI_DrawBrushGradientStop_get_A(mrb_state* mrb, mrb_value self) {
  uiDrawBrushGradientStop * native_self = mruby_unbox_uiDrawBrushGradientStop(self);

  double native_A = native_self->A;

  mrb_value A = mrb_float_value(mrb, native_A);

  return A;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::A_writer */
/* sha: 4ef6eb62024f303d0ea8bfcddbf3db570b2b6a87b38be636ee1d147083dd3500 */
#if BIND_DrawBrushGradientStop_A_FIELD_WRITER
mrb_value
mrb_UI_DrawBrushGradientStop_set_A(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_DrawBrushGradientStop_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::class_definition */
/* sha: dc249582b47a353b2d0139521421f99cdab8f8acfb22eec050828506be13a38b */
  struct RClass* DrawBrushGradientStop_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrushGradientStop", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawBrushGradientStop_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::class_method_definitions */
/* sha: a9add2ed27ae8a0afb542b733ef52e502855499d233af93288668108a6af0050 */
#if BIND_DrawBrushGradientStop_INITIALIZE
  mrb_define_method(mrb, DrawBrushGradientStop_class, "initialize", mrb_UI_DrawBrushGradientStop_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::attr_definitions */
/* sha: 6ef619fe82a427c9ec9feb627bd62bd9bea15b1f2ec7684ab7a21dd4b0e4694e */
  /*
   * Fields
   */
#if BIND_DrawBrushGradientStop_Pos_FIELD_READER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "Pos", mrb_UI_DrawBrushGradientStop_get_Pos, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrushGradientStop_Pos_FIELD_WRITER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "Pos=", mrb_UI_DrawBrushGradientStop_set_Pos, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrushGradientStop_R_FIELD_READER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "R", mrb_UI_DrawBrushGradientStop_get_R, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrushGradientStop_R_FIELD_WRITER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "R=", mrb_UI_DrawBrushGradientStop_set_R, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrushGradientStop_G_FIELD_READER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "G", mrb_UI_DrawBrushGradientStop_get_G, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrushGradientStop_G_FIELD_WRITER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "G=", mrb_UI_DrawBrushGradientStop_set_G, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrushGradientStop_B_FIELD_READER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "B", mrb_UI_DrawBrushGradientStop_get_B, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrushGradientStop_B_FIELD_WRITER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "B=", mrb_UI_DrawBrushGradientStop_set_B, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawBrushGradientStop_A_FIELD_READER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "A", mrb_UI_DrawBrushGradientStop_get_A, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawBrushGradientStop_A_FIELD_WRITER
  mrb_define_method(mrb, DrawBrushGradientStop_class, "A=", mrb_UI_DrawBrushGradientStop_set_A, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawBrushGradientStop::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
