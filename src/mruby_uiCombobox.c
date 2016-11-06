/*
 * uiCombobox
 * Defined in file ui.h @ line 207
 */

#include "mruby_UI.h"

#if BIND_Combobox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox::initialize */
/* sha: 1d04cf9fdd6002ed4ea7e6d0e3285a9daa095560252821b3225980fa6703a9a3 */
#if BIND_Combobox_INITIALIZE
mrb_value
mrb_UI_Combobox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiCombobox* native_object = (uiCombobox*)calloc(1, sizeof(uiCombobox));
  mruby_gift_uiCombobox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Combobox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox::class_definition */
/* sha: 7ab49a7d91fdccbed3bed3c783e476cea480da3cd0d476dc2794d8895c5d7a34 */
  struct RClass* Combobox_class = mrb_define_class_under(mrb, UI_module(mrb), "Combobox", mrb->object_class);
  MRB_SET_INSTANCE_TT(Combobox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox::class_method_definitions */
/* sha: 6285e0ddc578dfd2a326e57e0689a6b56fd455e0d9f8c96fc0885c23437dcaf4 */
#if BIND_Combobox_INITIALIZE
  mrb_define_method(mrb, Combobox_class, "initialize", mrb_UI_Combobox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Combobox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
