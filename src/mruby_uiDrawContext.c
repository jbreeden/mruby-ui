/*
 * uiDrawContext
 * Defined in file ui.h @ line 279
 */

#include "mruby_UI.h"

#if BIND_DrawContext_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext::initialize */
/* sha: fa3d98aa0fe13fbf1b9248b14cf34c98741eb255f8d5743f418b994a28b258a2 */
#if BIND_DrawContext_INITIALIZE
mrb_value
mrb_UI_DrawContext_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawContext* native_object = (uiDrawContext*)calloc(1, sizeof(uiDrawContext));
  mruby_gift_uiDrawContext_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DrawContext_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext::class_definition */
/* sha: 6b1b49cf4bcdbd80eea8a2c8409088893c2474a2afd5aadcbfc94a00feee0868 */
  struct RClass* DrawContext_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(DrawContext_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext::class_method_definitions */
/* sha: a017e3495ca22949bef2eb8ad14e42f482e12c5c8f2fbecbd17c5ae276ac7dc6 */
#if BIND_DrawContext_INITIALIZE
  mrb_define_method(mrb, DrawContext_class, "initialize", mrb_UI_DrawContext_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DrawContext::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
