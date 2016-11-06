/*
 * uiWindow
 * Defined in file ui.h @ line 99
 */

#include "mruby_UI.h"

#if BIND_Window_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window::initialize */
/* sha: 3b5a2fc7cf8eb9c5d7a13ef62ea98aeb3077ef62b4e2fca3835321010fe75ab7 */
#if BIND_Window_INITIALIZE
mrb_value
mrb_UI_Window_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiWindow* native_object = (uiWindow*)calloc(1, sizeof(uiWindow));
  mruby_gift_uiWindow_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Window_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window::class_definition */
/* sha: 0fd19380d9c1561a5976301c00dd63ee2c1c7f720d72c0eaf1f6eb9de5c4e078 */
  struct RClass* Window_class = mrb_define_class_under(mrb, UI_module(mrb), "Window", mrb->object_class);
  MRB_SET_INSTANCE_TT(Window_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window::class_method_definitions */
/* sha: 7c2ac03e3e54b60fda6098bea641079e49c90e670c8e2d34b50afa6e8334841c */
#if BIND_Window_INITIALIZE
  mrb_define_method(mrb, Window_class, "initialize", mrb_UI_Window_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Window::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
