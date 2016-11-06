/*
 * uiWindow
 * Defined in file ui.h @ line 99
 */

#include "mruby_UI.h"

#if BIND_UiWindow_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiWindow::initialize */
/* sha: ca50b2dc9c9b56b28ffde11a976483eb59e1f10226bfb54423a8f51b928f2da6 */
#if BIND_UiWindow_INITIALIZE
mrb_value
mrb_UI_UiWindow_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiWindow* native_object = (uiWindow*)calloc(1, sizeof(uiWindow));
  mruby_gift_uiWindow_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiWindow_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiWindow::class_definition */
/* sha: c846e21b9d81a09b65d60f652c52d234cb629970f9272a76954dd305d4416aa1 */
  struct RClass* UiWindow_class = mrb_define_class_under(mrb, UI_module(mrb), "UiWindow", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiWindow_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiWindow::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiWindow::class_method_definitions */
/* sha: 06bee52f2dedff1a537079386109e6ce930f0ce212111c70a9f5faad42ccf3ef */
#if BIND_UiWindow_INITIALIZE
  mrb_define_method(mrb, UiWindow_class, "initialize", mrb_UI_UiWindow_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiWindow::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
