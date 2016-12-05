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
mruby_UI_Pointer_ptr_addr(mrb_state *mrb, mrb_value self)
{
  return mruby_UI_ptr_to_string(mrb, mruby_UI_unbox(self));
}

mrb_value
mruby_UI_Pointer_ptr_is_managed(mrb_state *mrb, mrb_value self)
{
    return mruby_UI_owns(mrb, DATA_PTR(self)) ? mrb_true_value() : mrb_false_value();
}

mrb_value
mruby_UI_Pointer_ptr_set_managed(mrb_state *mrb, mrb_value self)
{
    mrb_bool flag;
    mrb_get_args(mrb, "b", &flag);
    ((mruby_to_native_ref*)DATA_PTR(self))->belongs_to_ruby = flag;
    return self;
}

void
mruby_UI_Pointer_init(mrb_state *mrb)
{
  struct RClass *Pointer_module = mrb_define_module_under(mrb, UI_module(mrb), "Pointer");
  mrb_define_method(mrb, Pointer_module, "ptr_addr", mruby_UI_Pointer_ptr_addr, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Pointer_module, "ptr_managed?", mruby_UI_Pointer_ptr_is_managed, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Pointer_module, "ptr_managed=", mruby_UI_Pointer_ptr_set_managed, MRB_ARGS_ARG(1, 0));
}
