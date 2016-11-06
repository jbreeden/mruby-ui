/*
 * uiBox
 * Defined in file ui.h @ line 123
 */

#include "mruby_UI.h"

#if BIND_UiBox_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiBox::initialize */
/* sha: 95a931c98a23b76b20bb4ff343bfbac4950734749e296d349966d06af7e16fbc */
#if BIND_UiBox_INITIALIZE
mrb_value
mrb_UI_UiBox_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiBox* native_object = (uiBox*)calloc(1, sizeof(uiBox));
  mruby_gift_uiBox_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiBox_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiBox::class_definition */
/* sha: da3cbf071b99dcfb2724306e39aa4e451d2db97bf919d16456bf19331b45d4a2 */
  struct RClass* UiBox_class = mrb_define_class_under(mrb, UI_module(mrb), "UiBox", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiBox_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiBox::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiBox::class_method_definitions */
/* sha: 64b8a4bcc4fc9730d0a15a90a1a6b894fb87a1b54314b4a1d287d4fb5dd63cdb */
#if BIND_UiBox_INITIALIZE
  mrb_define_method(mrb, UiBox_class, "initialize", mrb_UI_UiBox_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiBox::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
