/*
 * uiMenuItem
 * Defined in file ui.h @ line 250
 */

#include "mruby_UI.h"

#if BIND_MenuItem_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem::initialize */
/* sha: 5e622b6776fb097bc9d3e8da11ff23ea4cc8caccf270fadb2061a577317d56bf */
#if BIND_MenuItem_INITIALIZE
mrb_value
mrb_UI_MenuItem_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMenuItem* native_object = (uiMenuItem*)calloc(1, sizeof(uiMenuItem));
  mruby_gift_uiMenuItem_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_MenuItem_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem::class_definition */
/* sha: 07015d8a19336c9e01483185be45bcf17525c42d13529e95f2bbb6df6ff221d5 */
  struct RClass* MenuItem_class = mrb_define_class_under(mrb, UI_module(mrb), "MenuItem", mrb->object_class);
  MRB_SET_INSTANCE_TT(MenuItem_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem::class_method_definitions */
/* sha: 3a4f097c13fea7575b0056245a79af0f523ff236ced6b960e207c60a084a8df6 */
#if BIND_MenuItem_INITIALIZE
  mrb_define_method(mrb, MenuItem_class, "initialize", mrb_UI_MenuItem_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: MenuItem::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
