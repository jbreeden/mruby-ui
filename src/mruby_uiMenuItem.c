/*
 * uiMenuItem
 * Defined in file ui.h @ line 250
 */

#include "mruby_UI.h"

#if BIND_UiMenuItem_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenuItem::initialize */
/* sha: f7cc957dd55f9a29447f4242d966def1232d48eec32251aa3d8e6d1ae224adb8 */
#if BIND_UiMenuItem_INITIALIZE
mrb_value
mrb_UI_UiMenuItem_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMenuItem* native_object = (uiMenuItem*)calloc(1, sizeof(uiMenuItem));
  mruby_gift_uiMenuItem_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiMenuItem_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenuItem::class_definition */
/* sha: 9631d49bcfb4c7a364adf39671df95789b2de932f9851a0e3a873101809325bd */
  struct RClass* UiMenuItem_class = mrb_define_class_under(mrb, UI_module(mrb), "UiMenuItem", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiMenuItem_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenuItem::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenuItem::class_method_definitions */
/* sha: 75ba15d8bd5f20edf89720236b0256d578103feba39f212e682ea1e43ebcac83 */
#if BIND_UiMenuItem_INITIALIZE
  mrb_define_method(mrb, UiMenuItem_class, "initialize", mrb_UI_UiMenuItem_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiMenuItem::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
