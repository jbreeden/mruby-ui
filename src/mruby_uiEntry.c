/*
 * uiEntry
 * Defined in file ui.h @ line 141
 */

#include "mruby_UI.h"

#if BIND_Entry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry::initialize */
/* sha: 02a9ebc888c01957ff143e5129ad4b1ad0193d3d9e0934716a8ad59ea95391cb */
#if BIND_Entry_INITIALIZE
mrb_value
mrb_UI_Entry_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiEntry* native_object = (uiEntry*)calloc(1, sizeof(uiEntry));
  mruby_gift_uiEntry_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Entry_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry::class_definition */
/* sha: 8600a7e2268a4e6db38731ffc9cc8578df56efdb076410f958d10f905a9c09e2 */
  struct RClass* Entry_class = mrb_define_class_under(mrb, UI_module(mrb), "Entry", mrb->object_class);
  MRB_SET_INSTANCE_TT(Entry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry::class_method_definitions */
/* sha: c29eeea89bf87b842693f4c64728d9ce41f5cfd3d566ae495d4064f703c41957 */
#if BIND_Entry_INITIALIZE
  mrb_define_method(mrb, Entry_class, "initialize", mrb_UI_Entry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Entry::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
