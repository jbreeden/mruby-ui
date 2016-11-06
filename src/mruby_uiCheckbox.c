/*
 * uiCheckbox
 * Defined in file ui.h @ line 132
 */

#include "mruby_UI.h"

#if BIND_UiCheckbox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCheckbox::initialize */
/* sha: c7462e0f89421d00b3d9588af26ab6f6e228147b5160413e228e3c49c693b08c */
#if BIND_UiCheckbox_INITIALIZE
mrb_value
mrb_UI_UiCheckbox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiCheckbox* native_object = (uiCheckbox*)calloc(1, sizeof(uiCheckbox));
  mruby_gift_uiCheckbox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiCheckbox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCheckbox::class_definition */
/* sha: 4e73a89d10bb86c4c31e8a37e1c8e73fa3a63accd5fa2f49675678eb2bc6be42 */
  struct RClass* UiCheckbox_class = mrb_define_class_under(mrb, UI_module(mrb), "UiCheckbox", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiCheckbox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCheckbox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCheckbox::class_method_definitions */
/* sha: e2eae69ba164c81bf3ff8768c07903bfb0e87926ec820e552068f38edd11d86b */
#if BIND_UiCheckbox_INITIALIZE
  mrb_define_method(mrb, UiCheckbox_class, "initialize", mrb_UI_UiCheckbox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiCheckbox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
