/*
 * uiAreaMouseEvent
 * Defined in file ui.h @ line 276
 */

#include "mruby_UI.h"

#if BIND_AreaMouseEvent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::initialize */
/* sha: ea2f59d4422032e32c6888beb00956053a7e6a7337c8814d2730ad76c8aaef07 */
#if BIND_AreaMouseEvent_INITIALIZE
mrb_value
mrb_UI_AreaMouseEvent_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::X_reader */
/* sha: f74142f8dc9a104c50eccce9f116e5e3513b751b2f682661f6940f8dc26e73b7 */
#if BIND_AreaMouseEvent_X_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_X(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_X = native_self->X;

  mrb_value X = mrb_float_value(mrb, native_X);

  return X;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::X_writer */
/* sha: fb96abed3fff09ac7c8877dc435b60e3dc3fb538f95a8db470c07d8761134407 */
#if BIND_AreaMouseEvent_X_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_X(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Y_reader */
/* sha: 39ec57cdabb299bf7eb7878f22b02a6de465b907adfb9845363a0e020e552c72 */
#if BIND_AreaMouseEvent_Y_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Y(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_Y = native_self->Y;

  mrb_value Y = mrb_float_value(mrb, native_Y);

  return Y;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Y_writer */
/* sha: 221bcb350a3073af53eca057cacdd2778539d110061b28fd801a2713e5eca67d */
#if BIND_AreaMouseEvent_Y_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Y(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::AreaWidth_reader */
/* sha: 8204a3c7d4e125ab956f396df98fff48b511f6956d2a5f5c2350a17b4574065c */
#if BIND_AreaMouseEvent_AreaWidth_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_AreaWidth = native_self->AreaWidth;

  mrb_value AreaWidth = mrb_float_value(mrb, native_AreaWidth);

  return AreaWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::AreaWidth_writer */
/* sha: 4272b1ca82c40fd979afc55fffd84e777f534fbf05c2718cb447252166820f43 */
#if BIND_AreaMouseEvent_AreaWidth_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_AreaWidth(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::AreaHeight_reader */
/* sha: 7be444f09d1ccbcb9673134bd191c2c6d4aaf1a92303bc1b05900628489e0435 */
#if BIND_AreaMouseEvent_AreaHeight_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  double native_AreaHeight = native_self->AreaHeight;

  mrb_value AreaHeight = mrb_float_value(mrb, native_AreaHeight);

  return AreaHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::AreaHeight_writer */
/* sha: 97a8080727d6fc4ca863f1fa3ad6d2490fea62229c7e242ac32f408185fca8dc */
#if BIND_AreaMouseEvent_AreaHeight_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_AreaHeight(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Down_reader */
/* sha: 5d91647da8c124891fce7f8fc22b70abb22f6e0de90dee9a4a33f62411a46f3b */
#if BIND_AreaMouseEvent_Down_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Down(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Down = native_self->Down;

  mrb_value Down = mrb_fixnum_value(native_Down);

  return Down;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Down_writer */
/* sha: 2656e41812dc0573341c1a6f2ec5172abb52dde14bdf1ca98bef0e3a3aa8d8de */
#if BIND_AreaMouseEvent_Down_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Down(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Up_reader */
/* sha: 4a16f7d64ebfc3dbccfd59d4b617d739bd40ee61dd250b82c65abfbb48ed6fe4 */
#if BIND_AreaMouseEvent_Up_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Up(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Up = native_self->Up;

  mrb_value Up = mrb_fixnum_value(native_Up);

  return Up;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Up_writer */
/* sha: af936f61d312d45a3cf5a1be9f227aac618ce7d666a04588b71090747074d702 */
#if BIND_AreaMouseEvent_Up_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Up(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Count_reader */
/* sha: a773e58d4ee75a2559a131a5143bfeab4042c420bcde7fbf1f2c50ac71e9c0a7 */
#if BIND_AreaMouseEvent_Count_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Count(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  int native_Count = native_self->Count;

  mrb_value Count = mrb_fixnum_value(native_Count);

  return Count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Count_writer */
/* sha: 87dc3c66e963181d94a401c5165e1c8450f83a43086039f6038ec5713ea35481 */
#if BIND_AreaMouseEvent_Count_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Count(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Modifiers_reader */
/* sha: ffd830664adb9ea8672e8cac69bbfee6535ded126b28ede0b7d99094dad876f1 */
#if BIND_AreaMouseEvent_Modifiers_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  uiModifiers native_Modifiers = native_self->Modifiers;

  mrb_value Modifiers = TODO_mruby_box_uiModifiers(mrb, native_Modifiers);

  return Modifiers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Modifiers_writer */
/* sha: a8a3bfec2d0834b006b239f8788c6523fc8d9158c948f1b91c0512182fd76fe0 */
#if BIND_AreaMouseEvent_Modifiers_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Modifiers(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaMouseEvent::Held1To64_reader */
/* sha: 1c768248f6a3c1a641418d75d367612e9f0da4dd6156efc73aac0ba0524d7216 */
#if BIND_AreaMouseEvent_Held1To64_FIELD_READER
mrb_value
mrb_UI_AreaMouseEvent_get_Held1To64(mrb_state* mrb, mrb_value self) {
  uiAreaMouseEvent * native_self = mruby_unbox_uiAreaMouseEvent(self);

  uint64_t native_Held1To64 = native_self->Held1To64;

  mrb_value Held1To64 = TODO_mruby_box_uint64_t(mrb, native_Held1To64);

  return Held1To64;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::Held1To64_writer */
/* sha: 0c1e2147047544f2fcb9b98ab68b614cd8f620ad782ab3c0e212525f62b852a5 */
#if BIND_AreaMouseEvent_Held1To64_FIELD_WRITER
mrb_value
mrb_UI_AreaMouseEvent_set_Held1To64(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_AreaMouseEvent_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::class_definition */
/* sha: 5e2a75e08e4a455361ac95fa380c4c743daaa3adf7e3c06b5dfb962562346b9a */
  struct RClass* AreaMouseEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaMouseEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(AreaMouseEvent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::class_method_definitions */
/* sha: 9a40d109a3a9339a582c939fea32e10c86330415a984924c882121b3353e7984 */
#if BIND_AreaMouseEvent_INITIALIZE
  mrb_define_method(mrb, AreaMouseEvent_class, "initialize", mrb_UI_AreaMouseEvent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::attr_definitions */
/* sha: 6ff1475a58205ef2c26af52cd8893f6a09a982d85c9833678de229e1e8f3b9dc */
  /*
   * Fields
   */
#if BIND_AreaMouseEvent_X_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "X", mrb_UI_AreaMouseEvent_get_X, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_X_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "X=", mrb_UI_AreaMouseEvent_set_X, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Y_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Y", mrb_UI_AreaMouseEvent_get_Y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Y_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Y=", mrb_UI_AreaMouseEvent_set_Y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_AreaWidth_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "AreaWidth", mrb_UI_AreaMouseEvent_get_AreaWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_AreaWidth_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "AreaWidth=", mrb_UI_AreaMouseEvent_set_AreaWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_AreaHeight_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "AreaHeight", mrb_UI_AreaMouseEvent_get_AreaHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_AreaHeight_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "AreaHeight=", mrb_UI_AreaMouseEvent_set_AreaHeight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Down_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Down", mrb_UI_AreaMouseEvent_get_Down, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Down_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Down=", mrb_UI_AreaMouseEvent_set_Down, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Up_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Up", mrb_UI_AreaMouseEvent_get_Up, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Up_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Up=", mrb_UI_AreaMouseEvent_set_Up, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Count_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Count", mrb_UI_AreaMouseEvent_get_Count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Count_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Count=", mrb_UI_AreaMouseEvent_set_Count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Modifiers_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Modifiers", mrb_UI_AreaMouseEvent_get_Modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Modifiers_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Modifiers=", mrb_UI_AreaMouseEvent_set_Modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaMouseEvent_Held1To64_FIELD_READER
  mrb_define_method(mrb, AreaMouseEvent_class, "Held1To64", mrb_UI_AreaMouseEvent_get_Held1To64, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaMouseEvent_Held1To64_FIELD_WRITER
  mrb_define_method(mrb, AreaMouseEvent_class, "Held1To64=", mrb_UI_AreaMouseEvent_set_Held1To64, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: AreaMouseEvent::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
