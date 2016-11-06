/*
 * uiDateTimePicker
 * Defined in file ui.h @ line 232
 */

#include "mruby_UI.h"

#if BIND_UiDateTimePicker_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDateTimePicker::initialize */
/* sha: ec923d0c5dc9118402083bbc0ceac93d0a7d286302e1595b1feada3c47b7f4e5 */
#if BIND_UiDateTimePicker_INITIALIZE
mrb_value
mrb_UI_UiDateTimePicker_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDateTimePicker* native_object = (uiDateTimePicker*)calloc(1, sizeof(uiDateTimePicker));
  mruby_gift_uiDateTimePicker_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDateTimePicker_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDateTimePicker::class_definition */
/* sha: 82dc42d3e3a0ff60a9f55ebb02d0a11aa8e6129d507a6e6726fcf8f2d6c308b2 */
  struct RClass* UiDateTimePicker_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDateTimePicker", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDateTimePicker_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDateTimePicker::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDateTimePicker::class_method_definitions */
/* sha: ce106601ad52f78a3dfb048e4f99d0e6556fe28325ea6c219ef59c515269c9d9 */
#if BIND_UiDateTimePicker_INITIALIZE
  mrb_define_method(mrb, UiDateTimePicker_class, "initialize", mrb_UI_UiDateTimePicker_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDateTimePicker::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
