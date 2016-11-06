/*
 * uiGroup
 * Defined in file ui.h @ line 168
 */

#include "mruby_UI.h"

#if BIND_UiGroup_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGroup::initialize */
/* sha: 91eaad66150e22455c3554041766df0c8690aad38e16faa52f39b4cd853c5ca2 */
#if BIND_UiGroup_INITIALIZE
mrb_value
mrb_UI_UiGroup_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiGroup* native_object = (uiGroup*)calloc(1, sizeof(uiGroup));
  mruby_gift_uiGroup_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiGroup_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGroup::class_definition */
/* sha: 7f434baa640d01cc651d6e6b1dc22ecb907008fcb462283e482b09604ad528e4 */
  struct RClass* UiGroup_class = mrb_define_class_under(mrb, UI_module(mrb), "UiGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiGroup_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGroup::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiGroup::class_method_definitions */
/* sha: 3f2baa5d882f257afd60365c0f06e9dccd613bad0756d6d15468d5732d832f15 */
#if BIND_UiGroup_INITIALIZE
  mrb_define_method(mrb, UiGroup_class, "initialize", mrb_UI_UiGroup_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: UiGroup::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
