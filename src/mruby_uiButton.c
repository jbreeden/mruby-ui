/*
 * uiButton
 * Defined in file ui.h @ line 116
 */

#include "mruby_UI.h"

#if BIND_UiButton_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiButton::initialize */
/* sha: c83f0e62d4cd1db4e41ce7f1377109157b8da6aef16f3b54be6464e614af06a6 */
#if BIND_UiButton_INITIALIZE
mrb_value
mrb_UI_UiButton_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiButton* native_object = (uiButton*)calloc(1, sizeof(uiButton));
  mruby_gift_uiButton_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiButton_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiButton::class_definition */
/* sha: ade8a9fea2799da7b859b06032aacd933f9dec424cb706609c4ea2f515d88fdf */
  struct RClass* UiButton_class = mrb_define_class_under(mrb, UI_module(mrb), "UiButton", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiButton_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiButton::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiButton::class_method_definitions */
/* sha: e955401e783dfe64422b00901b1445b2ba6a9b6012f8b3ebaedb7490ca6b9672 */
#if BIND_UiButton_INITIALIZE
  mrb_define_method(mrb, UiButton_class, "initialize", mrb_UI_UiButton_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiButton::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
