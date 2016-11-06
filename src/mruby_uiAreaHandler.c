/*
 * uiAreaHandler
 * Defined in file ui.h @ line 274
 */

#include "mruby_UI.h"

#if BIND_UiAreaHandler_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::initialize */
/* sha: 0c6e559fb6d0d5b6bc1024fd6260fbe85fc8749102114d0e4134998c76b2ae7b */
#if BIND_UiAreaHandler_INITIALIZE
mrb_value
mrb_UI_UiAreaHandler_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiAreaHandler* native_object = (uiAreaHandler*)calloc(1, sizeof(uiAreaHandler));
  mruby_gift_uiAreaHandler_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiAreaHandler::Draw_reader */
/* sha: 6fdd9eb3163607be77b7ecc3259688809b530452439a0ce7872c3617d30f5284 */
#if BIND_UiAreaHandler_Draw_FIELD_READER
mrb_value
mrb_UI_UiAreaHandler_get_Draw(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, uiAreaDrawParams *) native_Draw = native_self->Draw;

  mrb_value Draw = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaDrawParams_PTR_RPAREN(mrb, native_Draw);

  return Draw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::Draw_writer */
/* sha: 20876525b081a37e2390b4a8604a1cd4bb08a1b61f4484c391c49edc45d6c73c */
#if BIND_UiAreaHandler_Draw_FIELD_WRITER
mrb_value
mrb_UI_UiAreaHandler_set_Draw(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);
  mrb_value Draw;

  mrb_get_args(mrb, "o", &Draw);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaDrawParams_PTR_RPAREN(Draw);

  void (*native_Draw)(uiAreaHandler *, uiArea *, uiAreaDrawParams *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaDrawParams_PTR_RPAREN(Draw);

  native_self->Draw = native_Draw;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::MouseEvent_reader */
/* sha: 679829fde1fa20a4892d2a87c34a75286450769b77fc31eb4e38cbebbeb2d445 */
#if BIND_UiAreaHandler_MouseEvent_FIELD_READER
mrb_value
mrb_UI_UiAreaHandler_get_MouseEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, uiAreaMouseEvent *) native_MouseEvent = native_self->MouseEvent;

  mrb_value MouseEvent = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaMouseEvent_PTR_RPAREN(mrb, native_MouseEvent);

  return MouseEvent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::MouseEvent_writer */
/* sha: 38a4395035d3cd928320a19ebac943bab2abfc6696e29652e431bbf867d8c83e */
#if BIND_UiAreaHandler_MouseEvent_FIELD_WRITER
mrb_value
mrb_UI_UiAreaHandler_set_MouseEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);
  mrb_value MouseEvent;

  mrb_get_args(mrb, "o", &MouseEvent);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaMouseEvent_PTR_RPAREN(MouseEvent);

  void (*native_MouseEvent)(uiAreaHandler *, uiArea *, uiAreaMouseEvent *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaMouseEvent_PTR_RPAREN(MouseEvent);

  native_self->MouseEvent = native_MouseEvent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::MouseCrossed_reader */
/* sha: f64c638402b9a29dbf4ae062dfe579915d4bf4de190cf9e5f7a3b7d734e57cd3 */
#if BIND_UiAreaHandler_MouseCrossed_FIELD_READER
mrb_value
mrb_UI_UiAreaHandler_get_MouseCrossed(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, int) native_MouseCrossed = native_self->MouseCrossed;

  mrb_value MouseCrossed = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_int_RPAREN(mrb, native_MouseCrossed);

  return MouseCrossed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::MouseCrossed_writer */
/* sha: 8cd452fb472855132ffc1bd3adf4ac5a40ebc9b635db502fa37ee6eb4e4cbdb1 */
#if BIND_UiAreaHandler_MouseCrossed_FIELD_WRITER
mrb_value
mrb_UI_UiAreaHandler_set_MouseCrossed(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);
  mrb_value MouseCrossed;

  mrb_get_args(mrb, "o", &MouseCrossed);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_int_RPAREN(MouseCrossed);

  void (*native_MouseCrossed)(uiAreaHandler *, uiArea *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_int_RPAREN(MouseCrossed);

  native_self->MouseCrossed = native_MouseCrossed;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::DragBroken_reader */
/* sha: 1affcba2fd7e7569354bfb2f328c77ae87ff4db880e7d622e82f9ca0550486a8 */
#if BIND_UiAreaHandler_DragBroken_FIELD_READER
mrb_value
mrb_UI_UiAreaHandler_get_DragBroken(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *) native_DragBroken = native_self->DragBroken;

  mrb_value DragBroken = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_RPAREN(mrb, native_DragBroken);

  return DragBroken;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::DragBroken_writer */
/* sha: d9fee2b60bcb7919571f202c7550ac46ce55ea287b910e20b2d34d62c293d46c */
#if BIND_UiAreaHandler_DragBroken_FIELD_WRITER
mrb_value
mrb_UI_UiAreaHandler_set_DragBroken(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);
  mrb_value DragBroken;

  mrb_get_args(mrb, "o", &DragBroken);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_RPAREN(DragBroken);

  void (*native_DragBroken)(uiAreaHandler *, uiArea *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_RPAREN(DragBroken);

  native_self->DragBroken = native_DragBroken;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::KeyEvent_reader */
/* sha: cdb3a5d2f9a0b1b47fc2c92b512c6d6bf6918934d7e10d539790298cb7afe485 */
#if BIND_UiAreaHandler_KeyEvent_FIELD_READER
mrb_value
mrb_UI_UiAreaHandler_get_KeyEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  int (*)(uiAreaHandler *, uiArea *, uiAreaKeyEvent *) native_KeyEvent = native_self->KeyEvent;

  mrb_value KeyEvent = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaKeyEvent_PTR_RPAREN(mrb, native_KeyEvent);

  return KeyEvent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::KeyEvent_writer */
/* sha: e74f83c76400d2a90c474d39dd7e0150bb60d7c4ba6cbd6f02e75f668f39aae9 */
#if BIND_UiAreaHandler_KeyEvent_FIELD_WRITER
mrb_value
mrb_UI_UiAreaHandler_set_KeyEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);
  mrb_value KeyEvent;

  mrb_get_args(mrb, "o", &KeyEvent);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaKeyEvent_PTR_RPAREN(KeyEvent);

  int (*native_KeyEvent)(uiAreaHandler *, uiArea *, uiAreaKeyEvent *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaKeyEvent_PTR_RPAREN(KeyEvent);

  native_self->KeyEvent = native_KeyEvent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiAreaHandler_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::class_definition */
/* sha: eadd674eead6dbab16234c179abd7d9c6da45a0a5feaa626975e5eb5b6038cb9 */
  struct RClass* UiAreaHandler_class = mrb_define_class_under(mrb, UI_module(mrb), "UiAreaHandler", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiAreaHandler_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::class_method_definitions */
/* sha: a1c94063936102aeb4ed66c8eec2c3990f73877e77ef165900780dd24225663d */
#if BIND_UiAreaHandler_INITIALIZE
  mrb_define_method(mrb, UiAreaHandler_class, "initialize", mrb_UI_UiAreaHandler_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaHandler::attr_definitions */
/* sha: 72384ed56bd0e6d0038dfbd7a392fa01c5314799924abb7f413081dfefda3f92 */
  /*
   * Fields
   */
#if BIND_UiAreaHandler_Draw_FIELD_READER
  mrb_define_method(mrb, UiAreaHandler_class, "Draw", mrb_UI_UiAreaHandler_get_Draw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaHandler_Draw_FIELD_WRITER
  mrb_define_method(mrb, UiAreaHandler_class, "Draw=", mrb_UI_UiAreaHandler_set_Draw, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaHandler_MouseEvent_FIELD_READER
  mrb_define_method(mrb, UiAreaHandler_class, "MouseEvent", mrb_UI_UiAreaHandler_get_MouseEvent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaHandler_MouseEvent_FIELD_WRITER
  mrb_define_method(mrb, UiAreaHandler_class, "MouseEvent=", mrb_UI_UiAreaHandler_set_MouseEvent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaHandler_MouseCrossed_FIELD_READER
  mrb_define_method(mrb, UiAreaHandler_class, "MouseCrossed", mrb_UI_UiAreaHandler_get_MouseCrossed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaHandler_MouseCrossed_FIELD_WRITER
  mrb_define_method(mrb, UiAreaHandler_class, "MouseCrossed=", mrb_UI_UiAreaHandler_set_MouseCrossed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaHandler_DragBroken_FIELD_READER
  mrb_define_method(mrb, UiAreaHandler_class, "DragBroken", mrb_UI_UiAreaHandler_get_DragBroken, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaHandler_DragBroken_FIELD_WRITER
  mrb_define_method(mrb, UiAreaHandler_class, "DragBroken=", mrb_UI_UiAreaHandler_set_DragBroken, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaHandler_KeyEvent_FIELD_READER
  mrb_define_method(mrb, UiAreaHandler_class, "KeyEvent", mrb_UI_UiAreaHandler_get_KeyEvent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaHandler_KeyEvent_FIELD_WRITER
  mrb_define_method(mrb, UiAreaHandler_class, "KeyEvent=", mrb_UI_UiAreaHandler_set_KeyEvent, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiAreaHandler::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
