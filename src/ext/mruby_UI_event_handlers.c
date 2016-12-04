/* void uiButtonOnClicked(uiButton * b, void (*)(uiButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiButtonOnClicked(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_clicked";
  mrb_value b;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiButton(b));


  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f); 
  uiButtonOnClicked(native_b, (void *)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiCheckboxOnToggled(uiCheckbox * c, void (*)(uiCheckbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiCheckboxOnToggled(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_toggled";
  mrb_value c;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiCheckboxOnToggled(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiColorButtonOnChanged(uiColorButton * b, void (*)(uiColorButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiColorButtonOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value b;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiColorButton(b));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f);
  uiColorButtonOnChanged(native_b, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiComboboxOnSelected(uiCombobox * c, void (*)(uiCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiComboboxOnSelected(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_selected";
  mrb_value c;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCombobox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiComboboxOnSelected(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiEditableComboboxOnChanged(uiEditableCombobox * c, void (*)(uiEditableCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiEditableComboboxOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value c;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiEditableCombobox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiEditableComboboxOnChanged(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiEntryOnChanged(uiEntry * e, void (*)(uiEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiEntryOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value e;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &e, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, e, event_name, f);
  uiEntryOnChanged(native_e, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiFontButtonOnChanged(uiFontButton * b, void (*)(uiFontButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiFontButtonOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value b;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_FontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FontButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiFontButton(b));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f);
  uiFontButtonOnChanged(native_b, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiMenuItemOnClicked(uiMenuItem * m, void (*)(uiMenuItem *, uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiMenuItemOnClicked(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_clicked";
  mrb_value m;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &m, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, m, event_name, f);
  uiMenuItemOnClicked(native_m, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiMultilineEntryOnChanged(uiMultilineEntry * e, void (*)(uiMultilineEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiMultilineEntryOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value e;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &e, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, e, event_name, f);
  uiMultilineEntryOnChanged(native_e, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiRadioButtonsOnSelected(uiRadioButtons * r, void (*)(uiRadioButtons *, void *) f, void * data) */
mrb_value
mrb_UI_uiRadioButtonsOnSelected(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_selected";
  mrb_value r;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &r, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, UI_RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_uiRadioButtons(r));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, r, event_name, f);
  uiRadioButtonsOnSelected(native_r, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiSliderOnChanged(uiSlider * s, void (*)(uiSlider *, void *) f, void * data) */
mrb_value
mrb_UI_uiSliderOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value s;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &s, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSlider(s));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, s, event_name, f);
  uiSliderOnChanged(native_s, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiSpinboxOnChanged(uiSpinbox * s, void (*)(uiSpinbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiSpinboxOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value s;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &s, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSpinbox(s));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, s, event_name, f);
  uiSpinboxOnChanged(native_s, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiWindowOnContentSizeChanged(uiWindow * w, void (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnContentSizeChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_content_size_changed";
  mrb_value w;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &w, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, w, event_name, f);
  uiWindowOnContentSizeChanged(native_w, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiWindowOnClosing(uiWindow * w, int (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnClosing(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_closing";
  mrb_value w;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &w, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, w, event_name, f); 
  uiWindowOnClosing(native_w, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}

/* void uiOnShouldQuit(int (*)(void *) f, void * data) */
// TODO: MEMORY MANAGEMENT FOR THUNK CONTEXT
typedef struct {
  mrb_state * mrb;
  mrb_value callback;
} mrb_ui_quit_thunk_context;

int mrb_ui_on_should_quit_thunk(void* data)
{
  mrb_ui_quit_thunk_context *context = (mrb_ui_quit_thunk_context*)data;
  mrb_value return_value = mrb_funcall(context->mrb, context->callback, "call", 0);
  if (mrb_fixnum_p(return_value)) {
    return mrb_fixnum(return_value);
  } else {
    return 0;
  }
}

mrb_value
mrb_UI_uiOnShouldQuit(mrb_state* mrb, mrb_value self) {
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "&", &f);

  /* Invocation */
  mrb_ui_quit_thunk_context *thunk_context = 
    (mrb_ui_quit_thunk_context*)calloc(1, sizeof(mrb_ui_quit_thunk_context));
  thunk_context->mrb = mrb;
  thunk_context->callback = f;
  uiOnShouldQuit(mrb_ui_on_should_quit_thunk, thunk_context);

  return mrb_nil_value();
}

/* void uiQueueMain(void (*)(void *) f, void * data) */
// TODO: MEMORY MANAGEMENT FOR THUNK CONTEXT
typedef struct {
  mrb_state * mrb;
  mrb_value callback;
} mrb_ui_queue_main_thunk_context;

void mrb_ui_queue_main_thunk(void* data)
{
  mrb_ui_queue_main_thunk_context *context = (mrb_ui_queue_main_thunk_context*)data;
  mrb_funcall(context->mrb, context->callback, "call", 0);
}

mrb_value
mrb_UI_uiQueueMain(mrb_state* mrb, mrb_value self) {
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "&", &f);

  /* Invocation */
  mrb_ui_quit_thunk_context *thunk_context = 
    (mrb_ui_quit_thunk_context*)calloc(1, sizeof(mrb_ui_quit_thunk_context));
  thunk_context->mrb = mrb;
  thunk_context->callback = f;
  uiQueueMain(mrb_ui_queue_main_thunk, thunk_context);

  return mrb_nil_value();
}

void
mruby_UI_event_handlers_init(mrb_state *mrb)
{
  mrb_define_class_method(mrb, UI_module(mrb), "buttonOnClicked", mrb_UI_uiButtonOnClicked, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "checkboxOnToggled", mrb_UI_uiCheckboxOnToggled, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "colorButtonOnChanged", mrb_UI_uiColorButtonOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "comboboxOnSelected", mrb_UI_uiComboboxOnSelected, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "editableComboboxOnChanged", mrb_UI_uiEditableComboboxOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "entryOnChanged", mrb_UI_uiEntryOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "fontButtonOnChanged", mrb_UI_uiFontButtonOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "menuItemOnClicked", mrb_UI_uiMenuItemOnClicked, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "multilineEntryOnChanged", mrb_UI_uiMultilineEntryOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "radioButtonsOnSelected", mrb_UI_uiRadioButtonsOnSelected, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "sliderOnChanged", mrb_UI_uiSliderOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "spinboxOnChanged", mrb_UI_uiSpinboxOnChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "windowOnContentSizeChanged", mrb_UI_uiWindowOnContentSizeChanged, MRB_ARGS_ARG(1,0));
  mrb_define_class_method(mrb, UI_module(mrb), "windowOnClosing", mrb_UI_uiWindowOnClosing, MRB_ARGS_ARG(1,0));

  mrb_define_class_method(mrb, UI_module(mrb), "onShouldQuit", mrb_UI_uiOnShouldQuit, MRB_ARGS_ARG(0,0));
  mrb_define_class_method(mrb, UI_module(mrb), "queueMain", mrb_UI_uiQueueMain, MRB_ARGS_ARG(0,0));
}
