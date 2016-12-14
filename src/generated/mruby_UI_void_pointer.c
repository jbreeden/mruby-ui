/**
 * Boxing/Freeing Functions
 */

static void
free_UI_void_pointer(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(((mruby_to_native_ref*)ptr)->obj);
  }
  free(ptr);
}

static const
mrb_data_type UI_void_pointer_data_type = {
   "mruby_UI_void_pointer", free_UI_void_pointer
};

int
mruby_UI_typecheck_void_pointer(mrb_state *mrb, mrb_value value, const char * underlying_type) {
  return mrb_nil_p(value) || mrb_obj_is_kind_of(mrb, value, UI_Pointer_module(mrb));
}

mrb_value
mruby_UI_box_void_pointer(mrb_state* mrb, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_VoidPointer_class(mrb), &UI_void_pointer_data_type, box));
}

mrb_value
mruby_UI_giftwrap_void_pointer(mrb_state* mrb, void *unboxed)
{
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UI_VoidPointer_class(mrb), &UI_void_pointer_data_type, box));
}

void
mruby_UI_set_void_pointer_data_ptr(mrb_value obj, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &UI_void_pointer_data_type);
}

void
mruby_UI_gift_void_pointer_data_ptr(mrb_value obj, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &UI_void_pointer_data_type);
}

void *
mruby_UI_unbox_void_pointer(mrb_state* mrb, mrb_value boxed)
{
  if (mrb_nil_p(boxed)) {
    return NULL;
  }
  if (!mrb_obj_is_kind_of(mrb, boxed, UI_Pointer_module(mrb))) {
    mrb_raise(mrb, mrb->eStandardError_class, "Expected some kind of Pointer");
    return NULL;
  }
  return (void *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}

/**
 * Class Methods
 */

mrb_value
mruby_UI_VoidPointer_null(mrb_state *mrb, mrb_value self)
{
  return mruby_UI_box_void_pointer(mrb, NULL);
}

/**
 * Instance Methods
 */

mrb_value
mruby_UI_VoidPointer_is_null(mrb_state *mrb, mrb_value self)
{
  char* cstr = mruby_UI_unbox_void_pointer(mrb, self);
  if (cstr == NULL) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

mrb_value
mruby_UI_VoidPointer_read_cstr(mrb_state *mrb, mrb_value self)
{
  char* cstr = mruby_UI_unbox_void_pointer(mrb, self);
  if (cstr == NULL) {
    return mrb_nil_value();
  } else {
    return mrb_str_new_cstr(mrb, cstr);
  }
}

/**
 * Initialization Function
 */

void mruby_UI_VoidPointer_init(mrb_state* mrb)
{
  struct RClass* VoidPointer_class = mrb_define_class_under(mrb, UI_module(mrb), "VoidPointer", mrb->object_class);
  MRB_SET_INSTANCE_TT(VoidPointer_class, MRB_TT_DATA);
  mrb_include_module(mrb, VoidPointer_class, UI_Pointer_module(mrb));

  mrb_define_class_method(mrb, VoidPointer_class, "null", mruby_UI_VoidPointer_null, MRB_ARGS_ARG(0, 0));

  mrb_define_method(mrb, VoidPointer_class, "null?", mruby_UI_VoidPointer_is_null, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, VoidPointer_class, "read_cstr", mruby_UI_VoidPointer_read_cstr, MRB_ARGS_ARG(0, 0));
}
