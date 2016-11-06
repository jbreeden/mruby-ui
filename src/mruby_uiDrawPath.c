/*
 * uiDrawPath
 * Defined in file ui.h @ line 338
 */

#include "mruby_UI.h"

#if BIND_UiDrawPath_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawPath::initialize */
/* sha: e31b407257a9549770576a4de87a41253a1b78a67ccc3924708259ec6108b554 */
#if BIND_UiDrawPath_INITIALIZE
mrb_value
mrb_UI_UiDrawPath_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawPath* native_object = (uiDrawPath*)calloc(1, sizeof(uiDrawPath));
  mruby_gift_uiDrawPath_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawPath_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawPath::class_definition */
/* sha: c8c7d6ad94a99442919dd22fe4a2b91b734fb95225d0644ace60d70baf19052e */
  struct RClass* UiDrawPath_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawPath", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawPath_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawPath::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawPath::class_method_definitions */
/* sha: 0191a2d4fa709a980946fb4ae0bc0cec31e141af2747912149327b5eca8e88d5 */
#if BIND_UiDrawPath_INITIALIZE
  mrb_define_method(mrb, UiDrawPath_class, "initialize", mrb_UI_UiDrawPath_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDrawPath::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
