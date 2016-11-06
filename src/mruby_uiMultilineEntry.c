/*
 * uiMultilineEntry
 * Defined in file ui.h @ line 239
 */

#include "mruby_UI.h"

#if BIND_MultilineEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry::initialize */
/* sha: b4bc2a4ca7a74c885df3a49639de46fb86109735956649eb18bcdeaf324370b8 */
#if BIND_MultilineEntry_INITIALIZE
mrb_value
mrb_UI_MultilineEntry_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiMultilineEntry* native_object = (uiMultilineEntry*)calloc(1, sizeof(uiMultilineEntry));
  mruby_gift_uiMultilineEntry_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_MultilineEntry_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry::class_definition */
/* sha: bb9e98a404028e8a5f3d5064ee8f017451aec3f4cb7ac8c6e54a355f2d596890 */
  struct RClass* MultilineEntry_class = mrb_define_class_under(mrb, UI_module(mrb), "MultilineEntry", Control_class(mrb));
  MRB_SET_INSTANCE_TT(MultilineEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry::class_method_definitions */
/* sha: 6f0e4b224a7666ef6c654beff497273bd157b69ccc1d67ff7d8054c56b54667c */
#if BIND_MultilineEntry_INITIALIZE
  mrb_define_method(mrb, MultilineEntry_class, "initialize", mrb_UI_MultilineEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: MultilineEntry::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
