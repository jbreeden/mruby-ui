/*
 * uiDrawFontFamilies
 * Defined in file ui.h @ line 481
 */

#include "mruby_UI.h"

#if BIND_DrawFontFamilies_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies::initialize */
/* sha: 400e47ebe4e9fcda2e2ac70d9bb581a639914d68bd523656880ae035480ba42c */
#if BIND_DrawFontFamilies_INITIALIZE
mrb_value
mrb_UI_DrawFontFamilies_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawFontFamilies* native_object = (uiDrawFontFamilies*)calloc(1, sizeof(uiDrawFontFamilies));
  mruby_gift_uiDrawFontFamilies_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawFontFamilies_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies::class_definition */
/* sha: 8af635cde3f03baedaf81c3f0cbee2bbafd9c1c1a602317bd2923324acc71e9b */
  struct RClass* DrawFontFamilies_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawFontFamilies", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawFontFamilies_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies::class_method_definitions */
/* sha: b6d522d58431301c438465613759dc23ca657de26ed2b7ed1758ecd54741885a */
#if BIND_DrawFontFamilies_INITIALIZE
  mrb_define_method(mrb, DrawFontFamilies_class, "initialize", mrb_UI_DrawFontFamilies_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DrawFontFamilies::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
