/*
 * uiTab
 * Defined in file ui.h @ line 158
 */

#include "mruby_UI.h"

#if BIND_UiTab_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiTab::initialize */
/* sha: e3bbc240588436de580cdbdb7592db546043d168fcee882c80bede038bdb6780 */
#if BIND_UiTab_INITIALIZE
mrb_value
mrb_UI_UiTab_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiTab* native_object = (uiTab*)calloc(1, sizeof(uiTab));
  mruby_gift_uiTab_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiTab_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiTab::class_definition */
/* sha: 8a537dd236fa5e41040a68df34677a03daf8aad2008de561e93dbb3afb6bab91 */
  struct RClass* UiTab_class = mrb_define_class_under(mrb, UI_module(mrb), "UiTab", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiTab_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiTab::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiTab::class_method_definitions */
/* sha: 2c07191ef03d0d9da72f7180818570542270737e96ef05a0dc62ea6a3c8efc71 */
#if BIND_UiTab_INITIALIZE
  mrb_define_method(mrb, UiTab_class, "initialize", mrb_UI_UiTab_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiTab::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
