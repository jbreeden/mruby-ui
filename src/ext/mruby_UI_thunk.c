//HACK
mrb_state *gui_mrb = NULL;

/**
 * Thunks
 */

void
mrb_ui_thunk(uiControl* native_control, void* data)
{
  char* event_name = (char*)data;
  mrb_value rb_control;
  mrb_value callback;

  mrb_value control_lookup = mrb_iv_get(gui_mrb, mrb_obj_value(UI_module(gui_mrb)), mrb_intern_cstr(gui_mrb, "@control_lookup"));
  rb_control = mrb_funcall(gui_mrb, control_lookup, "[]", 1, mruby_UI_ptr_to_string(gui_mrb, native_control));

  if (!mrb_test(rb_control)) {
    printf("WARNING! [IN THUNK] No control for %p\n", native_control);
    // Control has been destroyed. Ignore this event.
    return;
  }

  callback = mrb_iv_get(gui_mrb, rb_control, mrb_intern_cstr(gui_mrb, event_name));
  
  mrb_funcall(gui_mrb, callback, "call", 1, rb_control);
}

void
mrb_ui_thunk_prep(
    mrb_state* mrb,
    mrb_value rb_control,
    const char* event_name,
    mrb_value callback)
{
  if (!gui_mrb) {
    gui_mrb = mrb;
  }
  mrb_iv_set(mrb, rb_control, mrb_intern_cstr(mrb, event_name), callback);
}
