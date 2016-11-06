/*
 * uiAreaMouseEvent
 * Defined in file ui.h @ line 276
 */

#include "mruby_UI.h"

#if BIND_UiAreaMouseEvent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::initialize */
/* sha: 1f196ddffc3e7c1a0f5f199c695506a1356b92317042cfc81c82c792affb919d */
#if BIND_UiAreaMouseEvent_INITIALIZE
mrb_value
mrb_UI_UiAreaMouseEvent_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiAreaMouseEvent* native_object = (uiAreaMouseEvent*)calloc(1, sizeof(uiAreaMouseEvent));
  mruby_gift_uiAreaMouseEvent_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiAreaMouseEvent::X_reader */
/* sha: f622b4af0f870cd736964a53f06fd3836e700948c77d2c6d470015aa77a6eea8 */
#if BIND_UiAreaMouseEvent_X_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_X(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_X = native_self->X;

  mrb_value X = mrb_float_value(mrb, native_X);

  return X;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::X_writer */
/* sha: 79babbb811d8f2ce1fa652026ddf616ba7c24ce3eeceb8fbabe0eb56767a27c1 */
#if BIND_UiAreaMouseEvent_X_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_X(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_float native_X;

  mrb_get_args(mrb, "f", &native_X);

  native_self->X = native_X;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Y_reader */
/* sha: 903f887681524daffc93d90db160cc321a3ba2232e8fa4b5cda8be02fed4091e */
#if BIND_UiAreaMouseEvent_Y_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Y(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_Y = native_self->Y;

  mrb_value Y = mrb_float_value(mrb, native_Y);

  return Y;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Y_writer */
/* sha: 9194b784b211a5667c5e4c00097a2bb1e452d0012b862b5c556b9d2ce19cf7ea */
#if BIND_UiAreaMouseEvent_Y_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Y(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_float native_Y;

  mrb_get_args(mrb, "f", &native_Y);

  native_self->Y = native_Y;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::AreaWidth_reader */
/* sha: 8fb8f84ef4e6c91ad6b057d9047dc09cae1d437917ed5fbc8ff1105b2353f4be */
#if BIND_UiAreaMouseEvent_AreaWidth_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_AreaWidth = native_self->AreaWidth;

  mrb_value AreaWidth = mrb_float_value(mrb, native_AreaWidth);

  return AreaWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::AreaWidth_writer */
/* sha: 1e14d67a76ebab7d9e64827be30dbacaeaa08a3dd5650fd6676c8c70055c30ce */
#if BIND_UiAreaMouseEvent_AreaWidth_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_float native_AreaWidth;

  mrb_get_args(mrb, "f", &native_AreaWidth);

  native_self->AreaWidth = native_AreaWidth;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::AreaHeight_reader */
/* sha: 3702c49c3d4a73d3cc4a487346761f8db4957b97f8da853cc6bb1a27670a6706 */
#if BIND_UiAreaMouseEvent_AreaHeight_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_AreaHeight = native_self->AreaHeight;

  mrb_value AreaHeight = mrb_float_value(mrb, native_AreaHeight);

  return AreaHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::AreaHeight_writer */
/* sha: 7214bf8d650b98ed0f0f0756d4676c767ca7ff1eebf75cfdea1a93cc7b1e5027 */
#if BIND_UiAreaMouseEvent_AreaHeight_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_float native_AreaHeight;

  mrb_get_args(mrb, "f", &native_AreaHeight);

  native_self->AreaHeight = native_AreaHeight;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Down_reader */
/* sha: 6db668e39fa16c8325cb02c3b41d14d1ba79404cae1d2e77b29d70826d5a69f7 */
#if BIND_UiAreaMouseEvent_Down_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Down(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Down = native_self->Down;

  mrb_value Down = mrb_fixnum_value(native_Down);

  return Down;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Down_writer */
/* sha: 78274ea2be3ec8da060b1df7b814bc8fbdfd83ba77d4a82a73859686b595fec4 */
#if BIND_UiAreaMouseEvent_Down_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Down(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_int native_Down;

  mrb_get_args(mrb, "i", &native_Down);

  native_self->Down = native_Down;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Up_reader */
/* sha: 5bce07dfc11f48b4d47ae7905c753a4b6c31300893871b661e9e348ec86dbf18 */
#if BIND_UiAreaMouseEvent_Up_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Up(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Up = native_self->Up;

  mrb_value Up = mrb_fixnum_value(native_Up);

  return Up;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Up_writer */
/* sha: 9ba6e091283ffd7edbd824fb5a92b8c417d7398148c701a0b466db545791fbd0 */
#if BIND_UiAreaMouseEvent_Up_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Up(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_int native_Up;

  mrb_get_args(mrb, "i", &native_Up);

  native_self->Up = native_Up;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Count_reader */
/* sha: 520483636b8932d1a6a33cf96384607efe83e39451a81640ffb83aecbb6ce40b */
#if BIND_UiAreaMouseEvent_Count_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Count(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Count = native_self->Count;

  mrb_value Count = mrb_fixnum_value(native_Count);

  return Count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Count_writer */
/* sha: 266079ba86e7f23bf82eb6e481adb915892eb1438070444771a276cb4b30183e */
#if BIND_UiAreaMouseEvent_Count_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Count(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_int native_Count;

  mrb_get_args(mrb, "i", &native_Count);

  native_self->Count = native_Count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Modifiers_reader */
/* sha: 6dfd0f0bf424af37818af9ce8effe1052cecd2329e9bc34c8a98fd24e741d5ce */
#if BIND_UiAreaMouseEvent_Modifiers_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  uiModifiers native_Modifiers = native_self->Modifiers;

  mrb_value Modifiers = TODO_mruby_box_uiModifiers(mrb, native_Modifiers);

  return Modifiers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Modifiers_writer */
/* sha: 5f074363f32ae89c8f594b75c569589c86fe8535b3afe00338ccac24d179cfcd */
#if BIND_UiAreaMouseEvent_Modifiers_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_value Modifiers;

  mrb_get_args(mrb, "o", &Modifiers);

  /* type checking */
  TODO_type_check_uiModifiers(Modifiers);

  uiModifiers native_Modifiers = TODO_mruby_unbox_uiModifiers(Modifiers);

  native_self->Modifiers = native_Modifiers;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Held1To64_reader */
/* sha: 9d21b2b5038cabe70cad3eb2c9af60ac229262a6dcc8b3d7d5383d78c04431a7 */
#if BIND_UiAreaMouseEvent_Held1To64_FIELD_READER
mrb_value
mrb_UI_UiAreaMouseEvent_get_Held1To64(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  uint64_t native_Held1To64 = native_self->Held1To64;

  mrb_value Held1To64 = TODO_mruby_box_uint64_t(mrb, native_Held1To64);

  return Held1To64;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::Held1To64_writer */
/* sha: 5a67c81f8f04edf62d62ca3a7079bad01f998b7a66c019fd43a8b751264f4089 */
#if BIND_UiAreaMouseEvent_Held1To64_FIELD_WRITER
mrb_value
mrb_UI_UiAreaMouseEvent_set_Held1To64(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);
  mrb_value Held1To64;

  mrb_get_args(mrb, "o", &Held1To64);

  /* type checking */
  TODO_type_check_uint64_t(Held1To64);

  uint64_t native_Held1To64 = TODO_mruby_unbox_uint64_t(Held1To64);

  native_self->Held1To64 = native_Held1To64;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiAreaMouseEvent_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::class_definition */
/* sha: 8b20808c32930abb2a061653a66cdd3667bd0786ef7e73991495cc28843b978e */
  struct RClass* UiAreaMouseEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "UiAreaMouseEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiAreaMouseEvent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::class_method_definitions */
/* sha: 33f9500226bf351ff41493e1f6040786e62d3dd0af525f528370e55ba781d355 */
#if BIND_UiAreaMouseEvent_INITIALIZE
  mrb_define_method(mrb, UiAreaMouseEvent_class, "initialize", mrb_UI_UiAreaMouseEvent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaMouseEvent::attr_definitions */
/* sha: cf4563c3aee0916e3d993b49924efbbc64e30f83c65af587e3a4dba00bde10cc */
  /*
   * Fields
   */
#if BIND_UiAreaMouseEvent_X_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "X", mrb_UI_UiAreaMouseEvent_get_X, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_X_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "X=", mrb_UI_UiAreaMouseEvent_set_X, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Y_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Y", mrb_UI_UiAreaMouseEvent_get_Y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Y_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Y=", mrb_UI_UiAreaMouseEvent_set_Y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_AreaWidth_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "AreaWidth", mrb_UI_UiAreaMouseEvent_get_AreaWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_AreaWidth_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "AreaWidth=", mrb_UI_UiAreaMouseEvent_set_AreaWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_AreaHeight_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "AreaHeight", mrb_UI_UiAreaMouseEvent_get_AreaHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_AreaHeight_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "AreaHeight=", mrb_UI_UiAreaMouseEvent_set_AreaHeight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Down_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Down", mrb_UI_UiAreaMouseEvent_get_Down, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Down_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Down=", mrb_UI_UiAreaMouseEvent_set_Down, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Up_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Up", mrb_UI_UiAreaMouseEvent_get_Up, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Up_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Up=", mrb_UI_UiAreaMouseEvent_set_Up, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Count_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Count", mrb_UI_UiAreaMouseEvent_get_Count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Count_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Count=", mrb_UI_UiAreaMouseEvent_set_Count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Modifiers_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Modifiers", mrb_UI_UiAreaMouseEvent_get_Modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Modifiers_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Modifiers=", mrb_UI_UiAreaMouseEvent_set_Modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaMouseEvent_Held1To64_FIELD_READER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Held1To64", mrb_UI_UiAreaMouseEvent_get_Held1To64, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaMouseEvent_Held1To64_FIELD_WRITER
  mrb_define_method(mrb, UiAreaMouseEvent_class, "Held1To64=", mrb_UI_UiAreaMouseEvent_set_Held1To64, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiAreaMouseEvent::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
