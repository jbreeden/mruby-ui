/*
 * uiEditableCombobox
 * Defined in file ui.h @ line 215
 */

#include "mruby_UI.h"

#if BIND_UiEditableCombobox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEditableCombobox::initialize */
/* sha: 8a2d1c1ba1305957c4a8f30e47a7b954d741213071ca9f92fff1661aaa82a5ab */
#if BIND_UiEditableCombobox_INITIALIZE
mrb_value
mrb_UI_UiEditableCombobox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiEditableCombobox* native_object = (uiEditableCombobox*)calloc(1, sizeof(uiEditableCombobox));
  mruby_gift_uiEditableCombobox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiEditableCombobox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEditableCombobox::class_definition */
/* sha: 2e2dce29d32a534c65cfae22e5837b4de7add84fd38af6f3ec28a9901dbf3615 */
  struct RClass* UiEditableCombobox_class = mrb_define_class_under(mrb, UI_module(mrb), "UiEditableCombobox", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiEditableCombobox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEditableCombobox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEditableCombobox::class_method_definitions */
/* sha: 952e7efa88aa0bb24cffc58787be20e073968a4fd8addf26711491df7ce5eb02 */
#if BIND_UiEditableCombobox_INITIALIZE
  mrb_define_method(mrb, UiEditableCombobox_class, "initialize", mrb_UI_UiEditableCombobox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiEditableCombobox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
