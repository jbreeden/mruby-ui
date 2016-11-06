/*
 * uiGrid
 * Defined in file ui.h @ line 679
 */

#include "mruby_UI.h"

#if BIND_UiGrid_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGrid::initialize */
/* sha: bab524e80dfd5ce599cdf085599d3b9b9a49d88c9cfb68e81ae6dd88d94e6c5d */
#if BIND_UiGrid_INITIALIZE
mrb_value
mrb_UI_UiGrid_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiGrid* native_object = (uiGrid*)calloc(1, sizeof(uiGrid));
  mruby_gift_uiGrid_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiGrid_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGrid::class_definition */
/* sha: 0675f833d0097203f194ee4f7c54d5052b5097cff96c9e70afe63bc41348f7a7 */
  struct RClass* UiGrid_class = mrb_define_class_under(mrb, UI_module(mrb), "UiGrid", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiGrid_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGrid::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGrid::class_method_definitions */
/* sha: 91e2a1ab9ecc257369a9dcc55683ef5e9cfa1efd664f07a77252d409638a5693 */
#if BIND_UiGrid_INITIALIZE
  mrb_define_method(mrb, UiGrid_class, "initialize", mrb_UI_UiGrid_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiGrid::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
