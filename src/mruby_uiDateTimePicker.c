/*
 * uiDateTimePicker
 * Defined in file ui.h @ line 232
 */

#include "mruby_UI.h"

#if BIND_DateTimePicker_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker::initialize */
/* sha: 1eabe33781ee4ac817442ffef3bc8057d837c761564addcbf83cca4f682cdd59 */
#if BIND_DateTimePicker_INITIALIZE
mrb_value
mrb_UI_DateTimePicker_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiDateTimePicker* native_object = (uiDateTimePicker*)calloc(1, sizeof(uiDateTimePicker));
  mruby_gift_uiDateTimePicker_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_DateTimePicker_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker::class_definition */
/* sha: ea8ec858ddecbd52a5392689aa417d61e23134af923eb7d550ab1fd23cc26118 */
  struct RClass* DateTimePicker_class = mrb_define_class_under(mrb, UI_module(mrb), "DateTimePicker", Control_class(mrb));
  MRB_SET_INSTANCE_TT(DateTimePicker_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker::class_method_definitions */
/* sha: b96388df0266697ffc6a799baf5b7ba932710c158ec103937fa94c321281c31b */
#if BIND_DateTimePicker_INITIALIZE
  mrb_define_method(mrb, DateTimePicker_class, "initialize", mrb_UI_DateTimePicker_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: DateTimePicker::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
