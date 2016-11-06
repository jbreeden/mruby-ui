/*
 * uiCheckbox
 * Defined in file ui.h @ line 132
 */

#include "mruby_UI.h"

#if BIND_Checkbox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox::initialize */
/* sha: 3ed78e744dc82cfaad0a070f5953dc27c543a032c712cb09e9c3aac1be123cd1 */
#if BIND_Checkbox_INITIALIZE
mrb_value
mrb_UI_Checkbox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiCheckbox* native_object = (uiCheckbox*)calloc(1, sizeof(uiCheckbox));
  mruby_gift_uiCheckbox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Checkbox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox::class_definition */
/* sha: 6db29be05fb8d13bffda85af80da7ded339c2a13e617241dff3e7f4609b6c459 */
  struct RClass* Checkbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Checkbox", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Checkbox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox::class_method_definitions */
/* sha: 4db75b0bb124f22b74273baacc8c94e6fd8bb28f0faacc4c26e68705b31bfe5f */
#if BIND_Checkbox_INITIALIZE
  mrb_define_method(mrb, Checkbox_class, "initialize", mrb_UI_Checkbox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Checkbox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
