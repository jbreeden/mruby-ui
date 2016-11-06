/*
 * uiArea
 * Defined in file ui.h @ line 273
 */

#include "mruby_UI.h"

#if BIND_Area_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Area::initialize */
/* sha: 3a97a00f860495ba750acb0d987d0aa4ddd550e56d64294ae8015a82d7891dd4 */
#if BIND_Area_INITIALIZE
mrb_value
mrb_UI_Area_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiArea* native_object = (uiArea*)calloc(1, sizeof(uiArea));
  mruby_gift_uiArea_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Area_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Area::class_definition */
/* sha: d25977bcededf1b553e3eb0d512f52ecde5fa576c02e26a6d2a03546c03f8e92 */
  struct RClass* Area_class = mrb_define_class_under(mrb, UI_module(mrb), "Area", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Area_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Area::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Area::class_method_definitions */
/* sha: 852347e3bd3d330f5a3f7adacf94962435f59fa8f805ceb268ab29046bf2e7ff */
#if BIND_Area_INITIALIZE
  mrb_define_method(mrb, Area_class, "initialize", mrb_UI_Area_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Area::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
