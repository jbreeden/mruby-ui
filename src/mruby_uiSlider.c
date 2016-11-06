/*
 * uiSlider
 * Defined in file ui.h @ line 189
 */

#include "mruby_UI.h"

#if BIND_Slider_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider::initialize */
/* sha: abbce539ec513ad6b9865ad72e82b9bc3aba0403290f3bd916664abf40c5e400 */
#if BIND_Slider_INITIALIZE
mrb_value
mrb_UI_Slider_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiSlider* native_object = (uiSlider*)calloc(1, sizeof(uiSlider));
  mruby_gift_uiSlider_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Slider_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider::class_definition */
/* sha: 0a889ea91e369b44cc672d5dab92c514cabc6a720e5e1de139177c69cd5ba9f1 */
  struct RClass* Slider_class = mrb_define_class_under(mrb, UI_module(mrb), "Slider", mrb->object_class);
  MRB_SET_INSTANCE_TT(Slider_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider::class_method_definitions */
/* sha: 836a95479df53409fbc9610136c6f580d749b842399063268bc08d215ea77841 */
#if BIND_Slider_INITIALIZE
  mrb_define_method(mrb, Slider_class, "initialize", mrb_UI_Slider_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Slider::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
