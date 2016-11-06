/*
 * uiSeparator
 * Defined in file ui.h @ line 202
 */

#include "mruby_UI.h"

#if BIND_UiSeparator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSeparator::initialize */
/* sha: 6f7c9ab07d2fef0f8b3e3702898684b476718eff9da292897f81ba7b53594e80 */
#if BIND_UiSeparator_INITIALIZE
mrb_value
mrb_UI_UiSeparator_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSeparator* native_object = (uiSeparator*)calloc(1, sizeof(uiSeparator));
  mruby_gift_uiSeparator_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiSeparator_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSeparator::class_definition */
/* sha: 450506777d6d1a6c8446b9df73d71f13f325c86285ec020addcf97ec6b2795fc */
  struct RClass* UiSeparator_class = mrb_define_class_under(mrb, UI_module(mrb), "UiSeparator", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiSeparator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSeparator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSeparator::class_method_definitions */
/* sha: 84cadea77af5a0c8a4e807a10d76c89b68ce29a8126dbc0d0a50f0c974142db0 */
#if BIND_UiSeparator_INITIALIZE
  mrb_define_method(mrb, UiSeparator_class, "initialize", mrb_UI_UiSeparator_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiSeparator::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
