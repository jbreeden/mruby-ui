/*
 * uiMenu
 * Defined in file ui.h @ line 258
 */

#include "mruby_UI.h"

#if BIND_Menu_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu::initialize */
/* sha: e236155da467bc9c57bf635bf999608186f2cc9b706c05fecafa5b770d5f080c */
#if BIND_Menu_INITIALIZE
mrb_value
mrb_UI_Menu_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMenu* native_object = (uiMenu*)calloc(1, sizeof(uiMenu));
  mruby_gift_uiMenu_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Menu_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu::class_definition */
/* sha: 096861aa3831e78bd772c3a8360f2b7c37d280f525afe08023bf3c55a6636da2 */
  struct RClass* Menu_class = mrb_define_class_under(mrb, UI_module(mrb), "Menu", mrb->object_class);
  MRB_SET_INSTANCE_TT(Menu_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu::class_method_definitions */
/* sha: cc9fbd08734d6d27ab09ed351088a5656d62f7550b52b00034e8e7b34f1d6e92 */
#if BIND_Menu_INITIALIZE
  mrb_define_method(mrb, Menu_class, "initialize", mrb_UI_Menu_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Menu::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
