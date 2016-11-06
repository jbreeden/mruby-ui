/*
 * uiCombobox
 * Defined in file ui.h @ line 207
 */

#include "mruby_UI.h"

#if BIND_UiCombobox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCombobox::initialize */
/* sha: 588dc48bf22a3845fd7b0a1f073430259663fe2a73d8ed0c5fa79bcb78dfa678 */
#if BIND_UiCombobox_INITIALIZE
mrb_value
mrb_UI_UiCombobox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiCombobox* native_object = (uiCombobox*)calloc(1, sizeof(uiCombobox));
  mruby_gift_uiCombobox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiCombobox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCombobox::class_definition */
/* sha: c0b39335d825b3671a81aadadd68471343b93157f11e25ef958888e7d6098d99 */
  struct RClass* UiCombobox_class = mrb_define_class_under(mrb, UI_module(mrb), "UiCombobox", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiCombobox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCombobox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiCombobox::class_method_definitions */
/* sha: dbf459d9517a6845d70331d53fc840d7e397c676793998dde7e940da2b7feccc */
#if BIND_UiCombobox_INITIALIZE
  mrb_define_method(mrb, UiCombobox_class, "initialize", mrb_UI_UiCombobox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiCombobox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
