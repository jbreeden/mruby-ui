/*
 * uiBox
 * Defined in file ui.h @ line 123
 */

#include "mruby_UI.h"

#if BIND_Box_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box::initialize */
/* sha: 4913fc029a8ebf7b928aecdc75daff8fcb49bd00130abcfa43b28385304327f6 */
#if BIND_Box_INITIALIZE
mrb_value
mrb_UI_Box_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiBox* native_object = (uiBox*)calloc(1, sizeof(uiBox));
  mruby_gift_uiBox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Box_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box::class_definition */
/* sha: 9a0b6f12cdba4b23cff7d5d387117c8e5899aed137ae6c4cb43869d8daed1691 */
  struct RClass* Box_class = mrb_define_class_under(mrb, UI_module(mrb), "Box", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Box_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box::class_method_definitions */
/* sha: 07e04f6937e5d796ec8b8caa45625f509c5e9fb543941d676c7842ffdd6ee4c4 */
#if BIND_Box_INITIALIZE
  mrb_define_method(mrb, Box_class, "initialize", mrb_UI_Box_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Box::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
