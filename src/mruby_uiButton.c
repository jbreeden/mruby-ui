/*
 * uiButton
 * Defined in file ui.h @ line 116
 */

#include "mruby_UI.h"

#if BIND_Button_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button::initialize */
/* sha: e1e3c858fe6d76116247554292420b22dd2196e91af3ef16683dceebc472b098 */
#if BIND_Button_INITIALIZE
mrb_value
mrb_UI_Button_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiButton* native_object = (uiButton*)calloc(1, sizeof(uiButton));
  mruby_gift_uiButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Button_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button::class_definition */
/* sha: 82a6e3ed012b03d3465c41fc80d28e0de59a0d7671b748c86c0cc41eb36bfee1 */
  struct RClass* Button_class = mrb_define_class_under(mrb, UI_module(mrb), "Button", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Button_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button::class_method_definitions */
/* sha: eeac58fade04eaba31997bf849db8620e240244395a6a4493f2d7c3f2bbc28c0 */
#if BIND_Button_INITIALIZE
  mrb_define_method(mrb, Button_class, "initialize", mrb_UI_Button_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Button::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
