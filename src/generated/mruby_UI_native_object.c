mrb_value
mruby_UI_ptr_to_string(mrb_state *mrb, void *obj)
{
  char * native_key = (char*)calloc((((64/4) + 2) * 2), sizeof(char));
  sprintf(native_key, "%p", obj);

  mrb_value key_str = mrb_str_new_cstr(mrb, native_key);
  free(native_key);
  return key_str;
}

mrb_value
mruby_UI_NativeObject_native_addr(mrb_state *mrb, mrb_value self)
{
  return mruby_UI_ptr_to_string(mrb, mruby_UI_unbox(self));
}

void
mruby_UI_NativeObject_init(mrb_state *mrb)
{
  struct RClass *NativeObject_module = mrb_define_module_under(mrb, UI_module(mrb), "NativeObject");
  mrb_define_method(mrb, NativeObject_module, "native_addr", mruby_UI_NativeObject_native_addr, MRB_ARGS_ARG(0, 0));
}