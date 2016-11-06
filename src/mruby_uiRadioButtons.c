/*
 * uiRadioButtons
 * Defined in file ui.h @ line 224
 */

#include "mruby_UI.h"

#if BIND_UiRadioButtons_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiRadioButtons::initialize */
/* sha: 0e715b2163da11be31d67d282d3f47117dff1af0f7ac3ed7e99b04546825be5f */
#if BIND_UiRadioButtons_INITIALIZE
mrb_value
mrb_UI_UiRadioButtons_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiRadioButtons* native_object = (uiRadioButtons*)calloc(1, sizeof(uiRadioButtons));
  mruby_gift_uiRadioButtons_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiRadioButtons_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiRadioButtons::class_definition */
/* sha: 7a55ba35a68dbe47b46881e277296abe9656aee396e209baee65a3d405b9d8d4 */
  struct RClass* UiRadioButtons_class = mrb_define_class_under(mrb, UI_module(mrb), "UiRadioButtons", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiRadioButtons_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiRadioButtons::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiRadioButtons::class_method_definitions */
/* sha: 665fc7a0454c45cd2a0b4a9ff04624a86ac3e13457fdd2a73405c65caa910a87 */
#if BIND_UiRadioButtons_INITIALIZE
  mrb_define_method(mrb, UiRadioButtons_class, "initialize", mrb_UI_UiRadioButtons_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiRadioButtons::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
