/*
 * uiSlider
 * Defined in file ui.h @ line 189
 */

#include "mruby_UI.h"

#if BIND_UiSlider_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSlider::initialize */
/* sha: efe3e70ee7d230781105e2eb0bb31f5a3f24ec65930e7c90610181418fb96ce3 */
#if BIND_UiSlider_INITIALIZE
mrb_value
mrb_UI_UiSlider_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSlider* native_object = (uiSlider*)calloc(1, sizeof(uiSlider));
  mruby_gift_uiSlider_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiSlider_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSlider::class_definition */
/* sha: aa698f9a65d90a300fd1fba96be25ee30258a7868b05134a11b360b9e9490be3 */
  struct RClass* UiSlider_class = mrb_define_class_under(mrb, UI_module(mrb), "UiSlider", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiSlider_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSlider::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiSlider::class_method_definitions */
/* sha: 20a062901d1a4e9772e88b14adb674920fd8cb029e652d7748c6e5fb2a2bce6c */
#if BIND_UiSlider_INITIALIZE
  mrb_define_method(mrb, UiSlider_class, "initialize", mrb_UI_UiSlider_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiSlider::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
