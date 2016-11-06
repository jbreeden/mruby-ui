/*
 * uiColorButton
 * Defined in file ui.h @ line 650
 */

#include "mruby_UI.h"

#if BIND_UiColorButton_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiColorButton::initialize */
/* sha: fc96814c54f1fafe49c94836ee79609eed657b23cf1cd3de742a0d4477b032ce */
#if BIND_UiColorButton_INITIALIZE
mrb_value
mrb_UI_UiColorButton_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiColorButton* native_object = (uiColorButton*)calloc(1, sizeof(uiColorButton));
  mruby_gift_uiColorButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiColorButton_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiColorButton::class_definition */
/* sha: 8657dc3d5283ecb91711259c4cfa50fbc5f0d03e08822823a6b940cb30e85653 */
  struct RClass* UiColorButton_class = mrb_define_class_under(mrb, UI_module(mrb), "UiColorButton", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiColorButton_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiColorButton::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiColorButton::class_method_definitions */
/* sha: cca2cf7f01a0ac8b23dc440b8a5fb01ae996cf158199384bc31afe05c3eebf41 */
#if BIND_UiColorButton_INITIALIZE
  mrb_define_method(mrb, UiColorButton_class, "initialize", mrb_UI_UiColorButton_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiColorButton::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
