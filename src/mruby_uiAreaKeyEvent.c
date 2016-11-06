/*
 * uiAreaKeyEvent
 * Defined in file ui.h @ line 277
 */

#include "mruby_UI.h"

#if BIND_UiAreaKeyEvent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::initialize */
/* sha: 4c600a482c6bbdc20e6c4b90ebaadc5a79faa7aa14d16156c8928e34388d000a */
#if BIND_UiAreaKeyEvent_INITIALIZE
mrb_value
mrb_UI_UiAreaKeyEvent_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiAreaKeyEvent::Key_reader */
/* sha: 278e6cd38679667af5c54dc01d84efcc88dd68cbd19d4efea97ed4515be2df2c */
#if BIND_UiAreaKeyEvent_Key_FIELD_READER
mrb_value
mrb_UI_UiAreaKeyEvent_get_Key(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  char native_Key = native_self->Key;

  mrb_value Key = mrb_fixnum_value(native_Key);

  return Key;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::Key_writer */
/* sha: 4287010398cd9d49b1b18c6b4c486c823d59f271aa9191d584be0aa129ed6a8c */
#if BIND_UiAreaKeyEvent_Key_FIELD_WRITER
mrb_value
mrb_UI_UiAreaKeyEvent_set_Key(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiAreaKeyEvent::ExtKey_reader */
/* sha: 883ea57cd3cd3d557776a460323ddd92fff647561e868de898c73b90048d01a6 */
#if BIND_UiAreaKeyEvent_ExtKey_FIELD_READER
mrb_value
mrb_UI_UiAreaKeyEvent_get_ExtKey(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiExtKey native_ExtKey = native_self->ExtKey;

  mrb_value ExtKey = TODO_mruby_box_uiExtKey(mrb, native_ExtKey);

  return ExtKey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::ExtKey_writer */
/* sha: f1a80ed4599f52f8ac3dadeefb82fe63fd88cfcb452d4c1de798095d4b196229 */
#if BIND_UiAreaKeyEvent_ExtKey_FIELD_WRITER
mrb_value
mrb_UI_UiAreaKeyEvent_set_ExtKey(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiAreaKeyEvent::Modifier_reader */
/* sha: b55e78452c53202f5c93d49744589d9bed13e9540e54465175fbdea5c465b02a */
#if BIND_UiAreaKeyEvent_Modifier_FIELD_READER
mrb_value
mrb_UI_UiAreaKeyEvent_get_Modifier(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiModifiers native_Modifier = native_self->Modifier;

  mrb_value Modifier = TODO_mruby_box_uiModifiers(mrb, native_Modifier);

  return Modifier;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::Modifier_writer */
/* sha: 66a693c37e518d8857b5f77e5989daf14c926cd7c93c8a60e72a5708f7b6cf6d */
#if BIND_UiAreaKeyEvent_Modifier_FIELD_WRITER
mrb_value
mrb_UI_UiAreaKeyEvent_set_Modifier(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiAreaKeyEvent::Modifiers_reader */
/* sha: 3a5032c6713944771910be9a490a2364465dd765ad001293658aed72f2b05f23 */
#if BIND_UiAreaKeyEvent_Modifiers_FIELD_READER
mrb_value
mrb_UI_UiAreaKeyEvent_get_Modifiers(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  uiModifiers native_Modifiers = native_self->Modifiers;

  mrb_value Modifiers = TODO_mruby_box_uiModifiers(mrb, native_Modifiers);

  return Modifiers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::Modifiers_writer */
/* sha: 64f2fc6a6175237091e39b10837810bc8ec063669efa7a6e0b7facce7c8a8c05 */
#if BIND_UiAreaKeyEvent_Modifiers_FIELD_WRITER
mrb_value
mrb_UI_UiAreaKeyEvent_set_Modifiers(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UiAreaKeyEvent::Up_reader */
/* sha: 83b77f3c36a1d4c4129257d011200b7f0b64670c5d82b62645dedf1328f769bd */
#if BIND_UiAreaKeyEvent_Up_FIELD_READER
mrb_value
mrb_UI_UiAreaKeyEvent_get_Up(mrb_state* mrb, mrb_value self) {
  uiAreaKeyEvent * native_self = mruby_unbox_uiAreaKeyEvent(self);

  int native_Up = native_self->Up;

  mrb_value Up = mrb_fixnum_value(native_Up);

  return Up;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::Up_writer */
/* sha: e54e3baf756cfd13246c30ee96fe6f463e16e3232a5c6e99893b3a863f9831d1 */
#if BIND_UiAreaKeyEvent_Up_FIELD_WRITER
mrb_value
mrb_UI_UiAreaKeyEvent_set_Up(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_UiAreaKeyEvent_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::class_definition */
/* sha: aacc4498e9695cf64366f4fc820f082a4f60a953c943f3d74dc2242af77d2531 */
  struct RClass* UiAreaKeyEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "UiAreaKeyEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiAreaKeyEvent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::class_method_definitions */
/* sha: ed111f7159f06eae39b36cd291f163cac425400ae3d93f98bf67e770ec6d00e0 */
#if BIND_UiAreaKeyEvent_INITIALIZE
  mrb_define_method(mrb, UiAreaKeyEvent_class, "initialize", mrb_UI_UiAreaKeyEvent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaKeyEvent::attr_definitions */
/* sha: 742a12b36d501c968df2dd1cffdf3f2760de11cb193aca3d3137090e77da9081 */
  /*
   * Fields
   */
#if BIND_UiAreaKeyEvent_Key_FIELD_READER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Key", mrb_UI_UiAreaKeyEvent_get_Key, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaKeyEvent_Key_FIELD_WRITER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Key=", mrb_UI_UiAreaKeyEvent_set_Key, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaKeyEvent_ExtKey_FIELD_READER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "ExtKey", mrb_UI_UiAreaKeyEvent_get_ExtKey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaKeyEvent_ExtKey_FIELD_WRITER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "ExtKey=", mrb_UI_UiAreaKeyEvent_set_ExtKey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaKeyEvent_Modifier_FIELD_READER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Modifier", mrb_UI_UiAreaKeyEvent_get_Modifier, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaKeyEvent_Modifier_FIELD_WRITER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Modifier=", mrb_UI_UiAreaKeyEvent_set_Modifier, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaKeyEvent_Modifiers_FIELD_READER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Modifiers", mrb_UI_UiAreaKeyEvent_get_Modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaKeyEvent_Modifiers_FIELD_WRITER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Modifiers=", mrb_UI_UiAreaKeyEvent_set_Modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaKeyEvent_Up_FIELD_READER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Up", mrb_UI_UiAreaKeyEvent_get_Up, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaKeyEvent_Up_FIELD_WRITER
  mrb_define_method(mrb, UiAreaKeyEvent_class, "Up=", mrb_UI_UiAreaKeyEvent_set_Up, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiAreaKeyEvent::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
