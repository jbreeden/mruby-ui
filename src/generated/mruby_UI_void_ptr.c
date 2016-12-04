static void
free_UI_void_ptr(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(((mruby_to_native_ref*)ptr)->obj);
  }
  free(ptr);
}

static const
mrb_data_type UI_void_ptr_data_type = {
   "mruby_UI_void_ptr", free_UI_void_ptr
};

void mrb_UI_VoidPtr_init(mrb_state* mrb)
{
  struct RClass* VoidPtr_class = mrb_define_class_under(mrb, UI_module(mrb), "VoidPtr", mrb->object_class);
  MRB_SET_INSTANCE_TT(VoidPtr_class, MRB_TT_DATA);
}

int
mruby_UI_typecheck_void_ptr(mrb_state *mrb, mrb_value value, const char * underlying_type) {
	// TODO: Some kind of actual check...
	// Perhaps look for the module name in the TT_TYPE name for the value's class?
	return 1;
}

mrb_value
mruby_UI_box_void_ptr(mrb_state* mrb, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_VoidPtr_class(mrb), &UI_void_ptr_data_type, box));
}

mrb_value
mruby_UI_giftwrap_void_ptr(mrb_state* mrb, void *unboxed)
{
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UI_VoidPtr_class(mrb), &UI_void_ptr_data_type, box));
}

void
mruby_UI_set_void_ptr_data_ptr(mrb_value obj, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &UI_void_ptr_data_type);
}

void
mruby_UI_gift_void_ptr_data_ptr(mrb_value obj, void *unboxed)
{
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &UI_void_ptr_data_type);
}

void *
mruby_UI_unbox_void_ptr(mrb_value boxed)
{
  return (void *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
