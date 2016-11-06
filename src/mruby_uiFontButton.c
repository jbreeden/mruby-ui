/*
 * uiFontButton
 * Defined in file ui.h @ line 642
 */

#include "mruby_UI.h"

#if BIND_FontButton_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton::initialize */
/* sha: 6d15be029f230006801b79daba90d43df6374693830464ecfad511e6b1de73ac */
#if BIND_FontButton_INITIALIZE
mrb_value
mrb_UI_FontButton_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiFontButton* native_object = (uiFontButton*)calloc(1, sizeof(uiFontButton));
  mruby_gift_uiFontButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_FontButton_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton::class_definition */
/* sha: 40c4378db8fbf1cae9eb8a0fa481ca59f9b74c68f0f461e5ae3116d400594cbd */
  struct RClass* FontButton_class = mrb_define_class_under(mrb, UI_module(mrb), "FontButton", mrb->object_class);
  MRB_SET_INSTANCE_TT(FontButton_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton::class_method_definitions */
/* sha: 6a70c37a705d35ba5a341e97050afde24a1f0c29b0b11532da2c60c432906a90 */
#if BIND_FontButton_INITIALIZE
  mrb_define_method(mrb, FontButton_class, "initialize", mrb_UI_FontButton_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: FontButton::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
