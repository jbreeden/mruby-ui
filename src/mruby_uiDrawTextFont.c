/*
 * uiDrawTextFont
 * Defined in file ui.h @ line 490
 */

#include "mruby_UI.h"

#if BIND_UiDrawTextFont_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFont::initialize */
/* sha: 9cbe1ee8f30b833e127fde5350e638da532ecee7bbcde54a8890d1eeeff998dc */
#if BIND_UiDrawTextFont_INITIALIZE
mrb_value
mrb_UI_UiDrawTextFont_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDrawTextFont* native_object = (uiDrawTextFont*)calloc(1, sizeof(uiDrawTextFont));
  mruby_gift_uiDrawTextFont_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiDrawTextFont_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFont::class_definition */
/* sha: 5cdcd285fa8f7849585691f98637ca4a2ad482c18decf0c1ac50c8ea3acc49ab */
  struct RClass* UiDrawTextFont_class = mrb_define_class_under(mrb, UI_module(mrb), "UiDrawTextFont", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiDrawTextFont_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFont::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiDrawTextFont::class_method_definitions */
/* sha: bf9b34982924bc69b73a53f42c1236348daf7cd740c1a4e27c9d668046bd4bbb */
#if BIND_UiDrawTextFont_INITIALIZE
  mrb_define_method(mrb, UiDrawTextFont_class, "initialize", mrb_UI_UiDrawTextFont_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiDrawTextFont::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
