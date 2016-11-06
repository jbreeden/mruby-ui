/*
 * uiDrawTextFont
 * Defined in file ui.h @ line 490
 */

#include "mruby_UI.h"

#if BIND_DrawTextFont_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont::initialize */
/* sha: ddb315ae484a86685841cfce744b2217e38dd8ddb9009632312046743dba8709 */
#if BIND_DrawTextFont_INITIALIZE
mrb_value
mrb_UI_DrawTextFont_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextFont* native_object = (uiDrawTextFont*)calloc(1, sizeof(uiDrawTextFont));
  mruby_gift_uiDrawTextFont_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawTextFont_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont::class_definition */
/* sha: b71e6514c5983a3ed2e9a45dcda9ba3b435b8bc9e66ae27885f56a17f25174ac */
  struct RClass* DrawTextFont_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFont", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawTextFont_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont::class_method_definitions */
/* sha: f2bf2675d6ac66b250d3e06c977cd7a64d5120f3634eb88df0d3b8c32504a418 */
#if BIND_DrawTextFont_INITIALIZE
  mrb_define_method(mrb, DrawTextFont_class, "initialize", mrb_UI_DrawTextFont_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DrawTextFont::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
