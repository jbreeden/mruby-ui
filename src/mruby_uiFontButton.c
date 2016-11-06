/*
 * uiFontButton
 * Defined in file ui.h @ line 642
 */

#include "mruby_UI.h"

#if BIND_UiFontButton_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiFontButton::initialize */
/* sha: fe0a5b57eee516fe896ffbd53b811afb79e59ac40c47ab5a4d2003dec96ee5d9 */
#if BIND_UiFontButton_INITIALIZE
mrb_value
mrb_UI_UiFontButton_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiFontButton* native_object = (uiFontButton*)calloc(1, sizeof(uiFontButton));
  mruby_gift_uiFontButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiFontButton_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiFontButton::class_definition */
/* sha: c61c7293155d770ce1a2808de149c9e09a5cb2a2b2a918b7a481562e7d7f3d3e */
  struct RClass* UiFontButton_class = mrb_define_class_under(mrb, UI_module(mrb), "UiFontButton", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiFontButton_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiFontButton::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiFontButton::class_method_definitions */
/* sha: cb1c55ca36875413c594a4ac53893585303085031745f15bab690d077a54de9e */
#if BIND_UiFontButton_INITIALIZE
  mrb_define_method(mrb, UiFontButton_class, "initialize", mrb_UI_UiFontButton_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiFontButton::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
