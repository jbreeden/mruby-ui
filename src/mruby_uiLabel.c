/*
 * uiLabel
 * Defined in file ui.h @ line 152
 */

#include "mruby_UI.h"

#if BIND_UiLabel_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiLabel::initialize */
/* sha: 4e71956663740888bd8412786076006019509e68b80de1574655e3fc496c3ae2 */
#if BIND_UiLabel_INITIALIZE
mrb_value
mrb_UI_UiLabel_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiLabel* native_object = (uiLabel*)calloc(1, sizeof(uiLabel));
  mruby_gift_uiLabel_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiLabel_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiLabel::class_definition */
/* sha: 697c85563bbf11e6227fcff1c6a1cbe507c1fbedc1080f76d901c0efa9cd43fc */
  struct RClass* UiLabel_class = mrb_define_class_under(mrb, UI_module(mrb), "UiLabel", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiLabel_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiLabel::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiLabel::class_method_definitions */
/* sha: 2eb3a7ed2473b1acd9f7e947ad8d5212f9f7131fd0c739a113dbf4379c4cc73c */
#if BIND_UiLabel_INITIALIZE
  mrb_define_method(mrb, UiLabel_class, "initialize", mrb_UI_UiLabel_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiLabel::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
