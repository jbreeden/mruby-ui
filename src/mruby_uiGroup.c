/*
 * uiGroup
 * Defined in file ui.h @ line 168
 */

#include "mruby_UI.h"

#if BIND_Group_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group::initialize */
/* sha: 0375a824664b747318f37e64f72d1298f1109e5eca02268e174f068cfed4a8f4 */
#if BIND_Group_INITIALIZE
mrb_value
mrb_UI_Group_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiGroup* native_object = (uiGroup*)calloc(1, sizeof(uiGroup));
  mruby_gift_uiGroup_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Group_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group::class_definition */
/* sha: ad84c6592500dc86bd7652d639fef79d6c718d4ca4bf2c3ee7345230426325ae */
  struct RClass* Group_class = mrb_define_class_under(mrb, UI_module(mrb), "Group", mrb->object_class);
  MRB_SET_INSTANCE_TT(Group_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group::class_method_definitions */
/* sha: 700603f5669da961da604f9f4f61e11a8a4919d7f2b5d3a6401401867d924db5 */
#if BIND_Group_INITIALIZE
  mrb_define_method(mrb, Group_class, "initialize", mrb_UI_Group_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Group::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
