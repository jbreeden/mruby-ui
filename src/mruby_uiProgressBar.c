/*
 * uiProgressBar
 * Defined in file ui.h @ line 196
 */

#include "mruby_UI.h"

#if BIND_ProgressBar_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar::initialize */
/* sha: ef2da5431d690d26e789367bf6073cac30f8306732fd6a91ec9dd9bc5ca6e422 */
#if BIND_ProgressBar_INITIALIZE
mrb_value
mrb_UI_ProgressBar_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiProgressBar* native_object = (uiProgressBar*)calloc(1, sizeof(uiProgressBar));
  mruby_gift_uiProgressBar_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_ProgressBar_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar::class_definition */
/* sha: 4ffb961dd02d4e544662defc1fa266a03a0fe59acdb3ab9d58b9ee2d26cb3275 */
  struct RClass* ProgressBar_class = mrb_define_class_under(mrb, UI_module(mrb), "ProgressBar", Control_class(mrb));
  MRB_SET_INSTANCE_TT(ProgressBar_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar::class_method_definitions */
/* sha: 5dbf02450c4c07ef65b3acd4e738e89a99f7ca0b1185db57e0eb3224e8fc1a9d */
#if BIND_ProgressBar_INITIALIZE
  mrb_define_method(mrb, ProgressBar_class, "initialize", mrb_UI_ProgressBar_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: ProgressBar::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
