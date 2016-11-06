/*
 * uiGrid
 * Defined in file ui.h @ line 679
 */

#include "mruby_UI.h"

#if BIND_Grid_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid::initialize */
/* sha: a58448dea7d4bf4680899f2a5a28749591e60d9e9001081f4f748a19f9e05c38 */
#if BIND_Grid_INITIALIZE
mrb_value
mrb_UI_Grid_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiGrid* native_object = (uiGrid*)calloc(1, sizeof(uiGrid));
  mruby_gift_uiGrid_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Grid_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid::class_definition */
/* sha: c4e4828669ca82c92b16cc17eeae3f086556013025b5f9d14d032d26c8ee9068 */
  struct RClass* Grid_class = mrb_define_class_under(mrb, UI_module(mrb), "Grid", Control_class(mrb));
  MRB_SET_INSTANCE_TT(Grid_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid::class_method_definitions */
/* sha: 022a7e58530bf8513c01291bf95bd449b8fd3d4cc13e4fb05386b822ce986fe9 */
#if BIND_Grid_INITIALIZE
  mrb_define_method(mrb, Grid_class, "initialize", mrb_UI_Grid_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Grid::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
