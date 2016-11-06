/*
 * uiMultilineEntry
 * Defined in file ui.h @ line 239
 */

#include "mruby_UI.h"

#if BIND_UiMultilineEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMultilineEntry::initialize */
/* sha: 852f3b17b8f05b803782d51fe5a86492599b770c26ad84b0dd4c7981aeade684 */
#if BIND_UiMultilineEntry_INITIALIZE
mrb_value
mrb_UI_UiMultilineEntry_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMultilineEntry* native_object = (uiMultilineEntry*)calloc(1, sizeof(uiMultilineEntry));
  mruby_gift_uiMultilineEntry_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiMultilineEntry_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMultilineEntry::class_definition */
/* sha: fd8167c043322443461d38bc033058188a89a53f5f2785bbca178b215407e75a */
  struct RClass* UiMultilineEntry_class = mrb_define_class_under(mrb, UI_module(mrb), "UiMultilineEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiMultilineEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMultilineEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMultilineEntry::class_method_definitions */
/* sha: f66e7d2717c3ba219b10c84ac5eadfa2d71876209196676432e0537d55bd32ec */
#if BIND_UiMultilineEntry_INITIALIZE
  mrb_define_method(mrb, UiMultilineEntry_class, "initialize", mrb_UI_UiMultilineEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiMultilineEntry::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
