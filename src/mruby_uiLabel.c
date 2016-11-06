/*
 * uiLabel
 * Defined in file ui.h @ line 152
 */

#include "mruby_UI.h"

#if BIND_Label_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label::initialize */
/* sha: cf959fdde285c1ebf4675dff54e6517a342abc454f53fb0fc178b2462b327271 */
#if BIND_Label_INITIALIZE
mrb_value
mrb_UI_Label_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiLabel* native_object = (uiLabel*)calloc(1, sizeof(uiLabel));
  mruby_gift_uiLabel_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_Label_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label::class_definition */
/* sha: 03aa2f8cce9ba6fb47ea21fceddc6cf96f5cfabd36b9df7599bb7e70d9078cb7 */
  struct RClass* Label_class = mrb_define_class_under(mrb, UI_module(mrb), "Label", mrb->object_class);
  MRB_SET_INSTANCE_TT(Label_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label::class_method_definitions */
/* sha: 7567b60098663c91082e008b4125c54f296581c850dec505d40ab81dcdb0e5af */
#if BIND_Label_INITIALIZE
  mrb_define_method(mrb, Label_class, "initialize", mrb_UI_Label_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Label::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
