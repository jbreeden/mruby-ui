/*
 * uiDrawTextLayout
 * Defined in file ui.h @ line 489
 */

#include "mruby_UI.h"

#if BIND_UiDrawTextLayout_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextLayout::initialize */
/* sha: ebc1bf92a387f472626fc028958eee2feb2417f51f7671b79e3803947f24cb28 */
#if BIND_UiDrawTextLayout_INITIALIZE
mrb_value
mrb_UI_UiDrawTextLayout_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextLayout* native_object = (uiDrawTextLayout*)calloc(1, sizeof(uiDrawTextLayout));
  mruby_gift_uiDrawTextLayout_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawTextLayout_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextLayout::class_definition */
/* sha: 93e8f94627304d60b7fee2a1cb992bfdaf6ef3721e0a38b3ddaea2d80e526ada */
  struct RClass* UiDrawTextLayout_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawTextLayout", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawTextLayout_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextLayout::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextLayout::class_method_definitions */
/* sha: fc0c6e9f3f96f27a62c3253043832ba83863022bf490d8afaec0b338e6d684ea */
#if BIND_UiDrawTextLayout_INITIALIZE
  mrb_define_method(mrb, UiDrawTextLayout_class, "initialize", mrb_UI_UiDrawTextLayout_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDrawTextLayout::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
