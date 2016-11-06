#include "mruby_UI.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

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
/* sha: 672836d1e1eb720e0e5979fad7f9c05ba8d3d21c14fa2c258121636c4284f4a4 */
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
  if (!mrb_obj_is_kind_of(mrb, a, UiArea_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiArea expected");
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
/* sha: 870f28dda85ae93d66b03eb5d62050384b1775e48433a3306c04a5e92936a66d */
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
  if (!mrb_obj_is_kind_of(mrb, a, UiArea_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiArea expected");
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
/* sha: 7d7e7031d020b0619e5d0a667d28ac138bf8c9789d54bcb0fc474ed8c6b2cc0f */
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
  if (!mrb_obj_is_kind_of(mrb, a, UiArea_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiArea expected");
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
/* sha: e9bc45d0ba9310c39c662388662550558ac59ab994785d9acc61e2304747aafb */
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
  if (!mrb_obj_is_kind_of(mrb, a, UiArea_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiArea expected");
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
/* sha: 1d62e3193f619edd3554b5e006888368a88d800958c6a1daba8705eb21ebe703 */
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
  if (!mrb_obj_is_kind_of(mrb, a, UiArea_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiArea expected");
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
/* sha: 3a2ba0d2b38255276e7a549cae1bc7bd4778becfcd2e9f09f3564ff57cbbe0f5 */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiBox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiBox expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: be17b2cedc1c626ed2adfbc9e993af26a65c0546eeea794b411b50fd5eed13ef */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiBox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiBox expected");
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
/* sha: 632e3915f3a41ab857f1eeb2834d5c1d153a484e5d275a8f8825673456311cdc */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiBox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiBox expected");
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
/* sha: 7f2dded6de4aad06973bd5872958205a0fb11edf63ee6e254bab854dd473ce42 */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiBox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiBox expected");
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
/* sha: 06fec2a7fe5b49053703e199d3e4ff46a79d29a39a894e7948c6485d56742794 */
#if BIND_uiButtonOnClicked_FUNCTION
#define uiButtonOnClicked_REQUIRED_ARGC 3
#define uiButtonOnClicked_OPTIONAL_ARGC 0
/* void uiButtonOnClicked(uiButton * b, void (*)(uiButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiButtonOnClicked(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &b, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UiButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiButton expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiButton_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiButton(b));

  /* Unbox param: f */
  void (*native_f)(uiButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiButton_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiButtonOnClicked(native_b, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiButtonSetText */
/* sha: 31ddb50aacef79b3da27a92623d3880d7327856710c4c01e33e736e11d650471 */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiButton expected");
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
/* sha: 650cd5775bbdf7543e60ecea3f6c19397e94b71b282dfd6cc44db708d8edee38 */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiButton expected");
    return mrb_nil_value();
  }

  /* Unbox param: b */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiButton(b));

  /* Invocation */
  char * native_return_value = uiButtonText(native_b);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxChecked */
/* sha: e7ae1dc375bbcf190639066bff317e051d5b24afdb3b609536fcad9f60d96190 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCheckbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCheckbox expected");
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
/* sha: e75da908eaa99817cfa781d28922f37b608b6e3e50b06cffe2da5b783623a5e4 */
#if BIND_uiCheckboxOnToggled_FUNCTION
#define uiCheckboxOnToggled_REQUIRED_ARGC 3
#define uiCheckboxOnToggled_OPTIONAL_ARGC 0
/* void uiCheckboxOnToggled(uiCheckbox * c, void (*)(uiCheckbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiCheckboxOnToggled(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &c, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UiCheckbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCheckbox expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiCheckbox_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Unbox param: f */
  void (*native_f)(uiCheckbox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiCheckbox_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiCheckboxOnToggled(native_c, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiCheckboxSetChecked */
/* sha: 2255b38e2c96c7baa2b30571ac62b32d2e7eeeefa075dcddb7fbe57ff79aef80 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCheckbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCheckbox expected");
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
/* sha: fd5a19b600100b8fc8420676f5ee68a9e2cc69249c54755c722067051cb1de9b */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCheckbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCheckbox expected");
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
/* sha: 3b1d280f3c7dcd10cd254eb519bcbc97cb324d620e7e59732b924a7620be695d */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCheckbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCheckbox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCheckbox(c));

  /* Invocation */
  char * native_return_value = uiCheckboxText(native_c);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiColorButtonColor */
/* sha: 510b7e7c61d370fc0ebe11dc9fb470fb5fa83a23f7dfa6644bca3d5e35bd922b */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiColorButton expected");
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
/* sha: 747edcc9eac0ddb2ffabe33d897b5f9482e7aff82986e3c82171cb6072be2593 */
#if BIND_uiColorButtonOnChanged_FUNCTION
#define uiColorButtonOnChanged_REQUIRED_ARGC 3
#define uiColorButtonOnChanged_OPTIONAL_ARGC 0
/* void uiColorButtonOnChanged(uiColorButton * b, void (*)(uiColorButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiColorButtonOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &b, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UiColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiColorButton expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiColorButton_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: b */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiColorButton(b));

  /* Unbox param: f */
  void (*native_f)(uiColorButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiColorButton_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiColorButtonOnChanged(native_b, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiColorButtonSetColor */
/* sha: 776c0f6662c7e4bbf7e198870e3bca72a02da1d9d8751c1215bea45ebe9b35b8 */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiColorButton expected");
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
/* sha: 1960e2edd64bcd8999551ddaa2ee328d180d5eed1547b5e7fe47f62d9da171f4 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCombobox expected");
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
/* sha: 11f0d07d64403dfdab06c725aa1e703cb9229a37a8088290635373f93ca1cb21 */
#if BIND_uiComboboxOnSelected_FUNCTION
#define uiComboboxOnSelected_REQUIRED_ARGC 3
#define uiComboboxOnSelected_OPTIONAL_ARGC 0
/* void uiComboboxOnSelected(uiCombobox * c, void (*)(uiCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiComboboxOnSelected(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &c, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UiCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCombobox expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiCombobox_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: c */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiCombobox(c));

  /* Unbox param: f */
  void (*native_f)(uiCombobox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiCombobox_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiComboboxOnSelected(native_c, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiComboboxSelected */
/* sha: 7b7ce9a265128e4aeaacd6b1a7c2c4bd2ddf910b072748eaa3061609e408c128 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCombobox expected");
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
/* sha: 9e3dc9ef76ca1e3061602fbdb548492284ffa10e5a48ad289992b70e909eafdb */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiCombobox expected");
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
/* sha: a2bb7e23f8a754a2bc1a10326cb76d8b2da572149ec8b6a224f4f4d357cb28ee */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uiControl(arg1));

  /* Invocation */
  uiControlDestroy(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiControlDisable */
/* sha: 9123ca69e765905b9401313e4ee6e293976c7ade3bffc127af231136ae39b488 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 2e6c975ebd9b28e7d06c86fcc5f569b4fa6fb977c5af22688470a87a44dff8a9 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 47b200ad69e877b570f0297856e9214e57150414420e40d80702de9b2b714407 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 4bcc6f96162c5130c104fdfb86c26a22d690d03f69bc9a6b79995332e5b804d5 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: e40d5b77ed1bc4b15cfa9fafcd2dbfba7eeff5e0cc32ef3712695198abcfa34c */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 50d8b01e7933de7e59175711aac08fa9e8758881e9ed9036ddda5032c144384c */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 161aa77eaeb64ef755e8be02ae218d26897a1f956bc8636fae0a6b4915e4d609 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: f36ca2656f873516df653128f48957234a1c6540f5c013dc8794306cd6cb6038 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 27320ecf3b3931e061621b7ec3240e851ebb8bf19d6717b6dcd070ca7ed2a0ca */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: cc51812928d6b471d986af23628f9a0d1d8e12a66824d69955c65cf500d26674 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: df8094dc14d36d0c6a84b0d096cc01ca96467aa9e01c7d432096f63e1d07fdc3 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 5392f5a9221c2fea0cbe1885e06e324c3ef2d7187756c05b4a2a3cafd0a1ea20 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 229416c53eebbda7bdfd5d724a4de52454a4aad236d6c30f902301b9c375aef2 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: fa8a573842592f6e938a5f6bc8151a4ceb4e670511c4f618625ec8c146ff2990 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, UiDrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawBrush expected");
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
/* sha: 714fa79320c57bd89f6edd3cc7a4712e282d9d9d36112acbac16c024bf4f4539 */
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
  if (!mrb_obj_is_kind_of(mrb, ff, UiDrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawFontFamilies expected");
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
/* sha: 5b0a86c62c0dae0e55068d2b84f5db2ad0237e61e29f3941841c12a773479a20 */
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
  if (!mrb_obj_is_kind_of(mrb, ff, UiDrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawFontFamilies expected");
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
/* sha: c7875568e4dcb9d0a586eba888ce19258a181b13755772cfdb6a4b74316fa406 */
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
  if (!mrb_obj_is_kind_of(mrb, ff, UiDrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawFontFamilies expected");
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
/* sha: 634009c9faeef95c901c325f2bc2f99bdceba1a71ebdfddd8a508d05feafd944 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 8acd13e2b12de136fb2ade36df7c6016147f8e2573dce64ab32227c4f61d0f5b */
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
  if (!mrb_obj_is_kind_of(mrb, font, UiDrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFont expected");
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
/* sha: c05bebcb3c98d5c2481a97e35dcfff8c7dfd68104de6c02ba628c4a026ac9443 */
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
  if (!mrb_obj_is_kind_of(mrb, layout, UiDrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextLayout expected");
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
/* sha: 8a1871781e9d6d5d83f637d58896076a4008e675bf0f674bf1f1bb8b06bc641b */
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
  if (!mrb_obj_is_kind_of(mrb, desc, UiDrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFontDescriptor expected");
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
/* sha: a93ad88177eca6fc7a00b10200b6cafaa772e91d06248d2335763694ce75225d */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 2780e92f0e7c80b5c9b878e626dd8173cce07b0dbda3d40fb3e4b838c74e290e */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 8f2e46f01fb70744e227933a9c706b27ea1ee9b6351273028c8b578d102d0062 */
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
  if (!mrb_obj_is_kind_of(mrb, dest, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 31825e36788a5525f925b133f571eda658fe3d8a6fefa563a8c32b678145c13a */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 0d73a14f60cf4621ffd5230f2feedbfb230f38d34a8f4308fc89d3f3f226266a */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: ec3f92b55bce8553db0f05e26def2345bb75d990a41758fbb16b00bde4dc04a9 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: c3760eedb727d082680165ca988c90ad47fe5592dae1de48a8014a850a1f7825 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 0000d243bbc7544e4120d3d8445298e7720e57b70ccc740ec4847e9b3f6edbbc */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: a84a0dfe09aae5dbf81c3242247c794264a86c3b8d60c1b397e4a3ad35de278f */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: c6f571aa1ba2bad29394ae5c7ce4efa62e50f5a6217b94df281b164d34d42298 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 7a47d9880b62cf903901fb3b9050bc68854e1d5b6dea3f0f707084305478f7a8 */
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
  if (!mrb_obj_is_kind_of(mrb, defaultFont, UiDrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFont expected");
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
/* sha: cf5c434d9a61b5862f82558b4be02445df5d705f150bb98f74f301c36039500d */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: b161a8f7fb4919d1c1081b80ab41016924149b3985ac750bb9d8792791ea30b3 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 99f22873d99c70e02fcc7958afa6f86ac4dd88c80adaae630e9c11044a0527fe */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: d41fdba315035570d8d9ae0c7653796c76058bde02609eb67f2ebabd4e2ae4e1 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 331e65d5909356d7d4b105fbe8b229b00ef452703355f016caa9af679173cf60 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: d839751b08d57092bb7398b598743d2d32316260871af0eb207acaf1b878d1a7 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 33362b11490ce152a6003f373f6430e96bb3540208d5cb4a052a552f0685d9ef */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 5543a6d779fea2eed14a0f63874a6debaf738b5210757ae574796a0a8ce65c37 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
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
/* sha: 69084f349e77d610bdfb383c2d2370c1762c81c579dc4c046bfad036c6182552 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
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
/* sha: 57e5e81a0241e2f0c3bbccca86ecc8804fefada5fafded18bd27509ff6bc9926 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
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
/* sha: ec193b84ce1936ef8dda75730386d572ffde5dbf162a6916bc9f95909fd235a2 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UiDrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, UiDrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawBrush expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, UiDrawStrokeParams_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawStrokeParams expected");
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
/* sha: 5d6a9dfce1ac21b20da7eeaefa21043c52b9a1cf0aaf86b44731e347e3a77b9f */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, layout, UiDrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextLayout expected");
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
/* sha: 6fd407b07a0e2006cdbf8727d292770162d51888d0ebc9e979307445eb5272c1 */
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
  if (!mrb_obj_is_kind_of(mrb, font, UiDrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, desc, UiDrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFontDescriptor expected");
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
/* sha: 41e5bdd59a3aaa8ee9d95a06ce2e39c4d64954d74846a9cabf6aaad7071440cf */
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
  if (!mrb_obj_is_kind_of(mrb, font, UiDrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, metrics, UiDrawTextFontMetrics_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFontMetrics expected");
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
/* sha: 248bef0016edc5d81bf8500730bba390e54c6dd49c25b7734247212beeeb54d3 */
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
  if (!mrb_obj_is_kind_of(mrb, font, UiDrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextFont expected");
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
/* sha: e146e5325d4edfd40e6577c1bd030d70ffe93f2c006e810c034aff5f075ff5ce */
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
  if (!mrb_obj_is_kind_of(mrb, layout, UiDrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextLayout expected");
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
/* sha: 48204cc918db97e056b85c6946f4755eb891d66c7c1a309e15b5b77e615a99d1 */
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
  if (!mrb_obj_is_kind_of(mrb, layout, UiDrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextLayout expected");
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
/* sha: f570502edabf54d5a9145e7375661ef9161998ef0213292ad8719b5e49e2b45d */
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
  if (!mrb_obj_is_kind_of(mrb, layout, UiDrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawTextLayout expected");
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
/* sha: d1c067fea4e137da714c2137c0ea1a80aa7917ea35c289c27701d0918bf36811 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, m, UiDrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawMatrix expected");
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
/* sha: 3f255c3306086b34a6b95789b30c2894cdc2d47d50fbf5b993ef58efdd779107 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiEditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEditableCombobox expected");
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
/* sha: cdf6aadcb0f69ffd77a6b2270864911a962fb1853d6562f5c58e41573cf469b5 */
#if BIND_uiEditableComboboxOnChanged_FUNCTION
#define uiEditableComboboxOnChanged_REQUIRED_ARGC 3
#define uiEditableComboboxOnChanged_OPTIONAL_ARGC 0
/* void uiEditableComboboxOnChanged(uiEditableCombobox * c, void (*)(uiEditableCombobox *, void *) f, void * data) */
mrb_value
mrb_UI_uiEditableComboboxOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value c;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &c, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UiEditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEditableCombobox expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiEditableCombobox_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Unbox param: f */
  void (*native_f)(uiEditableCombobox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiEditableCombobox_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiEditableComboboxOnChanged(native_c, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEditableComboboxSetText */
/* sha: edde6b4eeef72f5d9dc8e767916579f260c68f058c573296dd519d0695812695 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiEditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEditableCombobox expected");
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
/* sha: ae20ad79c22e1a35b7a22fd4b5af6e4974cb0975515e7b5a9452905b24e72934 */
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
  if (!mrb_obj_is_kind_of(mrb, c, UiEditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox param: c */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_unbox_uiEditableCombobox(c));

  /* Invocation */
  char * native_return_value = uiEditableComboboxText(native_c);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntryOnChanged */
/* sha: 25f892aacf72027ca5e76e7cce73800499dfe6507e851176f18dca7da381349c */
#if BIND_uiEntryOnChanged_FUNCTION
#define uiEntryOnChanged_REQUIRED_ARGC 3
#define uiEntryOnChanged_OPTIONAL_ARGC 0
/* void uiEntryOnChanged(uiEntry * e, void (*)(uiEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiEntryOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &e, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UiEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEntry expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiEntry_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Unbox param: f */
  void (*native_f)(uiEntry *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiEntry_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiEntryOnChanged(native_e, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiEntryReadOnly */
/* sha: 46cefcbc73108bb4c0113130f2b4bed53161085d96164c120e10528f44b92251 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEntry expected");
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
/* sha: 5ab7850a56465c59867e2551d7cf8216e508877e6a1d527d5a2562b25796574d */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEntry expected");
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
/* sha: 54a263adf1465e01b5cf319fd5f4fb547a354e6b5da8bfd775d329d9f249a9da */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEntry expected");
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
/* sha: 35dc9d765f1b4224e385e81124be23f4961e72fb651dcb0deb798e52e76a6f76 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiEntry(e));

  /* Invocation */
  char * native_return_value = uiEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFontButtonFont */
/* sha: 3d219cd06eaca18333dea258cddb7913664afc238f72cf3b79ef0967a2709aaa */
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
  if (!mrb_obj_is_kind_of(mrb, b, UiFontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiFontButton expected");
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
/* sha: 6ff6569d12c0f6cbf7bc42324e6c4f45468f86623087e022b82130523c1f6777 */
#if BIND_uiFontButtonOnChanged_FUNCTION
#define uiFontButtonOnChanged_REQUIRED_ARGC 3
#define uiFontButtonOnChanged_OPTIONAL_ARGC 0
/* void uiFontButtonOnChanged(uiFontButton * b, void (*)(uiFontButton *, void *) f, void * data) */
mrb_value
mrb_UI_uiFontButtonOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value b;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &b, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UiFontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiFontButton expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiFontButton_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: b */
  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_uiFontButton(b));

  /* Unbox param: f */
  void (*native_f)(uiFontButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiFontButton_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiFontButtonOnChanged(native_b, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiFormAppend */
/* sha: e248831d6dc0229cf3812813af145f363e577c9278a785f129c1a5ad8ad3a46f */
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
  if (!mrb_obj_is_kind_of(mrb, f, UiForm_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiForm expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 6f2ed1beefb8741316c9cc11b601382a5c1b08cdd4763e7de0f481ca5bfd1a95 */
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
  if (!mrb_obj_is_kind_of(mrb, f, UiForm_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiForm expected");
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
/* sha: 091dee61eaec08b4140941c8506322b797c1294c091db4a35a6077cea3e16948 */
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
  if (!mrb_obj_is_kind_of(mrb, f, UiForm_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiForm expected");
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
/* sha: 675b9dd76bfe51ebc023ce4f4e0439542b0e9a644c5961f1adc680569bdcafc6 */
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
  if (!mrb_obj_is_kind_of(mrb, f, UiForm_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiForm expected");
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
/* sha: 0f9d744d1892e3daa7eefa0cc18d1341a145b607af625c288eba74e197fdafc1 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 5816aa45af9884b62ab69125401c7108aebcb028d065c69a21d44fa25988ec40 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGrid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGrid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 9a5e186dd42ffb490c1398f50fa6418b3417380ac295a16e31a7b76532b39359 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGrid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGrid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, existing, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: e14870de5bcea110e78cc586bc45449f24e1dfbf257ae12ca3e111435f3d0fb5 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGrid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGrid expected");
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
/* sha: f5da03f00029c7546d3b7008935c5ae77184c719fe35184e43fa650250eed9e3 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGrid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGrid expected");
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
/* sha: a65c0bcaac7069afce1d64b7852089a8f38323539ece7ff85bf18a8ed4d31e13 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGroup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGroup expected");
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
/* sha: b4994d72e9fcbaf89ca77d9560795af1cde62dcbbcee5e4b202d27fda0cecbb1 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGroup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGroup expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 7278e8e8977470bacbed1d6e3f50c5ffb44c1fccf7ef7540592b51b1d232b640 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGroup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGroup expected");
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
/* sha: f593fcec9a6a7a1ecd11b5d58f3977cdf1ee4a226493e3282d463c3d8ba7d2f7 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGroup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGroup expected");
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
/* sha: 5fc0ba0b3bf41fec548edcb34c6e37f07daee5c7f36c9b4143913d3ee8d69819 */
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
  if (!mrb_obj_is_kind_of(mrb, g, UiGroup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiGroup expected");
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
/* sha: 60f3de7dce6011e2eed9969d2dad8518b3f9b43fd4041493b60cb2de63b30746 */
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
  if (!mrb_obj_is_kind_of(mrb, options, UiInitOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiInitOptions expected");
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
/* sha: 6b21dfa47e4517e0045c404afe570e9cf43c901dda7b43532f4e60faa8f65cbf */
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
  if (!mrb_obj_is_kind_of(mrb, l, UiLabel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiLabel expected");
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
/* sha: 97ce2fb6453b982c397b4aa3dcd9535bc45a3dade34edfcb1c0017020b682258 */
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
  if (!mrb_obj_is_kind_of(mrb, l, UiLabel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiLabel expected");
    return mrb_nil_value();
  }

  /* Unbox param: l */
  uiLabel * native_l = (mrb_nil_p(l) ? NULL : mruby_unbox_uiLabel(l));

  /* Invocation */
  char * native_return_value = uiLabelText(native_l);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
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
/* sha: 36744e84415aa796b5197c9ccafdfb2e0acd7a78053d99b220ccc04161907369 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: 0189039d9962197bf260cf6209733ffab3984603f0059eacfafb55ea47e9861b */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: 0b4c622d15a209b8f46251f7cd98a67bb7501b82a7b211c37a5393d19dcb0635 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: 39231d293052171601bbe432c55444aed4518a1920f7b5f311bfb31ebeb604cf */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: c8b44bec4be099d9d12e814b8ee8049c618daf2b8b3c4b692c0def3f099d2863 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: a2870f413485166bcf618d60c8f74346c9647a2fe61d70a262aac07948cfba79 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenu expected");
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
/* sha: c12c5add85a056c5908392ccad29a76a78a2b8f808f9e34f571b14d8653f4054 */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenuItem expected");
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
/* sha: 9f49d6498b874e3bfaa2f766e15cbf6e89786b43bda53d260eda576e29e0ea3e */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenuItem expected");
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
/* sha: 828f8ece6b3dec19f36ea1efcd5784814510b308b3b30d51c9ffd281526ab16c */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenuItem expected");
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
/* sha: ed52c1d8e4339bd8c5901792d4cce957ff1921ea5a02db482cc68c9dfe626469 */
#if BIND_uiMenuItemOnClicked_FUNCTION
#define uiMenuItemOnClicked_REQUIRED_ARGC 3
#define uiMenuItemOnClicked_OPTIONAL_ARGC 0
/* void uiMenuItemOnClicked(uiMenuItem * m, void (*)(uiMenuItem *, uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiMenuItemOnClicked(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &m, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UiMenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenuItem expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiMenuItem_PTR_COMMA_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: m */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_uiMenuItem(m));

  /* Unbox param: f */
  void (*native_f)(uiMenuItem *, uiWindow *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiMenuItem_PTR_COMMA_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiMenuItemOnClicked(native_m, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMenuItemSetChecked */
/* sha: b05ba08a8214369efd2ab13af8e712c9799020604d4f2eb71035ddf3854ab81d */
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
  if (!mrb_obj_is_kind_of(mrb, m, UiMenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMenuItem expected");
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
/* sha: 72df0757fb841c4006aa85b196157f0f704cbc445cf7c81160344f87bfc1d26a */
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
  if (!mrb_obj_is_kind_of(mrb, parent, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 066f5d9848898af5003c1eb7b485492e22ace30588e1dccb757c03f5b7fbe203 */
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
  if (!mrb_obj_is_kind_of(mrb, parent, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 0123832c415bdf3b002e20da50d698bdc41324056f7f9df3cef53ff7ecfecab3 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
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
/* sha: 2358d269280b7dcfdf7467208bbc4b805cf7c9fa5d88e7083810dfb544ea5b1e */
#if BIND_uiMultilineEntryOnChanged_FUNCTION
#define uiMultilineEntryOnChanged_REQUIRED_ARGC 3
#define uiMultilineEntryOnChanged_OPTIONAL_ARGC 0
/* void uiMultilineEntryOnChanged(uiMultilineEntry * e, void (*)(uiMultilineEntry *, void *) f, void * data) */
mrb_value
mrb_UI_uiMultilineEntryOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value e;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &e, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiMultilineEntry_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Unbox param: f */
  void (*native_f)(uiMultilineEntry *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiMultilineEntry_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiMultilineEntryOnChanged(native_e, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiMultilineEntryReadOnly */
/* sha: d67151e743212ef549cd181aa7a2dbcc424fc48483f296b689a303d878edf793 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
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
/* sha: 3630e80b7f3d83feb90bc0ef8354feb8bf8f86da559acb96bd6f92e066fc96e6 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
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
/* sha: 73f50313e54e0a5ba97dcd512758a25dd1c02f6732a2e37f8397a70571daf07c */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
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
/* sha: 28863b968363db31904bbd6d9f6332e650138443f63c24a67f7cb7681c284636 */
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
  if (!mrb_obj_is_kind_of(mrb, e, UiMultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiMultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_unbox_uiMultilineEntry(e));

  /* Invocation */
  char * native_return_value = uiMultilineEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewArea */
/* sha: 27fee5d49483b375cc5c15075b3d1c547ec0d4525efe355a7645fd502c360c1d */
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
  if (!mrb_obj_is_kind_of(mrb, ah, UiAreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiAreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox param: ah */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewArea(native_ah);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiArea(mrb, native_return_value));
  
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
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiNewScrollingArea */
/* sha: 00587dc89c27f68d6288afbb776283e8d1061e07090726252b3c6d77f5cb0f0d */
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
  if (!mrb_obj_is_kind_of(mrb, ah, UiAreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiAreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox param: ah */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewScrollingArea(native_ah, native_width, native_height);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uiArea(mrb, native_return_value));
  
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
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiOnShouldQuit */
/* sha: 9607770336db49f80f7f12bbddc8f029313c0e30644b89fc1a96057d5a0e242e */
#if BIND_uiOnShouldQuit_FUNCTION
#define uiOnShouldQuit_REQUIRED_ARGC 2
#define uiOnShouldQuit_OPTIONAL_ARGC 0
/* void uiOnShouldQuit(int (*)(void *) f, void * data) */
mrb_value
mrb_UI_uiOnShouldQuit(mrb_state* mrb, mrb_value self) {
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &f, &data);

  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: f */
  int (*native_f)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiOnShouldQuit(native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiOpenFile */
/* sha: b1bc5215ad23e75c95a6f0cc527431ac36dfa28ff34e6c10b583c11e4efedc62 */
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
  if (!mrb_obj_is_kind_of(mrb, parent, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: eb0ac3e76aa3a1645313e2dbb5803691d7bd7f5836b128d9c89a95e517de1dbd */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiProgressBar expected");
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
/* sha: 25636957a99bd2e02087232cd6a74e9631ff552b0cd12007532a1ddf05ae17e9 */
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
  if (!mrb_obj_is_kind_of(mrb, p, UiProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiProgressBar expected");
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
/* sha: eaf1eec1db0fa2618485b65ff972fdc7426802a79feef054687706a7cd2a57b6 */
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
  if (!mrb_obj_is_kind_of(mrb, r, UiRadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiRadioButtons expected");
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
/* sha: 6d88d657ca2440e71d3c566ffda32c404eeaee16b24c8376a974c228bfb99973 */
#if BIND_uiRadioButtonsOnSelected_FUNCTION
#define uiRadioButtonsOnSelected_REQUIRED_ARGC 3
#define uiRadioButtonsOnSelected_OPTIONAL_ARGC 0
/* void uiRadioButtonsOnSelected(uiRadioButtons * r, void (*)(uiRadioButtons *, void *) f, void * data) */
mrb_value
mrb_UI_uiRadioButtonsOnSelected(mrb_state* mrb, mrb_value self) {
  mrb_value r;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &r, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, UiRadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiRadioButtons expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiRadioButtons_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: r */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_uiRadioButtons(r));

  /* Unbox param: f */
  void (*native_f)(uiRadioButtons *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiRadioButtons_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiRadioButtonsOnSelected(native_r, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiRadioButtonsSelected */
/* sha: 3baa9e28c655c33710eefb4a487ff262ec6b7b4653b6516aff134e1327f7fa15 */
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
  if (!mrb_obj_is_kind_of(mrb, r, UiRadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiRadioButtons expected");
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
/* sha: cc30e73dbe67266752ea0fee89663b89e6c06d40321703386ef53c36126a5110 */
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
  if (!mrb_obj_is_kind_of(mrb, r, UiRadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiRadioButtons expected");
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
/* sha: 4cf3637f881c1fd705d45c480bbd989b1b55880fae856b60d35d83b086ab6bcb */
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
  if (!mrb_obj_is_kind_of(mrb, parent, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: c6fe6986676987a56d1b228fa5439baab04b6ecb8cee17e24344872e586902e9 */
#if BIND_uiSliderOnChanged_FUNCTION
#define uiSliderOnChanged_REQUIRED_ARGC 3
#define uiSliderOnChanged_OPTIONAL_ARGC 0
/* void uiSliderOnChanged(uiSlider * s, void (*)(uiSlider *, void *) f, void * data) */
mrb_value
mrb_UI_uiSliderOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value s;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &s, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UiSlider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSlider expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiSlider_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: s */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSlider(s));

  /* Unbox param: f */
  void (*native_f)(uiSlider *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiSlider_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiSliderOnChanged(native_s, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSliderSetValue */
/* sha: 886dc1a0d271746c492e109c36abf21d8177f4611ae3d4b6184b706e6ad3ae1d */
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
  if (!mrb_obj_is_kind_of(mrb, s, UiSlider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSlider expected");
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
/* sha: 79f10ef2cf2aaf9651fbd82dcbc2120e0e7f30feade4259bd817dc3d6b84273d */
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
  if (!mrb_obj_is_kind_of(mrb, s, UiSlider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSlider expected");
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
/* sha: 52c73cd5dac1dd766c8ef6cb712141d50050e9b3889c58c8231ae2eb5e067925 */
#if BIND_uiSpinboxOnChanged_FUNCTION
#define uiSpinboxOnChanged_REQUIRED_ARGC 3
#define uiSpinboxOnChanged_OPTIONAL_ARGC 0
/* void uiSpinboxOnChanged(uiSpinbox * s, void (*)(uiSpinbox *, void *) f, void * data) */
mrb_value
mrb_UI_uiSpinboxOnChanged(mrb_state* mrb, mrb_value self) {
  mrb_value s;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &s, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UiSpinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSpinbox expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiSpinbox_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: s */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_unbox_uiSpinbox(s));

  /* Unbox param: f */
  void (*native_f)(uiSpinbox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiSpinbox_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiSpinboxOnChanged(native_s, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiSpinboxSetValue */
/* sha: aa237c1d43a9b1d3bb3186bdc6160bba66658b6d5f79e11b5863aa6cb0e7f27b */
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
  if (!mrb_obj_is_kind_of(mrb, s, UiSpinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSpinbox expected");
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
/* sha: 13967d702b8f49c577d4abf6d1e31813ba45bbea3ed106bd4f0bfd4fd44e84cc */
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
  if (!mrb_obj_is_kind_of(mrb, s, UiSpinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiSpinbox expected");
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
/* sha: 9cbe1ecddeab29bc2dc46df0da5ad9914a4f0a67d7dc28c3d3014ff83f9b4c3d */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: be30e0c4ba44a0f23bee22af2b7b48d8d747b7664f7b39a540896ba53cf6543e */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
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
/* sha: 518398cc79382dfb3034fc99b90b7875b4c422bff6776dfe3ac28eb21f93418b */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 492d6fd258e71bc6387765009213a64d6c4113fbdfb83cb2171fe88d2b757270 */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
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
/* sha: 0720265bcbbf9d396fdd86ce336a8af77b7ec4d0c4c1409c8e5de55739e5b2b2 */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
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
/* sha: 264e11dacf27e9ac115cda12f896ee79f5691ceedd1be050ef2b91b1a04ba88f */
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
  if (!mrb_obj_is_kind_of(mrb, t, UiTab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiTab expected");
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
/* sha: 3f99598f4cb892af2b1006a0abded51d9a9f44ea749c3b6b0c2b29e6202c7406 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 8cd9fbe4ecf37ed4144a84c02bf076cdcb38164caf9e4bd348db1cd34f79942e */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: f3e8c98b9bebad1250700512499756cdf8d83c90f148659bfd6578be71339bb8 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 604d2920734af38e4c853d9c29587585da08babe9bcae112d3747470cd883f98 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 9fd64f1981431d3775477b9b7e9cbc11d096088e7e723a8fb0080c6f1bb6c12c */
#if BIND_uiWindowOnClosing_FUNCTION
#define uiWindowOnClosing_REQUIRED_ARGC 3
#define uiWindowOnClosing_OPTIONAL_ARGC 0
/* void uiWindowOnClosing(uiWindow * w, int (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnClosing(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &w, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Unbox param: f */
  int (*native_f)(uiWindow *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiWindowOnClosing(native_w, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowOnContentSizeChanged */
/* sha: f6e9b6bda69f9524204e49a40126a1a44676d52c725e6264773bbc54149a1a88 */
#if BIND_uiWindowOnContentSizeChanged_FUNCTION
#define uiWindowOnContentSizeChanged_REQUIRED_ARGC 3
#define uiWindowOnContentSizeChanged_OPTIONAL_ARGC 0
/* void uiWindowOnContentSizeChanged(uiWindow * w, void (*)(uiWindow *, void *) f, void * data) */
mrb_value
mrb_UI_uiWindowOnContentSizeChanged(mrb_state* mrb, mrb_value self) {
  mrb_value w;
  mrb_value f;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &w, &f, &data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
  TODO_type_check_void_PTR(data);

  /* Unbox param: w */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_unbox_uiWindow(w));

  /* Unbox param: f */
  void (*native_f)(uiWindow *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  uiWindowOnContentSizeChanged(native_w, native_f, native_data);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uiWindowSetBorderless */
/* sha: 9abdb6173dcde5f2b2cb2ea970154ecdb1b081cb870ac336867d907b9507f8a6 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: 17b44f93ba8f7531f2b97d56b22f8af7e6fc5c3a6b945711199ea052b0d81693 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, UiControl_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiControl expected");
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
/* sha: 39439c3b038e98ac292cb756adc06e5c6edf381358f1691431d3957e4ae47bbc */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: cc96568c81b719d6306f306435b36d4a824d33de84659f1d7f70f20da7ffd6a7 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: d2c1d5d5703edbe9456f9597853e996d8c6f2b48629bd266f6308df9cc826b28 */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: b6a9c74914acc3506cfc115bfd09687fc6f96630c7221be20715bb9fd4a113fa */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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
/* sha: d9a74ba87ad24d37925e226851752d3bad87b664e4b8b2ab5995a93e4aa9f2db */
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
  if (!mrb_obj_is_kind_of(mrb, w, UiWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiWindow expected");
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

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 2a0cfa0f760bf2cb34c5149b8333f037ee04427f507d7bd9a744991d4f646e62 */
#if BIND_UiArea_TYPE
  mrb_UI_UiArea_init(mrb);
#endif
#if BIND_UiAreaDrawParams_TYPE
  mrb_UI_UiAreaDrawParams_init(mrb);
#endif
#if BIND_UiAreaHandler_TYPE
  mrb_UI_UiAreaHandler_init(mrb);
#endif
#if BIND_UiAreaKeyEvent_TYPE
  mrb_UI_UiAreaKeyEvent_init(mrb);
#endif
#if BIND_UiAreaMouseEvent_TYPE
  mrb_UI_UiAreaMouseEvent_init(mrb);
#endif
#if BIND_UiBox_TYPE
  mrb_UI_UiBox_init(mrb);
#endif
#if BIND_UiButton_TYPE
  mrb_UI_UiButton_init(mrb);
#endif
#if BIND_UiCheckbox_TYPE
  mrb_UI_UiCheckbox_init(mrb);
#endif
#if BIND_UiColorButton_TYPE
  mrb_UI_UiColorButton_init(mrb);
#endif
#if BIND_UiCombobox_TYPE
  mrb_UI_UiCombobox_init(mrb);
#endif
#if BIND_UiControl_TYPE
  mrb_UI_UiControl_init(mrb);
#endif
#if BIND_UiDateTimePicker_TYPE
  mrb_UI_UiDateTimePicker_init(mrb);
#endif
#if BIND_UiDrawBrush_TYPE
  mrb_UI_UiDrawBrush_init(mrb);
#endif
#if BIND_UiDrawBrushGradientStop_TYPE
  mrb_UI_UiDrawBrushGradientStop_init(mrb);
#endif
#if BIND_UiDrawContext_TYPE
  mrb_UI_UiDrawContext_init(mrb);
#endif
#if BIND_UiDrawFontFamilies_TYPE
  mrb_UI_UiDrawFontFamilies_init(mrb);
#endif
#if BIND_UiDrawMatrix_TYPE
  mrb_UI_UiDrawMatrix_init(mrb);
#endif
#if BIND_UiDrawPath_TYPE
  mrb_UI_UiDrawPath_init(mrb);
#endif
#if BIND_UiDrawStrokeParams_TYPE
  mrb_UI_UiDrawStrokeParams_init(mrb);
#endif
#if BIND_UiDrawTextFont_TYPE
  mrb_UI_UiDrawTextFont_init(mrb);
#endif
#if BIND_UiDrawTextFontDescriptor_TYPE
  mrb_UI_UiDrawTextFontDescriptor_init(mrb);
#endif
#if BIND_UiDrawTextFontMetrics_TYPE
  mrb_UI_UiDrawTextFontMetrics_init(mrb);
#endif
#if BIND_UiDrawTextLayout_TYPE
  mrb_UI_UiDrawTextLayout_init(mrb);
#endif
#if BIND_UiEditableCombobox_TYPE
  mrb_UI_UiEditableCombobox_init(mrb);
#endif
#if BIND_UiEntry_TYPE
  mrb_UI_UiEntry_init(mrb);
#endif
#if BIND_UiFontButton_TYPE
  mrb_UI_UiFontButton_init(mrb);
#endif
#if BIND_UiForm_TYPE
  mrb_UI_UiForm_init(mrb);
#endif
#if BIND_UiGrid_TYPE
  mrb_UI_UiGrid_init(mrb);
#endif
#if BIND_UiGroup_TYPE
  mrb_UI_UiGroup_init(mrb);
#endif
#if BIND_UiInitOptions_TYPE
  mrb_UI_UiInitOptions_init(mrb);
#endif
#if BIND_UiLabel_TYPE
  mrb_UI_UiLabel_init(mrb);
#endif
#if BIND_UiMenu_TYPE
  mrb_UI_UiMenu_init(mrb);
#endif
#if BIND_UiMenuItem_TYPE
  mrb_UI_UiMenuItem_init(mrb);
#endif
#if BIND_UiMultilineEntry_TYPE
  mrb_UI_UiMultilineEntry_init(mrb);
#endif
#if BIND_UiProgressBar_TYPE
  mrb_UI_UiProgressBar_init(mrb);
#endif
#if BIND_UiRadioButtons_TYPE
  mrb_UI_UiRadioButtons_init(mrb);
#endif
#if BIND_UiSeparator_TYPE
  mrb_UI_UiSeparator_init(mrb);
#endif
#if BIND_UiSlider_TYPE
  mrb_UI_UiSlider_init(mrb);
#endif
#if BIND_UiSpinbox_TYPE
  mrb_UI_UiSpinbox_init(mrb);
#endif
#if BIND_UiTab_TYPE
  mrb_UI_UiTab_init(mrb);
#endif
#if BIND_UiWindow_TYPE
  mrb_UI_UiWindow_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 39ab4a3b79b2450d1c4cd6c5e77630b643cc3c8ed13c97c21f94795714cc2470 */
  /*
   * Global Functions
   */
#if BIND_uiAllocControl_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAllocControl", mrb_UI_uiAllocControl, MRB_ARGS_ARG(uiAllocControl_REQUIRED_ARGC, uiAllocControl_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaBeginUserWindowMove_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAreaBeginUserWindowMove", mrb_UI_uiAreaBeginUserWindowMove, MRB_ARGS_ARG(uiAreaBeginUserWindowMove_REQUIRED_ARGC, uiAreaBeginUserWindowMove_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaBeginUserWindowResize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAreaBeginUserWindowResize", mrb_UI_uiAreaBeginUserWindowResize, MRB_ARGS_ARG(uiAreaBeginUserWindowResize_REQUIRED_ARGC, uiAreaBeginUserWindowResize_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaQueueRedrawAll_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAreaQueueRedrawAll", mrb_UI_uiAreaQueueRedrawAll, MRB_ARGS_ARG(uiAreaQueueRedrawAll_REQUIRED_ARGC, uiAreaQueueRedrawAll_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaScrollTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAreaScrollTo", mrb_UI_uiAreaScrollTo, MRB_ARGS_ARG(uiAreaScrollTo_REQUIRED_ARGC, uiAreaScrollTo_OPTIONAL_ARGC));
#endif
#if BIND_uiAreaSetSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiAreaSetSize", mrb_UI_uiAreaSetSize, MRB_ARGS_ARG(uiAreaSetSize_REQUIRED_ARGC, uiAreaSetSize_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiBoxAppend", mrb_UI_uiBoxAppend, MRB_ARGS_ARG(uiBoxAppend_REQUIRED_ARGC, uiBoxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiBoxDelete", mrb_UI_uiBoxDelete, MRB_ARGS_ARG(uiBoxDelete_REQUIRED_ARGC, uiBoxDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiBoxPadded", mrb_UI_uiBoxPadded, MRB_ARGS_ARG(uiBoxPadded_REQUIRED_ARGC, uiBoxPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiBoxSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiBoxSetPadded", mrb_UI_uiBoxSetPadded, MRB_ARGS_ARG(uiBoxSetPadded_REQUIRED_ARGC, uiBoxSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonOnClicked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiButtonOnClicked", mrb_UI_uiButtonOnClicked, MRB_ARGS_ARG(uiButtonOnClicked_REQUIRED_ARGC, uiButtonOnClicked_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiButtonSetText", mrb_UI_uiButtonSetText, MRB_ARGS_ARG(uiButtonSetText_REQUIRED_ARGC, uiButtonSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiButtonText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiButtonText", mrb_UI_uiButtonText, MRB_ARGS_ARG(uiButtonText_REQUIRED_ARGC, uiButtonText_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiCheckboxChecked", mrb_UI_uiCheckboxChecked, MRB_ARGS_ARG(uiCheckboxChecked_REQUIRED_ARGC, uiCheckboxChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxOnToggled_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiCheckboxOnToggled", mrb_UI_uiCheckboxOnToggled, MRB_ARGS_ARG(uiCheckboxOnToggled_REQUIRED_ARGC, uiCheckboxOnToggled_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxSetChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiCheckboxSetChecked", mrb_UI_uiCheckboxSetChecked, MRB_ARGS_ARG(uiCheckboxSetChecked_REQUIRED_ARGC, uiCheckboxSetChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiCheckboxSetText", mrb_UI_uiCheckboxSetText, MRB_ARGS_ARG(uiCheckboxSetText_REQUIRED_ARGC, uiCheckboxSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiCheckboxText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiCheckboxText", mrb_UI_uiCheckboxText, MRB_ARGS_ARG(uiCheckboxText_REQUIRED_ARGC, uiCheckboxText_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiColorButtonColor", mrb_UI_uiColorButtonColor, MRB_ARGS_ARG(uiColorButtonColor_REQUIRED_ARGC, uiColorButtonColor_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiColorButtonOnChanged", mrb_UI_uiColorButtonOnChanged, MRB_ARGS_ARG(uiColorButtonOnChanged_REQUIRED_ARGC, uiColorButtonOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiColorButtonSetColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiColorButtonSetColor", mrb_UI_uiColorButtonSetColor, MRB_ARGS_ARG(uiColorButtonSetColor_REQUIRED_ARGC, uiColorButtonSetColor_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiComboboxAppend", mrb_UI_uiComboboxAppend, MRB_ARGS_ARG(uiComboboxAppend_REQUIRED_ARGC, uiComboboxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxOnSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiComboboxOnSelected", mrb_UI_uiComboboxOnSelected, MRB_ARGS_ARG(uiComboboxOnSelected_REQUIRED_ARGC, uiComboboxOnSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiComboboxSelected", mrb_UI_uiComboboxSelected, MRB_ARGS_ARG(uiComboboxSelected_REQUIRED_ARGC, uiComboboxSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiComboboxSetSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiComboboxSetSelected", mrb_UI_uiComboboxSetSelected, MRB_ARGS_ARG(uiComboboxSetSelected_REQUIRED_ARGC, uiComboboxSetSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiControlDestroy_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlDestroy", mrb_UI_uiControlDestroy, MRB_ARGS_ARG(uiControlDestroy_REQUIRED_ARGC, uiControlDestroy_OPTIONAL_ARGC));
#endif
#if BIND_uiControlDisable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlDisable", mrb_UI_uiControlDisable, MRB_ARGS_ARG(uiControlDisable_REQUIRED_ARGC, uiControlDisable_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlEnable", mrb_UI_uiControlEnable, MRB_ARGS_ARG(uiControlEnable_REQUIRED_ARGC, uiControlEnable_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnabled_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlEnabled", mrb_UI_uiControlEnabled, MRB_ARGS_ARG(uiControlEnabled_REQUIRED_ARGC, uiControlEnabled_OPTIONAL_ARGC));
#endif
#if BIND_uiControlEnabledToUser_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlEnabledToUser", mrb_UI_uiControlEnabledToUser, MRB_ARGS_ARG(uiControlEnabledToUser_REQUIRED_ARGC, uiControlEnabledToUser_OPTIONAL_ARGC));
#endif
#if BIND_uiControlHandle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlHandle", mrb_UI_uiControlHandle, MRB_ARGS_ARG(uiControlHandle_REQUIRED_ARGC, uiControlHandle_OPTIONAL_ARGC));
#endif
#if BIND_uiControlHide_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlHide", mrb_UI_uiControlHide, MRB_ARGS_ARG(uiControlHide_REQUIRED_ARGC, uiControlHide_OPTIONAL_ARGC));
#endif
#if BIND_uiControlParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlParent", mrb_UI_uiControlParent, MRB_ARGS_ARG(uiControlParent_REQUIRED_ARGC, uiControlParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlSetParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlSetParent", mrb_UI_uiControlSetParent, MRB_ARGS_ARG(uiControlSetParent_REQUIRED_ARGC, uiControlSetParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlShow_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlShow", mrb_UI_uiControlShow, MRB_ARGS_ARG(uiControlShow_REQUIRED_ARGC, uiControlShow_OPTIONAL_ARGC));
#endif
#if BIND_uiControlToplevel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlToplevel", mrb_UI_uiControlToplevel, MRB_ARGS_ARG(uiControlToplevel_REQUIRED_ARGC, uiControlToplevel_OPTIONAL_ARGC));
#endif
#if BIND_uiControlVerifySetParent_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlVerifySetParent", mrb_UI_uiControlVerifySetParent, MRB_ARGS_ARG(uiControlVerifySetParent_REQUIRED_ARGC, uiControlVerifySetParent_OPTIONAL_ARGC));
#endif
#if BIND_uiControlVisible_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiControlVisible", mrb_UI_uiControlVisible, MRB_ARGS_ARG(uiControlVisible_REQUIRED_ARGC, uiControlVisible_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawClip_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawClip", mrb_UI_uiDrawClip, MRB_ARGS_ARG(uiDrawClip_REQUIRED_ARGC, uiDrawClip_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFill_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFill", mrb_UI_uiDrawFill, MRB_ARGS_ARG(uiDrawFill_REQUIRED_ARGC, uiDrawFill_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFontFamiliesFamily_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFontFamiliesFamily", mrb_UI_uiDrawFontFamiliesFamily, MRB_ARGS_ARG(uiDrawFontFamiliesFamily_REQUIRED_ARGC, uiDrawFontFamiliesFamily_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFontFamiliesNumFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFontFamiliesNumFamilies", mrb_UI_uiDrawFontFamiliesNumFamilies, MRB_ARGS_ARG(uiDrawFontFamiliesNumFamilies_REQUIRED_ARGC, uiDrawFontFamiliesNumFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeFontFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFreeFontFamilies", mrb_UI_uiDrawFreeFontFamilies, MRB_ARGS_ARG(uiDrawFreeFontFamilies_REQUIRED_ARGC, uiDrawFreeFontFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreePath_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFreePath", mrb_UI_uiDrawFreePath, MRB_ARGS_ARG(uiDrawFreePath_REQUIRED_ARGC, uiDrawFreePath_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeTextFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFreeTextFont", mrb_UI_uiDrawFreeTextFont, MRB_ARGS_ARG(uiDrawFreeTextFont_REQUIRED_ARGC, uiDrawFreeTextFont_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawFreeTextLayout_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawFreeTextLayout", mrb_UI_uiDrawFreeTextLayout, MRB_ARGS_ARG(uiDrawFreeTextLayout_REQUIRED_ARGC, uiDrawFreeTextLayout_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawListFontFamilies_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawListFontFamilies", mrb_UI_uiDrawListFontFamilies, MRB_ARGS_ARG(uiDrawListFontFamilies_REQUIRED_ARGC, uiDrawListFontFamilies_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawLoadClosestFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawLoadClosestFont", mrb_UI_uiDrawLoadClosestFont, MRB_ARGS_ARG(uiDrawLoadClosestFont_REQUIRED_ARGC, uiDrawLoadClosestFont_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixInvert_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixInvert", mrb_UI_uiDrawMatrixInvert, MRB_ARGS_ARG(uiDrawMatrixInvert_REQUIRED_ARGC, uiDrawMatrixInvert_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixInvertible_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixInvertible", mrb_UI_uiDrawMatrixInvertible, MRB_ARGS_ARG(uiDrawMatrixInvertible_REQUIRED_ARGC, uiDrawMatrixInvertible_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixMultiply_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixMultiply", mrb_UI_uiDrawMatrixMultiply, MRB_ARGS_ARG(uiDrawMatrixMultiply_REQUIRED_ARGC, uiDrawMatrixMultiply_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixRotate_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixRotate", mrb_UI_uiDrawMatrixRotate, MRB_ARGS_ARG(uiDrawMatrixRotate_REQUIRED_ARGC, uiDrawMatrixRotate_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixScale_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixScale", mrb_UI_uiDrawMatrixScale, MRB_ARGS_ARG(uiDrawMatrixScale_REQUIRED_ARGC, uiDrawMatrixScale_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixSetIdentity_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixSetIdentity", mrb_UI_uiDrawMatrixSetIdentity, MRB_ARGS_ARG(uiDrawMatrixSetIdentity_REQUIRED_ARGC, uiDrawMatrixSetIdentity_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixSkew_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixSkew", mrb_UI_uiDrawMatrixSkew, MRB_ARGS_ARG(uiDrawMatrixSkew_REQUIRED_ARGC, uiDrawMatrixSkew_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTransformPoint_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixTransformPoint", mrb_UI_uiDrawMatrixTransformPoint, MRB_ARGS_ARG(uiDrawMatrixTransformPoint_REQUIRED_ARGC, uiDrawMatrixTransformPoint_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTransformSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixTransformSize", mrb_UI_uiDrawMatrixTransformSize, MRB_ARGS_ARG(uiDrawMatrixTransformSize_REQUIRED_ARGC, uiDrawMatrixTransformSize_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawMatrixTranslate_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawMatrixTranslate", mrb_UI_uiDrawMatrixTranslate, MRB_ARGS_ARG(uiDrawMatrixTranslate_REQUIRED_ARGC, uiDrawMatrixTranslate_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawNewPath_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawNewPath", mrb_UI_uiDrawNewPath, MRB_ARGS_ARG(uiDrawNewPath_REQUIRED_ARGC, uiDrawNewPath_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawNewTextLayout_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawNewTextLayout", mrb_UI_uiDrawNewTextLayout, MRB_ARGS_ARG(uiDrawNewTextLayout_REQUIRED_ARGC, uiDrawNewTextLayout_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathAddRectangle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathAddRectangle", mrb_UI_uiDrawPathAddRectangle, MRB_ARGS_ARG(uiDrawPathAddRectangle_REQUIRED_ARGC, uiDrawPathAddRectangle_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathArcTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathArcTo", mrb_UI_uiDrawPathArcTo, MRB_ARGS_ARG(uiDrawPathArcTo_REQUIRED_ARGC, uiDrawPathArcTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathBezierTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathBezierTo", mrb_UI_uiDrawPathBezierTo, MRB_ARGS_ARG(uiDrawPathBezierTo_REQUIRED_ARGC, uiDrawPathBezierTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathCloseFigure_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathCloseFigure", mrb_UI_uiDrawPathCloseFigure, MRB_ARGS_ARG(uiDrawPathCloseFigure_REQUIRED_ARGC, uiDrawPathCloseFigure_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathEnd_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathEnd", mrb_UI_uiDrawPathEnd, MRB_ARGS_ARG(uiDrawPathEnd_REQUIRED_ARGC, uiDrawPathEnd_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathLineTo_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathLineTo", mrb_UI_uiDrawPathLineTo, MRB_ARGS_ARG(uiDrawPathLineTo_REQUIRED_ARGC, uiDrawPathLineTo_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathNewFigure_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathNewFigure", mrb_UI_uiDrawPathNewFigure, MRB_ARGS_ARG(uiDrawPathNewFigure_REQUIRED_ARGC, uiDrawPathNewFigure_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawPathNewFigureWithArc_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawPathNewFigureWithArc", mrb_UI_uiDrawPathNewFigureWithArc, MRB_ARGS_ARG(uiDrawPathNewFigureWithArc_REQUIRED_ARGC, uiDrawPathNewFigureWithArc_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawRestore_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawRestore", mrb_UI_uiDrawRestore, MRB_ARGS_ARG(uiDrawRestore_REQUIRED_ARGC, uiDrawRestore_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawSave_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawSave", mrb_UI_uiDrawSave, MRB_ARGS_ARG(uiDrawSave_REQUIRED_ARGC, uiDrawSave_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawStroke_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawStroke", mrb_UI_uiDrawStroke, MRB_ARGS_ARG(uiDrawStroke_REQUIRED_ARGC, uiDrawStroke_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawText", mrb_UI_uiDrawText, MRB_ARGS_ARG(uiDrawText_REQUIRED_ARGC, uiDrawText_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontDescribe_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextFontDescribe", mrb_UI_uiDrawTextFontDescribe, MRB_ARGS_ARG(uiDrawTextFontDescribe_REQUIRED_ARGC, uiDrawTextFontDescribe_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontGetMetrics_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextFontGetMetrics", mrb_UI_uiDrawTextFontGetMetrics, MRB_ARGS_ARG(uiDrawTextFontGetMetrics_REQUIRED_ARGC, uiDrawTextFontGetMetrics_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextFontHandle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextFontHandle", mrb_UI_uiDrawTextFontHandle, MRB_ARGS_ARG(uiDrawTextFontHandle_REQUIRED_ARGC, uiDrawTextFontHandle_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutExtents_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextLayoutExtents", mrb_UI_uiDrawTextLayoutExtents, MRB_ARGS_ARG(uiDrawTextLayoutExtents_REQUIRED_ARGC, uiDrawTextLayoutExtents_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutSetColor_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextLayoutSetColor", mrb_UI_uiDrawTextLayoutSetColor, MRB_ARGS_ARG(uiDrawTextLayoutSetColor_REQUIRED_ARGC, uiDrawTextLayoutSetColor_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTextLayoutSetWidth_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTextLayoutSetWidth", mrb_UI_uiDrawTextLayoutSetWidth, MRB_ARGS_ARG(uiDrawTextLayoutSetWidth_REQUIRED_ARGC, uiDrawTextLayoutSetWidth_OPTIONAL_ARGC));
#endif
#if BIND_uiDrawTransform_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiDrawTransform", mrb_UI_uiDrawTransform, MRB_ARGS_ARG(uiDrawTransform_REQUIRED_ARGC, uiDrawTransform_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEditableComboboxAppend", mrb_UI_uiEditableComboboxAppend, MRB_ARGS_ARG(uiEditableComboboxAppend_REQUIRED_ARGC, uiEditableComboboxAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEditableComboboxOnChanged", mrb_UI_uiEditableComboboxOnChanged, MRB_ARGS_ARG(uiEditableComboboxOnChanged_REQUIRED_ARGC, uiEditableComboboxOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEditableComboboxSetText", mrb_UI_uiEditableComboboxSetText, MRB_ARGS_ARG(uiEditableComboboxSetText_REQUIRED_ARGC, uiEditableComboboxSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiEditableComboboxText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEditableComboboxText", mrb_UI_uiEditableComboboxText, MRB_ARGS_ARG(uiEditableComboboxText_REQUIRED_ARGC, uiEditableComboboxText_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEntryOnChanged", mrb_UI_uiEntryOnChanged, MRB_ARGS_ARG(uiEntryOnChanged_REQUIRED_ARGC, uiEntryOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEntryReadOnly", mrb_UI_uiEntryReadOnly, MRB_ARGS_ARG(uiEntryReadOnly_REQUIRED_ARGC, uiEntryReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiEntrySetReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEntrySetReadOnly", mrb_UI_uiEntrySetReadOnly, MRB_ARGS_ARG(uiEntrySetReadOnly_REQUIRED_ARGC, uiEntrySetReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiEntrySetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEntrySetText", mrb_UI_uiEntrySetText, MRB_ARGS_ARG(uiEntrySetText_REQUIRED_ARGC, uiEntrySetText_OPTIONAL_ARGC));
#endif
#if BIND_uiEntryText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiEntryText", mrb_UI_uiEntryText, MRB_ARGS_ARG(uiEntryText_REQUIRED_ARGC, uiEntryText_OPTIONAL_ARGC));
#endif
#if BIND_uiFontButtonFont_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFontButtonFont", mrb_UI_uiFontButtonFont, MRB_ARGS_ARG(uiFontButtonFont_REQUIRED_ARGC, uiFontButtonFont_OPTIONAL_ARGC));
#endif
#if BIND_uiFontButtonOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFontButtonOnChanged", mrb_UI_uiFontButtonOnChanged, MRB_ARGS_ARG(uiFontButtonOnChanged_REQUIRED_ARGC, uiFontButtonOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiFormAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFormAppend", mrb_UI_uiFormAppend, MRB_ARGS_ARG(uiFormAppend_REQUIRED_ARGC, uiFormAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiFormDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFormDelete", mrb_UI_uiFormDelete, MRB_ARGS_ARG(uiFormDelete_REQUIRED_ARGC, uiFormDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiFormPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFormPadded", mrb_UI_uiFormPadded, MRB_ARGS_ARG(uiFormPadded_REQUIRED_ARGC, uiFormPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiFormSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFormSetPadded", mrb_UI_uiFormSetPadded, MRB_ARGS_ARG(uiFormSetPadded_REQUIRED_ARGC, uiFormSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeControl_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFreeControl", mrb_UI_uiFreeControl, MRB_ARGS_ARG(uiFreeControl_REQUIRED_ARGC, uiFreeControl_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeInitError_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFreeInitError", mrb_UI_uiFreeInitError, MRB_ARGS_ARG(uiFreeInitError_REQUIRED_ARGC, uiFreeInitError_OPTIONAL_ARGC));
#endif
#if BIND_uiFreeText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiFreeText", mrb_UI_uiFreeText, MRB_ARGS_ARG(uiFreeText_REQUIRED_ARGC, uiFreeText_OPTIONAL_ARGC));
#endif
#if BIND_uiGridAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGridAppend", mrb_UI_uiGridAppend, MRB_ARGS_ARG(uiGridAppend_REQUIRED_ARGC, uiGridAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiGridInsertAt_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGridInsertAt", mrb_UI_uiGridInsertAt, MRB_ARGS_ARG(uiGridInsertAt_REQUIRED_ARGC, uiGridInsertAt_OPTIONAL_ARGC));
#endif
#if BIND_uiGridPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGridPadded", mrb_UI_uiGridPadded, MRB_ARGS_ARG(uiGridPadded_REQUIRED_ARGC, uiGridPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiGridSetPadded_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGridSetPadded", mrb_UI_uiGridSetPadded, MRB_ARGS_ARG(uiGridSetPadded_REQUIRED_ARGC, uiGridSetPadded_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGroupMargined", mrb_UI_uiGroupMargined, MRB_ARGS_ARG(uiGroupMargined_REQUIRED_ARGC, uiGroupMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetChild_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGroupSetChild", mrb_UI_uiGroupSetChild, MRB_ARGS_ARG(uiGroupSetChild_REQUIRED_ARGC, uiGroupSetChild_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGroupSetMargined", mrb_UI_uiGroupSetMargined, MRB_ARGS_ARG(uiGroupSetMargined_REQUIRED_ARGC, uiGroupSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupSetTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGroupSetTitle", mrb_UI_uiGroupSetTitle, MRB_ARGS_ARG(uiGroupSetTitle_REQUIRED_ARGC, uiGroupSetTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiGroupTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiGroupTitle", mrb_UI_uiGroupTitle, MRB_ARGS_ARG(uiGroupTitle_REQUIRED_ARGC, uiGroupTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiInit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiInit", mrb_UI_uiInit, MRB_ARGS_ARG(uiInit_REQUIRED_ARGC, uiInit_OPTIONAL_ARGC));
#endif
#if BIND_uiLabelSetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiLabelSetText", mrb_UI_uiLabelSetText, MRB_ARGS_ARG(uiLabelSetText_REQUIRED_ARGC, uiLabelSetText_OPTIONAL_ARGC));
#endif
#if BIND_uiLabelText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiLabelText", mrb_UI_uiLabelText, MRB_ARGS_ARG(uiLabelText_REQUIRED_ARGC, uiLabelText_OPTIONAL_ARGC));
#endif
#if BIND_uiMain_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMain", mrb_UI_uiMain, MRB_ARGS_ARG(uiMain_REQUIRED_ARGC, uiMain_OPTIONAL_ARGC));
#endif
#if BIND_uiMainStep_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMainStep", mrb_UI_uiMainStep, MRB_ARGS_ARG(uiMainStep_REQUIRED_ARGC, uiMainStep_OPTIONAL_ARGC));
#endif
#if BIND_uiMainSteps_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMainSteps", mrb_UI_uiMainSteps, MRB_ARGS_ARG(uiMainSteps_REQUIRED_ARGC, uiMainSteps_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendAboutItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendAboutItem", mrb_UI_uiMenuAppendAboutItem, MRB_ARGS_ARG(uiMenuAppendAboutItem_REQUIRED_ARGC, uiMenuAppendAboutItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendCheckItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendCheckItem", mrb_UI_uiMenuAppendCheckItem, MRB_ARGS_ARG(uiMenuAppendCheckItem_REQUIRED_ARGC, uiMenuAppendCheckItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendItem", mrb_UI_uiMenuAppendItem, MRB_ARGS_ARG(uiMenuAppendItem_REQUIRED_ARGC, uiMenuAppendItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendPreferencesItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendPreferencesItem", mrb_UI_uiMenuAppendPreferencesItem, MRB_ARGS_ARG(uiMenuAppendPreferencesItem_REQUIRED_ARGC, uiMenuAppendPreferencesItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendQuitItem_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendQuitItem", mrb_UI_uiMenuAppendQuitItem, MRB_ARGS_ARG(uiMenuAppendQuitItem_REQUIRED_ARGC, uiMenuAppendQuitItem_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuAppendSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuAppendSeparator", mrb_UI_uiMenuAppendSeparator, MRB_ARGS_ARG(uiMenuAppendSeparator_REQUIRED_ARGC, uiMenuAppendSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuItemChecked", mrb_UI_uiMenuItemChecked, MRB_ARGS_ARG(uiMenuItemChecked_REQUIRED_ARGC, uiMenuItemChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemDisable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuItemDisable", mrb_UI_uiMenuItemDisable, MRB_ARGS_ARG(uiMenuItemDisable_REQUIRED_ARGC, uiMenuItemDisable_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemEnable_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuItemEnable", mrb_UI_uiMenuItemEnable, MRB_ARGS_ARG(uiMenuItemEnable_REQUIRED_ARGC, uiMenuItemEnable_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemOnClicked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuItemOnClicked", mrb_UI_uiMenuItemOnClicked, MRB_ARGS_ARG(uiMenuItemOnClicked_REQUIRED_ARGC, uiMenuItemOnClicked_OPTIONAL_ARGC));
#endif
#if BIND_uiMenuItemSetChecked_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMenuItemSetChecked", mrb_UI_uiMenuItemSetChecked, MRB_ARGS_ARG(uiMenuItemSetChecked_REQUIRED_ARGC, uiMenuItemSetChecked_OPTIONAL_ARGC));
#endif
#if BIND_uiMsgBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMsgBox", mrb_UI_uiMsgBox, MRB_ARGS_ARG(uiMsgBox_REQUIRED_ARGC, uiMsgBox_OPTIONAL_ARGC));
#endif
#if BIND_uiMsgBoxError_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMsgBoxError", mrb_UI_uiMsgBoxError, MRB_ARGS_ARG(uiMsgBoxError_REQUIRED_ARGC, uiMsgBoxError_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntryAppend", mrb_UI_uiMultilineEntryAppend, MRB_ARGS_ARG(uiMultilineEntryAppend_REQUIRED_ARGC, uiMultilineEntryAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntryOnChanged", mrb_UI_uiMultilineEntryOnChanged, MRB_ARGS_ARG(uiMultilineEntryOnChanged_REQUIRED_ARGC, uiMultilineEntryOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntryReadOnly", mrb_UI_uiMultilineEntryReadOnly, MRB_ARGS_ARG(uiMultilineEntryReadOnly_REQUIRED_ARGC, uiMultilineEntryReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntrySetReadOnly_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntrySetReadOnly", mrb_UI_uiMultilineEntrySetReadOnly, MRB_ARGS_ARG(uiMultilineEntrySetReadOnly_REQUIRED_ARGC, uiMultilineEntrySetReadOnly_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntrySetText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntrySetText", mrb_UI_uiMultilineEntrySetText, MRB_ARGS_ARG(uiMultilineEntrySetText_REQUIRED_ARGC, uiMultilineEntrySetText_OPTIONAL_ARGC));
#endif
#if BIND_uiMultilineEntryText_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiMultilineEntryText", mrb_UI_uiMultilineEntryText, MRB_ARGS_ARG(uiMultilineEntryText_REQUIRED_ARGC, uiMultilineEntryText_OPTIONAL_ARGC));
#endif
#if BIND_uiNewArea_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewArea", mrb_UI_uiNewArea, MRB_ARGS_ARG(uiNewArea_REQUIRED_ARGC, uiNewArea_OPTIONAL_ARGC));
#endif
#if BIND_uiNewButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewButton", mrb_UI_uiNewButton, MRB_ARGS_ARG(uiNewButton_REQUIRED_ARGC, uiNewButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewCheckbox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewCheckbox", mrb_UI_uiNewCheckbox, MRB_ARGS_ARG(uiNewCheckbox_REQUIRED_ARGC, uiNewCheckbox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewColorButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewColorButton", mrb_UI_uiNewColorButton, MRB_ARGS_ARG(uiNewColorButton_REQUIRED_ARGC, uiNewColorButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewCombobox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewCombobox", mrb_UI_uiNewCombobox, MRB_ARGS_ARG(uiNewCombobox_REQUIRED_ARGC, uiNewCombobox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewDatePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewDatePicker", mrb_UI_uiNewDatePicker, MRB_ARGS_ARG(uiNewDatePicker_REQUIRED_ARGC, uiNewDatePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewDateTimePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewDateTimePicker", mrb_UI_uiNewDateTimePicker, MRB_ARGS_ARG(uiNewDateTimePicker_REQUIRED_ARGC, uiNewDateTimePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewEditableCombobox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewEditableCombobox", mrb_UI_uiNewEditableCombobox, MRB_ARGS_ARG(uiNewEditableCombobox_REQUIRED_ARGC, uiNewEditableCombobox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewEntry", mrb_UI_uiNewEntry, MRB_ARGS_ARG(uiNewEntry_REQUIRED_ARGC, uiNewEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewFontButton_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewFontButton", mrb_UI_uiNewFontButton, MRB_ARGS_ARG(uiNewFontButton_REQUIRED_ARGC, uiNewFontButton_OPTIONAL_ARGC));
#endif
#if BIND_uiNewForm_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewForm", mrb_UI_uiNewForm, MRB_ARGS_ARG(uiNewForm_REQUIRED_ARGC, uiNewForm_OPTIONAL_ARGC));
#endif
#if BIND_uiNewGrid_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewGrid", mrb_UI_uiNewGrid, MRB_ARGS_ARG(uiNewGrid_REQUIRED_ARGC, uiNewGrid_OPTIONAL_ARGC));
#endif
#if BIND_uiNewGroup_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewGroup", mrb_UI_uiNewGroup, MRB_ARGS_ARG(uiNewGroup_REQUIRED_ARGC, uiNewGroup_OPTIONAL_ARGC));
#endif
#if BIND_uiNewHorizontalBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewHorizontalBox", mrb_UI_uiNewHorizontalBox, MRB_ARGS_ARG(uiNewHorizontalBox_REQUIRED_ARGC, uiNewHorizontalBox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewHorizontalSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewHorizontalSeparator", mrb_UI_uiNewHorizontalSeparator, MRB_ARGS_ARG(uiNewHorizontalSeparator_REQUIRED_ARGC, uiNewHorizontalSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiNewLabel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewLabel", mrb_UI_uiNewLabel, MRB_ARGS_ARG(uiNewLabel_REQUIRED_ARGC, uiNewLabel_OPTIONAL_ARGC));
#endif
#if BIND_uiNewMenu_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewMenu", mrb_UI_uiNewMenu, MRB_ARGS_ARG(uiNewMenu_REQUIRED_ARGC, uiNewMenu_OPTIONAL_ARGC));
#endif
#if BIND_uiNewMultilineEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewMultilineEntry", mrb_UI_uiNewMultilineEntry, MRB_ARGS_ARG(uiNewMultilineEntry_REQUIRED_ARGC, uiNewMultilineEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewNonWrappingMultilineEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewNonWrappingMultilineEntry", mrb_UI_uiNewNonWrappingMultilineEntry, MRB_ARGS_ARG(uiNewNonWrappingMultilineEntry_REQUIRED_ARGC, uiNewNonWrappingMultilineEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewPasswordEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewPasswordEntry", mrb_UI_uiNewPasswordEntry, MRB_ARGS_ARG(uiNewPasswordEntry_REQUIRED_ARGC, uiNewPasswordEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewProgressBar_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewProgressBar", mrb_UI_uiNewProgressBar, MRB_ARGS_ARG(uiNewProgressBar_REQUIRED_ARGC, uiNewProgressBar_OPTIONAL_ARGC));
#endif
#if BIND_uiNewRadioButtons_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewRadioButtons", mrb_UI_uiNewRadioButtons, MRB_ARGS_ARG(uiNewRadioButtons_REQUIRED_ARGC, uiNewRadioButtons_OPTIONAL_ARGC));
#endif
#if BIND_uiNewScrollingArea_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewScrollingArea", mrb_UI_uiNewScrollingArea, MRB_ARGS_ARG(uiNewScrollingArea_REQUIRED_ARGC, uiNewScrollingArea_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSearchEntry_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewSearchEntry", mrb_UI_uiNewSearchEntry, MRB_ARGS_ARG(uiNewSearchEntry_REQUIRED_ARGC, uiNewSearchEntry_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSlider_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewSlider", mrb_UI_uiNewSlider, MRB_ARGS_ARG(uiNewSlider_REQUIRED_ARGC, uiNewSlider_OPTIONAL_ARGC));
#endif
#if BIND_uiNewSpinbox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewSpinbox", mrb_UI_uiNewSpinbox, MRB_ARGS_ARG(uiNewSpinbox_REQUIRED_ARGC, uiNewSpinbox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewTab_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewTab", mrb_UI_uiNewTab, MRB_ARGS_ARG(uiNewTab_REQUIRED_ARGC, uiNewTab_OPTIONAL_ARGC));
#endif
#if BIND_uiNewTimePicker_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewTimePicker", mrb_UI_uiNewTimePicker, MRB_ARGS_ARG(uiNewTimePicker_REQUIRED_ARGC, uiNewTimePicker_OPTIONAL_ARGC));
#endif
#if BIND_uiNewVerticalBox_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewVerticalBox", mrb_UI_uiNewVerticalBox, MRB_ARGS_ARG(uiNewVerticalBox_REQUIRED_ARGC, uiNewVerticalBox_OPTIONAL_ARGC));
#endif
#if BIND_uiNewVerticalSeparator_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewVerticalSeparator", mrb_UI_uiNewVerticalSeparator, MRB_ARGS_ARG(uiNewVerticalSeparator_REQUIRED_ARGC, uiNewVerticalSeparator_OPTIONAL_ARGC));
#endif
#if BIND_uiNewWindow_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiNewWindow", mrb_UI_uiNewWindow, MRB_ARGS_ARG(uiNewWindow_REQUIRED_ARGC, uiNewWindow_OPTIONAL_ARGC));
#endif
#if BIND_uiOnShouldQuit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiOnShouldQuit", mrb_UI_uiOnShouldQuit, MRB_ARGS_ARG(uiOnShouldQuit_REQUIRED_ARGC, uiOnShouldQuit_OPTIONAL_ARGC));
#endif
#if BIND_uiOpenFile_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiOpenFile", mrb_UI_uiOpenFile, MRB_ARGS_ARG(uiOpenFile_REQUIRED_ARGC, uiOpenFile_OPTIONAL_ARGC));
#endif
#if BIND_uiProgressBarSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiProgressBarSetValue", mrb_UI_uiProgressBarSetValue, MRB_ARGS_ARG(uiProgressBarSetValue_REQUIRED_ARGC, uiProgressBarSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiProgressBarValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiProgressBarValue", mrb_UI_uiProgressBarValue, MRB_ARGS_ARG(uiProgressBarValue_REQUIRED_ARGC, uiProgressBarValue_OPTIONAL_ARGC));
#endif
#if BIND_uiQueueMain_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiQueueMain", mrb_UI_uiQueueMain, MRB_ARGS_ARG(uiQueueMain_REQUIRED_ARGC, uiQueueMain_OPTIONAL_ARGC));
#endif
#if BIND_uiQuit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiQuit", mrb_UI_uiQuit, MRB_ARGS_ARG(uiQuit_REQUIRED_ARGC, uiQuit_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiRadioButtonsAppend", mrb_UI_uiRadioButtonsAppend, MRB_ARGS_ARG(uiRadioButtonsAppend_REQUIRED_ARGC, uiRadioButtonsAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsOnSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiRadioButtonsOnSelected", mrb_UI_uiRadioButtonsOnSelected, MRB_ARGS_ARG(uiRadioButtonsOnSelected_REQUIRED_ARGC, uiRadioButtonsOnSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiRadioButtonsSelected", mrb_UI_uiRadioButtonsSelected, MRB_ARGS_ARG(uiRadioButtonsSelected_REQUIRED_ARGC, uiRadioButtonsSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiRadioButtonsSetSelected_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiRadioButtonsSetSelected", mrb_UI_uiRadioButtonsSetSelected, MRB_ARGS_ARG(uiRadioButtonsSetSelected_REQUIRED_ARGC, uiRadioButtonsSetSelected_OPTIONAL_ARGC));
#endif
#if BIND_uiSaveFile_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSaveFile", mrb_UI_uiSaveFile, MRB_ARGS_ARG(uiSaveFile_REQUIRED_ARGC, uiSaveFile_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSliderOnChanged", mrb_UI_uiSliderOnChanged, MRB_ARGS_ARG(uiSliderOnChanged_REQUIRED_ARGC, uiSliderOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSliderSetValue", mrb_UI_uiSliderSetValue, MRB_ARGS_ARG(uiSliderSetValue_REQUIRED_ARGC, uiSliderSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSliderValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSliderValue", mrb_UI_uiSliderValue, MRB_ARGS_ARG(uiSliderValue_REQUIRED_ARGC, uiSliderValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxOnChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSpinboxOnChanged", mrb_UI_uiSpinboxOnChanged, MRB_ARGS_ARG(uiSpinboxOnChanged_REQUIRED_ARGC, uiSpinboxOnChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxSetValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSpinboxSetValue", mrb_UI_uiSpinboxSetValue, MRB_ARGS_ARG(uiSpinboxSetValue_REQUIRED_ARGC, uiSpinboxSetValue_OPTIONAL_ARGC));
#endif
#if BIND_uiSpinboxValue_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiSpinboxValue", mrb_UI_uiSpinboxValue, MRB_ARGS_ARG(uiSpinboxValue_REQUIRED_ARGC, uiSpinboxValue_OPTIONAL_ARGC));
#endif
#if BIND_uiTabAppend_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabAppend", mrb_UI_uiTabAppend, MRB_ARGS_ARG(uiTabAppend_REQUIRED_ARGC, uiTabAppend_OPTIONAL_ARGC));
#endif
#if BIND_uiTabDelete_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabDelete", mrb_UI_uiTabDelete, MRB_ARGS_ARG(uiTabDelete_REQUIRED_ARGC, uiTabDelete_OPTIONAL_ARGC));
#endif
#if BIND_uiTabInsertAt_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabInsertAt", mrb_UI_uiTabInsertAt, MRB_ARGS_ARG(uiTabInsertAt_REQUIRED_ARGC, uiTabInsertAt_OPTIONAL_ARGC));
#endif
#if BIND_uiTabMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabMargined", mrb_UI_uiTabMargined, MRB_ARGS_ARG(uiTabMargined_REQUIRED_ARGC, uiTabMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiTabNumPages_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabNumPages", mrb_UI_uiTabNumPages, MRB_ARGS_ARG(uiTabNumPages_REQUIRED_ARGC, uiTabNumPages_OPTIONAL_ARGC));
#endif
#if BIND_uiTabSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiTabSetMargined", mrb_UI_uiTabSetMargined, MRB_ARGS_ARG(uiTabSetMargined_REQUIRED_ARGC, uiTabSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiUninit_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiUninit", mrb_UI_uiUninit, MRB_ARGS_ARG(uiUninit_REQUIRED_ARGC, uiUninit_OPTIONAL_ARGC));
#endif
#if BIND_uiUserBugCannotSetParentOnToplevel_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiUserBugCannotSetParentOnToplevel", mrb_UI_uiUserBugCannotSetParentOnToplevel, MRB_ARGS_ARG(uiUserBugCannotSetParentOnToplevel_REQUIRED_ARGC, uiUserBugCannotSetParentOnToplevel_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowBorderless_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowBorderless", mrb_UI_uiWindowBorderless, MRB_ARGS_ARG(uiWindowBorderless_REQUIRED_ARGC, uiWindowBorderless_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowContentSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowContentSize", mrb_UI_uiWindowContentSize, MRB_ARGS_ARG(uiWindowContentSize_REQUIRED_ARGC, uiWindowContentSize_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowFullscreen_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowFullscreen", mrb_UI_uiWindowFullscreen, MRB_ARGS_ARG(uiWindowFullscreen_REQUIRED_ARGC, uiWindowFullscreen_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowMargined", mrb_UI_uiWindowMargined, MRB_ARGS_ARG(uiWindowMargined_REQUIRED_ARGC, uiWindowMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowOnClosing_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowOnClosing", mrb_UI_uiWindowOnClosing, MRB_ARGS_ARG(uiWindowOnClosing_REQUIRED_ARGC, uiWindowOnClosing_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowOnContentSizeChanged_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowOnContentSizeChanged", mrb_UI_uiWindowOnContentSizeChanged, MRB_ARGS_ARG(uiWindowOnContentSizeChanged_REQUIRED_ARGC, uiWindowOnContentSizeChanged_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetBorderless_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetBorderless", mrb_UI_uiWindowSetBorderless, MRB_ARGS_ARG(uiWindowSetBorderless_REQUIRED_ARGC, uiWindowSetBorderless_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetChild_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetChild", mrb_UI_uiWindowSetChild, MRB_ARGS_ARG(uiWindowSetChild_REQUIRED_ARGC, uiWindowSetChild_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetContentSize_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetContentSize", mrb_UI_uiWindowSetContentSize, MRB_ARGS_ARG(uiWindowSetContentSize_REQUIRED_ARGC, uiWindowSetContentSize_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetFullscreen_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetFullscreen", mrb_UI_uiWindowSetFullscreen, MRB_ARGS_ARG(uiWindowSetFullscreen_REQUIRED_ARGC, uiWindowSetFullscreen_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetMargined_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetMargined", mrb_UI_uiWindowSetMargined, MRB_ARGS_ARG(uiWindowSetMargined_REQUIRED_ARGC, uiWindowSetMargined_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowSetTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowSetTitle", mrb_UI_uiWindowSetTitle, MRB_ARGS_ARG(uiWindowSetTitle_REQUIRED_ARGC, uiWindowSetTitle_OPTIONAL_ARGC));
#endif
#if BIND_uiWindowTitle_FUNCTION
  mrb_define_class_method(mrb, UI_module, "uiWindowTitle", mrb_UI_uiWindowTitle, MRB_ARGS_ARG(uiWindowTitle_REQUIRED_ARGC, uiWindowTitle_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */

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
