/*
 * uiAreaKeyEvent
 * Defined in file ui.h @ line 277
 */

#include "mruby_UI.h"

#if BIND_AreaKeyEvent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::initialize */
/* sha: 531aa13b1a989b9df1e8ef4774ef35c3c4233a9252bcb8c786486aaa5d7a4e46 */
#if BIND_AreaKeyEvent_INITIALIZE
mrb_value
mrb_UI_AreaKeyEvent_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiAreaKeyEvent* native_object = (uiAreaKeyEvent*)calloc(1, sizeof(uiAreaKeyEvent));
  mruby_gift_uiAreaKeyEvent_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: AreaKeyEvent::Key_reader */
/* sha: 020b4450e4a1b8744581979fcd33972ce3779b673ea0c8cdc4f0ccc2b88ff0a3 */
#if BIND_AreaKeyEvent_Key_FIELD_READER
mrb_value
mrb_UI_AreaKeyEvent_get_Key(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  char native_Key = native_self->Key;

  mrb_value Key = mrb_fixnum_value(native_Key);

  return Key;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Key_writer */
/* sha: c8f76edb7d4f4127b05df5382e715c4dbeef97dea7720e098ed47efd0e0d0422 */
#if BIND_AreaKeyEvent_Key_FIELD_WRITER
mrb_value
mrb_UI_AreaKeyEvent_set_Key(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);
  mrb_int native_Key;

  mrb_get_args(mrb, "i", &native_Key);

  native_self->Key = native_Key;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::ExtKey_reader */
/* sha: 6ca4649dd5f0b790417ad3db2246b7a14d4909a5f8ea2d4ab1952646d80a65f1 */
#if BIND_AreaKeyEvent_ExtKey_FIELD_READER
mrb_value
mrb_UI_AreaKeyEvent_get_ExtKey(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiExtKey native_ExtKey = native_self->ExtKey;

  mrb_value ExtKey = TODO_mruby_box_uiExtKey(mrb, native_ExtKey);

  return ExtKey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::ExtKey_writer */
/* sha: 96ffd4cf8963c7e5fdff485439a222a929a6a2e9c44ebeedcb36969d95bd7eca */
#if BIND_AreaKeyEvent_ExtKey_FIELD_WRITER
mrb_value
mrb_UI_AreaKeyEvent_set_ExtKey(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);
  mrb_value ExtKey;

  mrb_get_args(mrb, "o", &ExtKey);

  /* type checking */
  TODO_type_check_uiExtKey(ExtKey);

  uiExtKey native_ExtKey = TODO_mruby_unbox_uiExtKey(ExtKey);

  native_self->ExtKey = native_ExtKey;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Modifier_reader */
/* sha: df832375900cb2f8fda5bf5cdfb1d28768fa1141872e88c3eeb711dfca8b3158 */
#if BIND_AreaKeyEvent_Modifier_FIELD_READER
mrb_value
mrb_UI_AreaKeyEvent_get_Modifier(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiModifiers native_Modifier = native_self->Modifier;

  mrb_value Modifier = TODO_mruby_box_uiModifiers(mrb, native_Modifier);

  return Modifier;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Modifier_writer */
/* sha: e57b2b508f7d8f56f2186435e993b6fa2070274d11ed680d529962bff6458e0c */
#if BIND_AreaKeyEvent_Modifier_FIELD_WRITER
mrb_value
mrb_UI_AreaKeyEvent_set_Modifier(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);
  mrb_value Modifier;

  mrb_get_args(mrb, "o", &Modifier);

  /* type checking */
  TODO_type_check_uiModifiers(Modifier);

  uiModifiers native_Modifier = TODO_mruby_unbox_uiModifiers(Modifier);

  native_self->Modifier = native_Modifier;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Modifiers_reader */
/* sha: 0c77843d89da94511cf8b0b296d96178ea1acbbfbf263bbc5f0901a4bf931341 */
#if BIND_AreaKeyEvent_Modifiers_FIELD_READER
mrb_value
mrb_UI_AreaKeyEvent_get_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiModifiers native_Modifiers = native_self->Modifiers;

  mrb_value Modifiers = TODO_mruby_box_uiModifiers(mrb, native_Modifiers);

  return Modifiers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Modifiers_writer */
/* sha: 69ab599eff0fb54d10b4bb63d816b029647023b0f3818ac827b6984fce68f5e9 */
#if BIND_AreaKeyEvent_Modifiers_FIELD_WRITER
mrb_value
mrb_UI_AreaKeyEvent_set_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);
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

/* MRUBY_BINDING: AreaKeyEvent::Up_reader */
/* sha: 969844cfdbc7c9a12e6f57e60ae9c7d3b4866830a6743d85a2d537918a1254df */
#if BIND_AreaKeyEvent_Up_FIELD_READER
mrb_value
mrb_UI_AreaKeyEvent_get_Up(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  int native_Up = native_self->Up;

  mrb_value Up = mrb_fixnum_value(native_Up);

  return Up;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::Up_writer */
/* sha: 5e5d19eb6887a2480af33d0ed8bf9132ff1d62a2e0e1e1a7929b84906c2f792d */
#if BIND_AreaKeyEvent_Up_FIELD_WRITER
mrb_value
mrb_UI_AreaKeyEvent_set_Up(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);
  mrb_int native_Up;

  mrb_get_args(mrb, "i", &native_Up);

  native_self->Up = native_Up;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_AreaKeyEvent_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::class_definition */
/* sha: 68e2ab1a52e332237a778eb84262f759ffa89adfcaefc2b209d1740f511ed83e */
  struct RClass* AreaKeyEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaKeyEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(AreaKeyEvent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::class_method_definitions */
/* sha: 0e98c13b9b9b535f67f62367289fa7337fbaa79432d604c8f95916ed1c0cf1fd */
#if BIND_AreaKeyEvent_INITIALIZE
  mrb_define_method(mrb, AreaKeyEvent_class, "initialize", mrb_UI_AreaKeyEvent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::attr_definitions */
/* sha: 12884cc70821df219c53f24b50d3c47e6d7093f85fcaacafad571623daf446a6 */
  /*
   * Fields
   */
#if BIND_AreaKeyEvent_Key_FIELD_READER
  mrb_define_method(mrb, AreaKeyEvent_class, "Key", mrb_UI_AreaKeyEvent_get_Key, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaKeyEvent_Key_FIELD_WRITER
  mrb_define_method(mrb, AreaKeyEvent_class, "Key=", mrb_UI_AreaKeyEvent_set_Key, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaKeyEvent_ExtKey_FIELD_READER
  mrb_define_method(mrb, AreaKeyEvent_class, "ExtKey", mrb_UI_AreaKeyEvent_get_ExtKey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaKeyEvent_ExtKey_FIELD_WRITER
  mrb_define_method(mrb, AreaKeyEvent_class, "ExtKey=", mrb_UI_AreaKeyEvent_set_ExtKey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaKeyEvent_Modifier_FIELD_READER
  mrb_define_method(mrb, AreaKeyEvent_class, "Modifier", mrb_UI_AreaKeyEvent_get_Modifier, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaKeyEvent_Modifier_FIELD_WRITER
  mrb_define_method(mrb, AreaKeyEvent_class, "Modifier=", mrb_UI_AreaKeyEvent_set_Modifier, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaKeyEvent_Modifiers_FIELD_READER
  mrb_define_method(mrb, AreaKeyEvent_class, "Modifiers", mrb_UI_AreaKeyEvent_get_Modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaKeyEvent_Modifiers_FIELD_WRITER
  mrb_define_method(mrb, AreaKeyEvent_class, "Modifiers=", mrb_UI_AreaKeyEvent_set_Modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaKeyEvent_Up_FIELD_READER
  mrb_define_method(mrb, AreaKeyEvent_class, "Up", mrb_UI_AreaKeyEvent_get_Up, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaKeyEvent_Up_FIELD_WRITER
  mrb_define_method(mrb, AreaKeyEvent_class, "Up=", mrb_UI_AreaKeyEvent_set_Up, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: AreaKeyEvent::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
