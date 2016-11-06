/*
 * uiInitOptions
 * Defined in file ui.h @ line 37
 */

#include "mruby_UI.h"

#if BIND_UiInitOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::initialize */
/* sha: c0da80a600f844f0369737365879329114751e0a81de649f25a302692b8621e6 */
#if BIND_UiInitOptions_INITIALIZE
mrb_value
mrb_UI_UiInitOptions_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiInitOptions* native_object = (uiInitOptions*)calloc(1, sizeof(uiInitOptions));
  mruby_gift_uiInitOptions_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiInitOptions::Size_reader */
/* sha: 8a9b0d0932e35cfae0f304a368f3368dd1952ed1e49896907ea4b3eefad917c9 */
#if BIND_UiInitOptions_Size_FIELD_READER
mrb_value
mrb_UI_UiInitOptions_get_Size(mrb_state* mrb, mrb_value self) {
  uiInitOptions * native_self = mruby_unbox_uiInitOptions(self);

  int native_Size = native_self->Size;

  mrb_value Size = mrb_fixnum_value(native_Size);

  return Size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::Size_writer */
/* sha: 37fee5b2af8e05f1bca2c0a191df5c8dd5b712f0046b9a0af4b501c554397076 */
#if BIND_UiInitOptions_Size_FIELD_WRITER
mrb_value
mrb_UI_UiInitOptions_set_Size(mrb_state* mrb, mrb_value self) {
  uiInitOptions * native_self = mruby_unbox_uiInitOptions(self);
  mrb_int native_Size;

  mrb_get_args(mrb, "i", &native_Size);

  native_self->Size = native_Size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiInitOptions_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::class_definition */
/* sha: 7e1b0f1cb5481e8457f21a6623a7962901ec03841c3d9afb810e099db48393bb */
  struct RClass* UiInitOptions_class = mrb_define_class_under(mrb, UI_module(mrb), "UiInitOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiInitOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::class_method_definitions */
/* sha: 7e9943e5375fce074b38230dcef9818827fcc4e21b76c1f60c5ce21765963d9e */
#if BIND_UiInitOptions_INITIALIZE
  mrb_define_method(mrb, UiInitOptions_class, "initialize", mrb_UI_UiInitOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiInitOptions::attr_definitions */
/* sha: 5551cd8d0f132d841fcb7cfed9787061f99da4881b7f9d458db0fe33f517b5aa */
  /*
   * Fields
   */
#if BIND_UiInitOptions_Size_FIELD_READER
  mrb_define_method(mrb, UiInitOptions_class, "Size", mrb_UI_UiInitOptions_get_Size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiInitOptions_Size_FIELD_WRITER
  mrb_define_method(mrb, UiInitOptions_class, "Size=", mrb_UI_UiInitOptions_set_Size, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiInitOptions::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
