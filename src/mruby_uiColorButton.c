/*
 * uiColorButton
 * Defined in file ui.h @ line 650
 */

#include "mruby_UI.h"

#if BIND_ColorButton_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton::initialize */
/* sha: e9d6665c14ed51d6ed8b0c6f49e9a383545e613225c4f38a665f45103dc077a3 */
#if BIND_ColorButton_INITIALIZE
mrb_value
mrb_UI_ColorButton_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiColorButton* native_object = (uiColorButton*)calloc(1, sizeof(uiColorButton));
  mruby_gift_uiColorButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_ColorButton_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton::class_definition */
/* sha: 85f2f4640111d069899924b63259a9e1e809259e972aaa2d0454a5b28ec5a4b5 */
  struct RClass* ColorButton_class = mrb_define_class_under(mrb, UI_module(mrb), "ColorButton", mrb->object_class);
  MRB_SET_INSTANCE_TT(ColorButton_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton::class_method_definitions */
/* sha: aefff7ead6d8994d9fa43d00784c56643d93c5ecc4cef822dd865c8af5a3ce58 */
#if BIND_ColorButton_INITIALIZE
  mrb_define_method(mrb, ColorButton_class, "initialize", mrb_UI_ColorButton_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: ColorButton::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
