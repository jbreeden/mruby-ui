/*
 * uiDrawTextLayout
 * Defined in file ui.h @ line 489
 */

#include "mruby_UI.h"

#if BIND_DrawTextLayout_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout::initialize */
/* sha: 1f6e569229dd80fc5c9546ee099eee1b05fe96d5a74d69ddb8a31cb1740bd9a0 */
#if BIND_DrawTextLayout_INITIALIZE
mrb_value
mrb_UI_DrawTextLayout_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextLayout* native_object = (uiDrawTextLayout*)calloc(1, sizeof(uiDrawTextLayout));
  mruby_gift_uiDrawTextLayout_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawTextLayout_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout::class_definition */
/* sha: b8e4990f742b986394ea2383da206dca19ef4347836467f3d6d5d0d734fbd3de */
  struct RClass* DrawTextLayout_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextLayout", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawTextLayout_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout::class_method_definitions */
/* sha: eb324eb26525a5dcdbaf458ee8c901101a31cdbad8e4b527c956fc179c6ec207 */
#if BIND_DrawTextLayout_INITIALIZE
  mrb_define_method(mrb, DrawTextLayout_class, "initialize", mrb_UI_DrawTextLayout_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DrawTextLayout::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
