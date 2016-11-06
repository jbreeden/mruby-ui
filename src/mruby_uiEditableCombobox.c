/*
 * uiEditableCombobox
 * Defined in file ui.h @ line 215
 */

#include "mruby_UI.h"

#if BIND_EditableCombobox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox::initialize */
/* sha: 1d0c95e4b2b39443077ef229068c02b8bc86fdb9ed0fce79997cdd6ffeee816e */
#if BIND_EditableCombobox_INITIALIZE
mrb_value
mrb_UI_EditableCombobox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiEditableCombobox* native_object = (uiEditableCombobox*)calloc(1, sizeof(uiEditableCombobox));
  mruby_gift_uiEditableCombobox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_EditableCombobox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox::class_definition */
/* sha: e5ae32de5ff5c834f4e28b7c3f8b86ad3950842f4196c7daa4361d1f1e2babe9 */
  struct RClass* EditableCombobox_class = mrb_define_class_under(mrb, UI_module(mrb), "EditableCombobox", Control_class(mrb));
  MRB_SET_INSTANCE_TT(EditableCombobox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox::class_method_definitions */
/* sha: e7717593edad2bc16da0f967ce4439da1bf8faee83db217f63c0d54e70a07cea */
#if BIND_EditableCombobox_INITIALIZE
  mrb_define_method(mrb, EditableCombobox_class, "initialize", mrb_UI_EditableCombobox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: EditableCombobox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
