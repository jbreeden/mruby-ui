/*
 * uiSpinbox
 * Defined in file ui.h @ line 182
 */

#include "mruby_UI.h"

#if BIND_Spinbox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox::initialize */
/* sha: 1b9dbcadcc18fd8107569560a217dde2fe172a5354993822d8563eba5c088f49 */
#if BIND_Spinbox_INITIALIZE
mrb_value
mrb_UI_Spinbox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSpinbox* native_object = (uiSpinbox*)calloc(1, sizeof(uiSpinbox));
  mruby_gift_uiSpinbox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Spinbox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox::class_definition */
/* sha: a22a4da980431d59faf0af3feeee2daf204ec44043241f1611fbc035c4cbecce */
  struct RClass* Spinbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Spinbox", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Spinbox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox::class_method_definitions */
/* sha: 66d51badd9d27b3c3d5cbcf04120685cba9d7017fd75bd6dcb0a671de5487816 */
#if BIND_Spinbox_INITIALIZE
  mrb_define_method(mrb, Spinbox_class, "initialize", mrb_UI_Spinbox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Spinbox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
