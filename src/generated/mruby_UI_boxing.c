mruby_to_native_ref *
mruby_UI_unmanaged_ref_create(void* obj)
{
  mruby_to_native_ref* ref = (mruby_to_native_ref*)calloc(1, sizeof(mruby_to_native_ref));
  ref->belongs_to_ruby = FALSE;
  ref->obj = unboxed;
  return ref;
}

mruby_to_native_ref *
mruby_UI_managed_ref_create(void *unboxed)
{
   mruby_to_native_ref* ref = (mruby_to_native_ref*)calloc(1, sizeof(mruby_to_native_ref));
   ref->belongs_to_ruby = TRUE;
   ref->obj = unboxed;
   return ref;
}

void *
mruby_UI_deref(mrb_value boxed)
{
  return (void *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
