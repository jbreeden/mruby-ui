/*
 * uiMenu
 * Defined in file ui.h @ line 258
 */

#include "mruby_UI.h"

#if BIND_UiMenu_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenu::initialize */
/* sha: 7702f280176e3e7b802524bd30cca4c2de13c9a9c71c353affe81a00b59a49ce */
#if BIND_UiMenu_INITIALIZE
mrb_value
mrb_UI_UiMenu_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMenu* native_object = (uiMenu*)calloc(1, sizeof(uiMenu));
  mruby_gift_uiMenu_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiMenu_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenu::class_definition */
/* sha: 0a0cb92a7c6d87c534d6b8e3127c1779f3b7b34b610c1175262acebf1c8bf799 */
  struct RClass* UiMenu_class = mrb_define_class_under(mrb, UI_module(mrb), "UiMenu", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiMenu_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenu::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiMenu::class_method_definitions */
/* sha: 836d1a7b7d7540848a32c134a8cd06dd2cae42766b9e0dfae099289a49a89271 */
#if BIND_UiMenu_INITIALIZE
  mrb_define_method(mrb, UiMenu_class, "initialize", mrb_UI_UiMenu_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiMenu::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
