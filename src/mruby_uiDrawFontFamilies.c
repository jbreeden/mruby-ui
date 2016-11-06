/*
 * uiDrawFontFamilies
 * Defined in file ui.h @ line 481
 */

#include "mruby_UI.h"

#if BIND_UiDrawFontFamilies_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawFontFamilies::initialize */
/* sha: 00c4b66f784832a7e6d29bc75c01128e56affdddaaaf621d30a706a2ce376ef3 */
#if BIND_UiDrawFontFamilies_INITIALIZE
mrb_value
mrb_UI_UiDrawFontFamilies_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawFontFamilies* native_object = (uiDrawFontFamilies*)calloc(1, sizeof(uiDrawFontFamilies));
  mruby_gift_uiDrawFontFamilies_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawFontFamilies_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawFontFamilies::class_definition */
/* sha: cf7ef85a470da9e92f43199a01f8adbff5a6317b05cddfcaa2a31214de8a57d5 */
  struct RClass* UiDrawFontFamilies_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawFontFamilies", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawFontFamilies_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawFontFamilies::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawFontFamilies::class_method_definitions */
/* sha: e866081649c5f699a5d73207404ef55c60846a0d7945018b6ab7a628b7721e46 */
#if BIND_UiDrawFontFamilies_INITIALIZE
  mrb_define_method(mrb, UiDrawFontFamilies_class, "initialize", mrb_UI_UiDrawFontFamilies_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDrawFontFamilies::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
