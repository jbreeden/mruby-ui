#include "mruby_UI.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/**
 * Hash of native -> ruby control objects.
 */

const char* MRUBY_CONTROL_LOOKUP_GLOBAL = "Test";

//HACK
mrb_state *gui_mrb = NULL;

void
mrb_ui_init_control_lookup(mrb_state* mrb)
{
  //fprintf(stdout, "Initing control lookup\n");
  mrb_value lookup = mrb_hash_new(mrb); 
  mrb_gv_set(mrb, mrb_intern_cstr(mrb, MRUBY_CONTROL_LOOKUP_GLOBAL), lookup);
}

mrb_value
mrb_ui_control_lookup_fetch(mrb_state* mrb, uiControl* native_control)
{
  char control_hash_key[100] = {0};
  sprintf(control_hash_key, "%p", native_control);

  //fprintf(stdout, "Fetching control: %p %s\n", native_control, control_hash_key);

  mrb_value lookup = mrb_gv_get(mrb, mrb_intern_cstr(mrb, MRUBY_CONTROL_LOOKUP_GLOBAL));
  mrb_value rb_control = mrb_hash_get(mrb, lookup, mrb_str_new_cstr(mrb, control_hash_key));

  return rb_control;
}

void
mrb_ui_control_lookup_set(mrb_state* mrb, uiControl* native_control, mrb_value rb_control)
{
  if (!gui_mrb) {
    gui_mrb = mrb;
  }

  char control_hash_key[100] = {0};
  sprintf(control_hash_key, "%p", native_control);

  //fprintf(stdout, "Setting control: %p %s\n", native_control, control_hash_key);

  mrb_value lookup = mrb_gv_get(mrb, mrb_intern_cstr(mrb, MRUBY_CONTROL_LOOKUP_GLOBAL));
  mrb_hash_set(mrb, lookup, mrb_str_new_cstr(mrb, control_hash_key), rb_control);
}

void
mrb_ui_control_lookup_delete(mrb_state* mrb, uiControl* native_control)
{
  char control_hash_key[100] = {0};
  sprintf(control_hash_key, "%p", native_control);

  //fprintf(stdout, "Deleting control: %p %s\n", native_control, control_hash_key);

  mrb_value lookup = mrb_gv_get(mrb, mrb_intern_cstr(mrb, MRUBY_CONTROL_LOOKUP_GLOBAL));
  mrb_hash_set(mrb, lookup, mrb_str_new_cstr(mrb, control_hash_key), mrb_nil_value());
}

/**
 * Thunks
 */

void
mrb_ui_thunk(uiControl* native_control, void* data)
{
  char* event_name = (char*)data;
  mrb_value rb_control;
  mrb_value callback;

  //fprintf(stdout, "In thunk\n");

  rb_control = mrb_ui_control_lookup_fetch(gui_mrb, native_control);

  if (!mrb_test(rb_control)) {
    //fprintf(stdout, "No control for %p\n", native_control);
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
  mrb_iv_set(mrb, rb_control, mrb_intern_cstr(mrb, event_name), callback);
}

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: uiAllocControl */
/* sha: 93f85c8d9fbd383789cb434453567acf364e6a0fde4275c2e73b061accc03b61 */
#if BIND_uiAllocControl_FUNCTION
#define uiAllocControl_REQUIRED_ARGC 4
#define uiAllocControl_OPTIONAL_ARGC 0
/* uiControl * uiAllocControl(int n, uint32_t OSsig, uint32_t typesig, const char * typenamestr) */
mrb_value
mrb_UI_uiAllocControl(mrb_state* mrb, mrb_value self) {
  mrb_int native_n;
  mrb_value OSsig;
  mrb_value typesig;
  char * native_typenamestr = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "iooz", &native_n, &OSsig, &typesig, &native_typenamestr);

  /* Type checking */
  TODO_type_check_uint32_t(OSsig);
  TODO_type_check_uint32_t(typesig);

  /* Unbox param: OSsig */
  uint32_t native_OSsig = TODO_mruby_unbox_uint32_t(OSsig);

  /* Unbox param: typesig */
  uint32_t native_typesig = TODO_mruby_unbox_uint32_t(typesig);

  /* Invocation */
  uiControl * native_return_value = uiAllocControl(native_n, native_OSsig, native_typesig, native_typenamestr);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiControl(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiAreaBeginUserWindowMove */
/* sha: a1fbf48925209f407a1111294372e5cb8c6e55cbc00ec288b138930c8298c27d */
#if BIND_uiAreaBeginUserWindowMove_FUNCTION
#define uiAreaBeginUserWindowMove_REQUIRED_ARGC 1
#define uiAreaBeginUserWindowMove_OPTIONAL_ARGC 0
/* void uiAreaBeginUserWindowMove(uiArea * a) */
mrb_value
mrb_UI_uiAreaBeginUserWindowMove(mrb_state* mrb, mrb_value self) {
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_uiArea(a));

  /* Invocation */
  uiAreaBeginUserWindowMove(native_a);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiAreaBeginUserWindowResize */
/* sha: c771d26276d880f4a28fc78b074062da09bff24dd1aa794edc6f595a44c70b84 */
#if BIND_uiAreaBeginUserWindowResize_FUNCTION
#define uiAreaBeginUserWindowResize_REQUIRED_ARGC 2
#define uiAreaBeginUserWindowResize_OPTIONAL_ARGC 0
/* void uiAreaBeginUserWindowResize(uiArea * a, uiWindowResizeEdge edge) */
mrb_value
mrb_UI_uiAreaBeginUserWindowResize(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value edge;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &edge);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }
  TODO_type_check_uiWindowResizeEdge(edge);

  /* Unbox param: a */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_uiArea(a));

  /* Unbox param: edge */
  uiWindowResizeEdge native_edge = TODO_mruby_unbox_uiWindowResizeEdge(edge);

  /* Invocation */
  uiAreaBeginUserWindowResize(native_a, native_edge);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiAreaQueueRedrawAll */
/* sha: aa9ce1b40020e92544406ba09c024ed8f82db01d05bc27e030fa792c6193048b */
#if BIND_uiAreaQueueRedrawAll_FUNCTION
#define uiAreaQueueRedrawAll_REQUIRED_ARGC 1
#define uiAreaQueueRedrawAll_OPTIONAL_ARGC 0
/* void uiAreaQueueRedrawAll(uiArea * a) */
mrb_value
mrb_UI_uiAreaQueueRedrawAll(mrb_state* mrb, mrb_value self) {
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_uiArea(a));

  /* Invocation */
  uiAreaQueueRedrawAll(native_a);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiAreaScrollTo */
/* sha: 65feef98dbc90ff697e35c95db9d633dfae3801cf412cce76c5812174ce3dfaf */
#if BIND_uiAreaScrollTo_FUNCTION
#define uiAreaScrollTo_REQUIRED_ARGC 5
#define uiAreaScrollTo_OPTIONAL_ARGC 0
/* void uiAreaScrollTo(uiArea * a, double x, double y, double width, double height) */
mrb_value
mrb_UI_uiAreaScrollTo(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_width;
  mrb_float native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &a, &native_x, &native_y, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_uiArea(a));

  /* Invocation */
  uiAreaScrollTo(native_a, native_x, native_y, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiAreaSetSize */
/* sha: c5866c7150b7fc49b1e11125ce77ac87478f5767620be1d18b36814a41301005 */
#if BIND_uiAreaSetSize_FUNCTION
#define uiAreaSetSize_REQUIRED_ARGC 3
#define uiAreaSetSize_OPTIONAL_ARGC 0
/* void uiAreaSetSize(uiArea * a, int width, int height) */
mrb_value
mrb_UI_uiAreaSetSize(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &a, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_uiArea(a));

  /* Invocation */
  uiAreaSetSize(native_a, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiBoxAppend */
/* sha: e51f110df70b3949c9c0246771d936f4a73474d804baca3820e38fcec6478350 */
#if BIND_uiBoxAppend_FUNCTION
#define uiBoxAppend_REQUIRED_ARGC 3
#define uiBoxAppend_OPTIONAL_ARGC 0
/* void uiBoxAppend(uiBox * b, uiControl * child, int stretchy) */
mrb_value
mrb_UI_uiBoxAppend(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_value child;
  mrb_int native_stretchy;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &b, &child, &native_stretchy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiBox(b));

  /* Unbox param: child */
  uiControl * native_child = (mrb_nil_p(child) ? NULL : mruby_unbox_uiControl(child));

  /* Invocation */
  uiBoxAppend(native_b, native_child, native_stretchy);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiBoxDelete */
/* sha: a4e2e9f1feeb1f16efa7de7d90d441066637a672a39f080bd4288a14a0f1937b */
#if BIND_uiBoxDelete_FUNCTION
#define uiBoxDelete_REQUIRED_ARGC 2
#define uiBoxDelete_OPTIONAL_ARGC 0
/* void uiBoxDelete(uiBox * b, int index) */
mrb_value
mrb_UI_uiBoxDelete(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &b, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiBox(b));

  /* Invocation */
  uiBoxDelete(native_b, native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiBoxPadded */
/* sha: a44af2301fbcf79139235a1a710241fdf2c2837d8b6d2df4f0097118cb963271 */
#if BIND_uiBoxPadded_FUNCTION
#define uiBoxPadded_REQUIRED_ARGC 1
#define uiBoxPadded_OPTIONAL_ARGC 0
/* int uiBoxPadded(uiBox * b) */
mrb_value
mrb_UI_uiBoxPadded(mrb_state* mrb, mrb_value self) {
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiBox(b));

  /* Invocation */
  int native_return_value = uiBoxPadded(native_b);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiBoxSetPadded */
/* sha: 54ad78e6aef61c1440b5985b81d5b13088719b984b8003a10d6e61077d9003c7 */
#if BIND_uiBoxSetPadded_FUNCTION
#define uiBoxSetPadded_REQUIRED_ARGC 2
#define uiBoxSetPadded_OPTIONAL_ARGC 0
/* void uiBoxSetPadded(uiBox * b, int padded) */
mrb_value
mrb_UI_uiBoxSetPadded(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &b, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiBox(b));

  /* Invocation */
  uiBoxSetPadded(native_b, native_padded);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiButtonOnClicked */
/* sha: 71fc1748e2726bb1d1840ffadb071e3fda918fa57044346628b76dde2e26305a */
#if BIND_uiButtonOnClicked_FUNCTION
#define uiButtonOnClicked_REQUIRED_ARGC 1
#define uiButtonOnClicked_OPTIONAL_ARGC 0
/* void uiButtonOnClicked(uiButton * b, void (*)(uiButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiButtonOnClicked(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_clicked";
  mrb_value b;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiButton(b));


  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f); 
  uiButtonOnClicked(native_b, (void *)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiButtonSetText */
/* sha: 0d1153266cc36ea2537d9e1e008b38cd09a6503f64a049a2d28758d79024241a */
#if BIND_uiButtonSetText_FUNCTION
#define uiButtonSetText_REQUIRED_ARGC 2
#define uiButtonSetText_OPTIONAL_ARGC 0
/* void uiButtonSetText(uiButton * b, const char * text) */
mrb_value
mrb_UI_uiButtonSetText(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &b, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiButton(b));

  /* Invocation */
  uiButtonSetText(native_b, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiButtonText */
/* sha: 1e9832b6d732e41a767eafa9b35a9fb1b4d6a20e2423564633d2653081fee987 */
#if BIND_uiButtonText_FUNCTION
#define uiButtonText_REQUIRED_ARGC 1
#define uiButtonText_OPTIONAL_ARGC 0
/* char * uiButtonText(uiButton * b) */
mrb_value
mrb_UI_uiButtonText(mrb_state* mrb, mrb_value self) {
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiButton(b));

  /* Invocation */
  char * native_return_value = uiButtonText(native_b);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxChecked */
/* sha: f33aadcaa33eed147c50b931f7f1baaa46de7ce47ea9a298f180ffc3bdf4c0eb */
#if BIND_uiCheckboxChecked_FUNCTION
#define uiCheckboxChecked_REQUIRED_ARGC 1
#define uiCheckboxChecked_OPTIONAL_ARGC 0
/* int uiCheckboxChecked(uiCheckbox * c) */
mrb_value
mrb_UI_uiCheckboxChecked(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  int native_return_value = uiCheckboxChecked(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxOnToggled */
/* sha: 389d321c44177642769305bd405bacfd4bfb6b5044f1835fdc009650f28fad60 */
#if BIND_uiCheckboxOnToggled_FUNCTION
#define uiCheckboxOnToggled_REQUIRED_ARGC 1
#define uiCheckboxOnToggled_OPTIONAL_ARGC 0
/* void uiCheckboxOnToggled(uiCheckbox * c, void (*)(uiCheckbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiCheckboxOnToggled(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_toggled";
  mrb_value c;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiCheckboxOnToggled(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxSetChecked */
/* sha: 8a7cdbca7cad8dea390b84b341b59617ea7000753115063b4abf44b23c8ab438 */
#if BIND_uiCheckboxSetChecked_FUNCTION
#define uiCheckboxSetChecked_REQUIRED_ARGC 2
#define uiCheckboxSetChecked_OPTIONAL_ARGC 0
/* void uiCheckboxSetChecked(uiCheckbox * c, int checked) */
mrb_value
mrb_UI_uiCheckboxSetChecked(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_int native_checked;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &c, &native_checked);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  uiCheckboxSetChecked(native_c, native_checked);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxSetText */
/* sha: a99385625134f61df34538ac8a5138532ba83922541e22f0c07edbb881fcf012 */
#if BIND_uiCheckboxSetText_FUNCTION
#define uiCheckboxSetText_REQUIRED_ARGC 2
#define uiCheckboxSetText_OPTIONAL_ARGC 0
/* void uiCheckboxSetText(uiCheckbox * c, const char * text) */
mrb_value
mrb_UI_uiCheckboxSetText(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  uiCheckboxSetText(native_c, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxText */
/* sha: 84e16ca481ff65e2c82fc16860597fe6685e84a548443c0c8c055586887b2236 */
#if BIND_uiCheckboxText_FUNCTION
#define uiCheckboxText_REQUIRED_ARGC 1
#define uiCheckboxText_OPTIONAL_ARGC 0
/* char * uiCheckboxText(uiCheckbox * c) */
mrb_value
mrb_UI_uiCheckboxText(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  char * native_return_value = uiCheckboxText(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiColorButtonColor */
/* sha: e223810cdb740f626f700857082975eee217f407ab3afdba4ddc1486ae2fcc61 */
#if BIND_uiColorButtonColor_FUNCTION
#define uiColorButtonColor_REQUIRED_ARGC 5
#define uiColorButtonColor_OPTIONAL_ARGC 0
/* void uiColorButtonColor(uiColorButton * b, double * r, double * g, double * bl, double * a) */
mrb_value
mrb_UI_uiColorButtonColor(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_value r;
  mrb_value g;
  mrb_value bl;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &b, &r, &g, &bl, &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(r);
  TODO_type_check_double_PTR(g);
  TODO_type_check_double_PTR(bl);
  TODO_type_check_double_PTR(a);

  /* Unbox param: b */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiColorButton(b));

  /* Unbox param: r */
  double * native_r = TODO_mruby_unbox_double_PTR(r);

  /* Unbox param: g */
  double * native_g = TODO_mruby_unbox_double_PTR(g);

  /* Unbox param: bl */
  double * native_bl = TODO_mruby_unbox_double_PTR(bl);

  /* Unbox param: a */
  double * native_a = TODO_mruby_unbox_double_PTR(a);

  /* Invocation */
  uiColorButtonColor(native_b, native_r, native_g, native_bl, native_a);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiColorButtonOnChanged */
/* sha: 471bba5e0ecc3730d8c9df7d6ec3dcb4e08e02b8bd19bf7dade24cad2fc6b54b */
#if BIND_uiColorButtonOnChanged_FUNCTION
#define uiColorButtonOnChanged_REQUIRED_ARGC 1
#define uiColorButtonOnChanged_OPTIONAL_ARGC 0
/* void uiColorButtonOnChanged(uiColorButton * b, void (*)(uiColorButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiColorButtonOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value b;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiColorButton(b));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f);
  uiColorButtonOnChanged(native_b, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiColorButtonSetColor */
/* sha: 2cc30a4871f5f95daaa25ce43174553d7ffa5ed47fe23553ed454d155ea1cd3c */
#if BIND_uiColorButtonSetColor_FUNCTION
#define uiColorButtonSetColor_REQUIRED_ARGC 5
#define uiColorButtonSetColor_OPTIONAL_ARGC 0
/* void uiColorButtonSetColor(uiColorButton * b, double r, double g, double bl, double a) */
mrb_value
mrb_UI_uiColorButtonSetColor(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_float native_r;
  mrb_float native_g;
  mrb_float native_bl;
  mrb_float native_a;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &b, &native_r, &native_g, &native_bl, &native_a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiColorButton(b));

  /* Invocation */
  uiColorButtonSetColor(native_b, native_r, native_g, native_bl, native_a);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiComboboxAppend */
/* sha: d6285612017229583cc307687beb31a9691424c89fea13a00e9caa704bc6d3e3 */
#if BIND_uiComboboxAppend_FUNCTION
#define uiComboboxAppend_REQUIRED_ARGC 2
#define uiComboboxAppend_OPTIONAL_ARGC 0
/* void uiComboboxAppend(uiCombobox * c, const char * text) */
mrb_value
mrb_UI_uiComboboxAppend(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCombobox(c));

  /* Invocation */
  uiComboboxAppend(native_c, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiComboboxOnSelected */
/* sha: 7a564a85b5242abb6c171acc8f248d328d6f65a1a787b98daa95104d2a5e241b */
#if BIND_uiComboboxOnSelected_FUNCTION
#define uiComboboxOnSelected_REQUIRED_ARGC 1
#define uiComboboxOnSelected_OPTIONAL_ARGC 0
/* void uiComboboxOnSelected(uiCombobox * c, void (*)(uiCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiComboboxOnSelected(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_selected";
  mrb_value c;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCombobox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiComboboxOnSelected(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiComboboxSelected */
/* sha: 67fcc7437fb406d59163c175cbbdc2f731534270a3a0a540864d64803da62556 */
#if BIND_uiComboboxSelected_FUNCTION
#define uiComboboxSelected_REQUIRED_ARGC 1
#define uiComboboxSelected_OPTIONAL_ARGC 0
/* int uiComboboxSelected(uiCombobox * c) */
mrb_value
mrb_UI_uiComboboxSelected(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCombobox(c));

  /* Invocation */
  int native_return_value = uiComboboxSelected(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiComboboxSetSelected */
/* sha: 10cb69f979ceba1eb5956bc4331b50c21ad4d100fa2c429e2b057aeb4cf22879 */
#if BIND_uiComboboxSetSelected_FUNCTION
#define uiComboboxSetSelected_REQUIRED_ARGC 2
#define uiComboboxSetSelected_OPTIONAL_ARGC 0
/* void uiComboboxSetSelected(uiCombobox * c, int n) */
mrb_value
mrb_UI_uiComboboxSetSelected(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &c, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCombobox(c));

  /* Invocation */
  uiComboboxSetSelected(native_c, native_n);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlDestroy */
/* sha: 1a97a011233fa2009b5d215cad08af6dd8c5f38e06786e11ab506b83989271c9 */
#if BIND_uiControlDestroy_FUNCTION
#define uiControlDestroy_REQUIRED_ARGC 1
#define uiControlDestroy_OPTIONAL_ARGC 0
/* void uiControlDestroy(uiControl * arg1) */
mrb_value
mrb_UI_uiControlDestroy(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlDestroy(native_arg1);

  mrb_ui_control_lookup_delete(mrb, native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlDisable */
/* sha: b82d86eb80501bd63af966316b6766ede00c0bc150ddac520e5a9df9fa338a2a */
#if BIND_uiControlDisable_FUNCTION
#define uiControlDisable_REQUIRED_ARGC 1
#define uiControlDisable_OPTIONAL_ARGC 0
/* void uiControlDisable(uiControl * arg1) */
mrb_value
mrb_UI_uiControlDisable(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlDisable(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlEnable */
/* sha: 740f53beba93d87f5876b377bb6aa1851b242bb525ea14497ae43936bfbc1a81 */
#if BIND_uiControlEnable_FUNCTION
#define uiControlEnable_REQUIRED_ARGC 1
#define uiControlEnable_OPTIONAL_ARGC 0
/* void uiControlEnable(uiControl * arg1) */
mrb_value
mrb_UI_uiControlEnable(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlEnable(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlEnabled */
/* sha: 975db4fb8b40debdf0fcc82c5609661cf32b6bc323a9432b77c50d4069bf5b94 */
#if BIND_uiControlEnabled_FUNCTION
#define uiControlEnabled_REQUIRED_ARGC 1
#define uiControlEnabled_OPTIONAL_ARGC 0
/* int uiControlEnabled(uiControl * arg1) */
mrb_value
mrb_UI_uiControlEnabled(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlEnabled(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlEnabledToUser */
/* sha: 5c88a454619eea1612a9193576ce76e5b47338543acc62f10f4970c337e0c255 */
#if BIND_uiControlEnabledToUser_FUNCTION
#define uiControlEnabledToUser_REQUIRED_ARGC 1
#define uiControlEnabledToUser_OPTIONAL_ARGC 0
/* int uiControlEnabledToUser(uiControl * arg1) */
mrb_value
mrb_UI_uiControlEnabledToUser(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlEnabledToUser(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlHandle */
/* sha: 9ffebb868a08d622e5d6de5ecd5b50058a1ca7cd987a0000e4abbc71833ccd5e */
#if BIND_uiControlHandle_FUNCTION
#define uiControlHandle_REQUIRED_ARGC 1
#define uiControlHandle_OPTIONAL_ARGC 0
/* uintptr_t uiControlHandle(uiControl * arg1) */
mrb_value
mrb_UI_uiControlHandle(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uintptr_t native_return_value = uiControlHandle(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uintptr_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlHide */
/* sha: 64ba7b28b7a9e70dc8eb09ac808e6cdb28f2a77e7d0b34e7874d5a16d8f836b4 */
#if BIND_uiControlHide_FUNCTION
#define uiControlHide_REQUIRED_ARGC 1
#define uiControlHide_OPTIONAL_ARGC 0
/* void uiControlHide(uiControl * arg1) */
mrb_value
mrb_UI_uiControlHide(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlHide(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlParent */
/* sha: 5a42d025d97618f86c92e3db473e65115b04ee8248097401c0d7266b4c78acb3 */
#if BIND_uiControlParent_FUNCTION
#define uiControlParent_REQUIRED_ARGC 1
#define uiControlParent_OPTIONAL_ARGC 0
/* uiControl * uiControlParent(uiControl * arg1) */
mrb_value
mrb_UI_uiControlParent(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControl * native_return_value = uiControlParent(native_arg1);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiControl(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlSetParent */
/* sha: 6b36e0c8b72478b07594e681e9b3148e871d3734839be5dbd63397c3fd13cfdb */
#if BIND_uiControlSetParent_FUNCTION
#define uiControlSetParent_REQUIRED_ARGC 2
#define uiControlSetParent_OPTIONAL_ARGC 0
/* void uiControlSetParent(uiControl * arg1, uiControl * arg2) */
mrb_value
mrb_UI_uiControlSetParent(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Unbox param: arg2 */
  uiControl * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_uiControl(arg2));

  /* Invocation */
  uiControlSetParent(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlShow */
/* sha: b9bc0984e3d5d19b93b17df81a1d877e6ea5f3065117d4a70cf62d278d6ea895 */
#if BIND_uiControlShow_FUNCTION
#define uiControlShow_REQUIRED_ARGC 1
#define uiControlShow_OPTIONAL_ARGC 0
/* void uiControlShow(uiControl * arg1) */
mrb_value
mrb_UI_uiControlShow(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlShow(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlToplevel */
/* sha: ef3ac7578f952ab5c1715ba8d68fe6fd93ed39cba8430283c7de57ca1a6270ce */
#if BIND_uiControlToplevel_FUNCTION
#define uiControlToplevel_REQUIRED_ARGC 1
#define uiControlToplevel_OPTIONAL_ARGC 0
/* int uiControlToplevel(uiControl * arg1) */
mrb_value
mrb_UI_uiControlToplevel(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlToplevel(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlVerifySetParent */
/* sha: 9a3d1e13c9c32961cd7f4092941b91048a3298a02640c58bc6538931a42e81c2 */
#if BIND_uiControlVerifySetParent_FUNCTION
#define uiControlVerifySetParent_REQUIRED_ARGC 2
#define uiControlVerifySetParent_OPTIONAL_ARGC 0
/* void uiControlVerifySetParent(uiControl * arg1, uiControl * arg2) */
mrb_value
mrb_UI_uiControlVerifySetParent(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Unbox param: arg2 */
  uiControl * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_uiControl(arg2));

  /* Invocation */
  uiControlVerifySetParent(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlVisible */
/* sha: 18e1a39b96d4413117f9e1fa53a5bbda8506e6539f56f9575dd24731e8bb9a4e */
#if BIND_uiControlVisible_FUNCTION
#define uiControlVisible_REQUIRED_ARGC 1
#define uiControlVisible_OPTIONAL_ARGC 0
/* int uiControlVisible(uiControl * arg1) */
mrb_value
mrb_UI_uiControlVisible(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlVisible(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawClip */
/* sha: 4e2a9ad93663647f77e175258f153d60fdb33610c6cbb80e8fa65d2cac179bb6 */
#if BIND_uiDrawClip_FUNCTION
#define uiDrawClip_REQUIRED_ARGC 2
#define uiDrawClip_OPTIONAL_ARGC 0
/* void uiDrawClip(uiDrawContext * c, uiDrawPath * path) */
mrb_value
mrb_UI_uiDrawClip(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value path;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &c, &path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Unbox param: path */
  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_unbox_uiDrawPath(path));

  /* Invocation */
  uiDrawClip(native_c, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFill */
/* sha: 8e93e46043f0f58007519e9f60bf5a934dcaf49da03ae45e5590a028fa77b44c */
#if BIND_uiDrawFill_FUNCTION
#define uiDrawFill_REQUIRED_ARGC 3
#define uiDrawFill_OPTIONAL_ARGC 0
/* void uiDrawFill(uiDrawContext * c, uiDrawPath * path, uiDrawBrush * b) */
mrb_value
mrb_UI_uiDrawFill(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value path;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &c, &path, &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, DrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawBrush expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Unbox param: path */
  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_unbox_uiDrawPath(path));

  /* Unbox param: b */
  uiDrawBrush * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiDrawBrush(b));

  /* Invocation */
  uiDrawFill(native_c, native_path, native_b);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFontFamiliesFamily */
/* sha: 411ab4b0dfd61811a8ca78484638bc7e7ff804fec8dc22954de2442bcfbea2f0 */
#if BIND_uiDrawFontFamiliesFamily_FUNCTION
#define uiDrawFontFamiliesFamily_REQUIRED_ARGC 2
#define uiDrawFontFamiliesFamily_OPTIONAL_ARGC 0
/* char * uiDrawFontFamiliesFamily(uiDrawFontFamilies * ff, int n) */
mrb_value
mrb_UI_uiDrawFontFamiliesFamily(mrb_state* mrb, mrb_value self) {
  mrb_value ff;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &ff, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox param: ff */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  char * native_return_value = uiDrawFontFamiliesFamily(native_ff, native_n);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFontFamiliesNumFamilies */
/* sha: 47cd8db5f6f83c87d9f7737f6fda9df49a629fb72cee77d488177915a07a5786 */
#if BIND_uiDrawFontFamiliesNumFamilies_FUNCTION
#define uiDrawFontFamiliesNumFamilies_REQUIRED_ARGC 1
#define uiDrawFontFamiliesNumFamilies_OPTIONAL_ARGC 0
/* int uiDrawFontFamiliesNumFamilies(uiDrawFontFamilies * ff) */
mrb_value
mrb_UI_uiDrawFontFamiliesNumFamilies(mrb_state* mrb, mrb_value self) {
  mrb_value ff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox param: ff */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  int native_return_value = uiDrawFontFamiliesNumFamilies(native_ff);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFreeFontFamilies */
/* sha: 7398702d7338fb7bbe8bd5978b87c94cd0715828dea00025c541ffbe8b21d000 */
#if BIND_uiDrawFreeFontFamilies_FUNCTION
#define uiDrawFreeFontFamilies_REQUIRED_ARGC 1
#define uiDrawFreeFontFamilies_OPTIONAL_ARGC 0
/* void uiDrawFreeFontFamilies(uiDrawFontFamilies * ff) */
mrb_value
mrb_UI_uiDrawFreeFontFamilies(mrb_state* mrb, mrb_value self) {
  mrb_value ff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox param: ff */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  uiDrawFreeFontFamilies(native_ff);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFreePath */
/* sha: bd98229aa7b103a631ab37fbbff92b835b6792240d06f8c44c07358a3bdc2465 */
#if BIND_uiDrawFreePath_FUNCTION
#define uiDrawFreePath_REQUIRED_ARGC 1
#define uiDrawFreePath_OPTIONAL_ARGC 0
/* void uiDrawFreePath(uiDrawPath * p) */
mrb_value
mrb_UI_uiDrawFreePath(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawFreePath(native_p);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFreeTextFont */
/* sha: 6979bc6cc0675f2badce8753589bd8df42ae7344e59adb815494b16183183064 */
#if BIND_uiDrawFreeTextFont_FUNCTION
#define uiDrawFreeTextFont_REQUIRED_ARGC 1
#define uiDrawFreeTextFont_OPTIONAL_ARGC 0
/* void uiDrawFreeTextFont(uiDrawTextFont * font) */
mrb_value
mrb_UI_uiDrawFreeTextFont(mrb_state* mrb, mrb_value self) {
  mrb_value font;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &font);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }

  /* Unbox param: font */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_unbox_uiDrawTextFont(font));

  /* Invocation */
  uiDrawFreeTextFont(native_font);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawFreeTextLayout */
/* sha: ca2b1be285001a544428b9b474812d3e4248f1759ce22e615f88ed2f7c081ca2 */
#if BIND_uiDrawFreeTextLayout_FUNCTION
#define uiDrawFreeTextLayout_REQUIRED_ARGC 1
#define uiDrawFreeTextLayout_OPTIONAL_ARGC 0
/* void uiDrawFreeTextLayout(uiDrawTextLayout * layout) */
mrb_value
mrb_UI_uiDrawFreeTextLayout(mrb_state* mrb, mrb_value self) {
  mrb_value layout;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &layout);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox param: layout */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawFreeTextLayout(native_layout);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawListFontFamilies */
/* sha: 1b11c4b2d352a452362d85cb662c43cb3ef9db78ab356216e2fa33774b2018cd */
#if BIND_uiDrawListFontFamilies_FUNCTION
#define uiDrawListFontFamilies_REQUIRED_ARGC 0
#define uiDrawListFontFamilies_OPTIONAL_ARGC 0
/* uiDrawFontFamilies * uiDrawListFontFamilies() */
mrb_value
mrb_UI_uiDrawListFontFamilies(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiDrawFontFamilies * native_return_value = uiDrawListFontFamilies();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDrawFontFamilies(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawLoadClosestFont */
/* sha: b724fa4bbacc6a16630e875e05d0e7ff8046951cd846eb481979ca971694ab96 */
#if BIND_uiDrawLoadClosestFont_FUNCTION
#define uiDrawLoadClosestFont_REQUIRED_ARGC 1
#define uiDrawLoadClosestFont_OPTIONAL_ARGC 0
/* uiDrawTextFont * uiDrawLoadClosestFont(const uiDrawTextFontDescriptor * desc) */
mrb_value
mrb_UI_uiDrawLoadClosestFont(mrb_state* mrb, mrb_value self) {
  mrb_value desc;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &desc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, desc, DrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontDescriptor expected");
    return mrb_nil_value();
  }

  /* Unbox param: desc */
  const uiDrawTextFontDescriptor * native_desc = (mrb_nil_p(desc) ? NULL : mruby_unbox_uiDrawTextFontDescriptor(desc));

  /* Invocation */
  uiDrawTextFont * native_return_value = uiDrawLoadClosestFont(native_desc);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDrawTextFont(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixInvert */
/* sha: f4ab4b16b99716e0cd92114206f406dc9658cab73d97f50e44fa8fc03a2cce54 */
#if BIND_uiDrawMatrixInvert_FUNCTION
#define uiDrawMatrixInvert_REQUIRED_ARGC 1
#define uiDrawMatrixInvert_OPTIONAL_ARGC 0
/* int uiDrawMatrixInvert(uiDrawMatrix * m) */
mrb_value
mrb_UI_uiDrawMatrixInvert(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  int native_return_value = uiDrawMatrixInvert(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixInvertible */
/* sha: bce780bb42067cbb7cb60b439898fc68d90d6794e3e540b54c26c82fb2c1a995 */
#if BIND_uiDrawMatrixInvertible_FUNCTION
#define uiDrawMatrixInvertible_REQUIRED_ARGC 1
#define uiDrawMatrixInvertible_OPTIONAL_ARGC 0
/* int uiDrawMatrixInvertible(uiDrawMatrix * m) */
mrb_value
mrb_UI_uiDrawMatrixInvertible(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  int native_return_value = uiDrawMatrixInvertible(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixMultiply */
/* sha: e9c4c559fab7190c569a0aef1178f94850d448e18d24932ccd311c8da453a4b7 */
#if BIND_uiDrawMatrixMultiply_FUNCTION
#define uiDrawMatrixMultiply_REQUIRED_ARGC 2
#define uiDrawMatrixMultiply_OPTIONAL_ARGC 0
/* void uiDrawMatrixMultiply(uiDrawMatrix * dest, uiDrawMatrix * src) */
mrb_value
mrb_UI_uiDrawMatrixMultiply(mrb_state* mrb, mrb_value self) {
  mrb_value dest;
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dest, &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dest, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: dest */
  uiDrawMatrix * native_dest = (mrb_nil_p(dest) ? NULL : mruby_unbox_uiDrawMatrix(dest));

  /* Unbox param: src */
  uiDrawMatrix * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_uiDrawMatrix(src));

  /* Invocation */
  uiDrawMatrixMultiply(native_dest, native_src);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixRotate */
/* sha: aff00acaf9366c68820c2dd0f4ee1233510f6f0b597d5ee5a9812c904ce3794b */
#if BIND_uiDrawMatrixRotate_FUNCTION
#define uiDrawMatrixRotate_REQUIRED_ARGC 4
#define uiDrawMatrixRotate_OPTIONAL_ARGC 0
/* void uiDrawMatrixRotate(uiDrawMatrix * m, double x, double y, double amount) */
mrb_value
mrb_UI_uiDrawMatrixRotate(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_amount;

  /* Fetch the args */
  mrb_get_args(mrb, "offf", &m, &native_x, &native_y, &native_amount);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixRotate(native_m, native_x, native_y, native_amount);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixScale */
/* sha: 74b8288f300d1b0b6011f123abb740fd71e9651a4b4a3896c7fda79339d52291 */
#if BIND_uiDrawMatrixScale_FUNCTION
#define uiDrawMatrixScale_REQUIRED_ARGC 5
#define uiDrawMatrixScale_OPTIONAL_ARGC 0
/* void uiDrawMatrixScale(uiDrawMatrix * m, double xCenter, double yCenter, double x, double y) */
mrb_value
mrb_UI_uiDrawMatrixScale(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_float native_xCenter;
  mrb_float native_yCenter;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &m, &native_xCenter, &native_yCenter, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixScale(native_m, native_xCenter, native_yCenter, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixSetIdentity */
/* sha: 1a35e546cf80f62e6662956347d99dbbfc8cfd9663f2492f823869a4deeeb86b */
#if BIND_uiDrawMatrixSetIdentity_FUNCTION
#define uiDrawMatrixSetIdentity_REQUIRED_ARGC 1
#define uiDrawMatrixSetIdentity_OPTIONAL_ARGC 0
/* void uiDrawMatrixSetIdentity(uiDrawMatrix * m) */
mrb_value
mrb_UI_uiDrawMatrixSetIdentity(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixSetIdentity(native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixSkew */
/* sha: 0b0319884a71378736aca2b8b44812408515a78fa24c676b48be2cea9c2082a6 */
#if BIND_uiDrawMatrixSkew_FUNCTION
#define uiDrawMatrixSkew_REQUIRED_ARGC 5
#define uiDrawMatrixSkew_OPTIONAL_ARGC 0
/* void uiDrawMatrixSkew(uiDrawMatrix * m, double x, double y, double xamount, double yamount) */
mrb_value
mrb_UI_uiDrawMatrixSkew(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_xamount;
  mrb_float native_yamount;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &m, &native_x, &native_y, &native_xamount, &native_yamount);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixSkew(native_m, native_x, native_y, native_xamount, native_yamount);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixTransformPoint */
/* sha: 57c24a143dd14ac74ae276ed67041716ed7bd280850d6de6816f6338922da1b9 */
#if BIND_uiDrawMatrixTransformPoint_FUNCTION
#define uiDrawMatrixTransformPoint_REQUIRED_ARGC 3
#define uiDrawMatrixTransformPoint_OPTIONAL_ARGC 0
/* void uiDrawMatrixTransformPoint(uiDrawMatrix * m, double * x, double * y) */
mrb_value
mrb_UI_uiDrawMatrixTransformPoint(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &m, &x, &y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(x);
  TODO_type_check_double_PTR(y);

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Unbox param: x */
  double * native_x = TODO_mruby_unbox_double_PTR(x);

  /* Unbox param: y */
  double * native_y = TODO_mruby_unbox_double_PTR(y);

  /* Invocation */
  uiDrawMatrixTransformPoint(native_m, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixTransformSize */
/* sha: 50e0133e32aff3726d659027100bd333af2ed079085cec20deff81cc39611c0c */
#if BIND_uiDrawMatrixTransformSize_FUNCTION
#define uiDrawMatrixTransformSize_REQUIRED_ARGC 3
#define uiDrawMatrixTransformSize_OPTIONAL_ARGC 0
/* void uiDrawMatrixTransformSize(uiDrawMatrix * m, double * x, double * y) */
mrb_value
mrb_UI_uiDrawMatrixTransformSize(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &m, &x, &y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(x);
  TODO_type_check_double_PTR(y);

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Unbox param: x */
  double * native_x = TODO_mruby_unbox_double_PTR(x);

  /* Unbox param: y */
  double * native_y = TODO_mruby_unbox_double_PTR(y);

  /* Invocation */
  uiDrawMatrixTransformSize(native_m, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawMatrixTranslate */
/* sha: e36153def76c65946522f56978104bab27880dd27af22f5e4bba94f1340fd985 */
#if BIND_uiDrawMatrixTranslate_FUNCTION
#define uiDrawMatrixTranslate_REQUIRED_ARGC 3
#define uiDrawMatrixTranslate_OPTIONAL_ARGC 0
/* void uiDrawMatrixTranslate(uiDrawMatrix * m, double x, double y) */
mrb_value
mrb_UI_uiDrawMatrixTranslate(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &m, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixTranslate(native_m, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawNewPath */
/* sha: 7c81f43ba9c40e1616771e18aa135037da1b9549d76ff2df2571476bdd7d2128 */
#if BIND_uiDrawNewPath_FUNCTION
#define uiDrawNewPath_REQUIRED_ARGC 1
#define uiDrawNewPath_OPTIONAL_ARGC 0
/* uiDrawPath * uiDrawNewPath(uiDrawFillMode fillMode) */
mrb_value
mrb_UI_uiDrawNewPath(mrb_state* mrb, mrb_value self) {
  mrb_value fillMode;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &fillMode);

  /* Type checking */
  TODO_type_check_uiDrawFillMode(fillMode);

  /* Unbox param: fillMode */
  uiDrawFillMode native_fillMode = TODO_mruby_unbox_uiDrawFillMode(fillMode);

  /* Invocation */
  uiDrawPath * native_return_value = uiDrawNewPath(native_fillMode);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDrawPath(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawNewTextLayout */
/* sha: 9178df7829ada538d6081974b5e1f12da189dff62b4d876c5116acf9e1dc6104 */
#if BIND_uiDrawNewTextLayout_FUNCTION
#define uiDrawNewTextLayout_REQUIRED_ARGC 3
#define uiDrawNewTextLayout_OPTIONAL_ARGC 0
/* uiDrawTextLayout * uiDrawNewTextLayout(const char * text, uiDrawTextFont * defaultFont, double width) */
mrb_value
mrb_UI_uiDrawNewTextLayout(mrb_state* mrb, mrb_value self) {
  char * native_text = NULL;
  mrb_value defaultFont;
  mrb_float native_width;

  /* Fetch the args */
  mrb_get_args(mrb, "zof", &native_text, &defaultFont, &native_width);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, defaultFont, DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }

  /* Unbox param: defaultFont */
  uiDrawTextFont * native_defaultFont = (mrb_nil_p(defaultFont) ? NULL : mruby_unbox_uiDrawTextFont(defaultFont));

  /* Invocation */
  uiDrawTextLayout * native_return_value = uiDrawNewTextLayout(native_text, native_defaultFont, native_width);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDrawTextLayout(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathAddRectangle */
/* sha: f5195458366a07567a19b7032f5288bde0afef1bb75cdddea153bf760d36155e */
#if BIND_uiDrawPathAddRectangle_FUNCTION
#define uiDrawPathAddRectangle_REQUIRED_ARGC 5
#define uiDrawPathAddRectangle_OPTIONAL_ARGC 0
/* void uiDrawPathAddRectangle(uiDrawPath * p, double x, double y, double width, double height) */
mrb_value
mrb_UI_uiDrawPathAddRectangle(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_width;
  mrb_float native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &p, &native_x, &native_y, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathAddRectangle(native_p, native_x, native_y, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathArcTo */
/* sha: c646210d5192e627de7a5314d1812af69c45c360a818e911d25e44d036db3c03 */
#if BIND_uiDrawPathArcTo_FUNCTION
#define uiDrawPathArcTo_REQUIRED_ARGC 7
#define uiDrawPathArcTo_OPTIONAL_ARGC 0
/* void uiDrawPathArcTo(uiDrawPath * p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative) */
mrb_value
mrb_UI_uiDrawPathArcTo(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_xCenter;
  mrb_float native_yCenter;
  mrb_float native_radius;
  mrb_float native_startAngle;
  mrb_float native_sweep;
  mrb_int native_negative;

  /* Fetch the args */
  mrb_get_args(mrb, "offfffi", &p, &native_xCenter, &native_yCenter, &native_radius, &native_startAngle, &native_sweep, &native_negative);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathArcTo(native_p, native_xCenter, native_yCenter, native_radius, native_startAngle, native_sweep, native_negative);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathBezierTo */
/* sha: 45c4a20be69404ab0a360da53c9e8db43d0d6342052d1f0c0722fd286bab9054 */
#if BIND_uiDrawPathBezierTo_FUNCTION
#define uiDrawPathBezierTo_REQUIRED_ARGC 7
#define uiDrawPathBezierTo_OPTIONAL_ARGC 0
/* void uiDrawPathBezierTo(uiDrawPath * p, double c1x, double c1y, double c2x, double c2y, double endX, double endY) */
mrb_value
mrb_UI_uiDrawPathBezierTo(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_c1x;
  mrb_float native_c1y;
  mrb_float native_c2x;
  mrb_float native_c2y;
  mrb_float native_endX;
  mrb_float native_endY;

  /* Fetch the args */
  mrb_get_args(mrb, "offffff", &p, &native_c1x, &native_c1y, &native_c2x, &native_c2y, &native_endX, &native_endY);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathBezierTo(native_p, native_c1x, native_c1y, native_c2x, native_c2y, native_endX, native_endY);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathCloseFigure */
/* sha: 4088de05586ba521e4c47bf6342310e0b861d5f141e0bbd524f6440b639270cb */
#if BIND_uiDrawPathCloseFigure_FUNCTION
#define uiDrawPathCloseFigure_REQUIRED_ARGC 1
#define uiDrawPathCloseFigure_OPTIONAL_ARGC 0
/* void uiDrawPathCloseFigure(uiDrawPath * p) */
mrb_value
mrb_UI_uiDrawPathCloseFigure(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathCloseFigure(native_p);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathEnd */
/* sha: 158e05ed2075ee6060a79538b0d90c6e23bb75b3f5ff8be14b2acd93666b8462 */
#if BIND_uiDrawPathEnd_FUNCTION
#define uiDrawPathEnd_REQUIRED_ARGC 1
#define uiDrawPathEnd_OPTIONAL_ARGC 0
/* void uiDrawPathEnd(uiDrawPath * p) */
mrb_value
mrb_UI_uiDrawPathEnd(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathEnd(native_p);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathLineTo */
/* sha: 014ab1f71a280ea4c2b9a58264108a43fb73ad2d97e182baec828d71404939b9 */
#if BIND_uiDrawPathLineTo_FUNCTION
#define uiDrawPathLineTo_REQUIRED_ARGC 3
#define uiDrawPathLineTo_OPTIONAL_ARGC 0
/* void uiDrawPathLineTo(uiDrawPath * p, double x, double y) */
mrb_value
mrb_UI_uiDrawPathLineTo(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &p, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathLineTo(native_p, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathNewFigure */
/* sha: 1060506c3035e2f1b159ff154335be675c457ad0b39988c08b023a3c3a38dd49 */
#if BIND_uiDrawPathNewFigure_FUNCTION
#define uiDrawPathNewFigure_REQUIRED_ARGC 3
#define uiDrawPathNewFigure_OPTIONAL_ARGC 0
/* void uiDrawPathNewFigure(uiDrawPath * p, double x, double y) */
mrb_value
mrb_UI_uiDrawPathNewFigure(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &p, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathNewFigure(native_p, native_x, native_y);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawPathNewFigureWithArc */
/* sha: c3d48e606da5237a89d98ee4320167c704b51b9d0a46a4846d68ed8da07b0098 */
#if BIND_uiDrawPathNewFigureWithArc_FUNCTION
#define uiDrawPathNewFigureWithArc_REQUIRED_ARGC 7
#define uiDrawPathNewFigureWithArc_OPTIONAL_ARGC 0
/* void uiDrawPathNewFigureWithArc(uiDrawPath * p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative) */
mrb_value
mrb_UI_uiDrawPathNewFigureWithArc(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_float native_xCenter;
  mrb_float native_yCenter;
  mrb_float native_radius;
  mrb_float native_startAngle;
  mrb_float native_sweep;
  mrb_int native_negative;

  /* Fetch the args */
  mrb_get_args(mrb, "offfffi", &p, &native_xCenter, &native_yCenter, &native_radius, &native_startAngle, &native_sweep, &native_negative);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathNewFigureWithArc(native_p, native_xCenter, native_yCenter, native_radius, native_startAngle, native_sweep, native_negative);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawRestore */
/* sha: 98157a42ec5b8d47d5977bdd583644189cc3b60b321f1da02ca1f3a57559509d */
#if BIND_uiDrawRestore_FUNCTION
#define uiDrawRestore_REQUIRED_ARGC 1
#define uiDrawRestore_OPTIONAL_ARGC 0
/* void uiDrawRestore(uiDrawContext * c) */
mrb_value
mrb_UI_uiDrawRestore(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Invocation */
  uiDrawRestore(native_c);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawSave */
/* sha: 959dd1b3c92fa8c559df789c2fa665f98c79c05d172ef8dec5372c64939a10e5 */
#if BIND_uiDrawSave_FUNCTION
#define uiDrawSave_REQUIRED_ARGC 1
#define uiDrawSave_OPTIONAL_ARGC 0
/* void uiDrawSave(uiDrawContext * c) */
mrb_value
mrb_UI_uiDrawSave(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Invocation */
  uiDrawSave(native_c);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawStroke */
/* sha: ca0342deeff6abf6673bdded0b0a1ee6185967fde7f0d7b9a565f153d628ca0a */
#if BIND_uiDrawStroke_FUNCTION
#define uiDrawStroke_REQUIRED_ARGC 4
#define uiDrawStroke_OPTIONAL_ARGC 0
/* void uiDrawStroke(uiDrawContext * c, uiDrawPath * path, uiDrawBrush * b, uiDrawStrokeParams * p) */
mrb_value
mrb_UI_uiDrawStroke(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value path;
  mrb_value b;
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &c, &path, &b, &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, DrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawBrush expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, DrawStrokeParams_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawStrokeParams expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Unbox param: path */
  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_unbox_uiDrawPath(path));

  /* Unbox param: b */
  uiDrawBrush * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiDrawBrush(b));

  /* Unbox param: p */
  uiDrawStrokeParams * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiDrawStrokeParams(p));

  /* Invocation */
  uiDrawStroke(native_c, native_path, native_b, native_p);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawText */
/* sha: 8cc72cc82a4896d411602e544f13becdba08d386bd6aec03327edd940faf740f */
#if BIND_uiDrawText_FUNCTION
#define uiDrawText_REQUIRED_ARGC 4
#define uiDrawText_OPTIONAL_ARGC 0
/* void uiDrawText(uiDrawContext * c, double x, double y, uiDrawTextLayout * layout) */
mrb_value
mrb_UI_uiDrawText(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_float native_x;
  mrb_float native_y;
  mrb_value layout;

  /* Fetch the args */
  mrb_get_args(mrb, "offo", &c, &native_x, &native_y, &layout);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, layout, DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Unbox param: layout */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawText(native_c, native_x, native_y, native_layout);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextFontDescribe */
/* sha: 887eacbd161e6307f62e780ae6b6e7e3109a8570a06361484995beedd76e788b */
#if BIND_uiDrawTextFontDescribe_FUNCTION
#define uiDrawTextFontDescribe_REQUIRED_ARGC 2
#define uiDrawTextFontDescribe_OPTIONAL_ARGC 0
/* void uiDrawTextFontDescribe(uiDrawTextFont * font, uiDrawTextFontDescriptor * desc) */
mrb_value
mrb_UI_uiDrawTextFontDescribe(mrb_state* mrb, mrb_value self) {
  mrb_value font;
  mrb_value desc;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &font, &desc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, desc, DrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontDescriptor expected");
    return mrb_nil_value();
  }

  /* Unbox param: font */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_unbox_uiDrawTextFont(font));

  /* Unbox param: desc */
  uiDrawTextFontDescriptor * native_desc = (mrb_nil_p(desc) ? NULL : mruby_unbox_uiDrawTextFontDescriptor(desc));

  /* Invocation */
  uiDrawTextFontDescribe(native_font, native_desc);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextFontGetMetrics */
/* sha: 79d4ee959464e92e6943c9a45eb0535faf08b2b8e7e372fa0d29c8395c555d5f */
#if BIND_uiDrawTextFontGetMetrics_FUNCTION
#define uiDrawTextFontGetMetrics_REQUIRED_ARGC 2
#define uiDrawTextFontGetMetrics_OPTIONAL_ARGC 0
/* void uiDrawTextFontGetMetrics(uiDrawTextFont * font, uiDrawTextFontMetrics * metrics) */
mrb_value
mrb_UI_uiDrawTextFontGetMetrics(mrb_state* mrb, mrb_value self) {
  mrb_value font;
  mrb_value metrics;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &font, &metrics);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, metrics, DrawTextFontMetrics_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontMetrics expected");
    return mrb_nil_value();
  }

  /* Unbox param: font */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_unbox_uiDrawTextFont(font));

  /* Unbox param: metrics */
  uiDrawTextFontMetrics * native_metrics = (mrb_nil_p(metrics) ? NULL : mruby_unbox_uiDrawTextFontMetrics(metrics));

  /* Invocation */
  uiDrawTextFontGetMetrics(native_font, native_metrics);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextFontHandle */
/* sha: 7bb8c3b44ca486b789a64a2d4d7e8abaac83c280d372d4c7a0ddad818a143f5e */
#if BIND_uiDrawTextFontHandle_FUNCTION
#define uiDrawTextFontHandle_REQUIRED_ARGC 1
#define uiDrawTextFontHandle_OPTIONAL_ARGC 0
/* uintptr_t uiDrawTextFontHandle(uiDrawTextFont * font) */
mrb_value
mrb_UI_uiDrawTextFontHandle(mrb_state* mrb, mrb_value self) {
  mrb_value font;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &font);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }

  /* Unbox param: font */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_unbox_uiDrawTextFont(font));

  /* Invocation */
  uintptr_t native_return_value = uiDrawTextFontHandle(native_font);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uintptr_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextLayoutExtents */
/* sha: 2e82a14107d80f6bb6875d26242a4487135f86c3648f9767c511f32552919e97 */
#if BIND_uiDrawTextLayoutExtents_FUNCTION
#define uiDrawTextLayoutExtents_REQUIRED_ARGC 3
#define uiDrawTextLayoutExtents_OPTIONAL_ARGC 0
/* void uiDrawTextLayoutExtents(uiDrawTextLayout * layout, double * width, double * height) */
mrb_value
mrb_UI_uiDrawTextLayoutExtents(mrb_state* mrb, mrb_value self) {
  mrb_value layout;
  mrb_value width;
  mrb_value height;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &layout, &width, &height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(width);
  TODO_type_check_double_PTR(height);

  /* Unbox param: layout */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_unbox_uiDrawTextLayout(layout));

  /* Unbox param: width */
  double * native_width = TODO_mruby_unbox_double_PTR(width);

  /* Unbox param: height */
  double * native_height = TODO_mruby_unbox_double_PTR(height);

  /* Invocation */
  uiDrawTextLayoutExtents(native_layout, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextLayoutSetColor */
/* sha: 0b0877a236af51d79b354dff6625e15c0063b6c202cf5add50a13d33907eb522 */
#if BIND_uiDrawTextLayoutSetColor_FUNCTION
#define uiDrawTextLayoutSetColor_REQUIRED_ARGC 7
#define uiDrawTextLayoutSetColor_OPTIONAL_ARGC 0
/* void uiDrawTextLayoutSetColor(uiDrawTextLayout * layout, int startChar, int endChar, double r, double g, double b, double a) */
mrb_value
mrb_UI_uiDrawTextLayoutSetColor(mrb_state* mrb, mrb_value self) {
  mrb_value layout;
  mrb_int native_startChar;
  mrb_int native_endChar;
  mrb_float native_r;
  mrb_float native_g;
  mrb_float native_b;
  mrb_float native_a;

  /* Fetch the args */
  mrb_get_args(mrb, "oiiffff", &layout, &native_startChar, &native_endChar, &native_r, &native_g, &native_b, &native_a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox param: layout */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawTextLayoutSetColor(native_layout, native_startChar, native_endChar, native_r, native_g, native_b, native_a);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTextLayoutSetWidth */
/* sha: ac2e6677a0b9d8e0d2cbcd6dd5653031b452374312002be1813f553dfbb74aff */
#if BIND_uiDrawTextLayoutSetWidth_FUNCTION
#define uiDrawTextLayoutSetWidth_REQUIRED_ARGC 2
#define uiDrawTextLayoutSetWidth_OPTIONAL_ARGC 0
/* void uiDrawTextLayoutSetWidth(uiDrawTextLayout * layout, double width) */
mrb_value
mrb_UI_uiDrawTextLayoutSetWidth(mrb_state* mrb, mrb_value self) {
  mrb_value layout;
  mrb_float native_width;

  /* Fetch the args */
  mrb_get_args(mrb, "of", &layout, &native_width);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox param: layout */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawTextLayoutSetWidth(native_layout, native_width);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiDrawTransform */
/* sha: 9514f3eb63211069591a83108069315d9d6a2cbe8cc4085750c03cefb8a8c7a0 */
#if BIND_uiDrawTransform_FUNCTION
#define uiDrawTransform_REQUIRED_ARGC 2
#define uiDrawTransform_OPTIONAL_ARGC 0
/* void uiDrawTransform(uiDrawContext * c, uiDrawMatrix * m) */
mrb_value
mrb_UI_uiDrawTransform(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &c, &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, m, DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiDrawContext(c));

  /* Unbox param: m */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawTransform(native_c, native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEditableComboboxAppend */
/* sha: 4ef12d53fc238a74089d9da5e33cd8c88b1131d758bcf562e6ab459e300c9186 */
#if BIND_uiEditableComboboxAppend_FUNCTION
#define uiEditableComboboxAppend_REQUIRED_ARGC 2
#define uiEditableComboboxAppend_OPTIONAL_ARGC 0
/* void uiEditableComboboxAppend(uiEditableCombobox * c, const char * text) */
mrb_value
mrb_UI_uiEditableComboboxAppend(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Invocation */
  uiEditableComboboxAppend(native_c, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEditableComboboxOnChanged */
/* sha: f6de95f3b0dc08d27fe2590ad75cfc72225b9f4c13a64a5d793b79255777152d */
#if BIND_uiEditableComboboxOnChanged_FUNCTION
#define uiEditableComboboxOnChanged_REQUIRED_ARGC 1
#define uiEditableComboboxOnChanged_OPTIONAL_ARGC 0
/* void uiEditableComboboxOnChanged(uiEditableCombobox * c, void (*)(uiEditableCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiEditableComboboxOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value c;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &c, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, c, event_name, f);
  uiEditableComboboxOnChanged(native_c, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEditableComboboxSetText */
/* sha: 16ed9431a5bbd45054e0ce1a76b25bc0e67ecfc0f2aa7f94e0f84b99af197b51 */
#if BIND_uiEditableComboboxSetText_FUNCTION
#define uiEditableComboboxSetText_REQUIRED_ARGC 2
#define uiEditableComboboxSetText_OPTIONAL_ARGC 0
/* void uiEditableComboboxSetText(uiEditableCombobox * c, const char * text) */
mrb_value
mrb_UI_uiEditableComboboxSetText(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Invocation */
  uiEditableComboboxSetText(native_c, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEditableComboboxText */
/* sha: c00a497712f490a9778f63402dcb839813feece61f4c5f6ffe447d998e48f4f4 */
#if BIND_uiEditableComboboxText_FUNCTION
#define uiEditableComboboxText_REQUIRED_ARGC 1
#define uiEditableComboboxText_OPTIONAL_ARGC 0
/* char * uiEditableComboboxText(uiEditableCombobox * c) */
mrb_value
mrb_UI_uiEditableComboboxText(mrb_state* mrb, mrb_value self) {
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Invocation */
  char * native_return_value = uiEditableComboboxText(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntryOnChanged */
/* sha: bdc5f2780553c434dac6ef2bd83b9b7b952a0f3c42a30463b6a1210928ed7af0 */
#if BIND_uiEntryOnChanged_FUNCTION
#define uiEntryOnChanged_REQUIRED_ARGC 1
#define uiEntryOnChanged_OPTIONAL_ARGC 0
/* void uiEntryOnChanged(uiEntry * e, void (*)(uiEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiEntryOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value e;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &e, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, e, event_name, f);
  uiEntryOnChanged(native_e, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntryReadOnly */
/* sha: 6aaeaddf2b4d532424ca15edf2628313773468bb41fa148c7066248adcf8edf6 */
#if BIND_uiEntryReadOnly_FUNCTION
#define uiEntryReadOnly_REQUIRED_ARGC 1
#define uiEntryReadOnly_OPTIONAL_ARGC 0
/* int uiEntryReadOnly(uiEntry * e) */
mrb_value
mrb_UI_uiEntryReadOnly(mrb_state* mrb, mrb_value self) {
  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  int native_return_value = uiEntryReadOnly(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntrySetReadOnly */
/* sha: 14897e3c5e3afa1d0f957bcad954ff58a86c59cd1db28fcfebd8fa0aa4592590 */
#if BIND_uiEntrySetReadOnly_FUNCTION
#define uiEntrySetReadOnly_REQUIRED_ARGC 2
#define uiEntrySetReadOnly_OPTIONAL_ARGC 0
/* void uiEntrySetReadOnly(uiEntry * e, int readonly) */
mrb_value
mrb_UI_uiEntrySetReadOnly(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  mrb_int native_readonly;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &e, &native_readonly);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  uiEntrySetReadOnly(native_e, native_readonly);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntrySetText */
/* sha: 5841f2d6d9ec2bcfe042a76f7f07cfd209cbd382756dcf6a8cc0c7f094e03e07 */
#if BIND_uiEntrySetText_FUNCTION
#define uiEntrySetText_REQUIRED_ARGC 2
#define uiEntrySetText_OPTIONAL_ARGC 0
/* void uiEntrySetText(uiEntry * e, const char * text) */
mrb_value
mrb_UI_uiEntrySetText(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  uiEntrySetText(native_e, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntryText */
/* sha: 6aa7c6952562d3075a3558fbdc0b64da67b6dbdc3a477e6e290f0a05be25e7b3 */
#if BIND_uiEntryText_FUNCTION
#define uiEntryText_REQUIRED_ARGC 1
#define uiEntryText_OPTIONAL_ARGC 0
/* char * uiEntryText(uiEntry * e) */
mrb_value
mrb_UI_uiEntryText(mrb_state* mrb, mrb_value self) {
  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  char * native_return_value = uiEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFontButtonFont */
/* sha: bd20502002f39e96cc647c1616492eda2bbafcdddf88fa2f15a60fca8de16675 */
#if BIND_uiFontButtonFont_FUNCTION
#define uiFontButtonFont_REQUIRED_ARGC 1
#define uiFontButtonFont_OPTIONAL_ARGC 0
/* uiDrawTextFont * uiFontButtonFont(uiFontButton * b) */
mrb_value
mrb_UI_uiFontButtonFont(mrb_state* mrb, mrb_value self) {
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, FontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FontButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiFontButton(b));

  /* Invocation */
  uiDrawTextFont * native_return_value = uiFontButtonFont(native_b);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDrawTextFont(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFontButtonOnChanged */
/* sha: c200be35f3dbe91b4377ff09b478b3358f8f21ad32ca5933e25b2618bda137b1 */
#if BIND_uiFontButtonOnChanged_FUNCTION
#define uiFontButtonOnChanged_REQUIRED_ARGC 1
#define uiFontButtonOnChanged_OPTIONAL_ARGC 0
/* void uiFontButtonOnChanged(uiFontButton * b, void (*)(uiFontButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiFontButtonOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value b;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &b, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, FontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FontButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiFontButton(b));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, b, event_name, f);
  uiFontButtonOnChanged(native_b, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFormAppend */
/* sha: d66eaad2001730395c3f9c98d2220e62b21b01ea7a82bfb6d3a7765156a3ff57 */
#if BIND_uiFormAppend_FUNCTION
#define uiFormAppend_REQUIRED_ARGC 4
#define uiFormAppend_OPTIONAL_ARGC 0
/* void uiFormAppend(uiForm * f, const char * label, uiControl * c, int stretchy) */
mrb_value
mrb_UI_uiFormAppend(mrb_state* mrb, mrb_value self) {
  mrb_value f;
  char * native_label = NULL;
  mrb_value c;
  mrb_int native_stretchy;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &f, &native_label, &c, &native_stretchy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: f */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_unbox_uiForm(f));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Invocation */
  uiFormAppend(native_f, native_label, native_c, native_stretchy);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFormDelete */
/* sha: ee85ebc3059394694d4b0b6ec74441fe2ad11f2505af20e6642a46b226ca9c93 */
#if BIND_uiFormDelete_FUNCTION
#define uiFormDelete_REQUIRED_ARGC 2
#define uiFormDelete_OPTIONAL_ARGC 0
/* void uiFormDelete(uiForm * f, int index) */
mrb_value
mrb_UI_uiFormDelete(mrb_state* mrb, mrb_value self) {
  mrb_value f;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &f, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox param: f */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_unbox_uiForm(f));

  /* Invocation */
  uiFormDelete(native_f, native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFormPadded */
/* sha: b88930b1074d80d5f33ccf21b7d89da5c94f0ddf5bac2a3ceefe3dcc72895a38 */
#if BIND_uiFormPadded_FUNCTION
#define uiFormPadded_REQUIRED_ARGC 1
#define uiFormPadded_OPTIONAL_ARGC 0
/* int uiFormPadded(uiForm * f) */
mrb_value
mrb_UI_uiFormPadded(mrb_state* mrb, mrb_value self) {
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox param: f */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_unbox_uiForm(f));

  /* Invocation */
  int native_return_value = uiFormPadded(native_f);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFormSetPadded */
/* sha: d3664d37a51cad08a86fc17707a2c38824d2f4100eba8fd5c470c4e81ed2b912 */
#if BIND_uiFormSetPadded_FUNCTION
#define uiFormSetPadded_REQUIRED_ARGC 2
#define uiFormSetPadded_OPTIONAL_ARGC 0
/* void uiFormSetPadded(uiForm * f, int padded) */
mrb_value
mrb_UI_uiFormSetPadded(mrb_state* mrb, mrb_value self) {
  mrb_value f;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &f, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox param: f */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_unbox_uiForm(f));

  /* Invocation */
  uiFormSetPadded(native_f, native_padded);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFreeControl */
/* sha: 18534cba2690e6dae19a0753f0801439027f5dce55d55d0a0b22239998b5bd58 */
#if BIND_uiFreeControl_FUNCTION
#define uiFreeControl_REQUIRED_ARGC 1
#define uiFreeControl_OPTIONAL_ARGC 0
/* void uiFreeControl(uiControl * arg1) */
mrb_value
mrb_UI_uiFreeControl(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiFreeControl(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFreeInitError */
/* sha: 15227f1c40c0a26bdb1bf5365fc2b1dc9f641233e99eb1205eb3881cb262e60c */
#if BIND_uiFreeInitError_FUNCTION
#define uiFreeInitError_REQUIRED_ARGC 1
#define uiFreeInitError_OPTIONAL_ARGC 0
/* void uiFreeInitError(const char * err) */
mrb_value
mrb_UI_uiFreeInitError(mrb_state* mrb, mrb_value self) {
  char * native_err = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_err);

  /* Invocation */
  uiFreeInitError(native_err);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFreeText */
/* sha: 19f21f32a62d3ef235f20f7d623525d518b81481ff3c2b29c560d388ef1dc24b */
#if BIND_uiFreeText_FUNCTION
#define uiFreeText_REQUIRED_ARGC 1
#define uiFreeText_OPTIONAL_ARGC 0
/* void uiFreeText(char * text) */
mrb_value
mrb_UI_uiFreeText(mrb_state* mrb, mrb_value self) {
  mrb_value text;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &text);

  /* Type checking */
  TODO_type_check_char_PTR(text);

  /* Unbox param: text */
  char * native_text = TODO_mruby_unbox_char_PTR(text);

  /* Invocation */
  uiFreeText(native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGridAppend */
/* sha: f5f1e93caccd62f37a6a46e5f6286898d0f6c6314caf4e58cb5b852b9045fbad */
#if BIND_uiGridAppend_FUNCTION
#define uiGridAppend_REQUIRED_ARGC 10
#define uiGridAppend_OPTIONAL_ARGC 0
/* void uiGridAppend(uiGrid * g, uiControl * c, int left, int top, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign) */
mrb_value
mrb_UI_uiGridAppend(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  mrb_value c;
  mrb_int native_left;
  mrb_int native_top;
  mrb_int native_xspan;
  mrb_int native_yspan;
  mrb_int native_hexpand;
  mrb_value halign;
  mrb_int native_vexpand;
  mrb_value valign;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiiiiioio", &g, &c, &native_left, &native_top, &native_xspan, &native_yspan, &native_hexpand, &halign, &native_vexpand, &valign);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  TODO_type_check_uiAlign(halign);
  TODO_type_check_uiAlign(valign);

  /* Unbox param: g */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGrid(g));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Unbox param: halign */
  uiAlign native_halign = TODO_mruby_unbox_uiAlign(halign);

  /* Unbox param: valign */
  uiAlign native_valign = TODO_mruby_unbox_uiAlign(valign);

  /* Invocation */
  uiGridAppend(native_g, native_c, native_left, native_top, native_xspan, native_yspan, native_hexpand, native_halign, native_vexpand, native_valign);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGridInsertAt */
/* sha: f13e7f8ac0de800a02884643ebfa4148d8241f7608a895e643fe2750b08afe96 */
#if BIND_uiGridInsertAt_FUNCTION
#define uiGridInsertAt_REQUIRED_ARGC 10
#define uiGridInsertAt_OPTIONAL_ARGC 0
/* void uiGridInsertAt(uiGrid * g, uiControl * c, uiControl * existing, uiAt at, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign) */
mrb_value
mrb_UI_uiGridInsertAt(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  mrb_value c;
  mrb_value existing;
  mrb_value at;
  mrb_int native_xspan;
  mrb_int native_yspan;
  mrb_int native_hexpand;
  mrb_value halign;
  mrb_int native_vexpand;
  mrb_value valign;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooiiioio", &g, &c, &existing, &at, &native_xspan, &native_yspan, &native_hexpand, &halign, &native_vexpand, &valign);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, existing, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  TODO_type_check_uiAt(at);
  TODO_type_check_uiAlign(halign);
  TODO_type_check_uiAlign(valign);

  /* Unbox param: g */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGrid(g));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Unbox param: existing */
  uiControl * native_existing = (mrb_nil_p(existing) ? NULL : mruby_unbox_uiControl(existing));

  /* Unbox param: at */
  uiAt native_at = TODO_mruby_unbox_uiAt(at);

  /* Unbox param: halign */
  uiAlign native_halign = TODO_mruby_unbox_uiAlign(halign);

  /* Unbox param: valign */
  uiAlign native_valign = TODO_mruby_unbox_uiAlign(valign);

  /* Invocation */
  uiGridInsertAt(native_g, native_c, native_existing, native_at, native_xspan, native_yspan, native_hexpand, native_halign, native_vexpand, native_valign);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGridPadded */
/* sha: 9afe454d589114304802e3982626bac1cc310244b6ec8d78c37a20a5b8532cf0 */
#if BIND_uiGridPadded_FUNCTION
#define uiGridPadded_REQUIRED_ARGC 1
#define uiGridPadded_OPTIONAL_ARGC 0
/* int uiGridPadded(uiGrid * g) */
mrb_value
mrb_UI_uiGridPadded(mrb_state* mrb, mrb_value self) {
  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGrid(g));

  /* Invocation */
  int native_return_value = uiGridPadded(native_g);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGridSetPadded */
/* sha: ea92ddef81268abe41a986a128a0fdc9ad0b1f7ab756443afd318be8d2e7a208 */
#if BIND_uiGridSetPadded_FUNCTION
#define uiGridSetPadded_REQUIRED_ARGC 2
#define uiGridSetPadded_OPTIONAL_ARGC 0
/* void uiGridSetPadded(uiGrid * g, int padded) */
mrb_value
mrb_UI_uiGridSetPadded(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &g, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGrid(g));

  /* Invocation */
  uiGridSetPadded(native_g, native_padded);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGroupMargined */
/* sha: c013452a0bd903cf80801bc4738b0057ddb5245b9e8826795859157697249d9b */
#if BIND_uiGroupMargined_FUNCTION
#define uiGroupMargined_REQUIRED_ARGC 1
#define uiGroupMargined_OPTIONAL_ARGC 0
/* int uiGroupMargined(uiGroup * g) */
mrb_value
mrb_UI_uiGroupMargined(mrb_state* mrb, mrb_value self) {
  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGroup(g));

  /* Invocation */
  int native_return_value = uiGroupMargined(native_g);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGroupSetChild */
/* sha: 51b058649afedb5ac486ca857abbad70600e1376a2ccd6c446f1a38d1ab8b892 */
#if BIND_uiGroupSetChild_FUNCTION
#define uiGroupSetChild_REQUIRED_ARGC 2
#define uiGroupSetChild_OPTIONAL_ARGC 0
/* void uiGroupSetChild(uiGroup * g, uiControl * c) */
mrb_value
mrb_UI_uiGroupSetChild(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &g, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGroup(g));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Invocation */
  uiGroupSetChild(native_g, native_c);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGroupSetMargined */
/* sha: dd553d45f957862f7246bd15ab54cb8f439d64206de2c7a03c9ea93f77da3aa7 */
#if BIND_uiGroupSetMargined_FUNCTION
#define uiGroupSetMargined_REQUIRED_ARGC 2
#define uiGroupSetMargined_OPTIONAL_ARGC 0
/* void uiGroupSetMargined(uiGroup * g, int margined) */
mrb_value
mrb_UI_uiGroupSetMargined(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &g, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGroup(g));

  /* Invocation */
  uiGroupSetMargined(native_g, native_margined);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGroupSetTitle */
/* sha: c8780b1c9aa491d305af7189b5acde8a95ce3f6236428201d117df19e4bf2b1e */
#if BIND_uiGroupSetTitle_FUNCTION
#define uiGroupSetTitle_REQUIRED_ARGC 2
#define uiGroupSetTitle_OPTIONAL_ARGC 0
/* void uiGroupSetTitle(uiGroup * g, const char * title) */
mrb_value
mrb_UI_uiGroupSetTitle(mrb_state* mrb, mrb_value self) {
  mrb_value g;
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &g, &native_title);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGroup(g));

  /* Invocation */
  uiGroupSetTitle(native_g, native_title);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiGroupTitle */
/* sha: bf7c917e4eb3f164422f407ea336668396f7c362f7176b44bb4f78793f705d36 */
#if BIND_uiGroupTitle_FUNCTION
#define uiGroupTitle_REQUIRED_ARGC 1
#define uiGroupTitle_OPTIONAL_ARGC 0
/* char * uiGroupTitle(uiGroup * g) */
mrb_value
mrb_UI_uiGroupTitle(mrb_state* mrb, mrb_value self) {
  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox param: g */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_unbox_uiGroup(g));

  /* Invocation */
  char * native_return_value = uiGroupTitle(native_g);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiInit */
/* sha: 4a07be78bfb6b0e4ee9d697d83d94ca498e2ed535058c7a276526d89ac6287b7 */
#if BIND_uiInit_FUNCTION
#define uiInit_REQUIRED_ARGC 1
#define uiInit_OPTIONAL_ARGC 0
/* const char * uiInit(uiInitOptions * options) */
mrb_value
mrb_UI_uiInit(mrb_state* mrb, mrb_value self) {
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, options, InitOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "InitOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: options */
  uiInitOptions * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_uiInitOptions(options));

  /* Invocation */
  const char * native_return_value = uiInit(native_options);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiLabelSetText */
/* sha: 88b654025c1023c66aa5499b3e3bebe926afd7c6f08b7259a8a4d07bbb657b94 */
#if BIND_uiLabelSetText_FUNCTION
#define uiLabelSetText_REQUIRED_ARGC 2
#define uiLabelSetText_OPTIONAL_ARGC 0
/* void uiLabelSetText(uiLabel * l, const char * text) */
mrb_value
mrb_UI_uiLabelSetText(mrb_state* mrb, mrb_value self) {
  mrb_value l;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &l, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, l, Label_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Label expected");
    return mrb_nil_value();
  }

  /* Unbox param: l */
  uiLabel * native_l = (mrb_nil_p(l) ? NULL : mruby_unbox_uiLabel(l));

  /* Invocation */
  uiLabelSetText(native_l, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiLabelText */
/* sha: 0cc8a1eb3c654785c881c3d3e3987a8432312203a4360995dd75e79367208cc8 */
#if BIND_uiLabelText_FUNCTION
#define uiLabelText_REQUIRED_ARGC 1
#define uiLabelText_OPTIONAL_ARGC 0
/* char * uiLabelText(uiLabel * l) */
mrb_value
mrb_UI_uiLabelText(mrb_state* mrb, mrb_value self) {
  mrb_value l;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &l);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, l, Label_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Label expected");
    return mrb_nil_value();
  }

  /* Unbox param: l */
  uiLabel * native_l = (mrb_nil_p(l) ? NULL : mruby_unbox_uiLabel(l));

  /* Invocation */
  char * native_return_value = uiLabelText(native_l);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMain */
/* sha: 6df9b680c6bcf917ee98fc3fee3079116a7b8cff11a5799d68a8af4f6f369849 */
#if BIND_uiMain_FUNCTION
#define uiMain_REQUIRED_ARGC 0
#define uiMain_OPTIONAL_ARGC 0
/* void uiMain() */
mrb_value
mrb_UI_uiMain(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiMain();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMainStep */
/* sha: a0501cb07b0540249c058b71887bc9448d9775b2f0e8a441cb416fb60bb08100 */
#if BIND_uiMainStep_FUNCTION
#define uiMainStep_REQUIRED_ARGC 1
#define uiMainStep_OPTIONAL_ARGC 0
/* int uiMainStep(int wait) */
mrb_value
mrb_UI_uiMainStep(mrb_state* mrb, mrb_value self) {
  mrb_int native_wait;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_wait);

  /* Invocation */
  int native_return_value = uiMainStep(native_wait);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMainSteps */
/* sha: 7cf097e4953ebfea6186f43aed0d10399a4b81e1936083cfdddceac0f808fc1b */
#if BIND_uiMainSteps_FUNCTION
#define uiMainSteps_REQUIRED_ARGC 0
#define uiMainSteps_OPTIONAL_ARGC 0
/* void uiMainSteps() */
mrb_value
mrb_UI_uiMainSteps(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiMainSteps();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendAboutItem */
/* sha: f7d72b04cb60163178de7f99057dd9d9334a00e4dfeec819b4d4c08b225ad03e */
#if BIND_uiMenuAppendAboutItem_FUNCTION
#define uiMenuAppendAboutItem_REQUIRED_ARGC 1
#define uiMenuAppendAboutItem_OPTIONAL_ARGC 0
/* uiMenuItem * uiMenuAppendAboutItem(uiMenu * m) */
mrb_value
mrb_UI_uiMenuAppendAboutItem(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendAboutItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenuItem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendCheckItem */
/* sha: 029d156d1a3d7395d81e340799db7921425e81af481d1f489db23f3bd045adb0 */
#if BIND_uiMenuAppendCheckItem_FUNCTION
#define uiMenuAppendCheckItem_REQUIRED_ARGC 2
#define uiMenuAppendCheckItem_OPTIONAL_ARGC 0
/* uiMenuItem * uiMenuAppendCheckItem(uiMenu * m, const char * name) */
mrb_value
mrb_UI_uiMenuAppendCheckItem(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &m, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendCheckItem(native_m, native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenuItem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendItem */
/* sha: 54b54ce0c867789005e2eadf07485299e0458ec54fb150759fd9442b5a9690e8 */
#if BIND_uiMenuAppendItem_FUNCTION
#define uiMenuAppendItem_REQUIRED_ARGC 2
#define uiMenuAppendItem_OPTIONAL_ARGC 0
/* uiMenuItem * uiMenuAppendItem(uiMenu * m, const char * name) */
mrb_value
mrb_UI_uiMenuAppendItem(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &m, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendItem(native_m, native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenuItem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendPreferencesItem */
/* sha: d19f360e98ec08bfc11417d27a9e6b36aaea5b5d635ef4b70f064ca3a5fb4c86 */
#if BIND_uiMenuAppendPreferencesItem_FUNCTION
#define uiMenuAppendPreferencesItem_REQUIRED_ARGC 1
#define uiMenuAppendPreferencesItem_OPTIONAL_ARGC 0
/* uiMenuItem * uiMenuAppendPreferencesItem(uiMenu * m) */
mrb_value
mrb_UI_uiMenuAppendPreferencesItem(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendPreferencesItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenuItem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendQuitItem */
/* sha: fba0496efdc438b3813261b1ce33b3e23a63d011c03269d930e70324d9e1bd27 */
#if BIND_uiMenuAppendQuitItem_FUNCTION
#define uiMenuAppendQuitItem_REQUIRED_ARGC 1
#define uiMenuAppendQuitItem_OPTIONAL_ARGC 0
/* uiMenuItem * uiMenuAppendQuitItem(uiMenu * m) */
mrb_value
mrb_UI_uiMenuAppendQuitItem(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendQuitItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenuItem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuAppendSeparator */
/* sha: 39f79f69bc0c4b36cc66e581706e1b880b01075545ccd61b0913d21578f94f81 */
#if BIND_uiMenuAppendSeparator_FUNCTION
#define uiMenuAppendSeparator_REQUIRED_ARGC 1
#define uiMenuAppendSeparator_OPTIONAL_ARGC 0
/* void uiMenuAppendSeparator(uiMenu * m) */
mrb_value
mrb_UI_uiMenuAppendSeparator(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenu(m));

  /* Invocation */
  uiMenuAppendSeparator(native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemChecked */
/* sha: 943f9f03a056a69764d850548d07a8b0839cf479754136b18e544ff1ac293a87 */
#if BIND_uiMenuItemChecked_FUNCTION
#define uiMenuItemChecked_REQUIRED_ARGC 1
#define uiMenuItemChecked_OPTIONAL_ARGC 0
/* int uiMenuItemChecked(uiMenuItem * m) */
mrb_value
mrb_UI_uiMenuItemChecked(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Invocation */
  int native_return_value = uiMenuItemChecked(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemDisable */
/* sha: 56fe6bb7542f7d517fd56b70e0b5aed9ebbd627b824e3af6318eb0d7dc7c536c */
#if BIND_uiMenuItemDisable_FUNCTION
#define uiMenuItemDisable_REQUIRED_ARGC 1
#define uiMenuItemDisable_OPTIONAL_ARGC 0
/* void uiMenuItemDisable(uiMenuItem * m) */
mrb_value
mrb_UI_uiMenuItemDisable(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemDisable(native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemEnable */
/* sha: 23cdfad9ed011a46c0cfe78beed4a896e99d621bf5261b447da444679605f658 */
#if BIND_uiMenuItemEnable_FUNCTION
#define uiMenuItemEnable_REQUIRED_ARGC 1
#define uiMenuItemEnable_OPTIONAL_ARGC 0
/* void uiMenuItemEnable(uiMenuItem * m) */
mrb_value
mrb_UI_uiMenuItemEnable(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemEnable(native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemOnClicked */
/* sha: 857fe60e1d05859b1018744be89bf10fc0b82e4c63bded76874809c115bbffe9 */
#if BIND_uiMenuItemOnClicked_FUNCTION
#define uiMenuItemOnClicked_REQUIRED_ARGC 1
#define uiMenuItemOnClicked_OPTIONAL_ARGC 0
/* void uiMenuItemOnClicked(uiMenuItem * m, void (*)(uiMenuItem *, uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiMenuItemOnClicked(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_clicked";
  mrb_value m;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &m, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, m, event_name, f);
  uiMenuItemOnClicked(native_m, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemSetChecked */
/* sha: 089395cfbdf948121df7ac24183494cb9e685c0360ed510d6b1d1474258e0d11 */
#if BIND_uiMenuItemSetChecked_FUNCTION
#define uiMenuItemSetChecked_REQUIRED_ARGC 2
#define uiMenuItemSetChecked_OPTIONAL_ARGC 0
/* void uiMenuItemSetChecked(uiMenuItem * m, int checked) */
mrb_value
mrb_UI_uiMenuItemSetChecked(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_int native_checked;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &m, &native_checked);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemSetChecked(native_m, native_checked);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMsgBox */
/* sha: 8d6513d08e9ba480f663e6990c5a5be188cffbfcb477202ad5281057d5d17bd7 */
#if BIND_uiMsgBox_FUNCTION
#define uiMsgBox_REQUIRED_ARGC 3
#define uiMsgBox_OPTIONAL_ARGC 0
/* void uiMsgBox(uiWindow * parent, const char * title, const char * description) */
mrb_value
mrb_UI_uiMsgBox(mrb_state* mrb, mrb_value self) {
  mrb_value parent;
  char * native_title = NULL;
  char * native_description = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &parent, &native_title, &native_description);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: parent */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox_uiWindow(parent));

  /* Invocation */
  uiMsgBox(native_parent, native_title, native_description);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMsgBoxError */
/* sha: 1c006707385234bd150ac068b9ebd0a350cad8a88f2505cc12e6e4ee67754db1 */
#if BIND_uiMsgBoxError_FUNCTION
#define uiMsgBoxError_REQUIRED_ARGC 3
#define uiMsgBoxError_OPTIONAL_ARGC 0
/* void uiMsgBoxError(uiWindow * parent, const char * title, const char * description) */
mrb_value
mrb_UI_uiMsgBoxError(mrb_state* mrb, mrb_value self) {
  mrb_value parent;
  char * native_title = NULL;
  char * native_description = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &parent, &native_title, &native_description);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: parent */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox_uiWindow(parent));

  /* Invocation */
  uiMsgBoxError(native_parent, native_title, native_description);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntryAppend */
/* sha: 889263ef4a7235c6b1ea1779beee92dead711a477e40b2cdc6503f7e75d654d0 */
#if BIND_uiMultilineEntryAppend_FUNCTION
#define uiMultilineEntryAppend_REQUIRED_ARGC 2
#define uiMultilineEntryAppend_OPTIONAL_ARGC 0
/* void uiMultilineEntryAppend(uiMultilineEntry * e, const char * text) */
mrb_value
mrb_UI_uiMultilineEntryAppend(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntryAppend(native_e, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntryOnChanged */
/* sha: 059b3e36504f99d7c6d58fa80a848761fbaad7e4a8f6747217d0be16fd9c234c */
#if BIND_uiMultilineEntryOnChanged_FUNCTION
#define uiMultilineEntryOnChanged_REQUIRED_ARGC 1
#define uiMultilineEntryOnChanged_OPTIONAL_ARGC 0
/* void uiMultilineEntryOnChanged(uiMultilineEntry * e, void (*)(uiMultilineEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiMultilineEntryOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value e;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &e, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, e, event_name, f);
  uiMultilineEntryOnChanged(native_e, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntryReadOnly */
/* sha: 6331974d2ebf32339d2c28c87def365ec09828d932f21cd9c3b620b69c0acb7c */
#if BIND_uiMultilineEntryReadOnly_FUNCTION
#define uiMultilineEntryReadOnly_REQUIRED_ARGC 1
#define uiMultilineEntryReadOnly_OPTIONAL_ARGC 0
/* int uiMultilineEntryReadOnly(uiMultilineEntry * e) */
mrb_value
mrb_UI_uiMultilineEntryReadOnly(mrb_state* mrb, mrb_value self) {
  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  int native_return_value = uiMultilineEntryReadOnly(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntrySetReadOnly */
/* sha: 2a87e03c6ad6f6a75ab9634e652be56d3005d5eb186971137c5c0d5a0bd054b9 */
#if BIND_uiMultilineEntrySetReadOnly_FUNCTION
#define uiMultilineEntrySetReadOnly_REQUIRED_ARGC 2
#define uiMultilineEntrySetReadOnly_OPTIONAL_ARGC 0
/* void uiMultilineEntrySetReadOnly(uiMultilineEntry * e, int readonly) */
mrb_value
mrb_UI_uiMultilineEntrySetReadOnly(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  mrb_int native_readonly;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &e, &native_readonly);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntrySetReadOnly(native_e, native_readonly);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntrySetText */
/* sha: b97ff30c93674ec9ff021cfe2c17f914ff54882a1c39ad9e83597c2eaaecfebd */
#if BIND_uiMultilineEntrySetText_FUNCTION
#define uiMultilineEntrySetText_REQUIRED_ARGC 2
#define uiMultilineEntrySetText_OPTIONAL_ARGC 0
/* void uiMultilineEntrySetText(uiMultilineEntry * e, const char * text) */
mrb_value
mrb_UI_uiMultilineEntrySetText(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntrySetText(native_e, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntryText */
/* sha: c905c59a8b296ca488943d10321afd8aa8de9d9a98ac63dc9b3f3441f48ba3dc */
#if BIND_uiMultilineEntryText_FUNCTION
#define uiMultilineEntryText_REQUIRED_ARGC 1
#define uiMultilineEntryText_OPTIONAL_ARGC 0
/* char * uiMultilineEntryText(uiMultilineEntry * e) */
mrb_value
mrb_UI_uiMultilineEntryText(mrb_state* mrb, mrb_value self) {
  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  char * native_return_value = uiMultilineEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewArea */
/* sha: a6cf7e4272c0bc09621da0f07519a44abd2a7679d86fe73975e0768cf76df929 */
#if BIND_uiNewArea_FUNCTION
#define uiNewArea_REQUIRED_ARGC 1
#define uiNewArea_OPTIONAL_ARGC 0
/* uiArea * uiNewArea(uiAreaHandler * ah) */
mrb_value
mrb_UI_uiNewArea(mrb_state* mrb, mrb_value self) {
  mrb_value ah;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ah);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ah, AreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox param: ah */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewArea(native_ah);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiArea(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewButton */
/* sha: a3e7af81c77a2d7ea706a4d8e636befec1f3d1f4c19af0609ce494f664135da8 */
#if BIND_uiNewButton_FUNCTION
#define uiNewButton_REQUIRED_ARGC 1
#define uiNewButton_OPTIONAL_ARGC 0
/* uiButton * uiNewButton(const char * text) */
mrb_value
mrb_UI_uiNewButton(mrb_state* mrb, mrb_value self) {
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiButton * native_return_value = uiNewButton(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiButton(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewCheckbox */
/* sha: 6d04376e5567f68ddfed7aac8e45cef9610576dadca735f685d1dfa06a3cfaf4 */
#if BIND_uiNewCheckbox_FUNCTION
#define uiNewCheckbox_REQUIRED_ARGC 1
#define uiNewCheckbox_OPTIONAL_ARGC 0
/* uiCheckbox * uiNewCheckbox(const char * text) */
mrb_value
mrb_UI_uiNewCheckbox(mrb_state* mrb, mrb_value self) {
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiCheckbox * native_return_value = uiNewCheckbox(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiCheckbox(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewColorButton */
/* sha: eeb8ff52244b83e6a447d41e6c76cfb303f0224c4d3712dc892522506022b285 */
#if BIND_uiNewColorButton_FUNCTION
#define uiNewColorButton_REQUIRED_ARGC 0
#define uiNewColorButton_OPTIONAL_ARGC 0
/* uiColorButton * uiNewColorButton() */
mrb_value
mrb_UI_uiNewColorButton(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiColorButton * native_return_value = uiNewColorButton();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiColorButton(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewCombobox */
/* sha: 502722e1034f7b3474cfa210d0727e4692c4c30b4056e845250bd0e5f6225971 */
#if BIND_uiNewCombobox_FUNCTION
#define uiNewCombobox_REQUIRED_ARGC 0
#define uiNewCombobox_OPTIONAL_ARGC 0
/* uiCombobox * uiNewCombobox() */
mrb_value
mrb_UI_uiNewCombobox(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiCombobox * native_return_value = uiNewCombobox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiCombobox(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewDatePicker */
/* sha: c6a2508995405d95fbefc93ee721343f614c27085c809e724f7d2be515e1b85f */
#if BIND_uiNewDatePicker_FUNCTION
#define uiNewDatePicker_REQUIRED_ARGC 0
#define uiNewDatePicker_OPTIONAL_ARGC 0
/* uiDateTimePicker * uiNewDatePicker() */
mrb_value
mrb_UI_uiNewDatePicker(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewDatePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDateTimePicker(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewDateTimePicker */
/* sha: 31ed9d170034677c647f4767bb56e9a4ab32256ee8e1f60b77b1f70eaf334cb1 */
#if BIND_uiNewDateTimePicker_FUNCTION
#define uiNewDateTimePicker_REQUIRED_ARGC 0
#define uiNewDateTimePicker_OPTIONAL_ARGC 0
/* uiDateTimePicker * uiNewDateTimePicker() */
mrb_value
mrb_UI_uiNewDateTimePicker(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewDateTimePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDateTimePicker(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewEditableCombobox */
/* sha: 7e3b33ea90e8144884ed3968efec1523daba32bc29015a0649d7e2b925a9816e */
#if BIND_uiNewEditableCombobox_FUNCTION
#define uiNewEditableCombobox_REQUIRED_ARGC 0
#define uiNewEditableCombobox_OPTIONAL_ARGC 0
/* uiEditableCombobox * uiNewEditableCombobox() */
mrb_value
mrb_UI_uiNewEditableCombobox(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiEditableCombobox * native_return_value = uiNewEditableCombobox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiEditableCombobox(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewEntry */
/* sha: 956c67bc067b56e584e48be5b798517acd67686f3f766ea3c1500aeb8cd69549 */
#if BIND_uiNewEntry_FUNCTION
#define uiNewEntry_REQUIRED_ARGC 0
#define uiNewEntry_OPTIONAL_ARGC 0
/* uiEntry * uiNewEntry() */
mrb_value
mrb_UI_uiNewEntry(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiEntry * native_return_value = uiNewEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiEntry(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewFontButton */
/* sha: 8bf9d3b72aee5fa70d3fb0512d42cb9f450c4b2747bdd967ec2ee8609e8ad66c */
#if BIND_uiNewFontButton_FUNCTION
#define uiNewFontButton_REQUIRED_ARGC 0
#define uiNewFontButton_OPTIONAL_ARGC 0
/* uiFontButton * uiNewFontButton() */
mrb_value
mrb_UI_uiNewFontButton(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiFontButton * native_return_value = uiNewFontButton();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiFontButton(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewForm */
/* sha: 71c03820ba0435f6962beb1a5128778d462af6180c659f0e76cb2d587a02f5da */
#if BIND_uiNewForm_FUNCTION
#define uiNewForm_REQUIRED_ARGC 0
#define uiNewForm_OPTIONAL_ARGC 0
/* uiForm * uiNewForm() */
mrb_value
mrb_UI_uiNewForm(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiForm * native_return_value = uiNewForm();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiForm(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewGrid */
/* sha: 29a46de9f26fe849c3e373aea0dbdeef08d0a39198fb464b56f6e292e44ed795 */
#if BIND_uiNewGrid_FUNCTION
#define uiNewGrid_REQUIRED_ARGC 0
#define uiNewGrid_OPTIONAL_ARGC 0
/* uiGrid * uiNewGrid() */
mrb_value
mrb_UI_uiNewGrid(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiGrid * native_return_value = uiNewGrid();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiGrid(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewGroup */
/* sha: 9f6dbb883cf9e8a61165d82be8811c5ef728daa973b42e8a90537544eb38bda9 */
#if BIND_uiNewGroup_FUNCTION
#define uiNewGroup_REQUIRED_ARGC 1
#define uiNewGroup_OPTIONAL_ARGC 0
/* uiGroup * uiNewGroup(const char * title) */
mrb_value
mrb_UI_uiNewGroup(mrb_state* mrb, mrb_value self) {
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_title);

  /* Invocation */
  uiGroup * native_return_value = uiNewGroup(native_title);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiGroup(mrb, native_return_value));

  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewHorizontalBox */
/* sha: 25ec689db6a872de7df4f1b2f3410a096ad57e87971b09e14468e9cf96b6c6bf */
#if BIND_uiNewHorizontalBox_FUNCTION
#define uiNewHorizontalBox_REQUIRED_ARGC 0
#define uiNewHorizontalBox_OPTIONAL_ARGC 0
/* uiBox * uiNewHorizontalBox() */
mrb_value
mrb_UI_uiNewHorizontalBox(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiBox * native_return_value = uiNewHorizontalBox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiBox(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewHorizontalSeparator */
/* sha: ee9f1f6bba1c2c15b5461d81a0529104e8c66fb17aad7f88697fc21687adbd67 */
#if BIND_uiNewHorizontalSeparator_FUNCTION
#define uiNewHorizontalSeparator_REQUIRED_ARGC 0
#define uiNewHorizontalSeparator_OPTIONAL_ARGC 0
/* uiSeparator * uiNewHorizontalSeparator() */
mrb_value
mrb_UI_uiNewHorizontalSeparator(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiSeparator * native_return_value = uiNewHorizontalSeparator();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiSeparator(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewLabel */
/* sha: bce25d38fea1edcb547c06955cb16d3b193c5df8bc801e20a20b13f280eb0621 */
#if BIND_uiNewLabel_FUNCTION
#define uiNewLabel_REQUIRED_ARGC 1
#define uiNewLabel_OPTIONAL_ARGC 0
/* uiLabel * uiNewLabel(const char * text) */
mrb_value
mrb_UI_uiNewLabel(mrb_state* mrb, mrb_value self) {
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiLabel * native_return_value = uiNewLabel(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiLabel(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewMenu */
/* sha: 99e81edfef45b74fa6a8a6daa83b4e711ea97d9c870b3e6efff3e5beb5b3338b */
#if BIND_uiNewMenu_FUNCTION
#define uiNewMenu_REQUIRED_ARGC 1
#define uiNewMenu_OPTIONAL_ARGC 0
/* uiMenu * uiNewMenu(const char * name) */
mrb_value
mrb_UI_uiNewMenu(mrb_state* mrb, mrb_value self) {
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_name);

  /* Invocation */
  uiMenu * native_return_value = uiNewMenu(native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMenu(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewMultilineEntry */
/* sha: de9839364b0dc2d811ebac3ed3a48162d94558c61edd1d07d41c30bc4b7839cd */
#if BIND_uiNewMultilineEntry_FUNCTION
#define uiNewMultilineEntry_REQUIRED_ARGC 0
#define uiNewMultilineEntry_OPTIONAL_ARGC 0
/* uiMultilineEntry * uiNewMultilineEntry() */
mrb_value
mrb_UI_uiNewMultilineEntry(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiMultilineEntry * native_return_value = uiNewMultilineEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMultilineEntry(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewNonWrappingMultilineEntry */
/* sha: f2a68ac1f7af6d20602f8711710584ed81dafad5399f48c29b54fdbf31ed065d */
#if BIND_uiNewNonWrappingMultilineEntry_FUNCTION
#define uiNewNonWrappingMultilineEntry_REQUIRED_ARGC 0
#define uiNewNonWrappingMultilineEntry_OPTIONAL_ARGC 0
/* uiMultilineEntry * uiNewNonWrappingMultilineEntry() */
mrb_value
mrb_UI_uiNewNonWrappingMultilineEntry(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiMultilineEntry * native_return_value = uiNewNonWrappingMultilineEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiMultilineEntry(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewPasswordEntry */
/* sha: f5efe1c45f2d8395a2dce9f2501406407e411af25922b431dc9e4801d26b3124 */
#if BIND_uiNewPasswordEntry_FUNCTION
#define uiNewPasswordEntry_REQUIRED_ARGC 0
#define uiNewPasswordEntry_OPTIONAL_ARGC 0
/* uiEntry * uiNewPasswordEntry() */
mrb_value
mrb_UI_uiNewPasswordEntry(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiEntry * native_return_value = uiNewPasswordEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiEntry(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewProgressBar */
/* sha: 2466db44da6d90ee25894a617cba41a8d5045767c827d8cc4df86564cdc413f0 */
#if BIND_uiNewProgressBar_FUNCTION
#define uiNewProgressBar_REQUIRED_ARGC 0
#define uiNewProgressBar_OPTIONAL_ARGC 0
/* uiProgressBar * uiNewProgressBar() */
mrb_value
mrb_UI_uiNewProgressBar(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiProgressBar * native_return_value = uiNewProgressBar();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiProgressBar(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewRadioButtons */
/* sha: 293aa7310163ca6e9d8028a0acfe9c202670275b6a2a32531ec720d077eb9898 */
#if BIND_uiNewRadioButtons_FUNCTION
#define uiNewRadioButtons_REQUIRED_ARGC 0
#define uiNewRadioButtons_OPTIONAL_ARGC 0
/* uiRadioButtons * uiNewRadioButtons() */
mrb_value
mrb_UI_uiNewRadioButtons(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiRadioButtons * native_return_value = uiNewRadioButtons();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiRadioButtons(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewScrollingArea */
/* sha: e89ee67cfb045da786abe4c107e81279718b6feee057808c98db0381cc61d8bb */
#if BIND_uiNewScrollingArea_FUNCTION
#define uiNewScrollingArea_REQUIRED_ARGC 3
#define uiNewScrollingArea_OPTIONAL_ARGC 0
/* uiArea * uiNewScrollingArea(uiAreaHandler * ah, int width, int height) */
mrb_value
mrb_UI_uiNewScrollingArea(mrb_state* mrb, mrb_value self) {
  mrb_value ah;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &ah, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ah, AreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox param: ah */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewScrollingArea(native_ah, native_width, native_height);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiArea(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewSearchEntry */
/* sha: ce23ab3826419a8c47f8d00cf6b1e55350602c9143d17a8b54b6d1ad021ce2c6 */
#if BIND_uiNewSearchEntry_FUNCTION
#define uiNewSearchEntry_REQUIRED_ARGC 0
#define uiNewSearchEntry_OPTIONAL_ARGC 0
/* uiEntry * uiNewSearchEntry() */
mrb_value
mrb_UI_uiNewSearchEntry(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiEntry * native_return_value = uiNewSearchEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiEntry(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewSlider */
/* sha: c76bbd71958e69cf8dd04a142c635835dbb1c8c8bd772d170d99b26015e39ecf */
#if BIND_uiNewSlider_FUNCTION
#define uiNewSlider_REQUIRED_ARGC 2
#define uiNewSlider_OPTIONAL_ARGC 0
/* uiSlider * uiNewSlider(int min, int max) */
mrb_value
mrb_UI_uiNewSlider(mrb_state* mrb, mrb_value self) {
  mrb_int native_min;
  mrb_int native_max;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_min, &native_max);

  /* Invocation */
  uiSlider * native_return_value = uiNewSlider(native_min, native_max);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiSlider(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewSpinbox */
/* sha: ac3a0a030fab41724b4837f211fd803b63f65f86188bdf8d1a51f8ae2df9a75b */
#if BIND_uiNewSpinbox_FUNCTION
#define uiNewSpinbox_REQUIRED_ARGC 2
#define uiNewSpinbox_OPTIONAL_ARGC 0
/* uiSpinbox * uiNewSpinbox(int min, int max) */
mrb_value
mrb_UI_uiNewSpinbox(mrb_state* mrb, mrb_value self) {
  mrb_int native_min;
  mrb_int native_max;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_min, &native_max);

  /* Invocation */
  uiSpinbox * native_return_value = uiNewSpinbox(native_min, native_max);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiSpinbox(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewTab */
/* sha: 9440f8d53d29839eeb8df6602f8d65130749298d7d398892da2c39444331359d */
#if BIND_uiNewTab_FUNCTION
#define uiNewTab_REQUIRED_ARGC 0
#define uiNewTab_OPTIONAL_ARGC 0
/* uiTab * uiNewTab() */
mrb_value
mrb_UI_uiNewTab(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiTab * native_return_value = uiNewTab();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiTab(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewTimePicker */
/* sha: d4c9dd58e69a3bf58fdfa5357db02f964107ecd37091757f997767aedb4913b4 */
#if BIND_uiNewTimePicker_FUNCTION
#define uiNewTimePicker_REQUIRED_ARGC 0
#define uiNewTimePicker_OPTIONAL_ARGC 0
/* uiDateTimePicker * uiNewTimePicker() */
mrb_value
mrb_UI_uiNewTimePicker(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewTimePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiDateTimePicker(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewVerticalBox */
/* sha: 20bc072a08b865905460a406a584ef4e7eeffc52d0f27662daca342b88e36935 */
#if BIND_uiNewVerticalBox_FUNCTION
#define uiNewVerticalBox_REQUIRED_ARGC 0
#define uiNewVerticalBox_OPTIONAL_ARGC 0
/* uiBox * uiNewVerticalBox() */
mrb_value
mrb_UI_uiNewVerticalBox(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiBox * native_return_value = uiNewVerticalBox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiBox(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewVerticalSeparator */
/* sha: afec84afdb46477d658132b3c219610f1b5fa730082a69e685853731f8c9db53 */
#if BIND_uiNewVerticalSeparator_FUNCTION
#define uiNewVerticalSeparator_REQUIRED_ARGC 0
#define uiNewVerticalSeparator_OPTIONAL_ARGC 0
/* uiSeparator * uiNewVerticalSeparator() */
mrb_value
mrb_UI_uiNewVerticalSeparator(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiSeparator * native_return_value = uiNewVerticalSeparator();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiSeparator(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewWindow */
/* sha: 9340f74f3056cf9d3b3ba72f7e010af875af663caef193f7a594804f9026c902 */
#if BIND_uiNewWindow_FUNCTION
#define uiNewWindow_REQUIRED_ARGC 4
#define uiNewWindow_OPTIONAL_ARGC 0
/* uiWindow * uiNewWindow(const char * title, int width, int height, int hasMenubar) */
mrb_value
mrb_UI_uiNewWindow(mrb_state* mrb, mrb_value self) {
  char * native_title = NULL;
  mrb_int native_width;
  mrb_int native_height;
  mrb_int native_hasMenubar;

  /* Fetch the args */
  mrb_get_args(mrb, "ziii", &native_title, &native_width, &native_height, &native_hasMenubar);

  /* Invocation */
  uiWindow * native_return_value = uiNewWindow(native_title, native_width, native_height, native_hasMenubar);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiWindow(mrb, native_return_value));
  
  mrb_ui_control_lookup_set(mrb, uiControl(native_return_value), return_value);

  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiOnShouldQuit */
/* sha: 9607770336db49f80f7f12bbddc8f029313c0e30644b89fc1a96057d5a0e242e */
#if BIND_uiOnShouldQuit_FUNCTION
#define uiOnShouldQuit_REQUIRED_ARGC 0
#define uiOnShouldQuit_OPTIONAL_ARGC 0
/* void uiOnShouldQuit(int (*)(void *) f, void * data) */
mrb_value
mrb_UI_uiOnShouldQuit(mrb_state* mrb, mrb_value self) {
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "&", &f);

  /* Invocation */
  uiOnShouldQuit(native_f, native_data);

  // TODO...

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiOpenFile */
/* sha: 4d03b7872de1b041011a3fd5d8783e892d2600d93d7b1c771ea9281cf23489b9 */
#if BIND_uiOpenFile_FUNCTION
#define uiOpenFile_REQUIRED_ARGC 1
#define uiOpenFile_OPTIONAL_ARGC 0
/* char * uiOpenFile(uiWindow * parent) */
mrb_value
mrb_UI_uiOpenFile(mrb_state* mrb, mrb_value self) {
  mrb_value parent;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &parent);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: parent */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox_uiWindow(parent));

  /* Invocation */
  char * native_return_value = uiOpenFile(native_parent);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiProgressBarSetValue */
/* sha: 0c0146bcf7a0a5de9d207a708df58ab10fb1fe9bf745f1e77b27b5ae3e4da048 */
#if BIND_uiProgressBarSetValue_FUNCTION
#define uiProgressBarSetValue_REQUIRED_ARGC 2
#define uiProgressBarSetValue_OPTIONAL_ARGC 0
/* void uiProgressBarSetValue(uiProgressBar * p, int n) */
mrb_value
mrb_UI_uiProgressBarSetValue(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &p, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, ProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ProgressBar expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiProgressBar * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiProgressBar(p));

  /* Invocation */
  uiProgressBarSetValue(native_p, native_n);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiProgressBarValue */
/* sha: c329d92d02b6ccee6157ec97e89fa293c248566ea330e440b5070f09ca02e2fd */
#if BIND_uiProgressBarValue_FUNCTION
#define uiProgressBarValue_REQUIRED_ARGC 1
#define uiProgressBarValue_OPTIONAL_ARGC 0
/* int uiProgressBarValue(uiProgressBar * p) */
mrb_value
mrb_UI_uiProgressBarValue(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, ProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ProgressBar expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  uiProgressBar * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_uiProgressBar(p));

  /* Invocation */
  int native_return_value = uiProgressBarValue(native_p);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiQueueMain */
/* sha: 4adf894236e24a74a56ba662873ef7a298d25d446ce7e63c6ebd92b5e693a7e7 */
#if BIND_uiQueueMain_FUNCTION
#define uiQueueMain_REQUIRED_ARGC 2
#define uiQueueMain_OPTIONAL_ARGC 0
/* void uiQueueMain(void (*)(void *) f, void * data) */
mrb_value
mrb_UI_uiQueueMain(mrb_state* mrb, mrb_value self) {
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &f, &data);

  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: f */
  void (*native_f)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiQueueMain(native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiQuit */
/* sha: 3d4e8b1012f9d9071484a424edce60692f37f6d1771ae3e61c2fdea59fa2faf6 */
#if BIND_uiQuit_FUNCTION
#define uiQuit_REQUIRED_ARGC 0
#define uiQuit_OPTIONAL_ARGC 0
/* void uiQuit() */
mrb_value
mrb_UI_uiQuit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiQuit();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiRadioButtonsAppend */
/* sha: bac8535f6f0f281d2d9fb67db5c1adbba3c890b192c84e5b0a25fe5adad04492 */
#if BIND_uiRadioButtonsAppend_FUNCTION
#define uiRadioButtonsAppend_REQUIRED_ARGC 2
#define uiRadioButtonsAppend_OPTIONAL_ARGC 0
/* void uiRadioButtonsAppend(uiRadioButtons * r, const char * text) */
mrb_value
mrb_UI_uiRadioButtonsAppend(mrb_state* mrb, mrb_value self) {
  mrb_value r;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &r, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_uiRadioButtons(r));

  /* Invocation */
  uiRadioButtonsAppend(native_r, native_text);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiRadioButtonsOnSelected */
/* sha: 9b4beb8f8f0238a309b9a590ef4e5c6eb6eada4a7f791713afb0808e27743138 */
#if BIND_uiRadioButtonsOnSelected_FUNCTION
#define uiRadioButtonsOnSelected_REQUIRED_ARGC 1
#define uiRadioButtonsOnSelected_OPTIONAL_ARGC 0
/* void uiRadioButtonsOnSelected(uiRadioButtons * r, void (*)(uiRadioButtons *, void *) f, void * data) */
mrb_value
mrb_UI_uiRadioButtonsOnSelected(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_selected";
  mrb_value r;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &r, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_uiRadioButtons(r));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, r, event_name, f);
  uiRadioButtonsOnSelected(native_r, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiRadioButtonsSelected */
/* sha: 19a9fa273c5d4d1988e38b9ef9055e979182a707819a9c03c41544d9cc3cbf81 */
#if BIND_uiRadioButtonsSelected_FUNCTION
#define uiRadioButtonsSelected_REQUIRED_ARGC 1
#define uiRadioButtonsSelected_OPTIONAL_ARGC 0
/* int uiRadioButtonsSelected(uiRadioButtons * r) */
mrb_value
mrb_UI_uiRadioButtonsSelected(mrb_state* mrb, mrb_value self) {
  mrb_value r;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &r);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_uiRadioButtons(r));

  /* Invocation */
  int native_return_value = uiRadioButtonsSelected(native_r);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiRadioButtonsSetSelected */
/* sha: 92af1af79460863708c858253a6cdf79fad74892f970ebfcc80153a3beffa6cd */
#if BIND_uiRadioButtonsSetSelected_FUNCTION
#define uiRadioButtonsSetSelected_REQUIRED_ARGC 2
#define uiRadioButtonsSetSelected_OPTIONAL_ARGC 0
/* void uiRadioButtonsSetSelected(uiRadioButtons * r, int n) */
mrb_value
mrb_UI_uiRadioButtonsSetSelected(mrb_state* mrb, mrb_value self) {
  mrb_value r;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &r, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_uiRadioButtons(r));

  /* Invocation */
  uiRadioButtonsSetSelected(native_r, native_n);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSaveFile */
/* sha: b0fe12cde19694862c92cb0f61fa5c5e58bdfc3bdf3372376caadcc903c91013 */
#if BIND_uiSaveFile_FUNCTION
#define uiSaveFile_REQUIRED_ARGC 1
#define uiSaveFile_OPTIONAL_ARGC 0
/* char * uiSaveFile(uiWindow * parent) */
mrb_value
mrb_UI_uiSaveFile(mrb_state* mrb, mrb_value self) {
  mrb_value parent;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &parent);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: parent */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox_uiWindow(parent));

  /* Invocation */
  char * native_return_value = uiSaveFile(native_parent);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSliderOnChanged */
/* sha: 90c4f779831aeaf385586100445c73fee214228e16156944707f95fddcaceeb6 */
#if BIND_uiSliderOnChanged_FUNCTION
#define uiSliderOnChanged_REQUIRED_ARGC 1
#define uiSliderOnChanged_OPTIONAL_ARGC 0
/* void uiSliderOnChanged(uiSlider * s, void (*)(uiSlider *, void *) f, void * data) */
mrb_value
mrb_UI_uiSliderOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value s;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &s, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSlider(s));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, s, event_name, f);
  uiSliderOnChanged(native_s, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSliderSetValue */
/* sha: 25a9243f210b927a088ef353a69f4e0dbd0c78e67e004e13dae1fa8a680a8136 */
#if BIND_uiSliderSetValue_FUNCTION
#define uiSliderSetValue_REQUIRED_ARGC 2
#define uiSliderSetValue_OPTIONAL_ARGC 0
/* void uiSliderSetValue(uiSlider * s, int value) */
mrb_value
mrb_UI_uiSliderSetValue(mrb_state* mrb, mrb_value self) {
  mrb_value s;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &s, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSlider(s));

  /* Invocation */
  uiSliderSetValue(native_s, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSliderValue */
/* sha: 43ce56de4e9335fe265f5fec320cc19c18640bec86699a1364ac5b4a156d940d */
#if BIND_uiSliderValue_FUNCTION
#define uiSliderValue_REQUIRED_ARGC 1
#define uiSliderValue_OPTIONAL_ARGC 0
/* int uiSliderValue(uiSlider * s) */
mrb_value
mrb_UI_uiSliderValue(mrb_state* mrb, mrb_value self) {
  mrb_value s;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &s);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSlider(s));

  /* Invocation */
  int native_return_value = uiSliderValue(native_s);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSpinboxOnChanged */
/* sha: fc005a75803fd3942a9be463558b5bfc7fa82eca7f2f5e60be802970fd1af61e */
#if BIND_uiSpinboxOnChanged_FUNCTION
#define uiSpinboxOnChanged_REQUIRED_ARGC 1
#define uiSpinboxOnChanged_OPTIONAL_ARGC 0
/* void uiSpinboxOnChanged(uiSpinbox * s, void (*)(uiSpinbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiSpinboxOnChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_changed";
  mrb_value s;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &s, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSpinbox(s));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, s, event_name, f);
  uiSpinboxOnChanged(native_s, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSpinboxSetValue */
/* sha: 4caa4132fbd0848f7a7a03bb2bfa3818830cdebc7742c4e584a47f549d531c8c */
#if BIND_uiSpinboxSetValue_FUNCTION
#define uiSpinboxSetValue_REQUIRED_ARGC 2
#define uiSpinboxSetValue_OPTIONAL_ARGC 0
/* void uiSpinboxSetValue(uiSpinbox * s, int value) */
mrb_value
mrb_UI_uiSpinboxSetValue(mrb_state* mrb, mrb_value self) {
  mrb_value s;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &s, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSpinbox(s));

  /* Invocation */
  uiSpinboxSetValue(native_s, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSpinboxValue */
/* sha: ef58a1e2150fc6fd14ebddb9b09ba7705fae82a76112fede3c1557ad3cd3c7b1 */
#if BIND_uiSpinboxValue_FUNCTION
#define uiSpinboxValue_REQUIRED_ARGC 1
#define uiSpinboxValue_OPTIONAL_ARGC 0
/* int uiSpinboxValue(uiSpinbox * s) */
mrb_value
mrb_UI_uiSpinboxValue(mrb_state* mrb, mrb_value self) {
  mrb_value s;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &s);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: s */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSpinbox(s));

  /* Invocation */
  int native_return_value = uiSpinboxValue(native_s);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabAppend */
/* sha: a188706e7c0bc0a1f5886ae2857b5d368c40fdea8b88586445075c3a4c15fcae */
#if BIND_uiTabAppend_FUNCTION
#define uiTabAppend_REQUIRED_ARGC 3
#define uiTabAppend_OPTIONAL_ARGC 0
/* void uiTabAppend(uiTab * t, const char * name, uiControl * c) */
mrb_value
mrb_UI_uiTabAppend(mrb_state* mrb, mrb_value self) {
  mrb_value t;
  char * native_name = NULL;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &t, &native_name, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Invocation */
  uiTabAppend(native_t, native_name, native_c);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabDelete */
/* sha: 4d7179bbcc5dd5e70b4e5cc11743f29b761b689aca23bd0490cda4434e7ca86a */
#if BIND_uiTabDelete_FUNCTION
#define uiTabDelete_REQUIRED_ARGC 2
#define uiTabDelete_OPTIONAL_ARGC 0
/* void uiTabDelete(uiTab * t, int index) */
mrb_value
mrb_UI_uiTabDelete(mrb_state* mrb, mrb_value self) {
  mrb_value t;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &t, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Invocation */
  uiTabDelete(native_t, native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabInsertAt */
/* sha: 1c95980241f605ce42f08c6168a941cd76a2add43c9f14116add06ea6ba24c1e */
#if BIND_uiTabInsertAt_FUNCTION
#define uiTabInsertAt_REQUIRED_ARGC 4
#define uiTabInsertAt_OPTIONAL_ARGC 0
/* void uiTabInsertAt(uiTab * t, const char * name, int before, uiControl * c) */
mrb_value
mrb_UI_uiTabInsertAt(mrb_state* mrb, mrb_value self) {
  mrb_value t;
  char * native_name = NULL;
  mrb_int native_before;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "ozio", &t, &native_name, &native_before, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Unbox param: c */
  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiControl(c));

  /* Invocation */
  uiTabInsertAt(native_t, native_name, native_before, native_c);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabMargined */
/* sha: 0b6c009b7f9f615803bc4c478b4c236f7d3ae03aab3340cb90eff7b146706344 */
#if BIND_uiTabMargined_FUNCTION
#define uiTabMargined_REQUIRED_ARGC 2
#define uiTabMargined_OPTIONAL_ARGC 0
/* int uiTabMargined(uiTab * t, int page) */
mrb_value
mrb_UI_uiTabMargined(mrb_state* mrb, mrb_value self) {
  mrb_value t;
  mrb_int native_page;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &t, &native_page);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Invocation */
  int native_return_value = uiTabMargined(native_t, native_page);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabNumPages */
/* sha: 52d65d560b6846d63dfe5576d32a667b94ab5f0581db347e4d23d0c72cef3b9b */
#if BIND_uiTabNumPages_FUNCTION
#define uiTabNumPages_REQUIRED_ARGC 1
#define uiTabNumPages_OPTIONAL_ARGC 0
/* int uiTabNumPages(uiTab * t) */
mrb_value
mrb_UI_uiTabNumPages(mrb_state* mrb, mrb_value self) {
  mrb_value t;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &t);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Invocation */
  int native_return_value = uiTabNumPages(native_t);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiTabSetMargined */
/* sha: efde775ddf07b462cee1cd17193a7dcdb5f848c3e469dd950b3433afd0d8b6a2 */
#if BIND_uiTabSetMargined_FUNCTION
#define uiTabSetMargined_REQUIRED_ARGC 3
#define uiTabSetMargined_OPTIONAL_ARGC 0
/* void uiTabSetMargined(uiTab * t, int page, int margined) */
mrb_value
mrb_UI_uiTabSetMargined(mrb_state* mrb, mrb_value self) {
  mrb_value t;
  mrb_int native_page;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &t, &native_page, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox param: t */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_unbox_uiTab(t));

  /* Invocation */
  uiTabSetMargined(native_t, native_page, native_margined);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiUninit */
/* sha: 94d7456da0785aa5e0784f740d29682cc2c93fc2b5fca3f22106b781ae7720a1 */
#if BIND_uiUninit_FUNCTION
#define uiUninit_REQUIRED_ARGC 0
#define uiUninit_OPTIONAL_ARGC 0
/* void uiUninit() */
mrb_value
mrb_UI_uiUninit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uiUninit();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiUserBugCannotSetParentOnToplevel */
/* sha: 4bd9b23f0032eacfa65a911a0d9ed678eb2c01b0f2c6d35d517c970413eca686 */
#if BIND_uiUserBugCannotSetParentOnToplevel_FUNCTION
#define uiUserBugCannotSetParentOnToplevel_REQUIRED_ARGC 1
#define uiUserBugCannotSetParentOnToplevel_OPTIONAL_ARGC 0
/* void uiUserBugCannotSetParentOnToplevel(const char * type) */
mrb_value
mrb_UI_uiUserBugCannotSetParentOnToplevel(mrb_state* mrb, mrb_value self) {
  char * native_type = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_type);

  /* Invocation */
  uiUserBugCannotSetParentOnToplevel(native_type);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowBorderless */
/* sha: 62ae32fef0e10e0e8fbec354f35623b878d01a6e3b35bdde0ed55a4672113f6f */
#if BIND_uiWindowBorderless_FUNCTION
#define uiWindowBorderless_REQUIRED_ARGC 1
#define uiWindowBorderless_OPTIONAL_ARGC 0
/* int uiWindowBorderless(uiWindow * w) */
mrb_value
mrb_UI_uiWindowBorderless(mrb_state* mrb, mrb_value self) {
  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowBorderless(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowContentSize */
/* sha: 551ad1d50f32a0fd08c1b153c20a16b648df6a9019719406b6bbc4bd42cd12fe */
#if BIND_uiWindowContentSize_FUNCTION
#define uiWindowContentSize_REQUIRED_ARGC 3
#define uiWindowContentSize_OPTIONAL_ARGC 0
/* void uiWindowContentSize(uiWindow * w, int * width, int * height) */
mrb_value
mrb_UI_uiWindowContentSize(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_value width;
  mrb_value height;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &w, &width, &height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(width);
  TODO_type_check_int_PTR(height);

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Unbox param: width */
  int * native_width = TODO_mruby_unbox_int_PTR(width);

  /* Unbox param: height */
  int * native_height = TODO_mruby_unbox_int_PTR(height);

  /* Invocation */
  uiWindowContentSize(native_w, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowFullscreen */
/* sha: d460ba55ec8343b2a3cc9fbddd3346811d8d6a9d9abc763f8e9a83caea3b0e80 */
#if BIND_uiWindowFullscreen_FUNCTION
#define uiWindowFullscreen_REQUIRED_ARGC 1
#define uiWindowFullscreen_OPTIONAL_ARGC 0
/* int uiWindowFullscreen(uiWindow * w) */
mrb_value
mrb_UI_uiWindowFullscreen(mrb_state* mrb, mrb_value self) {
  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowFullscreen(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowMargined */
/* sha: fcc142278604478f416c3fe25f8777dd572a90726b5c4e7cff5df8025e6f1781 */
#if BIND_uiWindowMargined_FUNCTION
#define uiWindowMargined_REQUIRED_ARGC 1
#define uiWindowMargined_OPTIONAL_ARGC 0
/* int uiWindowMargined(uiWindow * w) */
mrb_value
mrb_UI_uiWindowMargined(mrb_state* mrb, mrb_value self) {
  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowMargined(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowOnClosing */
/* sha: 085447abd748d73e245df45cc50e93ad74c7187f8e9fc40b23922a74c085df58 */
#if BIND_uiWindowOnClosing_FUNCTION
#define uiWindowOnClosing_REQUIRED_ARGC 1
#define uiWindowOnClosing_OPTIONAL_ARGC 0
/* void uiWindowOnClosing(uiWindow * w, int (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnClosing(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_closing";
  mrb_value w;
  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &w, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, w, event_name, f); 
  uiWindowOnClosing(native_w, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowOnContentSizeChanged */
/* sha: 880ea6079aa870b0d4aaa2e365bc4f6c046cd197d3fbaf1391549eab5fc0bf8b */
#if BIND_uiWindowOnContentSizeChanged_FUNCTION
#define uiWindowOnContentSizeChanged_REQUIRED_ARGC 1
#define uiWindowOnContentSizeChanged_OPTIONAL_ARGC 0
/* void uiWindowOnContentSizeChanged(uiWindow * w, void (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnContentSizeChanged(mrb_state* mrb, mrb_value self) {
  static const char* event_name = "on_content_size_changed";
  mrb_value w;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &w, &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  mrb_ui_thunk_prep(mrb, w, event_name, f);
  uiWindowOnContentSizeChanged(native_w, (void*)mrb_ui_thunk, (char*)event_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetBorderless */
/* sha: cd3ac34f9cc2b1646a22493e53217cf4d3ccc29f44834ef35e8f051353a24eac */
#if BIND_uiWindowSetBorderless_FUNCTION
#define uiWindowSetBorderless_REQUIRED_ARGC 2
#define uiWindowSetBorderless_OPTIONAL_ARGC 0
/* void uiWindowSetBorderless(uiWindow * w, int borderless) */
mrb_value
mrb_UI_uiWindowSetBorderless(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_int native_borderless;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_borderless);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetBorderless(native_w, native_borderless);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetChild */
/* sha: f7f1d8d3a84e680925c71d10a5398f0b84bb3bee42b22f98df18580d38a14748 */
#if BIND_uiWindowSetChild_FUNCTION
#define uiWindowSetChild_REQUIRED_ARGC 2
#define uiWindowSetChild_OPTIONAL_ARGC 0
/* void uiWindowSetChild(uiWindow * w, uiControl * child) */
mrb_value
mrb_UI_uiWindowSetChild(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_value child;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &w, &child);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Unbox param: child */
  uiControl * native_child = (mrb_nil_p(child) ? NULL : mruby_unbox_uiControl(child));

  /* Invocation */
  uiWindowSetChild(native_w, native_child);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetContentSize */
/* sha: da6d1957410021818d964ec5b69d28ef1433001c620c302d68d6db3db6ad968c */
#if BIND_uiWindowSetContentSize_FUNCTION
#define uiWindowSetContentSize_REQUIRED_ARGC 3
#define uiWindowSetContentSize_OPTIONAL_ARGC 0
/* void uiWindowSetContentSize(uiWindow * w, int width, int height) */
mrb_value
mrb_UI_uiWindowSetContentSize(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &w, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetContentSize(native_w, native_width, native_height);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetFullscreen */
/* sha: dfd2a2ba9040e35b8ea2e41f63c29210284b4ad5ec5f003208aa84606f642e3a */
#if BIND_uiWindowSetFullscreen_FUNCTION
#define uiWindowSetFullscreen_REQUIRED_ARGC 2
#define uiWindowSetFullscreen_OPTIONAL_ARGC 0
/* void uiWindowSetFullscreen(uiWindow * w, int fullscreen) */
mrb_value
mrb_UI_uiWindowSetFullscreen(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_int native_fullscreen;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_fullscreen);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetFullscreen(native_w, native_fullscreen);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetMargined */
/* sha: fcce81f0ed387a7cc390304a41499a501c0d78e4adcf89b003d390ae6be842fe */
#if BIND_uiWindowSetMargined_FUNCTION
#define uiWindowSetMargined_REQUIRED_ARGC 2
#define uiWindowSetMargined_OPTIONAL_ARGC 0
/* void uiWindowSetMargined(uiWindow * w, int margined) */
mrb_value
mrb_UI_uiWindowSetMargined(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetMargined(native_w, native_margined);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetTitle */
/* sha: f3cad2c1e0f830fed047d022129e9d467de482b58dd2cd3b348695a95b96531d */
#if BIND_uiWindowSetTitle_FUNCTION
#define uiWindowSetTitle_REQUIRED_ARGC 2
#define uiWindowSetTitle_OPTIONAL_ARGC 0
/* void uiWindowSetTitle(uiWindow * w, const char * title) */
mrb_value
mrb_UI_uiWindowSetTitle(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &w, &native_title);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetTitle(native_w, native_title);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowTitle */
/* sha: 74bad14eec0e557f79f2717de2a6f17b08efb2727398862129b6c24b0438206a */
#if BIND_uiWindowTitle_FUNCTION
#define uiWindowTitle_REQUIRED_ARGC 1
#define uiWindowTitle_OPTIONAL_ARGC 0
/* char * uiWindowTitle(uiWindow * w) */
mrb_value
mrb_UI_uiWindowTitle(mrb_state* mrb, mrb_value self) {
  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Invocation */
  char * native_return_value = uiWindowTitle(native_w);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_mruby_ui_gem_init(mrb_state* mrb) {
/* MRUBY_BINDING: pre_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
  
  struct RClass* UI_module = mrb_define_module(mrb, "UI");
  mruby_UI_define_macro_constants(mrb);
  mruby_UI_define_enum_constants(mrb);

/* MRUBY_BINDING: pre_class_initializations */
/* sha: user_defined */
  // Do this early so we can subclass it later.
  // (The *_init function are idempotent by default)
  mrb_UI_Control_init(mrb);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 93b0c38ef0bab6b6fda418f614fad950ef3c3455d3d94a3d805ab20f3a4e427d */
#if BIND_Area_TYPE
  mrb_UI_Area_init(mrb);
#endif
#if BIND_AreaDrawParams_TYPE
  mrb_UI_AreaDrawParams_init(mrb);
#endif
#if BIND_AreaHandler_TYPE
  mrb_UI_AreaHandler_init(mrb);
#endif
#if BIND_AreaKeyEvent_TYPE
  mrb_UI_AreaKeyEvent_init(mrb);
#endif
#if BIND_AreaMouseEvent_TYPE
  mrb_UI_AreaMouseEvent_init(mrb);
#endif
#if BIND_Box_TYPE
  mrb_UI_Box_init(mrb);
#endif
#if BIND_Button_TYPE
  mrb_UI_Button_init(mrb);
#endif
#if BIND_Checkbox_TYPE
  mrb_UI_Checkbox_init(mrb);
#endif
#if BIND_ColorButton_TYPE
  mrb_UI_ColorButton_init(mrb);
#endif
#if BIND_Combobox_TYPE
  mrb_UI_Combobox_init(mrb);
#endif
#if BIND_Control_TYPE
  mrb_UI_Control_init(mrb);
#endif
#if BIND_DateTimePicker_TYPE
  mrb_UI_DateTimePicker_init(mrb);
#endif
#if BIND_DrawBrush_TYPE
  mrb_UI_DrawBrush_init(mrb);
#endif
#if BIND_DrawBrushGradientStop_TYPE
  mrb_UI_DrawBrushGradientStop_init(mrb);
#endif
#if BIND_DrawContext_TYPE
  mrb_UI_DrawContext_init(mrb);
#endif
#if BIND_DrawFontFamilies_TYPE
  mrb_UI_DrawFontFamilies_init(mrb);
#endif
#if BIND_DrawMatrix_TYPE
  mrb_UI_DrawMatrix_init(mrb);
#endif
#if BIND_DrawPath_TYPE
  mrb_UI_DrawPath_init(mrb);
#endif
#if BIND_DrawStrokeParams_TYPE
  mrb_UI_DrawStrokeParams_init(mrb);
#endif
#if BIND_DrawTextFont_TYPE
  mrb_UI_DrawTextFont_init(mrb);
#endif
#if BIND_DrawTextFontDescriptor_TYPE
  mrb_UI_DrawTextFontDescriptor_init(mrb);
#endif
#if BIND_DrawTextFontMetrics_TYPE
  mrb_UI_DrawTextFontMetrics_init(mrb);
#endif
#if BIND_DrawTextLayout_TYPE
  mrb_UI_DrawTextLayout_init(mrb);
#endif
#if BIND_EditableCombobox_TYPE
  mrb_UI_EditableCombobox_init(mrb);
#endif
#if BIND_Entry_TYPE
  mrb_UI_Entry_init(mrb);
#endif
#if BIND_FontButton_TYPE
  mrb_UI_FontButton_init(mrb);
#endif
#if BIND_Form_TYPE
  mrb_UI_Form_init(mrb);
#endif
#if BIND_Grid_TYPE
  mrb_UI_Grid_init(mrb);
#endif
#if BIND_Group_TYPE
  mrb_UI_Group_init(mrb);
#endif
#if BIND_InitOptions_TYPE
  mrb_UI_InitOptions_init(mrb);
#endif
#if BIND_Label_TYPE
  mrb_UI_Label_init(mrb);
#endif
#if BIND_Menu_TYPE
  mrb_UI_Menu_init(mrb);
#endif
#if BIND_MenuItem_TYPE
  mrb_UI_MenuItem_init(mrb);
#endif
#if BIND_MultilineEntry_TYPE
  mrb_UI_MultilineEntry_init(mrb);
#endif
#if BIND_ProgressBar_TYPE
  mrb_UI_ProgressBar_init(mrb);
#endif
#if BIND_RadioButtons_TYPE
  mrb_UI_RadioButtons_init(mrb);
#endif
#if BIND_Separator_TYPE
  mrb_UI_Separator_init(mrb);
#endif
#if BIND_Slider_TYPE
  mrb_UI_Slider_init(mrb);
#endif
#if BIND_Spinbox_TYPE
  mrb_UI_Spinbox_init(mrb);
#endif
#if BIND_Tab_TYPE
  mrb_UI_Tab_init(mrb);
#endif
#if BIND_Window_TYPE
  mrb_UI_Window_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 71d5b76567af0676ad2a5aeab7189eb12816d400cb7b93734b1ba489615a76f4 */
  /*
   * Global Functions
   */
#if BIND_uiAllocControl_FUNCTION
  mrb_define_class_method(mrb, UI_module, "allocControl", mrb_UI_uiAllocControl, MRB_ARGS_ARG(uiAllocControl_REQUIRED_ARGC, uiAllocControl_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaBeginUserWindowMove_FUNCTION
  mrb_define_class_method(mrb, UI_module, "areaBeginUserWindowMove", mrb_UI_uiAreaBeginUserWindowMove, MRB_ARGS_ARG(uiAreaBeginUserWindowMove_REQUIRED_ARGC, uiAreaBeginUserWindowMove_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaBeginUserWindowResize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "areaBeginUserWindowResize", mrb_UI_uiAreaBeginUserWindowResize, MRB_ARGS_ARG(uiAreaBeginUserWindowResize_REQUIRED_ARGC, uiAreaBeginUserWindowResize_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaQueueRedrawAll_FUNCTION
  mrb_define_class_method(mrb, UI_module, "areaQueueRedrawAll", mrb_UI_uiAreaQueueRedrawAll, MRB_ARGS_ARG(uiAreaQueueRedrawAll_REQUIRED_ARGC, uiAreaQueueRedrawAll_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaScrollTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "areaScrollTo", mrb_UI_uiAreaScrollTo, MRB_ARGS_ARG(uiAreaScrollTo_REQUIRED_ARGC, uiAreaScrollTo_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaSetSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "areaSetSize", mrb_UI_uiAreaSetSize, MRB_ARGS_ARG(uiAreaSetSize_REQUIRED_ARGC, uiAreaSetSize_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "boxAppend", mrb_UI_uiBoxAppend, MRB_ARGS_ARG(uiBoxAppend_REQUIRED_ARGC, uiBoxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "boxDelete", mrb_UI_uiBoxDelete, MRB_ARGS_ARG(uiBoxDelete_REQUIRED_ARGC, uiBoxDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "boxPadded", mrb_UI_uiBoxPadded, MRB_ARGS_ARG(uiBoxPadded_REQUIRED_ARGC, uiBoxPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "boxSetPadded", mrb_UI_uiBoxSetPadded, MRB_ARGS_ARG(uiBoxSetPadded_REQUIRED_ARGC, uiBoxSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonOnClicked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "buttonOnClicked", mrb_UI_uiButtonOnClicked, MRB_ARGS_ARG(uiButtonOnClicked_REQUIRED_ARGC, uiButtonOnClicked_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "buttonSetText", mrb_UI_uiButtonSetText, MRB_ARGS_ARG(uiButtonSetText_REQUIRED_ARGC, uiButtonSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "buttonText", mrb_UI_uiButtonText, MRB_ARGS_ARG(uiButtonText_REQUIRED_ARGC, uiButtonText_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "checkboxChecked", mrb_UI_uiCheckboxChecked, MRB_ARGS_ARG(uiCheckboxChecked_REQUIRED_ARGC, uiCheckboxChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxOnToggled_FUNCTION
  mrb_define_class_method(mrb, UI_module, "checkboxOnToggled", mrb_UI_uiCheckboxOnToggled, MRB_ARGS_ARG(uiCheckboxOnToggled_REQUIRED_ARGC, uiCheckboxOnToggled_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxSetChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "checkboxSetChecked", mrb_UI_uiCheckboxSetChecked, MRB_ARGS_ARG(uiCheckboxSetChecked_REQUIRED_ARGC, uiCheckboxSetChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "checkboxSetText", mrb_UI_uiCheckboxSetText, MRB_ARGS_ARG(uiCheckboxSetText_REQUIRED_ARGC, uiCheckboxSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "checkboxText", mrb_UI_uiCheckboxText, MRB_ARGS_ARG(uiCheckboxText_REQUIRED_ARGC, uiCheckboxText_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "colorButtonColor", mrb_UI_uiColorButtonColor, MRB_ARGS_ARG(uiColorButtonColor_REQUIRED_ARGC, uiColorButtonColor_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "colorButtonOnChanged", mrb_UI_uiColorButtonOnChanged, MRB_ARGS_ARG(uiColorButtonOnChanged_REQUIRED_ARGC, uiColorButtonOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonSetColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "colorButtonSetColor", mrb_UI_uiColorButtonSetColor, MRB_ARGS_ARG(uiColorButtonSetColor_REQUIRED_ARGC, uiColorButtonSetColor_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "comboboxAppend", mrb_UI_uiComboboxAppend, MRB_ARGS_ARG(uiComboboxAppend_REQUIRED_ARGC, uiComboboxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxOnSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "comboboxOnSelected", mrb_UI_uiComboboxOnSelected, MRB_ARGS_ARG(uiComboboxOnSelected_REQUIRED_ARGC, uiComboboxOnSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "comboboxSelected", mrb_UI_uiComboboxSelected, MRB_ARGS_ARG(uiComboboxSelected_REQUIRED_ARGC, uiComboboxSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxSetSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "comboboxSetSelected", mrb_UI_uiComboboxSetSelected, MRB_ARGS_ARG(uiComboboxSetSelected_REQUIRED_ARGC, uiComboboxSetSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiControlDestroy_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlDestroy", mrb_UI_uiControlDestroy, MRB_ARGS_ARG(uiControlDestroy_REQUIRED_ARGC, uiControlDestroy_OPTIONAL_ARGC));
#endif
#if BIND_uiControlDisable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlDisable", mrb_UI_uiControlDisable, MRB_ARGS_ARG(uiControlDisable_REQUIRED_ARGC, uiControlDisable_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlEnable", mrb_UI_uiControlEnable, MRB_ARGS_ARG(uiControlEnable_REQUIRED_ARGC, uiControlEnable_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnabled_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlEnabled", mrb_UI_uiControlEnabled, MRB_ARGS_ARG(uiControlEnabled_REQUIRED_ARGC, uiControlEnabled_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnabledToUser_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlEnabledToUser", mrb_UI_uiControlEnabledToUser, MRB_ARGS_ARG(uiControlEnabledToUser_REQUIRED_ARGC, uiControlEnabledToUser_OPTIONAL_ARGC));
#endif
#if BIND_uiControlHandle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlHandle", mrb_UI_uiControlHandle, MRB_ARGS_ARG(uiControlHandle_REQUIRED_ARGC, uiControlHandle_OPTIONAL_ARGC));
#endif
#if BIND_uiControlHide_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlHide", mrb_UI_uiControlHide, MRB_ARGS_ARG(uiControlHide_REQUIRED_ARGC, uiControlHide_OPTIONAL_ARGC));
#endif
#if BIND_uiControlParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlParent", mrb_UI_uiControlParent, MRB_ARGS_ARG(uiControlParent_REQUIRED_ARGC, uiControlParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlSetParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlSetParent", mrb_UI_uiControlSetParent, MRB_ARGS_ARG(uiControlSetParent_REQUIRED_ARGC, uiControlSetParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlShow_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlShow", mrb_UI_uiControlShow, MRB_ARGS_ARG(uiControlShow_REQUIRED_ARGC, uiControlShow_OPTIONAL_ARGC));
#endif
#if BIND_uiControlToplevel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlToplevel", mrb_UI_uiControlToplevel, MRB_ARGS_ARG(uiControlToplevel_REQUIRED_ARGC, uiControlToplevel_OPTIONAL_ARGC));
#endif
#if BIND_uiControlVerifySetParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlVerifySetParent", mrb_UI_uiControlVerifySetParent, MRB_ARGS_ARG(uiControlVerifySetParent_REQUIRED_ARGC, uiControlVerifySetParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlVisible_FUNCTION
  mrb_define_class_method(mrb, UI_module, "controlVisible", mrb_UI_uiControlVisible, MRB_ARGS_ARG(uiControlVisible_REQUIRED_ARGC, uiControlVisible_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawClip_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawClip", mrb_UI_uiDrawClip, MRB_ARGS_ARG(uiDrawClip_REQUIRED_ARGC, uiDrawClip_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFill_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFill", mrb_UI_uiDrawFill, MRB_ARGS_ARG(uiDrawFill_REQUIRED_ARGC, uiDrawFill_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFontFamiliesFamily_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFontFamiliesFamily", mrb_UI_uiDrawFontFamiliesFamily, MRB_ARGS_ARG(uiDrawFontFamiliesFamily_REQUIRED_ARGC, uiDrawFontFamiliesFamily_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFontFamiliesNumFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFontFamiliesNumFamilies", mrb_UI_uiDrawFontFamiliesNumFamilies, MRB_ARGS_ARG(uiDrawFontFamiliesNumFamilies_REQUIRED_ARGC, uiDrawFontFamiliesNumFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeFontFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFreeFontFamilies", mrb_UI_uiDrawFreeFontFamilies, MRB_ARGS_ARG(uiDrawFreeFontFamilies_REQUIRED_ARGC, uiDrawFreeFontFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreePath_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFreePath", mrb_UI_uiDrawFreePath, MRB_ARGS_ARG(uiDrawFreePath_REQUIRED_ARGC, uiDrawFreePath_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeTextFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFreeTextFont", mrb_UI_uiDrawFreeTextFont, MRB_ARGS_ARG(uiDrawFreeTextFont_REQUIRED_ARGC, uiDrawFreeTextFont_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeTextLayout_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawFreeTextLayout", mrb_UI_uiDrawFreeTextLayout, MRB_ARGS_ARG(uiDrawFreeTextLayout_REQUIRED_ARGC, uiDrawFreeTextLayout_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawListFontFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawListFontFamilies", mrb_UI_uiDrawListFontFamilies, MRB_ARGS_ARG(uiDrawListFontFamilies_REQUIRED_ARGC, uiDrawListFontFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawLoadClosestFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawLoadClosestFont", mrb_UI_uiDrawLoadClosestFont, MRB_ARGS_ARG(uiDrawLoadClosestFont_REQUIRED_ARGC, uiDrawLoadClosestFont_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixInvert_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixInvert", mrb_UI_uiDrawMatrixInvert, MRB_ARGS_ARG(uiDrawMatrixInvert_REQUIRED_ARGC, uiDrawMatrixInvert_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixInvertible_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixInvertible", mrb_UI_uiDrawMatrixInvertible, MRB_ARGS_ARG(uiDrawMatrixInvertible_REQUIRED_ARGC, uiDrawMatrixInvertible_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixMultiply_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixMultiply", mrb_UI_uiDrawMatrixMultiply, MRB_ARGS_ARG(uiDrawMatrixMultiply_REQUIRED_ARGC, uiDrawMatrixMultiply_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixRotate_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixRotate", mrb_UI_uiDrawMatrixRotate, MRB_ARGS_ARG(uiDrawMatrixRotate_REQUIRED_ARGC, uiDrawMatrixRotate_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixScale_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixScale", mrb_UI_uiDrawMatrixScale, MRB_ARGS_ARG(uiDrawMatrixScale_REQUIRED_ARGC, uiDrawMatrixScale_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixSetIdentity_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixSetIdentity", mrb_UI_uiDrawMatrixSetIdentity, MRB_ARGS_ARG(uiDrawMatrixSetIdentity_REQUIRED_ARGC, uiDrawMatrixSetIdentity_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixSkew_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixSkew", mrb_UI_uiDrawMatrixSkew, MRB_ARGS_ARG(uiDrawMatrixSkew_REQUIRED_ARGC, uiDrawMatrixSkew_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTransformPoint_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixTransformPoint", mrb_UI_uiDrawMatrixTransformPoint, MRB_ARGS_ARG(uiDrawMatrixTransformPoint_REQUIRED_ARGC, uiDrawMatrixTransformPoint_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTransformSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixTransformSize", mrb_UI_uiDrawMatrixTransformSize, MRB_ARGS_ARG(uiDrawMatrixTransformSize_REQUIRED_ARGC, uiDrawMatrixTransformSize_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTranslate_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawMatrixTranslate", mrb_UI_uiDrawMatrixTranslate, MRB_ARGS_ARG(uiDrawMatrixTranslate_REQUIRED_ARGC, uiDrawMatrixTranslate_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawNewPath_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawNewPath", mrb_UI_uiDrawNewPath, MRB_ARGS_ARG(uiDrawNewPath_REQUIRED_ARGC, uiDrawNewPath_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawNewTextLayout_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawNewTextLayout", mrb_UI_uiDrawNewTextLayout, MRB_ARGS_ARG(uiDrawNewTextLayout_REQUIRED_ARGC, uiDrawNewTextLayout_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathAddRectangle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathAddRectangle", mrb_UI_uiDrawPathAddRectangle, MRB_ARGS_ARG(uiDrawPathAddRectangle_REQUIRED_ARGC, uiDrawPathAddRectangle_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathArcTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathArcTo", mrb_UI_uiDrawPathArcTo, MRB_ARGS_ARG(uiDrawPathArcTo_REQUIRED_ARGC, uiDrawPathArcTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathBezierTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathBezierTo", mrb_UI_uiDrawPathBezierTo, MRB_ARGS_ARG(uiDrawPathBezierTo_REQUIRED_ARGC, uiDrawPathBezierTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathCloseFigure_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathCloseFigure", mrb_UI_uiDrawPathCloseFigure, MRB_ARGS_ARG(uiDrawPathCloseFigure_REQUIRED_ARGC, uiDrawPathCloseFigure_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathEnd_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathEnd", mrb_UI_uiDrawPathEnd, MRB_ARGS_ARG(uiDrawPathEnd_REQUIRED_ARGC, uiDrawPathEnd_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathLineTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathLineTo", mrb_UI_uiDrawPathLineTo, MRB_ARGS_ARG(uiDrawPathLineTo_REQUIRED_ARGC, uiDrawPathLineTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathNewFigure_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathNewFigure", mrb_UI_uiDrawPathNewFigure, MRB_ARGS_ARG(uiDrawPathNewFigure_REQUIRED_ARGC, uiDrawPathNewFigure_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathNewFigureWithArc_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawPathNewFigureWithArc", mrb_UI_uiDrawPathNewFigureWithArc, MRB_ARGS_ARG(uiDrawPathNewFigureWithArc_REQUIRED_ARGC, uiDrawPathNewFigureWithArc_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawRestore_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawRestore", mrb_UI_uiDrawRestore, MRB_ARGS_ARG(uiDrawRestore_REQUIRED_ARGC, uiDrawRestore_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawSave_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawSave", mrb_UI_uiDrawSave, MRB_ARGS_ARG(uiDrawSave_REQUIRED_ARGC, uiDrawSave_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawStroke_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawStroke", mrb_UI_uiDrawStroke, MRB_ARGS_ARG(uiDrawStroke_REQUIRED_ARGC, uiDrawStroke_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawText", mrb_UI_uiDrawText, MRB_ARGS_ARG(uiDrawText_REQUIRED_ARGC, uiDrawText_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontDescribe_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextFontDescribe", mrb_UI_uiDrawTextFontDescribe, MRB_ARGS_ARG(uiDrawTextFontDescribe_REQUIRED_ARGC, uiDrawTextFontDescribe_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontGetMetrics_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextFontGetMetrics", mrb_UI_uiDrawTextFontGetMetrics, MRB_ARGS_ARG(uiDrawTextFontGetMetrics_REQUIRED_ARGC, uiDrawTextFontGetMetrics_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontHandle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextFontHandle", mrb_UI_uiDrawTextFontHandle, MRB_ARGS_ARG(uiDrawTextFontHandle_REQUIRED_ARGC, uiDrawTextFontHandle_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutExtents_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextLayoutExtents", mrb_UI_uiDrawTextLayoutExtents, MRB_ARGS_ARG(uiDrawTextLayoutExtents_REQUIRED_ARGC, uiDrawTextLayoutExtents_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutSetColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextLayoutSetColor", mrb_UI_uiDrawTextLayoutSetColor, MRB_ARGS_ARG(uiDrawTextLayoutSetColor_REQUIRED_ARGC, uiDrawTextLayoutSetColor_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutSetWidth_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTextLayoutSetWidth", mrb_UI_uiDrawTextLayoutSetWidth, MRB_ARGS_ARG(uiDrawTextLayoutSetWidth_REQUIRED_ARGC, uiDrawTextLayoutSetWidth_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTransform_FUNCTION
  mrb_define_class_method(mrb, UI_module, "drawTransform", mrb_UI_uiDrawTransform, MRB_ARGS_ARG(uiDrawTransform_REQUIRED_ARGC, uiDrawTransform_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "editableComboboxAppend", mrb_UI_uiEditableComboboxAppend, MRB_ARGS_ARG(uiEditableComboboxAppend_REQUIRED_ARGC, uiEditableComboboxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "editableComboboxOnChanged", mrb_UI_uiEditableComboboxOnChanged, MRB_ARGS_ARG(uiEditableComboboxOnChanged_REQUIRED_ARGC, uiEditableComboboxOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "editableComboboxSetText", mrb_UI_uiEditableComboboxSetText, MRB_ARGS_ARG(uiEditableComboboxSetText_REQUIRED_ARGC, uiEditableComboboxSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "editableComboboxText", mrb_UI_uiEditableComboboxText, MRB_ARGS_ARG(uiEditableComboboxText_REQUIRED_ARGC, uiEditableComboboxText_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "entryOnChanged", mrb_UI_uiEntryOnChanged, MRB_ARGS_ARG(uiEntryOnChanged_REQUIRED_ARGC, uiEntryOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "entryReadOnly", mrb_UI_uiEntryReadOnly, MRB_ARGS_ARG(uiEntryReadOnly_REQUIRED_ARGC, uiEntryReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiEntrySetReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "entrySetReadOnly", mrb_UI_uiEntrySetReadOnly, MRB_ARGS_ARG(uiEntrySetReadOnly_REQUIRED_ARGC, uiEntrySetReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiEntrySetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "entrySetText", mrb_UI_uiEntrySetText, MRB_ARGS_ARG(uiEntrySetText_REQUIRED_ARGC, uiEntrySetText_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "entryText", mrb_UI_uiEntryText, MRB_ARGS_ARG(uiEntryText_REQUIRED_ARGC, uiEntryText_OPTIONAL_ARGC));
#endif
#if BIND_uiFontButtonFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "fontButtonFont", mrb_UI_uiFontButtonFont, MRB_ARGS_ARG(uiFontButtonFont_REQUIRED_ARGC, uiFontButtonFont_OPTIONAL_ARGC));
#endif
#if BIND_uiFontButtonOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "fontButtonOnChanged", mrb_UI_uiFontButtonOnChanged, MRB_ARGS_ARG(uiFontButtonOnChanged_REQUIRED_ARGC, uiFontButtonOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiFormAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "formAppend", mrb_UI_uiFormAppend, MRB_ARGS_ARG(uiFormAppend_REQUIRED_ARGC, uiFormAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiFormDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "formDelete", mrb_UI_uiFormDelete, MRB_ARGS_ARG(uiFormDelete_REQUIRED_ARGC, uiFormDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiFormPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "formPadded", mrb_UI_uiFormPadded, MRB_ARGS_ARG(uiFormPadded_REQUIRED_ARGC, uiFormPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiFormSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "formSetPadded", mrb_UI_uiFormSetPadded, MRB_ARGS_ARG(uiFormSetPadded_REQUIRED_ARGC, uiFormSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeControl_FUNCTION
  mrb_define_class_method(mrb, UI_module, "freeControl", mrb_UI_uiFreeControl, MRB_ARGS_ARG(uiFreeControl_REQUIRED_ARGC, uiFreeControl_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeInitError_FUNCTION
  mrb_define_class_method(mrb, UI_module, "freeInitError", mrb_UI_uiFreeInitError, MRB_ARGS_ARG(uiFreeInitError_REQUIRED_ARGC, uiFreeInitError_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "freeText", mrb_UI_uiFreeText, MRB_ARGS_ARG(uiFreeText_REQUIRED_ARGC, uiFreeText_OPTIONAL_ARGC));
#endif
#if BIND_uiGridAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "gridAppend", mrb_UI_uiGridAppend, MRB_ARGS_ARG(uiGridAppend_REQUIRED_ARGC, uiGridAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiGridInsertAt_FUNCTION
  mrb_define_class_method(mrb, UI_module, "gridInsertAt", mrb_UI_uiGridInsertAt, MRB_ARGS_ARG(uiGridInsertAt_REQUIRED_ARGC, uiGridInsertAt_OPTIONAL_ARGC));
#endif
#if BIND_uiGridPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "gridPadded", mrb_UI_uiGridPadded, MRB_ARGS_ARG(uiGridPadded_REQUIRED_ARGC, uiGridPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiGridSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "gridSetPadded", mrb_UI_uiGridSetPadded, MRB_ARGS_ARG(uiGridSetPadded_REQUIRED_ARGC, uiGridSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "groupMargined", mrb_UI_uiGroupMargined, MRB_ARGS_ARG(uiGroupMargined_REQUIRED_ARGC, uiGroupMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetChild_FUNCTION
  mrb_define_class_method(mrb, UI_module, "groupSetChild", mrb_UI_uiGroupSetChild, MRB_ARGS_ARG(uiGroupSetChild_REQUIRED_ARGC, uiGroupSetChild_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "groupSetMargined", mrb_UI_uiGroupSetMargined, MRB_ARGS_ARG(uiGroupSetMargined_REQUIRED_ARGC, uiGroupSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "groupSetTitle", mrb_UI_uiGroupSetTitle, MRB_ARGS_ARG(uiGroupSetTitle_REQUIRED_ARGC, uiGroupSetTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "groupTitle", mrb_UI_uiGroupTitle, MRB_ARGS_ARG(uiGroupTitle_REQUIRED_ARGC, uiGroupTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiInit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "init", mrb_UI_uiInit, MRB_ARGS_ARG(uiInit_REQUIRED_ARGC, uiInit_OPTIONAL_ARGC));
#endif
#if BIND_uiLabelSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "labelSetText", mrb_UI_uiLabelSetText, MRB_ARGS_ARG(uiLabelSetText_REQUIRED_ARGC, uiLabelSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiLabelText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "labelText", mrb_UI_uiLabelText, MRB_ARGS_ARG(uiLabelText_REQUIRED_ARGC, uiLabelText_OPTIONAL_ARGC));
#endif
#if BIND_uiMain_FUNCTION
  mrb_define_class_method(mrb, UI_module, "main", mrb_UI_uiMain, MRB_ARGS_ARG(uiMain_REQUIRED_ARGC, uiMain_OPTIONAL_ARGC));
#endif
#if BIND_uiMainStep_FUNCTION
  mrb_define_class_method(mrb, UI_module, "mainStep", mrb_UI_uiMainStep, MRB_ARGS_ARG(uiMainStep_REQUIRED_ARGC, uiMainStep_OPTIONAL_ARGC));
#endif
#if BIND_uiMainSteps_FUNCTION
  mrb_define_class_method(mrb, UI_module, "mainSteps", mrb_UI_uiMainSteps, MRB_ARGS_ARG(uiMainSteps_REQUIRED_ARGC, uiMainSteps_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendAboutItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendAboutItem", mrb_UI_uiMenuAppendAboutItem, MRB_ARGS_ARG(uiMenuAppendAboutItem_REQUIRED_ARGC, uiMenuAppendAboutItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendCheckItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendCheckItem", mrb_UI_uiMenuAppendCheckItem, MRB_ARGS_ARG(uiMenuAppendCheckItem_REQUIRED_ARGC, uiMenuAppendCheckItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendItem", mrb_UI_uiMenuAppendItem, MRB_ARGS_ARG(uiMenuAppendItem_REQUIRED_ARGC, uiMenuAppendItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendPreferencesItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendPreferencesItem", mrb_UI_uiMenuAppendPreferencesItem, MRB_ARGS_ARG(uiMenuAppendPreferencesItem_REQUIRED_ARGC, uiMenuAppendPreferencesItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendQuitItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendQuitItem", mrb_UI_uiMenuAppendQuitItem, MRB_ARGS_ARG(uiMenuAppendQuitItem_REQUIRED_ARGC, uiMenuAppendQuitItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuAppendSeparator", mrb_UI_uiMenuAppendSeparator, MRB_ARGS_ARG(uiMenuAppendSeparator_REQUIRED_ARGC, uiMenuAppendSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuItemChecked", mrb_UI_uiMenuItemChecked, MRB_ARGS_ARG(uiMenuItemChecked_REQUIRED_ARGC, uiMenuItemChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemDisable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuItemDisable", mrb_UI_uiMenuItemDisable, MRB_ARGS_ARG(uiMenuItemDisable_REQUIRED_ARGC, uiMenuItemDisable_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemEnable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuItemEnable", mrb_UI_uiMenuItemEnable, MRB_ARGS_ARG(uiMenuItemEnable_REQUIRED_ARGC, uiMenuItemEnable_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemOnClicked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuItemOnClicked", mrb_UI_uiMenuItemOnClicked, MRB_ARGS_ARG(uiMenuItemOnClicked_REQUIRED_ARGC, uiMenuItemOnClicked_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemSetChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "menuItemSetChecked", mrb_UI_uiMenuItemSetChecked, MRB_ARGS_ARG(uiMenuItemSetChecked_REQUIRED_ARGC, uiMenuItemSetChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiMsgBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "msgBox", mrb_UI_uiMsgBox, MRB_ARGS_ARG(uiMsgBox_REQUIRED_ARGC, uiMsgBox_OPTIONAL_ARGC));
#endif
#if BIND_uiMsgBoxError_FUNCTION
  mrb_define_class_method(mrb, UI_module, "msgBoxError", mrb_UI_uiMsgBoxError, MRB_ARGS_ARG(uiMsgBoxError_REQUIRED_ARGC, uiMsgBoxError_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntryAppend", mrb_UI_uiMultilineEntryAppend, MRB_ARGS_ARG(uiMultilineEntryAppend_REQUIRED_ARGC, uiMultilineEntryAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntryOnChanged", mrb_UI_uiMultilineEntryOnChanged, MRB_ARGS_ARG(uiMultilineEntryOnChanged_REQUIRED_ARGC, uiMultilineEntryOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntryReadOnly", mrb_UI_uiMultilineEntryReadOnly, MRB_ARGS_ARG(uiMultilineEntryReadOnly_REQUIRED_ARGC, uiMultilineEntryReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntrySetReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntrySetReadOnly", mrb_UI_uiMultilineEntrySetReadOnly, MRB_ARGS_ARG(uiMultilineEntrySetReadOnly_REQUIRED_ARGC, uiMultilineEntrySetReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntrySetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntrySetText", mrb_UI_uiMultilineEntrySetText, MRB_ARGS_ARG(uiMultilineEntrySetText_REQUIRED_ARGC, uiMultilineEntrySetText_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "multilineEntryText", mrb_UI_uiMultilineEntryText, MRB_ARGS_ARG(uiMultilineEntryText_REQUIRED_ARGC, uiMultilineEntryText_OPTIONAL_ARGC));
#endif
#if BIND_uiNewArea_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newArea", mrb_UI_uiNewArea, MRB_ARGS_ARG(uiNewArea_REQUIRED_ARGC, uiNewArea_OPTIONAL_ARGC));
#endif
#if BIND_uiNewButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newButton", mrb_UI_uiNewButton, MRB_ARGS_ARG(uiNewButton_REQUIRED_ARGC, uiNewButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewCheckbox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newCheckbox", mrb_UI_uiNewCheckbox, MRB_ARGS_ARG(uiNewCheckbox_REQUIRED_ARGC, uiNewCheckbox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewColorButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newColorButton", mrb_UI_uiNewColorButton, MRB_ARGS_ARG(uiNewColorButton_REQUIRED_ARGC, uiNewColorButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewCombobox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newCombobox", mrb_UI_uiNewCombobox, MRB_ARGS_ARG(uiNewCombobox_REQUIRED_ARGC, uiNewCombobox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewDatePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newDatePicker", mrb_UI_uiNewDatePicker, MRB_ARGS_ARG(uiNewDatePicker_REQUIRED_ARGC, uiNewDatePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewDateTimePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newDateTimePicker", mrb_UI_uiNewDateTimePicker, MRB_ARGS_ARG(uiNewDateTimePicker_REQUIRED_ARGC, uiNewDateTimePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewEditableCombobox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newEditableCombobox", mrb_UI_uiNewEditableCombobox, MRB_ARGS_ARG(uiNewEditableCombobox_REQUIRED_ARGC, uiNewEditableCombobox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newEntry", mrb_UI_uiNewEntry, MRB_ARGS_ARG(uiNewEntry_REQUIRED_ARGC, uiNewEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewFontButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newFontButton", mrb_UI_uiNewFontButton, MRB_ARGS_ARG(uiNewFontButton_REQUIRED_ARGC, uiNewFontButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewForm_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newForm", mrb_UI_uiNewForm, MRB_ARGS_ARG(uiNewForm_REQUIRED_ARGC, uiNewForm_OPTIONAL_ARGC));
#endif
#if BIND_uiNewGrid_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newGrid", mrb_UI_uiNewGrid, MRB_ARGS_ARG(uiNewGrid_REQUIRED_ARGC, uiNewGrid_OPTIONAL_ARGC));
#endif
#if BIND_uiNewGroup_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newGroup", mrb_UI_uiNewGroup, MRB_ARGS_ARG(uiNewGroup_REQUIRED_ARGC, uiNewGroup_OPTIONAL_ARGC));
#endif
#if BIND_uiNewHorizontalBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newHorizontalBox", mrb_UI_uiNewHorizontalBox, MRB_ARGS_ARG(uiNewHorizontalBox_REQUIRED_ARGC, uiNewHorizontalBox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewHorizontalSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newHorizontalSeparator", mrb_UI_uiNewHorizontalSeparator, MRB_ARGS_ARG(uiNewHorizontalSeparator_REQUIRED_ARGC, uiNewHorizontalSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiNewLabel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newLabel", mrb_UI_uiNewLabel, MRB_ARGS_ARG(uiNewLabel_REQUIRED_ARGC, uiNewLabel_OPTIONAL_ARGC));
#endif
#if BIND_uiNewMenu_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newMenu", mrb_UI_uiNewMenu, MRB_ARGS_ARG(uiNewMenu_REQUIRED_ARGC, uiNewMenu_OPTIONAL_ARGC));
#endif
#if BIND_uiNewMultilineEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newMultilineEntry", mrb_UI_uiNewMultilineEntry, MRB_ARGS_ARG(uiNewMultilineEntry_REQUIRED_ARGC, uiNewMultilineEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewNonWrappingMultilineEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newNonWrappingMultilineEntry", mrb_UI_uiNewNonWrappingMultilineEntry, MRB_ARGS_ARG(uiNewNonWrappingMultilineEntry_REQUIRED_ARGC, uiNewNonWrappingMultilineEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewPasswordEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newPasswordEntry", mrb_UI_uiNewPasswordEntry, MRB_ARGS_ARG(uiNewPasswordEntry_REQUIRED_ARGC, uiNewPasswordEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewProgressBar_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newProgressBar", mrb_UI_uiNewProgressBar, MRB_ARGS_ARG(uiNewProgressBar_REQUIRED_ARGC, uiNewProgressBar_OPTIONAL_ARGC));
#endif
#if BIND_uiNewRadioButtons_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newRadioButtons", mrb_UI_uiNewRadioButtons, MRB_ARGS_ARG(uiNewRadioButtons_REQUIRED_ARGC, uiNewRadioButtons_OPTIONAL_ARGC));
#endif
#if BIND_uiNewScrollingArea_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newScrollingArea", mrb_UI_uiNewScrollingArea, MRB_ARGS_ARG(uiNewScrollingArea_REQUIRED_ARGC, uiNewScrollingArea_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSearchEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newSearchEntry", mrb_UI_uiNewSearchEntry, MRB_ARGS_ARG(uiNewSearchEntry_REQUIRED_ARGC, uiNewSearchEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSlider_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newSlider", mrb_UI_uiNewSlider, MRB_ARGS_ARG(uiNewSlider_REQUIRED_ARGC, uiNewSlider_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSpinbox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newSpinbox", mrb_UI_uiNewSpinbox, MRB_ARGS_ARG(uiNewSpinbox_REQUIRED_ARGC, uiNewSpinbox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewTab_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newTab", mrb_UI_uiNewTab, MRB_ARGS_ARG(uiNewTab_REQUIRED_ARGC, uiNewTab_OPTIONAL_ARGC));
#endif
#if BIND_uiNewTimePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newTimePicker", mrb_UI_uiNewTimePicker, MRB_ARGS_ARG(uiNewTimePicker_REQUIRED_ARGC, uiNewTimePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewVerticalBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newVerticalBox", mrb_UI_uiNewVerticalBox, MRB_ARGS_ARG(uiNewVerticalBox_REQUIRED_ARGC, uiNewVerticalBox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewVerticalSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newVerticalSeparator", mrb_UI_uiNewVerticalSeparator, MRB_ARGS_ARG(uiNewVerticalSeparator_REQUIRED_ARGC, uiNewVerticalSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiNewWindow_FUNCTION
  mrb_define_class_method(mrb, UI_module, "newWindow", mrb_UI_uiNewWindow, MRB_ARGS_ARG(uiNewWindow_REQUIRED_ARGC, uiNewWindow_OPTIONAL_ARGC));
#endif
#if BIND_uiOnShouldQuit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "onShouldQuit", mrb_UI_uiOnShouldQuit, MRB_ARGS_ARG(uiOnShouldQuit_REQUIRED_ARGC, uiOnShouldQuit_OPTIONAL_ARGC));
#endif
#if BIND_uiOpenFile_FUNCTION
  mrb_define_class_method(mrb, UI_module, "openFile", mrb_UI_uiOpenFile, MRB_ARGS_ARG(uiOpenFile_REQUIRED_ARGC, uiOpenFile_OPTIONAL_ARGC));
#endif
#if BIND_uiProgressBarSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "progressBarSetValue", mrb_UI_uiProgressBarSetValue, MRB_ARGS_ARG(uiProgressBarSetValue_REQUIRED_ARGC, uiProgressBarSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiProgressBarValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "progressBarValue", mrb_UI_uiProgressBarValue, MRB_ARGS_ARG(uiProgressBarValue_REQUIRED_ARGC, uiProgressBarValue_OPTIONAL_ARGC));
#endif
#if BIND_uiQueueMain_FUNCTION
  mrb_define_class_method(mrb, UI_module, "queueMain", mrb_UI_uiQueueMain, MRB_ARGS_ARG(uiQueueMain_REQUIRED_ARGC, uiQueueMain_OPTIONAL_ARGC));
#endif
#if BIND_uiQuit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "quit", mrb_UI_uiQuit, MRB_ARGS_ARG(uiQuit_REQUIRED_ARGC, uiQuit_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "radioButtonsAppend", mrb_UI_uiRadioButtonsAppend, MRB_ARGS_ARG(uiRadioButtonsAppend_REQUIRED_ARGC, uiRadioButtonsAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsOnSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "radioButtonsOnSelected", mrb_UI_uiRadioButtonsOnSelected, MRB_ARGS_ARG(uiRadioButtonsOnSelected_REQUIRED_ARGC, uiRadioButtonsOnSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "radioButtonsSelected", mrb_UI_uiRadioButtonsSelected, MRB_ARGS_ARG(uiRadioButtonsSelected_REQUIRED_ARGC, uiRadioButtonsSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsSetSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "radioButtonsSetSelected", mrb_UI_uiRadioButtonsSetSelected, MRB_ARGS_ARG(uiRadioButtonsSetSelected_REQUIRED_ARGC, uiRadioButtonsSetSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiSaveFile_FUNCTION
  mrb_define_class_method(mrb, UI_module, "saveFile", mrb_UI_uiSaveFile, MRB_ARGS_ARG(uiSaveFile_REQUIRED_ARGC, uiSaveFile_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "sliderOnChanged", mrb_UI_uiSliderOnChanged, MRB_ARGS_ARG(uiSliderOnChanged_REQUIRED_ARGC, uiSliderOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "sliderSetValue", mrb_UI_uiSliderSetValue, MRB_ARGS_ARG(uiSliderSetValue_REQUIRED_ARGC, uiSliderSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "sliderValue", mrb_UI_uiSliderValue, MRB_ARGS_ARG(uiSliderValue_REQUIRED_ARGC, uiSliderValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "spinboxOnChanged", mrb_UI_uiSpinboxOnChanged, MRB_ARGS_ARG(uiSpinboxOnChanged_REQUIRED_ARGC, uiSpinboxOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "spinboxSetValue", mrb_UI_uiSpinboxSetValue, MRB_ARGS_ARG(uiSpinboxSetValue_REQUIRED_ARGC, uiSpinboxSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "spinboxValue", mrb_UI_uiSpinboxValue, MRB_ARGS_ARG(uiSpinboxValue_REQUIRED_ARGC, uiSpinboxValue_OPTIONAL_ARGC));
#endif
#if BIND_uiTabAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabAppend", mrb_UI_uiTabAppend, MRB_ARGS_ARG(uiTabAppend_REQUIRED_ARGC, uiTabAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiTabDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabDelete", mrb_UI_uiTabDelete, MRB_ARGS_ARG(uiTabDelete_REQUIRED_ARGC, uiTabDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiTabInsertAt_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabInsertAt", mrb_UI_uiTabInsertAt, MRB_ARGS_ARG(uiTabInsertAt_REQUIRED_ARGC, uiTabInsertAt_OPTIONAL_ARGC));
#endif
#if BIND_uiTabMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabMargined", mrb_UI_uiTabMargined, MRB_ARGS_ARG(uiTabMargined_REQUIRED_ARGC, uiTabMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiTabNumPages_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabNumPages", mrb_UI_uiTabNumPages, MRB_ARGS_ARG(uiTabNumPages_REQUIRED_ARGC, uiTabNumPages_OPTIONAL_ARGC));
#endif
#if BIND_uiTabSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "tabSetMargined", mrb_UI_uiTabSetMargined, MRB_ARGS_ARG(uiTabSetMargined_REQUIRED_ARGC, uiTabSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiUninit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uninit", mrb_UI_uiUninit, MRB_ARGS_ARG(uiUninit_REQUIRED_ARGC, uiUninit_OPTIONAL_ARGC));
#endif
#if BIND_uiUserBugCannotSetParentOnToplevel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "userBugCannotSetParentOnToplevel", mrb_UI_uiUserBugCannotSetParentOnToplevel, MRB_ARGS_ARG(uiUserBugCannotSetParentOnToplevel_REQUIRED_ARGC, uiUserBugCannotSetParentOnToplevel_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowBorderless_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowBorderless", mrb_UI_uiWindowBorderless, MRB_ARGS_ARG(uiWindowBorderless_REQUIRED_ARGC, uiWindowBorderless_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowContentSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowContentSize", mrb_UI_uiWindowContentSize, MRB_ARGS_ARG(uiWindowContentSize_REQUIRED_ARGC, uiWindowContentSize_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowFullscreen_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowFullscreen", mrb_UI_uiWindowFullscreen, MRB_ARGS_ARG(uiWindowFullscreen_REQUIRED_ARGC, uiWindowFullscreen_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowMargined", mrb_UI_uiWindowMargined, MRB_ARGS_ARG(uiWindowMargined_REQUIRED_ARGC, uiWindowMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowOnClosing_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowOnClosing", mrb_UI_uiWindowOnClosing, MRB_ARGS_ARG(uiWindowOnClosing_REQUIRED_ARGC, uiWindowOnClosing_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowOnContentSizeChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowOnContentSizeChanged", mrb_UI_uiWindowOnContentSizeChanged, MRB_ARGS_ARG(uiWindowOnContentSizeChanged_REQUIRED_ARGC, uiWindowOnContentSizeChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetBorderless_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetBorderless", mrb_UI_uiWindowSetBorderless, MRB_ARGS_ARG(uiWindowSetBorderless_REQUIRED_ARGC, uiWindowSetBorderless_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetChild_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetChild", mrb_UI_uiWindowSetChild, MRB_ARGS_ARG(uiWindowSetChild_REQUIRED_ARGC, uiWindowSetChild_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetContentSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetContentSize", mrb_UI_uiWindowSetContentSize, MRB_ARGS_ARG(uiWindowSetContentSize_REQUIRED_ARGC, uiWindowSetContentSize_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetFullscreen_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetFullscreen", mrb_UI_uiWindowSetFullscreen, MRB_ARGS_ARG(uiWindowSetFullscreen_REQUIRED_ARGC, uiWindowSetFullscreen_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetMargined", mrb_UI_uiWindowSetMargined, MRB_ARGS_ARG(uiWindowSetMargined_REQUIRED_ARGC, uiWindowSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowSetTitle", mrb_UI_uiWindowSetTitle, MRB_ARGS_ARG(uiWindowSetTitle_REQUIRED_ARGC, uiWindowSetTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "windowTitle", mrb_UI_uiWindowTitle, MRB_ARGS_ARG(uiWindowTitle_REQUIRED_ARGC, uiWindowTitle_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */
  mrb_ui_init_control_lookup(mrb);

/* MRUBY_BINDING_END */
}

void mrb_mruby_ui_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: module_final */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
}
#endif
