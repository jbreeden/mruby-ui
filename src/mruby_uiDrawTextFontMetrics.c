/*
 * uiDrawTextFontMetrics
 * Defined in file ui.h @ line 492
 */

#include "mruby_UI.h"

#if BIND_DrawTextFontMetrics_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::initialize */
/* sha: 0a4167e205fdca2a2150d59e53244d5a47eedcc085f46f85536f3fb34cc11f6c */
#if BIND_DrawTextFontMetrics_INITIALIZE
mrb_value
mrb_UI_DrawTextFontMetrics_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontMetrics::Ascent_reader */
/* sha: 6d81aa17f5b0f167cb722466c54597bf53a50aa558a09efb80608bb81c622c39 */
#if BIND_DrawTextFontMetrics_Ascent_FIELD_READER
mrb_value
mrb_UI_DrawTextFontMetrics_get_Ascent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Ascent = native_self->Ascent;

  mrb_value Ascent = mrb_float_value(mrb, native_Ascent);

  return Ascent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::Ascent_writer */
/* sha: ce51f4bdc51d539799928ee29b20d0b6f6ef050f1f33dad1f6764d698ef4c3ce */
#if BIND_DrawTextFontMetrics_Ascent_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontMetrics_set_Ascent(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontMetrics::Descent_reader */
/* sha: dcfa3125dfa46bbeae10949dc0ed88556625cc80034c6b7e9d26787a8c0557fb */
#if BIND_DrawTextFontMetrics_Descent_FIELD_READER
mrb_value
mrb_UI_DrawTextFontMetrics_get_Descent(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Descent = native_self->Descent;

  mrb_value Descent = mrb_float_value(mrb, native_Descent);

  return Descent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::Descent_writer */
/* sha: 09a85435015a25df84d847a0eee0f59043789cc1a1afd89f2616a5c689afb88b */
#if BIND_DrawTextFontMetrics_Descent_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontMetrics_set_Descent(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontMetrics::Leading_reader */
/* sha: ff981cbb10976e3745e50850ee23f0470a2fc2256c0ca19c4e398ee6c08c9536 */
#if BIND_DrawTextFontMetrics_Leading_FIELD_READER
mrb_value
mrb_UI_DrawTextFontMetrics_get_Leading(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_Leading = native_self->Leading;

  mrb_value Leading = mrb_float_value(mrb, native_Leading);

  return Leading;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::Leading_writer */
/* sha: f850ca81072777f6143d5880fed8b805dacd83f353c775508e0190a5d2721884 */
#if BIND_DrawTextFontMetrics_Leading_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontMetrics_set_Leading(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontMetrics::UnderlinePos_reader */
/* sha: d4a1d9664aebd4815fd8df09561ad5e82d7f1683fb7a532e8fd0671f9bbbe331 */
#if BIND_DrawTextFontMetrics_UnderlinePos_FIELD_READER
mrb_value
mrb_UI_DrawTextFontMetrics_get_UnderlinePos(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_UnderlinePos = native_self->UnderlinePos;

  mrb_value UnderlinePos = mrb_float_value(mrb, native_UnderlinePos);

  return UnderlinePos;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::UnderlinePos_writer */
/* sha: 8468489fd1c1e66b05252d1272104fb752657074ea653a0dab327ea04f6ec009 */
#if BIND_DrawTextFontMetrics_UnderlinePos_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontMetrics_set_UnderlinePos(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: DrawTextFontMetrics::UnderlineThickness_reader */
/* sha: 6d3b846ef027269303bcbb057d46175e08660697ecdca18257e4379b44bb4c03 */
#if BIND_DrawTextFontMetrics_UnderlineThickness_FIELD_READER
mrb_value
mrb_UI_DrawTextFontMetrics_get_UnderlineThickness(mrb_state* mrb, mrb_value self) {
  uiDrawTextFontMetrics * native_self = mruby_unbox_uiDrawTextFontMetrics(self);

  double native_UnderlineThickness = native_self->UnderlineThickness;

  mrb_value UnderlineThickness = mrb_float_value(mrb, native_UnderlineThickness);

  return UnderlineThickness;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::UnderlineThickness_writer */
/* sha: c25a7bf8c821c0d81c0a67bc8452ed3941bfc706964e0325170344fc3585925f */
#if BIND_DrawTextFontMetrics_UnderlineThickness_FIELD_WRITER
mrb_value
mrb_UI_DrawTextFontMetrics_set_UnderlineThickness(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_DrawTextFontMetrics_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::class_definition */
/* sha: f4a01aafb9130a821b1428632805d910580854334d3461ca12fc89d220fdae17 */
  struct RClass* DrawTextFontMetrics_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontMetrics", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawTextFontMetrics_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::class_method_definitions */
/* sha: fadbaf993f1c299285213dcd5c83f53d1fe8191edb1a4a189be2dfb6ef7e5f5a */
#if BIND_DrawTextFontMetrics_INITIALIZE
  mrb_define_method(mrb, DrawTextFontMetrics_class, "initialize", mrb_UI_DrawTextFontMetrics_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::attr_definitions */
/* sha: 1411f175eb81d58bf9570023789adb71645b46d75a7323bf7b8a6a7415661bc8 */
  /*
   * Fields
   */
#if BIND_DrawTextFontMetrics_Ascent_FIELD_READER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Ascent", mrb_UI_DrawTextFontMetrics_get_Ascent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontMetrics_Ascent_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Ascent=", mrb_UI_DrawTextFontMetrics_set_Ascent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontMetrics_Descent_FIELD_READER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Descent", mrb_UI_DrawTextFontMetrics_get_Descent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontMetrics_Descent_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Descent=", mrb_UI_DrawTextFontMetrics_set_Descent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontMetrics_Leading_FIELD_READER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Leading", mrb_UI_DrawTextFontMetrics_get_Leading, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontMetrics_Leading_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "Leading=", mrb_UI_DrawTextFontMetrics_set_Leading, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontMetrics_UnderlinePos_FIELD_READER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "UnderlinePos", mrb_UI_DrawTextFontMetrics_get_UnderlinePos, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontMetrics_UnderlinePos_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "UnderlinePos=", mrb_UI_DrawTextFontMetrics_set_UnderlinePos, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DrawTextFontMetrics_UnderlineThickness_FIELD_READER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "UnderlineThickness", mrb_UI_DrawTextFontMetrics_get_UnderlineThickness, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DrawTextFontMetrics_UnderlineThickness_FIELD_WRITER
  mrb_define_method(mrb, DrawTextFontMetrics_class, "UnderlineThickness=", mrb_UI_DrawTextFontMetrics_set_UnderlineThickness, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: DrawTextFontMetrics::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
