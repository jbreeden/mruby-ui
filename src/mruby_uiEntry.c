/*
 * uiEntry
 * Defined in file ui.h @ line 141
 */

#include "mruby_UI.h"

#if BIND_UiEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEntry::initialize */
/* sha: eea31549fc7e7f9b591c01f7f3a8c7aed479b272e2cd0e1f6012d6de40987a96 */
#if BIND_UiEntry_INITIALIZE
mrb_value
mrb_UI_UiEntry_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiEntry* native_object = (uiEntry*)calloc(1, sizeof(uiEntry));
  mruby_gift_uiEntry_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiEntry_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEntry::class_definition */
/* sha: 04dd0719baec2f1ae0e0277902641efb37263f919fb204352750d565708c55f7 */
  struct RClass* UiEntry_class = mrb_define_class_under(mrb, UI_module(mrb), "UiEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiEntry::class_method_definitions */
/* sha: 7768361e48d1be8c059fba194d35b1a6b971df639d05f9df365c35b7bf32a625 */
#if BIND_UiEntry_INITIALIZE
  mrb_define_method(mrb, UiEntry_class, "initialize", mrb_UI_UiEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiEntry::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
