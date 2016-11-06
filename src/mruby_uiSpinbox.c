/*
 * uiSpinbox
 * Defined in file ui.h @ line 182
 */

#include "mruby_UI.h"

#if BIND_UiSpinbox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSpinbox::initialize */
/* sha: 9755c5dbafeea14bab99f2721f69ca02ea0919ff9b69d62d957cb7201a7767b7 */
#if BIND_UiSpinbox_INITIALIZE
mrb_value
mrb_UI_UiSpinbox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSpinbox* native_object = (uiSpinbox*)calloc(1, sizeof(uiSpinbox));
  mruby_gift_uiSpinbox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiSpinbox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSpinbox::class_definition */
/* sha: fac348bd76ed261a3f8971b2187156785f785472116b4b3764f1b687ac08b9e3 */
  struct RClass* UiSpinbox_class = mrb_define_class_under(mrb, UI_module(mrb), "UiSpinbox", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiSpinbox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSpinbox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSpinbox::class_method_definitions */
/* sha: 4840ccae4e28003e2a70608e8f3a4ccb0f82ee273616cfd0e67a388f8228f966 */
#if BIND_UiSpinbox_INITIALIZE
  mrb_define_method(mrb, UiSpinbox_class, "initialize", mrb_UI_UiSpinbox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiSpinbox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
