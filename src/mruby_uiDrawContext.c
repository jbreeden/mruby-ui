/*
 * uiDrawContext
 * Defined in file ui.h @ line 279
 */

#include "mruby_UI.h"

#if BIND_UiDrawContext_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawContext::initialize */
/* sha: ffb4a95e9ba9e4cab01f31a5ba543233025d5b4ae4a6881b1682c94841851cab */
#if BIND_UiDrawContext_INITIALIZE
mrb_value
mrb_UI_UiDrawContext_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawContext* native_object = (uiDrawContext*)calloc(1, sizeof(uiDrawContext));
  mruby_gift_uiDrawContext_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawContext_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawContext::class_definition */
/* sha: 39a9c6a486bace856dce06ebd1bfc4710c00698c084572ddea49bbbfba4a8189 */
  struct RClass* UiDrawContext_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawContext_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawContext::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawContext::class_method_definitions */
/* sha: 21436d7e602be9b4d33b99c7ec0b1725e4ee8edaaae6805105fa330363968abd */
#if BIND_UiDrawContext_INITIALIZE
  mrb_define_method(mrb, UiDrawContext_class, "initialize", mrb_UI_UiDrawContext_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDrawContext::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
