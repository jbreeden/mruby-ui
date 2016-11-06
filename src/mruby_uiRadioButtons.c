/*
 * uiRadioButtons
 * Defined in file ui.h @ line 224
 */

#include "mruby_UI.h"

#if BIND_RadioButtons_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons::initialize */
/* sha: 0c237057134a1304c21cd89a5bab1eec218d9c28c59024fe5db8d25adc2e534e */
#if BIND_RadioButtons_INITIALIZE
mrb_value
mrb_UI_RadioButtons_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiRadioButtons* native_object = (uiRadioButtons*)calloc(1, sizeof(uiRadioButtons));
  mruby_gift_uiRadioButtons_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_RadioButtons_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons::class_definition */
/* sha: 439a8704a145f66b9bdcb537d1d64c31af607d78c8a469dac10ef5f83b625798 */
  struct RClass* RadioButtons_class = mrb_define_class_under(mrb, UI_module(mrb), "RadioButtons", Control_class(mrb));
  MRB_SET_INSTANCE_TT(RadioButtons_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons::class_method_definitions */
/* sha: 5841695411572932842e025f9fa56012389678de1bee650baf84c8b7218f693d */
#if BIND_RadioButtons_INITIALIZE
  mrb_define_method(mrb, RadioButtons_class, "initialize", mrb_UI_RadioButtons_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: RadioButtons::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
