/*
 * uiDrawPath
 * Defined in file ui.h @ line 338
 */

#include "mruby_UI.h"

#if BIND_DrawPath_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath::initialize */
/* sha: 09d91e342c48026db482e5ee41f842d6f98925464013a85c8499bc1670e53623 */
#if BIND_DrawPath_INITIALIZE
mrb_value
mrb_UI_DrawPath_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawPath* native_object = (uiDrawPath*)calloc(1, sizeof(uiDrawPath));
  mruby_gift_uiDrawPath_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawPath_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath::class_definition */
/* sha: cb7484d9594ab3f79b534dafc2da9f597c523f39a38a2c26754b8e89a33b383f */
  struct RClass* DrawPath_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawPath", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawPath_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath::class_method_definitions */
/* sha: daa8d7ce41c3133afc70281113664251ef532080d04ea41be7bf138f1e0ca713 */
#if BIND_DrawPath_INITIALIZE
  mrb_define_method(mrb, DrawPath_class, "initialize", mrb_UI_DrawPath_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DrawPath::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
