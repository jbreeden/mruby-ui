/*
 * uiForm
 * Defined in file ui.h @ line 657
 */

#include "mruby_UI.h"

#if BIND_UiForm_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiForm::initialize */
/* sha: 60a7939191bc56e1bcbe7cd003a4a3f60455b82c337cc36ad80a462c01dc03a7 */
#if BIND_UiForm_INITIALIZE
mrb_value
mrb_UI_UiForm_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiForm* native_object = (uiForm*)calloc(1, sizeof(uiForm));
  mruby_gift_uiForm_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiForm_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiForm::class_definition */
/* sha: 780ebfb4376d686ad9aa7baf25ed3d78af6026c0f4f288643a56da9a2dd2d738 */
  struct RClass* UiForm_class = mrb_define_class_under(mrb, UI_module(mrb), "UiForm", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiForm_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiForm::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiForm::class_method_definitions */
/* sha: c5a7809112533dc9914d4eae9424cd4ef98d38e2ad43a2e5bee8a2c41ac63554 */
#if BIND_UiForm_INITIALIZE
  mrb_define_method(mrb, UiForm_class, "initialize", mrb_UI_UiForm_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiForm::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
