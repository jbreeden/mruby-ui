/*
 * uiSeparator
 * Defined in file ui.h @ line 202
 */

#include "mruby_UI.h"

#if BIND_Separator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator::initialize */
/* sha: ea5be4967bbb44b5713f8f1852c43199deec8f740c011eb4e20667980618b7b8 */
#if BIND_Separator_INITIALIZE
mrb_value
mrb_UI_Separator_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSeparator* native_object = (uiSeparator*)calloc(1, sizeof(uiSeparator));
  mruby_gift_uiSeparator_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Separator_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator::class_definition */
/* sha: a8e87b8e02728eaec4d1b2f88181ef95ad27279eec3dff876f3aacc2bf430a96 */
  struct RClass* Separator_class = mrb_define_class_under(mrb, UI_module(mrb), "Separator", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Separator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator::class_method_definitions */
/* sha: be00e95f040d334de1f43d00c93a7ae10123451941cbf8c67cd2e8fe6f7ee715 */
#if BIND_Separator_INITIALIZE
  mrb_define_method(mrb, Separator_class, "initialize", mrb_UI_Separator_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Separator::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
