/*
 * uiProgressBar
 * Defined in file ui.h @ line 196
 */

#include "mruby_UI.h"

#if BIND_UiProgressBar_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiProgressBar::initialize */
/* sha: 01ad8806c831213e4e83b31894209056406cc8ae530f3c411af0196ce2604df5 */
#if BIND_UiProgressBar_INITIALIZE
mrb_value
mrb_UI_UiProgressBar_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiProgressBar* native_object = (uiProgressBar*)calloc(1, sizeof(uiProgressBar));
  mruby_gift_uiProgressBar_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiProgressBar_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiProgressBar::class_definition */
/* sha: 99688a0a51c496c6e43c82f686b98c97b8e49705b4edb9a51f2e3458ba81f2c2 */
  struct RClass* UiProgressBar_class = mrb_define_class_under(mrb, UI_module(mrb), "UiProgressBar", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiProgressBar_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiProgressBar::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiProgressBar::class_method_definitions */
/* sha: 7d5c4dc1a4595db3dda93c9b0057e98d8e4096f4413de3b81e8ead623481ce15 */
#if BIND_UiProgressBar_INITIALIZE
  mrb_define_method(mrb, UiProgressBar_class, "initialize", mrb_UI_UiProgressBar_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiProgressBar::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
