/*
 * uiArea
 * Defined in file ui.h @ line 273
 */

#include "mruby_UI.h"

#if BIND_UiArea_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiArea::initialize */
/* sha: 4b7048ac895dbfb6e6ea3240dc1b4ce5c632d19c7a43b9c806305982ca10bcdd */
#if BIND_UiArea_INITIALIZE
mrb_value
mrb_UI_UiArea_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiArea* native_object = (uiArea*)calloc(1, sizeof(uiArea));
  mruby_gift_uiArea_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiArea_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiArea::class_definition */
/* sha: c6751fb2097ac0af174d5f5e2b54ad5fa7eac86fac83e0f2ea3496905007408d */
  struct RClass* UiArea_class = mrb_define_class_under(mrb, UI_module(mrb), "UiArea", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiArea_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiArea::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiArea::class_method_definitions */
/* sha: b370cd51f11dc0fd656cdaa6bf7c0d694d8517242d052036cc2c8e0decf50a7a */
#if BIND_UiArea_INITIALIZE
  mrb_define_method(mrb, UiArea_class, "initialize", mrb_UI_UiArea_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiArea::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
