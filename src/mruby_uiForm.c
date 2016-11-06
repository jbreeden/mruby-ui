/*
 * uiForm
 * Defined in file ui.h @ line 657
 */

#include "mruby_UI.h"

#if BIND_Form_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form::initialize */
/* sha: 6f043533d005926685f04de191e96539bf6cf14ea96246b5d979922c3797f95b */
#if BIND_Form_INITIALIZE
mrb_value
mrb_UI_Form_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiForm* native_object = (uiForm*)calloc(1, sizeof(uiForm));
  mruby_gift_uiForm_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Form_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form::class_definition */
/* sha: a3aec8bdef4f83c873d5b42ddd55c617b192ce8b81a09d6e915e1268d9b3e3c7 */
  struct RClass* Form_class = mrb_define_class_under(mrb, UI_module(mrb), "Form", mrb->object_class);
  MRB_SET_INSTANCE_TT(Form_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form::class_method_definitions */
/* sha: e777039f9a07e0206ae61d32390360c33a5e9e027a8dff7867caeaf3c72899f1 */
#if BIND_Form_INITIALIZE
  mrb_define_method(mrb, Form_class, "initialize", mrb_UI_Form_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Form::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
