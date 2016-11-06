/*
 * uiAreaHandler
 * Defined in file ui.h @ line 274
 */

#include "mruby_UI.h"

#if BIND_AreaHandler_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::initialize */
/* sha: d8910cd1bec0ddfb605db6b7565550b229df64bf438e10aed947b8b7dab503dd */
#if BIND_AreaHandler_INITIALIZE
mrb_value
mrb_UI_AreaHandler_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaHandler::Draw_reader */
/* sha: ed0504b0fbe663e5c139b54ad0923bcefb8119c195268fdfabe471d86dfc2ef9 */
#if BIND_AreaHandler_Draw_FIELD_READER
mrb_value
mrb_UI_AreaHandler_get_Draw(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, uiAreaDrawParams *) native_Draw = native_self->Draw;

  mrb_value Draw = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaDrawParams_PTR_RPAREN(mrb, native_Draw);

  return Draw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::Draw_writer */
/* sha: bdf7dd0784c6b5c6449c5084809a622b0f98c5a8999afee3b7ab58bf3f16b214 */
#if BIND_AreaHandler_Draw_FIELD_WRITER
mrb_value
mrb_UI_AreaHandler_set_Draw(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaHandler::MouseEvent_reader */
/* sha: 5d0912f79c26578893fa26bbd82900a41866fcd701b86e23bf7046ba96424c6c */
#if BIND_AreaHandler_MouseEvent_FIELD_READER
mrb_value
mrb_UI_AreaHandler_get_MouseEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, uiAreaMouseEvent *) native_MouseEvent = native_self->MouseEvent;

  mrb_value MouseEvent = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaMouseEvent_PTR_RPAREN(mrb, native_MouseEvent);

  return MouseEvent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::MouseEvent_writer */
/* sha: 2d1ea9695b584847e26007a3873434a24f6a75d4387ae60d6b255a0e8d33b984 */
#if BIND_AreaHandler_MouseEvent_FIELD_WRITER
mrb_value
mrb_UI_AreaHandler_set_MouseEvent(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaHandler::MouseCrossed_reader */
/* sha: 8ccdc11df223096de7e8f7e4f53ab7261cd80a9bfb2eed49a47c8ea7e4363ca4 */
#if BIND_AreaHandler_MouseCrossed_FIELD_READER
mrb_value
mrb_UI_AreaHandler_get_MouseCrossed(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *, int) native_MouseCrossed = native_self->MouseCrossed;

  mrb_value MouseCrossed = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_int_RPAREN(mrb, native_MouseCrossed);

  return MouseCrossed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::MouseCrossed_writer */
/* sha: 478e58d10c2e9ed7155abff57358e56c7f75e00a7829801c7c151c21eb77d4ef */
#if BIND_AreaHandler_MouseCrossed_FIELD_WRITER
mrb_value
mrb_UI_AreaHandler_set_MouseCrossed(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaHandler::DragBroken_reader */
/* sha: 7e261e81d484c13d61c6476e31b8bba09578b4eba4e55cbf0c0221ae71a722db */
#if BIND_AreaHandler_DragBroken_FIELD_READER
mrb_value
mrb_UI_AreaHandler_get_DragBroken(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  void (*)(uiAreaHandler *, uiArea *) native_DragBroken = native_self->DragBroken;

  mrb_value DragBroken = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_RPAREN(mrb, native_DragBroken);

  return DragBroken;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::DragBroken_writer */
/* sha: 705e45d74a89a75e830653e5be45bcfdeec6a9092237bebfc0022238b5cb017f */
#if BIND_AreaHandler_DragBroken_FIELD_WRITER
mrb_value
mrb_UI_AreaHandler_set_DragBroken(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaHandler::KeyEvent_reader */
/* sha: 27226629a5a667f46211fccc67259747b943ef5896e3abcb10bdb2b79d34bf86 */
#if BIND_AreaHandler_KeyEvent_FIELD_READER
mrb_value
mrb_UI_AreaHandler_get_KeyEvent(mrb_state* mrb, mrb_value self) {
  uiAreaHandler * native_self = mruby_unbox_uiAreaHandler(self);

  int (*)(uiAreaHandler *, uiArea *, uiAreaKeyEvent *) native_KeyEvent = native_self->KeyEvent;

  mrb_value KeyEvent = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiAreaHandler_PTR_COMMA_uiArea_PTR_COMMA_uiAreaKeyEvent_PTR_RPAREN(mrb, native_KeyEvent);

  return KeyEvent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::KeyEvent_writer */
/* sha: 5e239d4192c1723335532201e8cec015fb94cb13e55f89097680cb383956a94a */
#if BIND_AreaHandler_KeyEvent_FIELD_WRITER
mrb_value
mrb_UI_AreaHandler_set_KeyEvent(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_AreaHandler_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::class_definition */
/* sha: 7445038ea77b4cba84bef03dace0c38e645ef5e3852eff4bf6cc97781233ef5d */
  struct RClass* AreaHandler_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaHandler", mrb->object_class);
  MRB_SET_INSTANCE_TT(AreaHandler_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::class_method_definitions */
/* sha: fdc7781367a80f213a32956460b0589b66c102980086090b876f2d33a1c7c29b */
#if BIND_AreaHandler_INITIALIZE
  mrb_define_method(mrb, AreaHandler_class, "initialize", mrb_UI_AreaHandler_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::attr_definitions */
/* sha: c0514e73c592e007f465f3920b188d203956ed8f21befecb54cf9ea09db070e5 */
  /*
   * Fields
   */
#if BIND_AreaHandler_Draw_FIELD_READER
  mrb_define_method(mrb, AreaHandler_class, "Draw", mrb_UI_AreaHandler_get_Draw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaHandler_Draw_FIELD_WRITER
  mrb_define_method(mrb, AreaHandler_class, "Draw=", mrb_UI_AreaHandler_set_Draw, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaHandler_MouseEvent_FIELD_READER
  mrb_define_method(mrb, AreaHandler_class, "MouseEvent", mrb_UI_AreaHandler_get_MouseEvent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaHandler_MouseEvent_FIELD_WRITER
  mrb_define_method(mrb, AreaHandler_class, "MouseEvent=", mrb_UI_AreaHandler_set_MouseEvent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaHandler_MouseCrossed_FIELD_READER
  mrb_define_method(mrb, AreaHandler_class, "MouseCrossed", mrb_UI_AreaHandler_get_MouseCrossed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaHandler_MouseCrossed_FIELD_WRITER
  mrb_define_method(mrb, AreaHandler_class, "MouseCrossed=", mrb_UI_AreaHandler_set_MouseCrossed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaHandler_DragBroken_FIELD_READER
  mrb_define_method(mrb, AreaHandler_class, "DragBroken", mrb_UI_AreaHandler_get_DragBroken, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaHandler_DragBroken_FIELD_WRITER
  mrb_define_method(mrb, AreaHandler_class, "DragBroken=", mrb_UI_AreaHandler_set_DragBroken, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaHandler_KeyEvent_FIELD_READER
  mrb_define_method(mrb, AreaHandler_class, "KeyEvent", mrb_UI_AreaHandler_get_KeyEvent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaHandler_KeyEvent_FIELD_WRITER
  mrb_define_method(mrb, AreaHandler_class, "KeyEvent=", mrb_UI_AreaHandler_set_KeyEvent, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: AreaHandler::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
