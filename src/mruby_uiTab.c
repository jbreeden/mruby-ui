/*
 * uiTab
 * Defined in file ui.h @ line 158
 */

#include "mruby_UI.h"

#if BIND_Tab_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab::initialize */
/* sha: 62db3efcd8fad4e1adf65a0f4eff20a011759d45577e0eb18c4097b9141c4dab */
#if BIND_Tab_INITIALIZE
mrb_value
mrb_UI_Tab_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiTab* native_object = (uiTab*)calloc(1, sizeof(uiTab));
  mruby_gift_uiTab_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Tab_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab::class_definition */
/* sha: bf27124ae650584eb34e195b85d00fed8d15118cfd959cf0f671bf4c749e2aaa */
  struct RClass* Tab_class = mrb_define_class_under(mrb, UI_module(mrb), "Tab", mrb->object_class);
  MRB_SET_INSTANCE_TT(Tab_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab::class_method_definitions */
/* sha: efada3b1c5bed479ed130f0bc2cbdf59aa8ca90cb66c43596bd6e6070597bb26 */
#if BIND_Tab_INITIALIZE
  mrb_define_method(mrb, Tab_class, "initialize", mrb_UI_Tab_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Tab::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
