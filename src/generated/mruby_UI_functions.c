/**
 * uiControl *
 * uiAllocControl(int n, uint32_t OSsig, uint32_t typesig, const char * typenamestr)
 */
#define mruby_UI_allocControl
#define uiAllocControl_REQUIRED_ARGC 4
#define uiAllocControl_OPTIONAL_ARGC 0
mrb_value
mrb_UI_allocControl(mrb_state* mrb, mrb_value self)
{

  mrb_int native_n;
  mrb_int native_OSsig;
  mrb_int native_typesig;
  char * native_typenamestr = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "iiiz", &native_n, &native_OSsig, &native_typesig, &native_typenamestr);

  /* Invocation */
  uiControl * native_return_value = uiAllocControl(native_n, native_OSsig, native_typesig, native_typenamestr);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiControl(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiAreaBeginUserWindowMove(uiArea * a)
 */
#define mruby_UI_areaBeginUserWindowMove
#define uiAreaBeginUserWindowMove_REQUIRED_ARGC 1
#define uiAreaBeginUserWindowMove_OPTIONAL_ARGC 0
mrb_value
mrb_UI_areaBeginUserWindowMove(mrb_state* mrb, mrb_value self)
{

  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, UI_Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_uiArea(a));

  /* Invocation */
  uiAreaBeginUserWindowMove(native_a);

  return mrb_nil_value();
}

/**
 * void
 * uiAreaBeginUserWindowResize(uiArea * a, uiWindowResizeEdge edge)
 */
#define mruby_UI_areaBeginUserWindowResize
#define uiAreaBeginUserWindowResize_REQUIRED_ARGC 2
#define uiAreaBeginUserWindowResize_OPTIONAL_ARGC 0
mrb_value
mrb_UI_areaBeginUserWindowResize(mrb_state* mrb, mrb_value self)
{

  mrb_value a;
  mrb_int native_edge;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &a, &native_edge);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, UI_Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_uiArea(a));

  /* Invocation */
  uiAreaBeginUserWindowResize(native_a, native_edge);

  return mrb_nil_value();
}

/**
 * void
 * uiAreaQueueRedrawAll(uiArea * a)
 */
#define mruby_UI_areaQueueRedrawAll
#define uiAreaQueueRedrawAll_REQUIRED_ARGC 1
#define uiAreaQueueRedrawAll_OPTIONAL_ARGC 0
mrb_value
mrb_UI_areaQueueRedrawAll(mrb_state* mrb, mrb_value self)
{

  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, UI_Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_uiArea(a));

  /* Invocation */
  uiAreaQueueRedrawAll(native_a);

  return mrb_nil_value();
}

/**
 * void
 * uiAreaScrollTo(uiArea * a, double x, double y, double width, double height)
 */
#define mruby_UI_areaScrollTo
#define uiAreaScrollTo_REQUIRED_ARGC 5
#define uiAreaScrollTo_OPTIONAL_ARGC 0
mrb_value
mrb_UI_areaScrollTo(mrb_state* mrb, mrb_value self)
{

  mrb_value a;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_width;
  mrb_float native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &a, &native_x, &native_y, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, UI_Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_uiArea(a));

  /* Invocation */
  uiAreaScrollTo(native_a, native_x, native_y, native_width, native_height);

  return mrb_nil_value();
}

/**
 * void
 * uiAreaSetSize(uiArea * a, int width, int height)
 */
#define mruby_UI_areaSetSize
#define uiAreaSetSize_REQUIRED_ARGC 3
#define uiAreaSetSize_OPTIONAL_ARGC 0
mrb_value
mrb_UI_areaSetSize(mrb_state* mrb, mrb_value self)
{

  mrb_value a;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &a, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, UI_Area_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Area expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiArea * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_uiArea(a));

  /* Invocation */
  uiAreaSetSize(native_a, native_width, native_height);

  return mrb_nil_value();
}

/**
 * void
 * uiBoxAppend(uiBox * b, uiControl * child, int stretchy)
 */
#define mruby_UI_boxAppend
#define uiBoxAppend_REQUIRED_ARGC 3
#define uiBoxAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_boxAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  mrb_value child;
  mrb_int native_stretchy;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &b, &child, &native_stretchy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiBox(b));

  uiControl * native_child = (mrb_nil_p(child) ? NULL : mruby_UI_unbox_uiControl(child));

  /* Invocation */
  uiBoxAppend(native_b, native_child, native_stretchy);

  return mrb_nil_value();
}

/**
 * void
 * uiBoxDelete(uiBox * b, int index)
 */
#define mruby_UI_boxDelete
#define uiBoxDelete_REQUIRED_ARGC 2
#define uiBoxDelete_OPTIONAL_ARGC 0
mrb_value
mrb_UI_boxDelete(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &b, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiBox(b));

  /* Invocation */
  uiBoxDelete(native_b, native_index);

  return mrb_nil_value();
}

/**
 * int
 * uiBoxPadded(uiBox * b)
 */
#define mruby_UI_boxPadded
#define uiBoxPadded_REQUIRED_ARGC 1
#define uiBoxPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_boxPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiBox(b));

  /* Invocation */
  int native_return_value = uiBoxPadded(native_b);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiBoxSetPadded(uiBox * b, int padded)
 */
#define mruby_UI_boxSetPadded
#define uiBoxSetPadded_REQUIRED_ARGC 2
#define uiBoxSetPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_boxSetPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &b, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Box_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Box expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiBox * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiBox(b));

  /* Invocation */
  uiBoxSetPadded(native_b, native_padded);

  return mrb_nil_value();
}

///**
// * void
// * uiButtonOnClicked(uiButton * b, void (*)(uiButton *, void *) f, void * data)
// */
//#define mruby_UI_buttonOnClicked
//#define uiButtonOnClicked_REQUIRED_ARGC 3
//#define uiButtonOnClicked_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_buttonOnClicked(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value b;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &b, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, b, UI_Button_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiButton_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiButton(b));
//
//  void (*native_f)(uiButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiButton_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiButtonOnClicked(native_b, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiButtonSetText(uiButton * b, const char * text)
 */
#define mruby_UI_buttonSetText
#define uiButtonSetText_REQUIRED_ARGC 2
#define uiButtonSetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_buttonSetText(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &b, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiButton(b));

  /* Invocation */
  uiButtonSetText(native_b, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiButtonText(uiButton * b)
 */
#define mruby_UI_buttonText
#define uiButtonText_REQUIRED_ARGC 1
#define uiButtonText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_buttonText(mrb_state* mrb, mrb_value self)
{

  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_Button_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Button expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiButton(b));

  /* Invocation */
  char * native_return_value = uiButtonText(native_b);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * int
 * uiCheckboxChecked(uiCheckbox * c)
 */
#define mruby_UI_checkboxChecked
#define uiCheckboxChecked_REQUIRED_ARGC 1
#define uiCheckboxChecked_OPTIONAL_ARGC 0
mrb_value
mrb_UI_checkboxChecked(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));

  /* Invocation */
  int native_return_value = uiCheckboxChecked(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

///**
// * void
// * uiCheckboxOnToggled(uiCheckbox * c, void (*)(uiCheckbox *, void *) f, void * data)
// */
//#define mruby_UI_checkboxOnToggled
//#define uiCheckboxOnToggled_REQUIRED_ARGC 3
//#define uiCheckboxOnToggled_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_checkboxOnToggled(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value c;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &c, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiCheckbox_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));
//
//  void (*native_f)(uiCheckbox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiCheckbox_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiCheckboxOnToggled(native_c, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiCheckboxSetChecked(uiCheckbox * c, int checked)
 */
#define mruby_UI_checkboxSetChecked
#define uiCheckboxSetChecked_REQUIRED_ARGC 2
#define uiCheckboxSetChecked_OPTIONAL_ARGC 0
mrb_value
mrb_UI_checkboxSetChecked(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_int native_checked;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &c, &native_checked);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));

  /* Invocation */
  uiCheckboxSetChecked(native_c, native_checked);

  return mrb_nil_value();
}

/**
 * void
 * uiCheckboxSetText(uiCheckbox * c, const char * text)
 */
#define mruby_UI_checkboxSetText
#define uiCheckboxSetText_REQUIRED_ARGC 2
#define uiCheckboxSetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_checkboxSetText(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));

  /* Invocation */
  uiCheckboxSetText(native_c, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiCheckboxText(uiCheckbox * c)
 */
#define mruby_UI_checkboxText
#define uiCheckboxText_REQUIRED_ARGC 1
#define uiCheckboxText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_checkboxText(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Checkbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Checkbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCheckbox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCheckbox(c));

  /* Invocation */
  char * native_return_value = uiCheckboxText(native_c);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiColorButtonColor(uiColorButton * b, double * r, double * g, double * bl, double * a)
 */
#define mruby_UI_colorButtonColor
#define uiColorButtonColor_REQUIRED_ARGC 5
#define uiColorButtonColor_OPTIONAL_ARGC 0
mrb_value
mrb_UI_colorButtonColor(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  mrb_value r;
  mrb_value g;
  mrb_value bl;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &b, &r, &g, &bl, &a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, r, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, g, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, bl, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, a, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiColorButton(b));

  void * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_void_ptr(r));

  void * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_void_ptr(g));

  void * native_bl = (mrb_nil_p(bl) ? NULL : mruby_UI_unbox_void_ptr(bl));

  void * native_a = (mrb_nil_p(a) ? NULL : mruby_UI_unbox_void_ptr(a));

  /* Invocation */
  uiColorButtonColor(native_b, native_r, native_g, native_bl, native_a);

  return mrb_nil_value();
}

///**
// * void
// * uiColorButtonOnChanged(uiColorButton * b, void (*)(uiColorButton *, void *) f, void * data)
// */
//#define mruby_UI_colorButtonOnChanged
//#define uiColorButtonOnChanged_REQUIRED_ARGC 3
//#define uiColorButtonOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_colorButtonOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value b;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &b, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, b, UI_ColorButton_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiColorButton_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiColorButton(b));
//
//  void (*native_f)(uiColorButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiColorButton_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiColorButtonOnChanged(native_b, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiColorButtonSetColor(uiColorButton * b, double r, double g, double bl, double a)
 */
#define mruby_UI_colorButtonSetColor
#define uiColorButtonSetColor_REQUIRED_ARGC 5
#define uiColorButtonSetColor_OPTIONAL_ARGC 0
mrb_value
mrb_UI_colorButtonSetColor(mrb_state* mrb, mrb_value self)
{

  mrb_value b;
  mrb_float native_r;
  mrb_float native_g;
  mrb_float native_bl;
  mrb_float native_a;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &b, &native_r, &native_g, &native_bl, &native_a);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_ColorButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ColorButton expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiColorButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiColorButton(b));

  /* Invocation */
  uiColorButtonSetColor(native_b, native_r, native_g, native_bl, native_a);

  return mrb_nil_value();
}

/**
 * void
 * uiComboboxAppend(uiCombobox * c, const char * text)
 */
#define mruby_UI_comboboxAppend
#define uiComboboxAppend_REQUIRED_ARGC 2
#define uiComboboxAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_comboboxAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCombobox(c));

  /* Invocation */
  uiComboboxAppend(native_c, native_text);

  return mrb_nil_value();
}

///**
// * void
// * uiComboboxOnSelected(uiCombobox * c, void (*)(uiCombobox *, void *) f, void * data)
// */
//#define mruby_UI_comboboxOnSelected
//#define uiComboboxOnSelected_REQUIRED_ARGC 3
//#define uiComboboxOnSelected_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_comboboxOnSelected(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value c;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &c, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, c, UI_Combobox_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiCombobox_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCombobox(c));
//
//  void (*native_f)(uiCombobox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiCombobox_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiComboboxOnSelected(native_c, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * int
 * uiComboboxSelected(uiCombobox * c)
 */
#define mruby_UI_comboboxSelected
#define uiComboboxSelected_REQUIRED_ARGC 1
#define uiComboboxSelected_OPTIONAL_ARGC 0
mrb_value
mrb_UI_comboboxSelected(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCombobox(c));

  /* Invocation */
  int native_return_value = uiComboboxSelected(native_c);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiComboboxSetSelected(uiCombobox * c, int n)
 */
#define mruby_UI_comboboxSetSelected
#define uiComboboxSetSelected_REQUIRED_ARGC 2
#define uiComboboxSetSelected_OPTIONAL_ARGC 0
mrb_value
mrb_UI_comboboxSetSelected(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &c, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_Combobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Combobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiCombobox(c));

  /* Invocation */
  uiComboboxSetSelected(native_c, native_n);

  return mrb_nil_value();
}

/**
 * void
 * uiControlDestroy(uiControl * arg1)
 */
#define mruby_UI_controlDestroy
#define uiControlDestroy_REQUIRED_ARGC 1
#define uiControlDestroy_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlDestroy(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControlDestroy(native_arg1);

  return mrb_nil_value();
}

/**
 * void
 * uiControlDisable(uiControl * arg1)
 */
#define mruby_UI_controlDisable
#define uiControlDisable_REQUIRED_ARGC 1
#define uiControlDisable_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlDisable(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControlDisable(native_arg1);

  return mrb_nil_value();
}

/**
 * void
 * uiControlEnable(uiControl * arg1)
 */
#define mruby_UI_controlEnable
#define uiControlEnable_REQUIRED_ARGC 1
#define uiControlEnable_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlEnable(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControlEnable(native_arg1);

  return mrb_nil_value();
}

/**
 * int
 * uiControlEnabled(uiControl * arg1)
 */
#define mruby_UI_controlEnabled
#define uiControlEnabled_REQUIRED_ARGC 1
#define uiControlEnabled_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlEnabled(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlEnabled(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * int
 * uiControlEnabledToUser(uiControl * arg1)
 */
#define mruby_UI_controlEnabledToUser
#define uiControlEnabledToUser_REQUIRED_ARGC 1
#define uiControlEnabledToUser_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlEnabledToUser(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlEnabledToUser(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

///**
// * uintptr_t
// * uiControlHandle(uiControl * arg1)
// */
//#define mruby_UI_controlHandle
//#define uiControlHandle_REQUIRED_ARGC 1
//#define uiControlHandle_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_controlHandle(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value arg1;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &arg1);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));
//
//  /* Invocation */
//  uintptr_t native_return_value = uiControlHandle(native_arg1);
//
//  /* Box the return value */
//  mrb_value return_value = TODO_mruby_box_uintptr_t(mrb, native_return_value);
//
//  return return_value;
//}

/**
 * void
 * uiControlHide(uiControl * arg1)
 */
#define mruby_UI_controlHide
#define uiControlHide_REQUIRED_ARGC 1
#define uiControlHide_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlHide(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControlHide(native_arg1);

  return mrb_nil_value();
}

/**
 * uiControl *
 * uiControlParent(uiControl * arg1)
 */
#define mruby_UI_controlParent
#define uiControlParent_REQUIRED_ARGC 1
#define uiControlParent_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlParent(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControl * native_return_value = uiControlParent(native_arg1);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiControl(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiControlSetParent(uiControl * arg1, uiControl * arg2)
 */
#define mruby_UI_controlSetParent
#define uiControlSetParent_REQUIRED_ARGC 2
#define uiControlSetParent_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlSetParent(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  uiControl * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_UI_unbox_uiControl(arg2));

  /* Invocation */
  uiControlSetParent(native_arg1, native_arg2);

  return mrb_nil_value();
}

/**
 * void
 * uiControlShow(uiControl * arg1)
 */
#define mruby_UI_controlShow
#define uiControlShow_REQUIRED_ARGC 1
#define uiControlShow_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlShow(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiControlShow(native_arg1);

  return mrb_nil_value();
}

/**
 * int
 * uiControlToplevel(uiControl * arg1)
 */
#define mruby_UI_controlToplevel
#define uiControlToplevel_REQUIRED_ARGC 1
#define uiControlToplevel_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlToplevel(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlToplevel(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiControlVerifySetParent(uiControl * arg1, uiControl * arg2)
 */
#define mruby_UI_controlVerifySetParent
#define uiControlVerifySetParent_REQUIRED_ARGC 2
#define uiControlVerifySetParent_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlVerifySetParent(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  uiControl * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_UI_unbox_uiControl(arg2));

  /* Invocation */
  uiControlVerifySetParent(native_arg1, native_arg2);

  return mrb_nil_value();
}

/**
 * int
 * uiControlVisible(uiControl * arg1)
 */
#define mruby_UI_controlVisible
#define uiControlVisible_REQUIRED_ARGC 1
#define uiControlVisible_OPTIONAL_ARGC 0
mrb_value
mrb_UI_controlVisible(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  int native_return_value = uiControlVisible(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiDrawClip(uiDrawContext * c, uiDrawPath * path)
 */
#define mruby_UI_drawClip
#define uiDrawClip_REQUIRED_ARGC 2
#define uiDrawClip_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawClip(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_value path;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &c, &path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_UI_unbox_uiDrawPath(path));

  /* Invocation */
  uiDrawClip(native_c, native_path);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawFill(uiDrawContext * c, uiDrawPath * path, uiDrawBrush * b)
 */
#define mruby_UI_drawFill
#define uiDrawFill_REQUIRED_ARGC 3
#define uiDrawFill_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFill(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_value path;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &c, &path, &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, UI_DrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawBrush expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_UI_unbox_uiDrawPath(path));

  uiDrawBrush * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiDrawBrush(b));

  /* Invocation */
  uiDrawFill(native_c, native_path, native_b);

  return mrb_nil_value();
}

/**
 * char *
 * uiDrawFontFamiliesFamily(uiDrawFontFamilies * ff, int n)
 */
#define mruby_UI_drawFontFamiliesFamily
#define uiDrawFontFamiliesFamily_REQUIRED_ARGC 2
#define uiDrawFontFamiliesFamily_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFontFamiliesFamily(mrb_state* mrb, mrb_value self)
{

  mrb_value ff;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &ff, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, UI_DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_UI_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  char * native_return_value = uiDrawFontFamiliesFamily(native_ff, native_n);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * int
 * uiDrawFontFamiliesNumFamilies(uiDrawFontFamilies * ff)
 */
#define mruby_UI_drawFontFamiliesNumFamilies
#define uiDrawFontFamiliesNumFamilies_REQUIRED_ARGC 1
#define uiDrawFontFamiliesNumFamilies_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFontFamiliesNumFamilies(mrb_state* mrb, mrb_value self)
{

  mrb_value ff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, UI_DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_UI_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  int native_return_value = uiDrawFontFamiliesNumFamilies(native_ff);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiDrawFreeFontFamilies(uiDrawFontFamilies * ff)
 */
#define mruby_UI_drawFreeFontFamilies
#define uiDrawFreeFontFamilies_REQUIRED_ARGC 1
#define uiDrawFreeFontFamilies_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFreeFontFamilies(mrb_state* mrb, mrb_value self)
{

  mrb_value ff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ff, UI_DrawFontFamilies_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawFontFamilies expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawFontFamilies * native_ff = (mrb_nil_p(ff) ? NULL : mruby_UI_unbox_uiDrawFontFamilies(ff));

  /* Invocation */
  uiDrawFreeFontFamilies(native_ff);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawFreePath(uiDrawPath * p)
 */
#define mruby_UI_drawFreePath
#define uiDrawFreePath_REQUIRED_ARGC 1
#define uiDrawFreePath_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFreePath(mrb_state* mrb, mrb_value self)
{

  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawFreePath(native_p);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawFreeTextFont(uiDrawTextFont * font)
 */
#define mruby_UI_drawFreeTextFont
#define uiDrawFreeTextFont_REQUIRED_ARGC 1
#define uiDrawFreeTextFont_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFreeTextFont(mrb_state* mrb, mrb_value self)
{

  mrb_value font;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &font);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, UI_DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_UI_unbox_uiDrawTextFont(font));

  /* Invocation */
  uiDrawFreeTextFont(native_font);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawFreeTextLayout(uiDrawTextLayout * layout)
 */
#define mruby_UI_drawFreeTextLayout
#define uiDrawFreeTextLayout_REQUIRED_ARGC 1
#define uiDrawFreeTextLayout_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawFreeTextLayout(mrb_state* mrb, mrb_value self)
{

  mrb_value layout;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &layout);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, UI_DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_UI_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawFreeTextLayout(native_layout);

  return mrb_nil_value();
}

/**
 * uiDrawFontFamilies *
 * uiDrawListFontFamilies()
 */
#define mruby_UI_drawListFontFamilies
#define uiDrawListFontFamilies_REQUIRED_ARGC 0
#define uiDrawListFontFamilies_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawListFontFamilies(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiDrawFontFamilies * native_return_value = uiDrawListFontFamilies();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDrawFontFamilies(mrb, native_return_value));

  return return_value;
}

/**
 * uiDrawTextFont *
 * uiDrawLoadClosestFont(const uiDrawTextFontDescriptor * desc)
 */
#define mruby_UI_drawLoadClosestFont
#define uiDrawLoadClosestFont_REQUIRED_ARGC 1
#define uiDrawLoadClosestFont_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawLoadClosestFont(mrb_state* mrb, mrb_value self)
{

  mrb_value desc;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &desc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, desc, UI_DrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontDescriptor expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  const uiDrawTextFontDescriptor * native_desc = (mrb_nil_p(desc) ? NULL : mruby_UI_unbox_uiDrawTextFontDescriptor(desc));

  /* Invocation */
  uiDrawTextFont * native_return_value = uiDrawLoadClosestFont(native_desc);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDrawTextFont(mrb, native_return_value));

  return return_value;
}

/**
 * int
 * uiDrawMatrixInvert(uiDrawMatrix * m)
 */
#define mruby_UI_drawMatrixInvert
#define uiDrawMatrixInvert_REQUIRED_ARGC 1
#define uiDrawMatrixInvert_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixInvert(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  int native_return_value = uiDrawMatrixInvert(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * int
 * uiDrawMatrixInvertible(uiDrawMatrix * m)
 */
#define mruby_UI_drawMatrixInvertible
#define uiDrawMatrixInvertible_REQUIRED_ARGC 1
#define uiDrawMatrixInvertible_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixInvertible(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  int native_return_value = uiDrawMatrixInvertible(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiDrawMatrixMultiply(uiDrawMatrix * dest, uiDrawMatrix * src)
 */
#define mruby_UI_drawMatrixMultiply
#define uiDrawMatrixMultiply_REQUIRED_ARGC 2
#define uiDrawMatrixMultiply_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixMultiply(mrb_state* mrb, mrb_value self)
{

  mrb_value dest;
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dest, &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dest, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_dest = (mrb_nil_p(dest) ? NULL : mruby_UI_unbox_uiDrawMatrix(dest));

  uiDrawMatrix * native_src = (mrb_nil_p(src) ? NULL : mruby_UI_unbox_uiDrawMatrix(src));

  /* Invocation */
  uiDrawMatrixMultiply(native_dest, native_src);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixRotate(uiDrawMatrix * m, double x, double y, double amount)
 */
#define mruby_UI_drawMatrixRotate
#define uiDrawMatrixRotate_REQUIRED_ARGC 4
#define uiDrawMatrixRotate_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixRotate(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_amount;

  /* Fetch the args */
  mrb_get_args(mrb, "offf", &m, &native_x, &native_y, &native_amount);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixRotate(native_m, native_x, native_y, native_amount);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixScale(uiDrawMatrix * m, double xCenter, double yCenter, double x, double y)
 */
#define mruby_UI_drawMatrixScale
#define uiDrawMatrixScale_REQUIRED_ARGC 5
#define uiDrawMatrixScale_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixScale(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_float native_xCenter;
  mrb_float native_yCenter;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &m, &native_xCenter, &native_yCenter, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixScale(native_m, native_xCenter, native_yCenter, native_x, native_y);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixSetIdentity(uiDrawMatrix * m)
 */
#define mruby_UI_drawMatrixSetIdentity
#define uiDrawMatrixSetIdentity_REQUIRED_ARGC 1
#define uiDrawMatrixSetIdentity_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixSetIdentity(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixSetIdentity(native_m);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixSkew(uiDrawMatrix * m, double x, double y, double xamount, double yamount)
 */
#define mruby_UI_drawMatrixSkew
#define uiDrawMatrixSkew_REQUIRED_ARGC 5
#define uiDrawMatrixSkew_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixSkew(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_xamount;
  mrb_float native_yamount;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &m, &native_x, &native_y, &native_xamount, &native_yamount);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixSkew(native_m, native_x, native_y, native_xamount, native_yamount);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixTransformPoint(uiDrawMatrix * m, double * x, double * y)
 */
#define mruby_UI_drawMatrixTransformPoint
#define uiDrawMatrixTransformPoint_REQUIRED_ARGC 3
#define uiDrawMatrixTransformPoint_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixTransformPoint(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &m, &x, &y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, x, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, y, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  void * native_x = (mrb_nil_p(x) ? NULL : mruby_UI_unbox_void_ptr(x));

  void * native_y = (mrb_nil_p(y) ? NULL : mruby_UI_unbox_void_ptr(y));

  /* Invocation */
  uiDrawMatrixTransformPoint(native_m, native_x, native_y);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixTransformSize(uiDrawMatrix * m, double * x, double * y)
 */
#define mruby_UI_drawMatrixTransformSize
#define uiDrawMatrixTransformSize_REQUIRED_ARGC 3
#define uiDrawMatrixTransformSize_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixTransformSize(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &m, &x, &y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, x, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, y, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  void * native_x = (mrb_nil_p(x) ? NULL : mruby_UI_unbox_void_ptr(x));

  void * native_y = (mrb_nil_p(y) ? NULL : mruby_UI_unbox_void_ptr(y));

  /* Invocation */
  uiDrawMatrixTransformSize(native_m, native_x, native_y);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawMatrixTranslate(uiDrawMatrix * m, double x, double y)
 */
#define mruby_UI_drawMatrixTranslate
#define uiDrawMatrixTranslate_REQUIRED_ARGC 3
#define uiDrawMatrixTranslate_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawMatrixTranslate(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &m, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawMatrixTranslate(native_m, native_x, native_y);

  return mrb_nil_value();
}

/**
 * uiDrawPath *
 * uiDrawNewPath(uiDrawFillMode fillMode)
 */
#define mruby_UI_drawNewPath
#define uiDrawNewPath_REQUIRED_ARGC 1
#define uiDrawNewPath_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawNewPath(mrb_state* mrb, mrb_value self)
{

  mrb_int native_fillMode;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_fillMode);

  /* Invocation */
  uiDrawPath * native_return_value = uiDrawNewPath(native_fillMode);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDrawPath(mrb, native_return_value));

  return return_value;
}

/**
 * uiDrawTextLayout *
 * uiDrawNewTextLayout(const char * text, uiDrawTextFont * defaultFont, double width)
 */
#define mruby_UI_drawNewTextLayout
#define uiDrawNewTextLayout_REQUIRED_ARGC 3
#define uiDrawNewTextLayout_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawNewTextLayout(mrb_state* mrb, mrb_value self)
{

  char * native_text = NULL;
  mrb_value defaultFont;
  mrb_float native_width;

  /* Fetch the args */
  mrb_get_args(mrb, "zof", &native_text, &defaultFont, &native_width);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, defaultFont, UI_DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextFont * native_defaultFont = (mrb_nil_p(defaultFont) ? NULL : mruby_UI_unbox_uiDrawTextFont(defaultFont));

  /* Invocation */
  uiDrawTextLayout * native_return_value = uiDrawNewTextLayout(native_text, native_defaultFont, native_width);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDrawTextLayout(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiDrawPathAddRectangle(uiDrawPath * p, double x, double y, double width, double height)
 */
#define mruby_UI_drawPathAddRectangle
#define uiDrawPathAddRectangle_REQUIRED_ARGC 5
#define uiDrawPathAddRectangle_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathAddRectangle(mrb_state* mrb, mrb_value self)
{

  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;
  mrb_float native_width;
  mrb_float native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "offff", &p, &native_x, &native_y, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathAddRectangle(native_p, native_x, native_y, native_width, native_height);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathArcTo(uiDrawPath * p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative)
 */
#define mruby_UI_drawPathArcTo
#define uiDrawPathArcTo_REQUIRED_ARGC 7
#define uiDrawPathArcTo_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathArcTo(mrb_state* mrb, mrb_value self)
{

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
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathArcTo(native_p, native_xCenter, native_yCenter, native_radius, native_startAngle, native_sweep, native_negative);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathBezierTo(uiDrawPath * p, double c1x, double c1y, double c2x, double c2y, double endX, double endY)
 */
#define mruby_UI_drawPathBezierTo
#define uiDrawPathBezierTo_REQUIRED_ARGC 7
#define uiDrawPathBezierTo_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathBezierTo(mrb_state* mrb, mrb_value self)
{

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
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathBezierTo(native_p, native_c1x, native_c1y, native_c2x, native_c2y, native_endX, native_endY);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathCloseFigure(uiDrawPath * p)
 */
#define mruby_UI_drawPathCloseFigure
#define uiDrawPathCloseFigure_REQUIRED_ARGC 1
#define uiDrawPathCloseFigure_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathCloseFigure(mrb_state* mrb, mrb_value self)
{

  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathCloseFigure(native_p);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathEnd(uiDrawPath * p)
 */
#define mruby_UI_drawPathEnd
#define uiDrawPathEnd_REQUIRED_ARGC 1
#define uiDrawPathEnd_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathEnd(mrb_state* mrb, mrb_value self)
{

  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathEnd(native_p);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathLineTo(uiDrawPath * p, double x, double y)
 */
#define mruby_UI_drawPathLineTo
#define uiDrawPathLineTo_REQUIRED_ARGC 3
#define uiDrawPathLineTo_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathLineTo(mrb_state* mrb, mrb_value self)
{

  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &p, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathLineTo(native_p, native_x, native_y);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathNewFigure(uiDrawPath * p, double x, double y)
 */
#define mruby_UI_drawPathNewFigure
#define uiDrawPathNewFigure_REQUIRED_ARGC 3
#define uiDrawPathNewFigure_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathNewFigure(mrb_state* mrb, mrb_value self)
{

  mrb_value p;
  mrb_float native_x;
  mrb_float native_y;

  /* Fetch the args */
  mrb_get_args(mrb, "off", &p, &native_x, &native_y);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathNewFigure(native_p, native_x, native_y);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawPathNewFigureWithArc(uiDrawPath * p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative)
 */
#define mruby_UI_drawPathNewFigureWithArc
#define uiDrawPathNewFigureWithArc_REQUIRED_ARGC 7
#define uiDrawPathNewFigureWithArc_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawPathNewFigureWithArc(mrb_state* mrb, mrb_value self)
{

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
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawPath * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawPath(p));

  /* Invocation */
  uiDrawPathNewFigureWithArc(native_p, native_xCenter, native_yCenter, native_radius, native_startAngle, native_sweep, native_negative);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawRestore(uiDrawContext * c)
 */
#define mruby_UI_drawRestore
#define uiDrawRestore_REQUIRED_ARGC 1
#define uiDrawRestore_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawRestore(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  /* Invocation */
  uiDrawRestore(native_c);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawSave(uiDrawContext * c)
 */
#define mruby_UI_drawSave
#define uiDrawSave_REQUIRED_ARGC 1
#define uiDrawSave_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawSave(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  /* Invocation */
  uiDrawSave(native_c);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawStroke(uiDrawContext * c, uiDrawPath * path, uiDrawBrush * b, uiDrawStrokeParams * p)
 */
#define mruby_UI_drawStroke
#define uiDrawStroke_REQUIRED_ARGC 4
#define uiDrawStroke_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawStroke(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_value path;
  mrb_value b;
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &c, &path, &b, &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, path, UI_DrawPath_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawPath expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, UI_DrawBrush_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawBrush expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, UI_DrawStrokeParams_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawStrokeParams expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  uiDrawPath * native_path = (mrb_nil_p(path) ? NULL : mruby_UI_unbox_uiDrawPath(path));

  uiDrawBrush * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiDrawBrush(b));

  uiDrawStrokeParams * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiDrawStrokeParams(p));

  /* Invocation */
  uiDrawStroke(native_c, native_path, native_b, native_p);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawText(uiDrawContext * c, double x, double y, uiDrawTextLayout * layout)
 */
#define mruby_UI_drawText
#define uiDrawText_REQUIRED_ARGC 4
#define uiDrawText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawText(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_float native_x;
  mrb_float native_y;
  mrb_value layout;

  /* Fetch the args */
  mrb_get_args(mrb, "offo", &c, &native_x, &native_y, &layout);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, layout, UI_DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_UI_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawText(native_c, native_x, native_y, native_layout);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawTextFontDescribe(uiDrawTextFont * font, uiDrawTextFontDescriptor * desc)
 */
#define mruby_UI_drawTextFontDescribe
#define uiDrawTextFontDescribe_REQUIRED_ARGC 2
#define uiDrawTextFontDescribe_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTextFontDescribe(mrb_state* mrb, mrb_value self)
{

  mrb_value font;
  mrb_value desc;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &font, &desc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, UI_DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, desc, UI_DrawTextFontDescriptor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontDescriptor expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_UI_unbox_uiDrawTextFont(font));

  uiDrawTextFontDescriptor * native_desc = (mrb_nil_p(desc) ? NULL : mruby_UI_unbox_uiDrawTextFontDescriptor(desc));

  /* Invocation */
  uiDrawTextFontDescribe(native_font, native_desc);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawTextFontGetMetrics(uiDrawTextFont * font, uiDrawTextFontMetrics * metrics)
 */
#define mruby_UI_drawTextFontGetMetrics
#define uiDrawTextFontGetMetrics_REQUIRED_ARGC 2
#define uiDrawTextFontGetMetrics_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTextFontGetMetrics(mrb_state* mrb, mrb_value self)
{

  mrb_value font;
  mrb_value metrics;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &font, &metrics);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, font, UI_DrawTextFont_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, metrics, UI_DrawTextFontMetrics_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFontMetrics expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_UI_unbox_uiDrawTextFont(font));

  uiDrawTextFontMetrics * native_metrics = (mrb_nil_p(metrics) ? NULL : mruby_UI_unbox_uiDrawTextFontMetrics(metrics));

  /* Invocation */
  uiDrawTextFontGetMetrics(native_font, native_metrics);

  return mrb_nil_value();
}

///**
// * uintptr_t
// * uiDrawTextFontHandle(uiDrawTextFont * font)
// */
//#define mruby_UI_drawTextFontHandle
//#define uiDrawTextFontHandle_REQUIRED_ARGC 1
//#define uiDrawTextFontHandle_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_drawTextFontHandle(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value font;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &font);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, font, UI_DrawTextFont_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextFont expected");
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiDrawTextFont * native_font = (mrb_nil_p(font) ? NULL : mruby_UI_unbox_uiDrawTextFont(font));
//
//  /* Invocation */
//  uintptr_t native_return_value = uiDrawTextFontHandle(native_font);
//
//  /* Box the return value */
//  mrb_value return_value = TODO_mruby_box_uintptr_t(mrb, native_return_value);
//
//  return return_value;
//}

/**
 * void
 * uiDrawTextLayoutExtents(uiDrawTextLayout * layout, double * width, double * height)
 */
#define mruby_UI_drawTextLayoutExtents
#define uiDrawTextLayoutExtents_REQUIRED_ARGC 3
#define uiDrawTextLayoutExtents_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTextLayoutExtents(mrb_state* mrb, mrb_value self)
{

  mrb_value layout;
  mrb_value width;
  mrb_value height;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &layout, &width, &height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, UI_DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, width, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, height, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_UI_unbox_uiDrawTextLayout(layout));

  void * native_width = (mrb_nil_p(width) ? NULL : mruby_UI_unbox_void_ptr(width));

  void * native_height = (mrb_nil_p(height) ? NULL : mruby_UI_unbox_void_ptr(height));

  /* Invocation */
  uiDrawTextLayoutExtents(native_layout, native_width, native_height);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawTextLayoutSetColor(uiDrawTextLayout * layout, int startChar, int endChar, double r, double g, double b, double a)
 */
#define mruby_UI_drawTextLayoutSetColor
#define uiDrawTextLayoutSetColor_REQUIRED_ARGC 7
#define uiDrawTextLayoutSetColor_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTextLayoutSetColor(mrb_state* mrb, mrb_value self)
{

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
  if (!mrb_obj_is_kind_of(mrb, layout, UI_DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_UI_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawTextLayoutSetColor(native_layout, native_startChar, native_endChar, native_r, native_g, native_b, native_a);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawTextLayoutSetWidth(uiDrawTextLayout * layout, double width)
 */
#define mruby_UI_drawTextLayoutSetWidth
#define uiDrawTextLayoutSetWidth_REQUIRED_ARGC 2
#define uiDrawTextLayoutSetWidth_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTextLayoutSetWidth(mrb_state* mrb, mrb_value self)
{

  mrb_value layout;
  mrb_float native_width;

  /* Fetch the args */
  mrb_get_args(mrb, "of", &layout, &native_width);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, layout, UI_DrawTextLayout_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawTextLayout expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawTextLayout * native_layout = (mrb_nil_p(layout) ? NULL : mruby_UI_unbox_uiDrawTextLayout(layout));

  /* Invocation */
  uiDrawTextLayoutSetWidth(native_layout, native_width);

  return mrb_nil_value();
}

/**
 * void
 * uiDrawTransform(uiDrawContext * c, uiDrawMatrix * m)
 */
#define mruby_UI_drawTransform
#define uiDrawTransform_REQUIRED_ARGC 2
#define uiDrawTransform_OPTIONAL_ARGC 0
mrb_value
mrb_UI_drawTransform(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &c, &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, m, UI_DrawMatrix_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawMatrix expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiDrawContext * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiDrawContext(c));

  uiDrawMatrix * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiDrawMatrix(m));

  /* Invocation */
  uiDrawTransform(native_c, native_m);

  return mrb_nil_value();
}

/**
 * void
 * uiEditableComboboxAppend(uiEditableCombobox * c, const char * text)
 */
#define mruby_UI_editableComboboxAppend
#define uiEditableComboboxAppend_REQUIRED_ARGC 2
#define uiEditableComboboxAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_editableComboboxAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiEditableCombobox(c));

  /* Invocation */
  uiEditableComboboxAppend(native_c, native_text);

  return mrb_nil_value();
}

///**
// * void
// * uiEditableComboboxOnChanged(uiEditableCombobox * c, void (*)(uiEditableCombobox *, void *) f, void * data)
// */
//#define mruby_UI_editableComboboxOnChanged
//#define uiEditableComboboxOnChanged_REQUIRED_ARGC 3
//#define uiEditableComboboxOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_editableComboboxOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value c;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &c, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, c, UI_EditableCombobox_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiEditableCombobox_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiEditableCombobox(c));
//
//  void (*native_f)(uiEditableCombobox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiEditableCombobox_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiEditableComboboxOnChanged(native_c, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiEditableComboboxSetText(uiEditableCombobox * c, const char * text)
 */
#define mruby_UI_editableComboboxSetText
#define uiEditableComboboxSetText_REQUIRED_ARGC 2
#define uiEditableComboboxSetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_editableComboboxSetText(mrb_state* mrb, mrb_value self)
{

  mrb_value c;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &c, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiEditableCombobox(c));

  /* Invocation */
  uiEditableComboboxSetText(native_c, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiEditableComboboxText(uiEditableCombobox * c)
 */
#define mruby_UI_editableComboboxText
#define uiEditableComboboxText_REQUIRED_ARGC 1
#define uiEditableComboboxText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_editableComboboxText(mrb_state* mrb, mrb_value self)
{

  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, c, UI_EditableCombobox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "EditableCombobox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEditableCombobox * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiEditableCombobox(c));

  /* Invocation */
  char * native_return_value = uiEditableComboboxText(native_c);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

///**
// * void
// * uiEntryOnChanged(uiEntry * e, void (*)(uiEntry *, void *) f, void * data)
// */
//#define mruby_UI_entryOnChanged
//#define uiEntryOnChanged_REQUIRED_ARGC 3
//#define uiEntryOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_entryOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value e;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &e, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiEntry_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));
//
//  void (*native_f)(uiEntry *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiEntry_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiEntryOnChanged(native_e, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * int
 * uiEntryReadOnly(uiEntry * e)
 */
#define mruby_UI_entryReadOnly
#define uiEntryReadOnly_REQUIRED_ARGC 1
#define uiEntryReadOnly_OPTIONAL_ARGC 0
mrb_value
mrb_UI_entryReadOnly(mrb_state* mrb, mrb_value self)
{

  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));

  /* Invocation */
  int native_return_value = uiEntryReadOnly(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiEntrySetReadOnly(uiEntry * e, int readonly)
 */
#define mruby_UI_entrySetReadOnly
#define uiEntrySetReadOnly_REQUIRED_ARGC 2
#define uiEntrySetReadOnly_OPTIONAL_ARGC 0
mrb_value
mrb_UI_entrySetReadOnly(mrb_state* mrb, mrb_value self)
{

  mrb_value e;
  mrb_int native_readonly;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &e, &native_readonly);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));

  /* Invocation */
  uiEntrySetReadOnly(native_e, native_readonly);

  return mrb_nil_value();
}

/**
 * void
 * uiEntrySetText(uiEntry * e, const char * text)
 */
#define mruby_UI_entrySetText
#define uiEntrySetText_REQUIRED_ARGC 2
#define uiEntrySetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_entrySetText(mrb_state* mrb, mrb_value self)
{

  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));

  /* Invocation */
  uiEntrySetText(native_e, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiEntryText(uiEntry * e)
 */
#define mruby_UI_entryText
#define uiEntryText_REQUIRED_ARGC 1
#define uiEntryText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_entryText(mrb_state* mrb, mrb_value self)
{

  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_Entry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Entry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiEntry(e));

  /* Invocation */
  char * native_return_value = uiEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * uiDrawTextFont *
 * uiFontButtonFont(uiFontButton * b)
 */
#define mruby_UI_fontButtonFont
#define uiFontButtonFont_REQUIRED_ARGC 1
#define uiFontButtonFont_OPTIONAL_ARGC 0
mrb_value
mrb_UI_fontButtonFont(mrb_state* mrb, mrb_value self)
{

  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, b, UI_FontButton_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FontButton expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiFontButton(b));

  /* Invocation */
  uiDrawTextFont * native_return_value = uiFontButtonFont(native_b);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDrawTextFont(mrb, native_return_value));

  return return_value;
}

///**
// * void
// * uiFontButtonOnChanged(uiFontButton * b, void (*)(uiFontButton *, void *) f, void * data)
// */
//#define mruby_UI_fontButtonOnChanged
//#define uiFontButtonOnChanged_REQUIRED_ARGC 3
//#define uiFontButtonOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_fontButtonOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value b;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &b, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, b, UI_FontButton_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "FontButton expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiFontButton_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiFontButton * native_b = (mrb_nil_p(b) ? NULL : mruby_UI_unbox_uiFontButton(b));
//
//  void (*native_f)(uiFontButton *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiFontButton_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiFontButtonOnChanged(native_b, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiFormAppend(uiForm * f, const char * label, uiControl * c, int stretchy)
 */
#define mruby_UI_formAppend
#define uiFormAppend_REQUIRED_ARGC 4
#define uiFormAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_formAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value f;
  char * native_label = NULL;
  mrb_value c;
  mrb_int native_stretchy;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &f, &native_label, &c, &native_stretchy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, UI_Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_UI_unbox_uiForm(f));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  /* Invocation */
  uiFormAppend(native_f, native_label, native_c, native_stretchy);

  return mrb_nil_value();
}

/**
 * void
 * uiFormDelete(uiForm * f, int index)
 */
#define mruby_UI_formDelete
#define uiFormDelete_REQUIRED_ARGC 2
#define uiFormDelete_OPTIONAL_ARGC 0
mrb_value
mrb_UI_formDelete(mrb_state* mrb, mrb_value self)
{

  mrb_value f;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &f, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, UI_Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_UI_unbox_uiForm(f));

  /* Invocation */
  uiFormDelete(native_f, native_index);

  return mrb_nil_value();
}

/**
 * int
 * uiFormPadded(uiForm * f)
 */
#define mruby_UI_formPadded
#define uiFormPadded_REQUIRED_ARGC 1
#define uiFormPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_formPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value f;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &f);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, UI_Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_UI_unbox_uiForm(f));

  /* Invocation */
  int native_return_value = uiFormPadded(native_f);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiFormSetPadded(uiForm * f, int padded)
 */
#define mruby_UI_formSetPadded
#define uiFormSetPadded_REQUIRED_ARGC 2
#define uiFormSetPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_formSetPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value f;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &f, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, f, UI_Form_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Form expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiForm * native_f = (mrb_nil_p(f) ? NULL : mruby_UI_unbox_uiForm(f));

  /* Invocation */
  uiFormSetPadded(native_f, native_padded);

  return mrb_nil_value();
}

/**
 * void
 * uiFreeControl(uiControl * arg1)
 */
#define mruby_UI_freeControl
#define uiFreeControl_REQUIRED_ARGC 1
#define uiFreeControl_OPTIONAL_ARGC 0
mrb_value
mrb_UI_freeControl(mrb_state* mrb, mrb_value self)
{

  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiControl * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_UI_unbox_uiControl(arg1));

  /* Invocation */
  uiFreeControl(native_arg1);

  return mrb_nil_value();
}

/**
 * void
 * uiFreeInitError(const char * err)
 */
#define mruby_UI_freeInitError
#define uiFreeInitError_REQUIRED_ARGC 1
#define uiFreeInitError_OPTIONAL_ARGC 0
mrb_value
mrb_UI_freeInitError(mrb_state* mrb, mrb_value self)
{

  char * native_err = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_err);

  /* Invocation */
  uiFreeInitError(native_err);

  return mrb_nil_value();
}

/**
 * void
 * uiFreeText(char * text)
 */
#define mruby_UI_freeText
#define uiFreeText_REQUIRED_ARGC 1
#define uiFreeText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_freeText(mrb_state* mrb, mrb_value self)
{

  mrb_value text;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &text);

  /* Type checking */
  if (!mruby_UI_typecheck_void_ptr(mrb, text, "char *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * native_text = (mrb_nil_p(text) ? NULL : mruby_UI_unbox_void_ptr(text));

  /* Invocation */
  uiFreeText(native_text);

  return mrb_nil_value();
}

/**
 * void
 * uiGridAppend(uiGrid * g, uiControl * c, int left, int top, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign)
 */
#define mruby_UI_gridAppend
#define uiGridAppend_REQUIRED_ARGC 10
#define uiGridAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_gridAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  mrb_value c;
  mrb_int native_left;
  mrb_int native_top;
  mrb_int native_xspan;
  mrb_int native_yspan;
  mrb_int native_hexpand;
  mrb_int native_halign;
  mrb_int native_vexpand;
  mrb_int native_valign;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiiiiiiii", &g, &c, &native_left, &native_top, &native_xspan, &native_yspan, &native_hexpand, &native_halign, &native_vexpand, &native_valign);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGrid(g));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  /* Invocation */
  uiGridAppend(native_g, native_c, native_left, native_top, native_xspan, native_yspan, native_hexpand, native_halign, native_vexpand, native_valign);

  return mrb_nil_value();
}

/**
 * void
 * uiGridInsertAt(uiGrid * g, uiControl * c, uiControl * existing, uiAt at, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign)
 */
#define mruby_UI_gridInsertAt
#define uiGridInsertAt_REQUIRED_ARGC 10
#define uiGridInsertAt_OPTIONAL_ARGC 0
mrb_value
mrb_UI_gridInsertAt(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  mrb_value c;
  mrb_value existing;
  mrb_int native_at;
  mrb_int native_xspan;
  mrb_int native_yspan;
  mrb_int native_hexpand;
  mrb_int native_halign;
  mrb_int native_vexpand;
  mrb_int native_valign;

  /* Fetch the args */
  mrb_get_args(mrb, "oooiiiiiii", &g, &c, &existing, &native_at, &native_xspan, &native_yspan, &native_hexpand, &native_halign, &native_vexpand, &native_valign);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, existing, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGrid(g));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  uiControl * native_existing = (mrb_nil_p(existing) ? NULL : mruby_UI_unbox_uiControl(existing));

  /* Invocation */
  uiGridInsertAt(native_g, native_c, native_existing, native_at, native_xspan, native_yspan, native_hexpand, native_halign, native_vexpand, native_valign);

  return mrb_nil_value();
}

/**
 * int
 * uiGridPadded(uiGrid * g)
 */
#define mruby_UI_gridPadded
#define uiGridPadded_REQUIRED_ARGC 1
#define uiGridPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_gridPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGrid(g));

  /* Invocation */
  int native_return_value = uiGridPadded(native_g);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiGridSetPadded(uiGrid * g, int padded)
 */
#define mruby_UI_gridSetPadded
#define uiGridSetPadded_REQUIRED_ARGC 2
#define uiGridSetPadded_OPTIONAL_ARGC 0
mrb_value
mrb_UI_gridSetPadded(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  mrb_int native_padded;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &g, &native_padded);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Grid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Grid expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGrid * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGrid(g));

  /* Invocation */
  uiGridSetPadded(native_g, native_padded);

  return mrb_nil_value();
}

/**
 * int
 * uiGroupMargined(uiGroup * g)
 */
#define mruby_UI_groupMargined
#define uiGroupMargined_REQUIRED_ARGC 1
#define uiGroupMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_groupMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGroup(g));

  /* Invocation */
  int native_return_value = uiGroupMargined(native_g);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiGroupSetChild(uiGroup * g, uiControl * c)
 */
#define mruby_UI_groupSetChild
#define uiGroupSetChild_REQUIRED_ARGC 2
#define uiGroupSetChild_OPTIONAL_ARGC 0
mrb_value
mrb_UI_groupSetChild(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &g, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGroup(g));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  /* Invocation */
  uiGroupSetChild(native_g, native_c);

  return mrb_nil_value();
}

/**
 * void
 * uiGroupSetMargined(uiGroup * g, int margined)
 */
#define mruby_UI_groupSetMargined
#define uiGroupSetMargined_REQUIRED_ARGC 2
#define uiGroupSetMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_groupSetMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &g, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGroup(g));

  /* Invocation */
  uiGroupSetMargined(native_g, native_margined);

  return mrb_nil_value();
}

/**
 * void
 * uiGroupSetTitle(uiGroup * g, const char * title)
 */
#define mruby_UI_groupSetTitle
#define uiGroupSetTitle_REQUIRED_ARGC 2
#define uiGroupSetTitle_OPTIONAL_ARGC 0
mrb_value
mrb_UI_groupSetTitle(mrb_state* mrb, mrb_value self)
{

  mrb_value g;
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &g, &native_title);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGroup(g));

  /* Invocation */
  uiGroupSetTitle(native_g, native_title);

  return mrb_nil_value();
}

/**
 * char *
 * uiGroupTitle(uiGroup * g)
 */
#define mruby_UI_groupTitle
#define uiGroupTitle_REQUIRED_ARGC 1
#define uiGroupTitle_OPTIONAL_ARGC 0
mrb_value
mrb_UI_groupTitle(mrb_state* mrb, mrb_value self)
{

  mrb_value g;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &g);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, g, UI_Group_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Group expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiGroup * native_g = (mrb_nil_p(g) ? NULL : mruby_UI_unbox_uiGroup(g));

  /* Invocation */
  char * native_return_value = uiGroupTitle(native_g);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * const char *
 * uiInit(uiInitOptions * options)
 */
#define mruby_UI_init
#define uiInit_REQUIRED_ARGC 1
#define uiInit_OPTIONAL_ARGC 0
mrb_value
mrb_UI_init(mrb_state* mrb, mrb_value self)
{

  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, options, UI_InitOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "InitOptions expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiInitOptions * native_options = (mrb_nil_p(options) ? NULL : mruby_UI_unbox_uiInitOptions(options));

  /* Invocation */
  const char * native_return_value = uiInit(native_options);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);

  return return_value;
}

/**
 * void
 * uiLabelSetText(uiLabel * l, const char * text)
 */
#define mruby_UI_labelSetText
#define uiLabelSetText_REQUIRED_ARGC 2
#define uiLabelSetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_labelSetText(mrb_state* mrb, mrb_value self)
{

  mrb_value l;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &l, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, l, UI_Label_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Label expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiLabel * native_l = (mrb_nil_p(l) ? NULL : mruby_UI_unbox_uiLabel(l));

  /* Invocation */
  uiLabelSetText(native_l, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiLabelText(uiLabel * l)
 */
#define mruby_UI_labelText
#define uiLabelText_REQUIRED_ARGC 1
#define uiLabelText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_labelText(mrb_state* mrb, mrb_value self)
{

  mrb_value l;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &l);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, l, UI_Label_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Label expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiLabel * native_l = (mrb_nil_p(l) ? NULL : mruby_UI_unbox_uiLabel(l));

  /* Invocation */
  char * native_return_value = uiLabelText(native_l);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiMain()
 */
#define mruby_UI_main
#define uiMain_REQUIRED_ARGC 0
#define uiMain_OPTIONAL_ARGC 0
mrb_value
mrb_UI_main(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiMain();

  return mrb_nil_value();
}

/**
 * int
 * uiMainStep(int wait)
 */
#define mruby_UI_mainStep
#define uiMainStep_REQUIRED_ARGC 1
#define uiMainStep_OPTIONAL_ARGC 0
mrb_value
mrb_UI_mainStep(mrb_state* mrb, mrb_value self)
{

  mrb_int native_wait;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_wait);

  /* Invocation */
  int native_return_value = uiMainStep(native_wait);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiMainSteps()
 */
#define mruby_UI_mainSteps
#define uiMainSteps_REQUIRED_ARGC 0
#define uiMainSteps_OPTIONAL_ARGC 0
mrb_value
mrb_UI_mainSteps(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiMainSteps();

  return mrb_nil_value();
}

/**
 * uiMenuItem *
 * uiMenuAppendAboutItem(uiMenu * m)
 */
#define mruby_UI_menuAppendAboutItem
#define uiMenuAppendAboutItem_REQUIRED_ARGC 1
#define uiMenuAppendAboutItem_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendAboutItem(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendAboutItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenuItem(mrb, native_return_value));

  return return_value;
}

/**
 * uiMenuItem *
 * uiMenuAppendCheckItem(uiMenu * m, const char * name)
 */
#define mruby_UI_menuAppendCheckItem
#define uiMenuAppendCheckItem_REQUIRED_ARGC 2
#define uiMenuAppendCheckItem_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendCheckItem(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &m, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendCheckItem(native_m, native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenuItem(mrb, native_return_value));

  return return_value;
}

/**
 * uiMenuItem *
 * uiMenuAppendItem(uiMenu * m, const char * name)
 */
#define mruby_UI_menuAppendItem
#define uiMenuAppendItem_REQUIRED_ARGC 2
#define uiMenuAppendItem_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendItem(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &m, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendItem(native_m, native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenuItem(mrb, native_return_value));

  return return_value;
}

/**
 * uiMenuItem *
 * uiMenuAppendPreferencesItem(uiMenu * m)
 */
#define mruby_UI_menuAppendPreferencesItem
#define uiMenuAppendPreferencesItem_REQUIRED_ARGC 1
#define uiMenuAppendPreferencesItem_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendPreferencesItem(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendPreferencesItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenuItem(mrb, native_return_value));

  return return_value;
}

/**
 * uiMenuItem *
 * uiMenuAppendQuitItem(uiMenu * m)
 */
#define mruby_UI_menuAppendQuitItem
#define uiMenuAppendQuitItem_REQUIRED_ARGC 1
#define uiMenuAppendQuitItem_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendQuitItem(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuItem * native_return_value = uiMenuAppendQuitItem(native_m);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenuItem(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiMenuAppendSeparator(uiMenu * m)
 */
#define mruby_UI_menuAppendSeparator
#define uiMenuAppendSeparator_REQUIRED_ARGC 1
#define uiMenuAppendSeparator_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuAppendSeparator(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_Menu_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Menu expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenu * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenu(m));

  /* Invocation */
  uiMenuAppendSeparator(native_m);

  return mrb_nil_value();
}

/**
 * int
 * uiMenuItemChecked(uiMenuItem * m)
 */
#define mruby_UI_menuItemChecked
#define uiMenuItemChecked_REQUIRED_ARGC 1
#define uiMenuItemChecked_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuItemChecked(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));

  /* Invocation */
  int native_return_value = uiMenuItemChecked(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiMenuItemDisable(uiMenuItem * m)
 */
#define mruby_UI_menuItemDisable
#define uiMenuItemDisable_REQUIRED_ARGC 1
#define uiMenuItemDisable_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuItemDisable(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemDisable(native_m);

  return mrb_nil_value();
}

/**
 * void
 * uiMenuItemEnable(uiMenuItem * m)
 */
#define mruby_UI_menuItemEnable
#define uiMenuItemEnable_REQUIRED_ARGC 1
#define uiMenuItemEnable_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuItemEnable(mrb_state* mrb, mrb_value self)
{

  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemEnable(native_m);

  return mrb_nil_value();
}

///**
// * void
// * uiMenuItemOnClicked(uiMenuItem * m, void (*)(uiMenuItem *, uiWindow *, void *) f, void * data)
// */
//#define mruby_UI_menuItemOnClicked
//#define uiMenuItemOnClicked_REQUIRED_ARGC 3
//#define uiMenuItemOnClicked_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_menuItemOnClicked(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value m;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &m, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiMenuItem_PTR_COMMA_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));
//
//  void (*native_f)(uiMenuItem *, uiWindow *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiMenuItem_PTR_COMMA_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiMenuItemOnClicked(native_m, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiMenuItemSetChecked(uiMenuItem * m, int checked)
 */
#define mruby_UI_menuItemSetChecked
#define uiMenuItemSetChecked_REQUIRED_ARGC 2
#define uiMenuItemSetChecked_OPTIONAL_ARGC 0
mrb_value
mrb_UI_menuItemSetChecked(mrb_state* mrb, mrb_value self)
{

  mrb_value m;
  mrb_int native_checked;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &m, &native_checked);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, UI_MenuItem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MenuItem expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMenuItem * native_m = (mrb_nil_p(m) ? NULL : mruby_UI_unbox_uiMenuItem(m));

  /* Invocation */
  uiMenuItemSetChecked(native_m, native_checked);

  return mrb_nil_value();
}

/**
 * void
 * uiMsgBox(uiWindow * parent, const char * title, const char * description)
 */
#define mruby_UI_msgBox
#define uiMsgBox_REQUIRED_ARGC 3
#define uiMsgBox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_msgBox(mrb_state* mrb, mrb_value self)
{

  mrb_value parent;
  char * native_title = NULL;
  char * native_description = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &parent, &native_title, &native_description);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_UI_unbox_uiWindow(parent));

  /* Invocation */
  uiMsgBox(native_parent, native_title, native_description);

  return mrb_nil_value();
}

/**
 * void
 * uiMsgBoxError(uiWindow * parent, const char * title, const char * description)
 */
#define mruby_UI_msgBoxError
#define uiMsgBoxError_REQUIRED_ARGC 3
#define uiMsgBoxError_OPTIONAL_ARGC 0
mrb_value
mrb_UI_msgBoxError(mrb_state* mrb, mrb_value self)
{

  mrb_value parent;
  char * native_title = NULL;
  char * native_description = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &parent, &native_title, &native_description);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_UI_unbox_uiWindow(parent));

  /* Invocation */
  uiMsgBoxError(native_parent, native_title, native_description);

  return mrb_nil_value();
}

/**
 * void
 * uiMultilineEntryAppend(uiMultilineEntry * e, const char * text)
 */
#define mruby_UI_multilineEntryAppend
#define uiMultilineEntryAppend_REQUIRED_ARGC 2
#define uiMultilineEntryAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_multilineEntryAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntryAppend(native_e, native_text);

  return mrb_nil_value();
}

///**
// * void
// * uiMultilineEntryOnChanged(uiMultilineEntry * e, void (*)(uiMultilineEntry *, void *) f, void * data)
// */
//#define mruby_UI_multilineEntryOnChanged
//#define uiMultilineEntryOnChanged_REQUIRED_ARGC 3
//#define uiMultilineEntryOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_multilineEntryOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value e;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &e, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiMultilineEntry_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));
//
//  void (*native_f)(uiMultilineEntry *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiMultilineEntry_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiMultilineEntryOnChanged(native_e, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * int
 * uiMultilineEntryReadOnly(uiMultilineEntry * e)
 */
#define mruby_UI_multilineEntryReadOnly
#define uiMultilineEntryReadOnly_REQUIRED_ARGC 1
#define uiMultilineEntryReadOnly_OPTIONAL_ARGC 0
mrb_value
mrb_UI_multilineEntryReadOnly(mrb_state* mrb, mrb_value self)
{

  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  int native_return_value = uiMultilineEntryReadOnly(native_e);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiMultilineEntrySetReadOnly(uiMultilineEntry * e, int readonly)
 */
#define mruby_UI_multilineEntrySetReadOnly
#define uiMultilineEntrySetReadOnly_REQUIRED_ARGC 2
#define uiMultilineEntrySetReadOnly_OPTIONAL_ARGC 0
mrb_value
mrb_UI_multilineEntrySetReadOnly(mrb_state* mrb, mrb_value self)
{

  mrb_value e;
  mrb_int native_readonly;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &e, &native_readonly);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntrySetReadOnly(native_e, native_readonly);

  return mrb_nil_value();
}

/**
 * void
 * uiMultilineEntrySetText(uiMultilineEntry * e, const char * text)
 */
#define mruby_UI_multilineEntrySetText
#define uiMultilineEntrySetText_REQUIRED_ARGC 2
#define uiMultilineEntrySetText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_multilineEntrySetText(mrb_state* mrb, mrb_value self)
{

  mrb_value e;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &e, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  uiMultilineEntrySetText(native_e, native_text);

  return mrb_nil_value();
}

/**
 * char *
 * uiMultilineEntryText(uiMultilineEntry * e)
 */
#define mruby_UI_multilineEntryText
#define uiMultilineEntryText_REQUIRED_ARGC 1
#define uiMultilineEntryText_OPTIONAL_ARGC 0
mrb_value
mrb_UI_multilineEntryText(mrb_state* mrb, mrb_value self)
{

  mrb_value e;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &e);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e, UI_MultilineEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MultilineEntry expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiMultilineEntry * native_e = (mrb_nil_p(e) ? NULL : mruby_UI_unbox_uiMultilineEntry(e));

  /* Invocation */
  char * native_return_value = uiMultilineEntryText(native_e);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * uiArea *
 * uiNewArea(uiAreaHandler * ah)
 */
#define mruby_UI_newArea
#define uiNewArea_REQUIRED_ARGC 1
#define uiNewArea_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newArea(mrb_state* mrb, mrb_value self)
{

  mrb_value ah;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ah);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ah, UI_AreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_UI_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewArea(native_ah);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiArea(mrb, native_return_value));

  return return_value;
}

/**
 * uiButton *
 * uiNewButton(const char * text)
 */
#define mruby_UI_newButton
#define uiNewButton_REQUIRED_ARGC 1
#define uiNewButton_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newButton(mrb_state* mrb, mrb_value self)
{

  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiButton * native_return_value = uiNewButton(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiButton(mrb, native_return_value));

  return return_value;
}

/**
 * uiCheckbox *
 * uiNewCheckbox(const char * text)
 */
#define mruby_UI_newCheckbox
#define uiNewCheckbox_REQUIRED_ARGC 1
#define uiNewCheckbox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newCheckbox(mrb_state* mrb, mrb_value self)
{

  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiCheckbox * native_return_value = uiNewCheckbox(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiCheckbox(mrb, native_return_value));

  return return_value;
}

/**
 * uiColorButton *
 * uiNewColorButton()
 */
#define mruby_UI_newColorButton
#define uiNewColorButton_REQUIRED_ARGC 0
#define uiNewColorButton_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newColorButton(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiColorButton * native_return_value = uiNewColorButton();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiColorButton(mrb, native_return_value));

  return return_value;
}

/**
 * uiCombobox *
 * uiNewCombobox()
 */
#define mruby_UI_newCombobox
#define uiNewCombobox_REQUIRED_ARGC 0
#define uiNewCombobox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newCombobox(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiCombobox * native_return_value = uiNewCombobox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiCombobox(mrb, native_return_value));

  return return_value;
}

/**
 * uiDateTimePicker *
 * uiNewDatePicker()
 */
#define mruby_UI_newDatePicker
#define uiNewDatePicker_REQUIRED_ARGC 0
#define uiNewDatePicker_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newDatePicker(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewDatePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDateTimePicker(mrb, native_return_value));

  return return_value;
}

/**
 * uiDateTimePicker *
 * uiNewDateTimePicker()
 */
#define mruby_UI_newDateTimePicker
#define uiNewDateTimePicker_REQUIRED_ARGC 0
#define uiNewDateTimePicker_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newDateTimePicker(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewDateTimePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDateTimePicker(mrb, native_return_value));

  return return_value;
}

/**
 * uiEditableCombobox *
 * uiNewEditableCombobox()
 */
#define mruby_UI_newEditableCombobox
#define uiNewEditableCombobox_REQUIRED_ARGC 0
#define uiNewEditableCombobox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newEditableCombobox(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiEditableCombobox * native_return_value = uiNewEditableCombobox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiEditableCombobox(mrb, native_return_value));

  return return_value;
}

/**
 * uiEntry *
 * uiNewEntry()
 */
#define mruby_UI_newEntry
#define uiNewEntry_REQUIRED_ARGC 0
#define uiNewEntry_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newEntry(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiEntry * native_return_value = uiNewEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiEntry(mrb, native_return_value));

  return return_value;
}

/**
 * uiFontButton *
 * uiNewFontButton()
 */
#define mruby_UI_newFontButton
#define uiNewFontButton_REQUIRED_ARGC 0
#define uiNewFontButton_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newFontButton(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiFontButton * native_return_value = uiNewFontButton();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiFontButton(mrb, native_return_value));

  return return_value;
}

/**
 * uiForm *
 * uiNewForm()
 */
#define mruby_UI_newForm
#define uiNewForm_REQUIRED_ARGC 0
#define uiNewForm_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newForm(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiForm * native_return_value = uiNewForm();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiForm(mrb, native_return_value));

  return return_value;
}

/**
 * uiGrid *
 * uiNewGrid()
 */
#define mruby_UI_newGrid
#define uiNewGrid_REQUIRED_ARGC 0
#define uiNewGrid_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newGrid(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiGrid * native_return_value = uiNewGrid();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiGrid(mrb, native_return_value));

  return return_value;
}

/**
 * uiGroup *
 * uiNewGroup(const char * title)
 */
#define mruby_UI_newGroup
#define uiNewGroup_REQUIRED_ARGC 1
#define uiNewGroup_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newGroup(mrb_state* mrb, mrb_value self)
{

  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_title);

  /* Invocation */
  uiGroup * native_return_value = uiNewGroup(native_title);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiGroup(mrb, native_return_value));

  return return_value;
}

/**
 * uiBox *
 * uiNewHorizontalBox()
 */
#define mruby_UI_newHorizontalBox
#define uiNewHorizontalBox_REQUIRED_ARGC 0
#define uiNewHorizontalBox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newHorizontalBox(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiBox * native_return_value = uiNewHorizontalBox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiBox(mrb, native_return_value));

  return return_value;
}

/**
 * uiSeparator *
 * uiNewHorizontalSeparator()
 */
#define mruby_UI_newHorizontalSeparator
#define uiNewHorizontalSeparator_REQUIRED_ARGC 0
#define uiNewHorizontalSeparator_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newHorizontalSeparator(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiSeparator * native_return_value = uiNewHorizontalSeparator();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiSeparator(mrb, native_return_value));

  return return_value;
}

/**
 * uiLabel *
 * uiNewLabel(const char * text)
 */
#define mruby_UI_newLabel
#define uiNewLabel_REQUIRED_ARGC 1
#define uiNewLabel_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newLabel(mrb_state* mrb, mrb_value self)
{

  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_text);

  /* Invocation */
  uiLabel * native_return_value = uiNewLabel(native_text);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiLabel(mrb, native_return_value));

  return return_value;
}

/**
 * uiMenu *
 * uiNewMenu(const char * name)
 */
#define mruby_UI_newMenu
#define uiNewMenu_REQUIRED_ARGC 1
#define uiNewMenu_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newMenu(mrb_state* mrb, mrb_value self)
{

  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_name);

  /* Invocation */
  uiMenu * native_return_value = uiNewMenu(native_name);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMenu(mrb, native_return_value));

  return return_value;
}

/**
 * uiMultilineEntry *
 * uiNewMultilineEntry()
 */
#define mruby_UI_newMultilineEntry
#define uiNewMultilineEntry_REQUIRED_ARGC 0
#define uiNewMultilineEntry_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newMultilineEntry(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiMultilineEntry * native_return_value = uiNewMultilineEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMultilineEntry(mrb, native_return_value));

  return return_value;
}

/**
 * uiMultilineEntry *
 * uiNewNonWrappingMultilineEntry()
 */
#define mruby_UI_newNonWrappingMultilineEntry
#define uiNewNonWrappingMultilineEntry_REQUIRED_ARGC 0
#define uiNewNonWrappingMultilineEntry_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newNonWrappingMultilineEntry(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiMultilineEntry * native_return_value = uiNewNonWrappingMultilineEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiMultilineEntry(mrb, native_return_value));

  return return_value;
}

/**
 * uiEntry *
 * uiNewPasswordEntry()
 */
#define mruby_UI_newPasswordEntry
#define uiNewPasswordEntry_REQUIRED_ARGC 0
#define uiNewPasswordEntry_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newPasswordEntry(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiEntry * native_return_value = uiNewPasswordEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiEntry(mrb, native_return_value));

  return return_value;
}

/**
 * uiProgressBar *
 * uiNewProgressBar()
 */
#define mruby_UI_newProgressBar
#define uiNewProgressBar_REQUIRED_ARGC 0
#define uiNewProgressBar_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newProgressBar(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiProgressBar * native_return_value = uiNewProgressBar();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiProgressBar(mrb, native_return_value));

  return return_value;
}

/**
 * uiRadioButtons *
 * uiNewRadioButtons()
 */
#define mruby_UI_newRadioButtons
#define uiNewRadioButtons_REQUIRED_ARGC 0
#define uiNewRadioButtons_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newRadioButtons(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiRadioButtons * native_return_value = uiNewRadioButtons();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiRadioButtons(mrb, native_return_value));

  return return_value;
}

/**
 * uiArea *
 * uiNewScrollingArea(uiAreaHandler * ah, int width, int height)
 */
#define mruby_UI_newScrollingArea
#define uiNewScrollingArea_REQUIRED_ARGC 3
#define uiNewScrollingArea_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newScrollingArea(mrb_state* mrb, mrb_value self)
{

  mrb_value ah;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &ah, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ah, UI_AreaHandler_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AreaHandler expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiAreaHandler * native_ah = (mrb_nil_p(ah) ? NULL : mruby_UI_unbox_uiAreaHandler(ah));

  /* Invocation */
  uiArea * native_return_value = uiNewScrollingArea(native_ah, native_width, native_height);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiArea(mrb, native_return_value));

  return return_value;
}

/**
 * uiEntry *
 * uiNewSearchEntry()
 */
#define mruby_UI_newSearchEntry
#define uiNewSearchEntry_REQUIRED_ARGC 0
#define uiNewSearchEntry_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newSearchEntry(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiEntry * native_return_value = uiNewSearchEntry();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiEntry(mrb, native_return_value));

  return return_value;
}

/**
 * uiSlider *
 * uiNewSlider(int min, int max)
 */
#define mruby_UI_newSlider
#define uiNewSlider_REQUIRED_ARGC 2
#define uiNewSlider_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newSlider(mrb_state* mrb, mrb_value self)
{

  mrb_int native_min;
  mrb_int native_max;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_min, &native_max);

  /* Invocation */
  uiSlider * native_return_value = uiNewSlider(native_min, native_max);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiSlider(mrb, native_return_value));

  return return_value;
}

/**
 * uiSpinbox *
 * uiNewSpinbox(int min, int max)
 */
#define mruby_UI_newSpinbox
#define uiNewSpinbox_REQUIRED_ARGC 2
#define uiNewSpinbox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newSpinbox(mrb_state* mrb, mrb_value self)
{

  mrb_int native_min;
  mrb_int native_max;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_min, &native_max);

  /* Invocation */
  uiSpinbox * native_return_value = uiNewSpinbox(native_min, native_max);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiSpinbox(mrb, native_return_value));

  return return_value;
}

/**
 * uiTab *
 * uiNewTab()
 */
#define mruby_UI_newTab
#define uiNewTab_REQUIRED_ARGC 0
#define uiNewTab_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newTab(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiTab * native_return_value = uiNewTab();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiTab(mrb, native_return_value));

  return return_value;
}

/**
 * uiDateTimePicker *
 * uiNewTimePicker()
 */
#define mruby_UI_newTimePicker
#define uiNewTimePicker_REQUIRED_ARGC 0
#define uiNewTimePicker_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newTimePicker(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiDateTimePicker * native_return_value = uiNewTimePicker();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiDateTimePicker(mrb, native_return_value));

  return return_value;
}

/**
 * uiBox *
 * uiNewVerticalBox()
 */
#define mruby_UI_newVerticalBox
#define uiNewVerticalBox_REQUIRED_ARGC 0
#define uiNewVerticalBox_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newVerticalBox(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiBox * native_return_value = uiNewVerticalBox();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiBox(mrb, native_return_value));

  return return_value;
}

/**
 * uiSeparator *
 * uiNewVerticalSeparator()
 */
#define mruby_UI_newVerticalSeparator
#define uiNewVerticalSeparator_REQUIRED_ARGC 0
#define uiNewVerticalSeparator_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newVerticalSeparator(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiSeparator * native_return_value = uiNewVerticalSeparator();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiSeparator(mrb, native_return_value));

  return return_value;
}

/**
 * uiWindow *
 * uiNewWindow(const char * title, int width, int height, int hasMenubar)
 */
#define mruby_UI_newWindow
#define uiNewWindow_REQUIRED_ARGC 4
#define uiNewWindow_OPTIONAL_ARGC 0
mrb_value
mrb_UI_newWindow(mrb_state* mrb, mrb_value self)
{

  char * native_title = NULL;
  mrb_int native_width;
  mrb_int native_height;
  mrb_int native_hasMenubar;

  /* Fetch the args */
  mrb_get_args(mrb, "ziii", &native_title, &native_width, &native_height, &native_hasMenubar);

  /* Invocation */
  uiWindow * native_return_value = uiNewWindow(native_title, native_width, native_height, native_hasMenubar);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_uiWindow(mrb, native_return_value));

  return return_value;
}

///**
// * void
// * uiOnShouldQuit(int (*)(void *) f, void * data)
// */
//#define mruby_UI_onShouldQuit
//#define uiOnShouldQuit_REQUIRED_ARGC 2
//#define uiOnShouldQuit_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_onShouldQuit(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oo", &f, &data);
//
//  /* Type checking */
//  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  int (*native_f)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiOnShouldQuit(native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * char *
 * uiOpenFile(uiWindow * parent)
 */
#define mruby_UI_openFile
#define uiOpenFile_REQUIRED_ARGC 1
#define uiOpenFile_OPTIONAL_ARGC 0
mrb_value
mrb_UI_openFile(mrb_state* mrb, mrb_value self)
{

  mrb_value parent;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &parent);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_UI_unbox_uiWindow(parent));

  /* Invocation */
  char * native_return_value = uiOpenFile(native_parent);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

/**
 * void
 * uiProgressBarSetValue(uiProgressBar * p, int n)
 */
#define mruby_UI_progressBarSetValue
#define uiProgressBarSetValue_REQUIRED_ARGC 2
#define uiProgressBarSetValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_progressBarSetValue(mrb_state* mrb, mrb_value self)
{

  mrb_value p;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &p, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_ProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ProgressBar expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiProgressBar * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiProgressBar(p));

  /* Invocation */
  uiProgressBarSetValue(native_p, native_n);

  return mrb_nil_value();
}

/**
 * int
 * uiProgressBarValue(uiProgressBar * p)
 */
#define mruby_UI_progressBarValue
#define uiProgressBarValue_REQUIRED_ARGC 1
#define uiProgressBarValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_progressBarValue(mrb_state* mrb, mrb_value self)
{

  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, UI_ProgressBar_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ProgressBar expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiProgressBar * native_p = (mrb_nil_p(p) ? NULL : mruby_UI_unbox_uiProgressBar(p));

  /* Invocation */
  int native_return_value = uiProgressBarValue(native_p);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

///**
// * void
// * uiQueueMain(void (*)(void *) f, void * data)
// */
//#define mruby_UI_queueMain
//#define uiQueueMain_REQUIRED_ARGC 2
//#define uiQueueMain_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_queueMain(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oo", &f, &data);
//
//  /* Type checking */
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  void (*native_f)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiQueueMain(native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiQuit()
 */
#define mruby_UI_quit
#define uiQuit_REQUIRED_ARGC 0
#define uiQuit_OPTIONAL_ARGC 0
mrb_value
mrb_UI_quit(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiQuit();

  return mrb_nil_value();
}

/**
 * void
 * uiRadioButtonsAppend(uiRadioButtons * r, const char * text)
 */
#define mruby_UI_radioButtonsAppend
#define uiRadioButtonsAppend_REQUIRED_ARGC 2
#define uiRadioButtonsAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_radioButtonsAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value r;
  char * native_text = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &r, &native_text);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, UI_RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_uiRadioButtons(r));

  /* Invocation */
  uiRadioButtonsAppend(native_r, native_text);

  return mrb_nil_value();
}

///**
// * void
// * uiRadioButtonsOnSelected(uiRadioButtons * r, void (*)(uiRadioButtons *, void *) f, void * data)
// */
//#define mruby_UI_radioButtonsOnSelected
//#define uiRadioButtonsOnSelected_REQUIRED_ARGC 3
//#define uiRadioButtonsOnSelected_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_radioButtonsOnSelected(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value r;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &r, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, r, UI_RadioButtons_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiRadioButtons_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_uiRadioButtons(r));
//
//  void (*native_f)(uiRadioButtons *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiRadioButtons_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiRadioButtonsOnSelected(native_r, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * int
 * uiRadioButtonsSelected(uiRadioButtons * r)
 */
#define mruby_UI_radioButtonsSelected
#define uiRadioButtonsSelected_REQUIRED_ARGC 1
#define uiRadioButtonsSelected_OPTIONAL_ARGC 0
mrb_value
mrb_UI_radioButtonsSelected(mrb_state* mrb, mrb_value self)
{

  mrb_value r;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &r);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, UI_RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_uiRadioButtons(r));

  /* Invocation */
  int native_return_value = uiRadioButtonsSelected(native_r);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiRadioButtonsSetSelected(uiRadioButtons * r, int n)
 */
#define mruby_UI_radioButtonsSetSelected
#define uiRadioButtonsSetSelected_REQUIRED_ARGC 2
#define uiRadioButtonsSetSelected_OPTIONAL_ARGC 0
mrb_value
mrb_UI_radioButtonsSetSelected(mrb_state* mrb, mrb_value self)
{

  mrb_value r;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &r, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, UI_RadioButtons_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RadioButtons expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiRadioButtons * native_r = (mrb_nil_p(r) ? NULL : mruby_UI_unbox_uiRadioButtons(r));

  /* Invocation */
  uiRadioButtonsSetSelected(native_r, native_n);

  return mrb_nil_value();
}

/**
 * char *
 * uiSaveFile(uiWindow * parent)
 */
#define mruby_UI_saveFile
#define uiSaveFile_REQUIRED_ARGC 1
#define uiSaveFile_OPTIONAL_ARGC 0
mrb_value
mrb_UI_saveFile(mrb_state* mrb, mrb_value self)
{

  mrb_value parent;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &parent);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_parent = (mrb_nil_p(parent) ? NULL : mruby_UI_unbox_uiWindow(parent));

  /* Invocation */
  char * native_return_value = uiSaveFile(native_parent);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

///**
// * void
// * uiSliderOnChanged(uiSlider * s, void (*)(uiSlider *, void *) f, void * data)
// */
//#define mruby_UI_sliderOnChanged
//#define uiSliderOnChanged_REQUIRED_ARGC 3
//#define uiSliderOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_sliderOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value s;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &s, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, s, UI_Slider_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiSlider_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSlider(s));
//
//  void (*native_f)(uiSlider *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiSlider_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiSliderOnChanged(native_s, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiSliderSetValue(uiSlider * s, int value)
 */
#define mruby_UI_sliderSetValue
#define uiSliderSetValue_REQUIRED_ARGC 2
#define uiSliderSetValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_sliderSetValue(mrb_state* mrb, mrb_value self)
{

  mrb_value s;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &s, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSlider(s));

  /* Invocation */
  uiSliderSetValue(native_s, native_value);

  return mrb_nil_value();
}

/**
 * int
 * uiSliderValue(uiSlider * s)
 */
#define mruby_UI_sliderValue
#define uiSliderValue_REQUIRED_ARGC 1
#define uiSliderValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_sliderValue(mrb_state* mrb, mrb_value self)
{

  mrb_value s;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &s);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Slider_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Slider expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiSlider * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSlider(s));

  /* Invocation */
  int native_return_value = uiSliderValue(native_s);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

///**
// * void
// * uiSpinboxOnChanged(uiSpinbox * s, void (*)(uiSpinbox *, void *) f, void * data)
// */
//#define mruby_UI_spinboxOnChanged
//#define uiSpinboxOnChanged_REQUIRED_ARGC 3
//#define uiSpinboxOnChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_spinboxOnChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value s;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &s, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, s, UI_Spinbox_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiSpinbox_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSpinbox(s));
//
//  void (*native_f)(uiSpinbox *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiSpinbox_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiSpinboxOnChanged(native_s, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiSpinboxSetValue(uiSpinbox * s, int value)
 */
#define mruby_UI_spinboxSetValue
#define uiSpinboxSetValue_REQUIRED_ARGC 2
#define uiSpinboxSetValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_spinboxSetValue(mrb_state* mrb, mrb_value self)
{

  mrb_value s;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &s, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSpinbox(s));

  /* Invocation */
  uiSpinboxSetValue(native_s, native_value);

  return mrb_nil_value();
}

/**
 * int
 * uiSpinboxValue(uiSpinbox * s)
 */
#define mruby_UI_spinboxValue
#define uiSpinboxValue_REQUIRED_ARGC 1
#define uiSpinboxValue_OPTIONAL_ARGC 0
mrb_value
mrb_UI_spinboxValue(mrb_state* mrb, mrb_value self)
{

  mrb_value s;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &s);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, s, UI_Spinbox_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Spinbox expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiSpinbox * native_s = (mrb_nil_p(s) ? NULL : mruby_UI_unbox_uiSpinbox(s));

  /* Invocation */
  int native_return_value = uiSpinboxValue(native_s);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiTabAppend(uiTab * t, const char * name, uiControl * c)
 */
#define mruby_UI_tabAppend
#define uiTabAppend_REQUIRED_ARGC 3
#define uiTabAppend_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabAppend(mrb_state* mrb, mrb_value self)
{

  mrb_value t;
  char * native_name = NULL;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &t, &native_name, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  /* Invocation */
  uiTabAppend(native_t, native_name, native_c);

  return mrb_nil_value();
}

/**
 * void
 * uiTabDelete(uiTab * t, int index)
 */
#define mruby_UI_tabDelete
#define uiTabDelete_REQUIRED_ARGC 2
#define uiTabDelete_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabDelete(mrb_state* mrb, mrb_value self)
{

  mrb_value t;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &t, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  /* Invocation */
  uiTabDelete(native_t, native_index);

  return mrb_nil_value();
}

/**
 * void
 * uiTabInsertAt(uiTab * t, const char * name, int before, uiControl * c)
 */
#define mruby_UI_tabInsertAt
#define uiTabInsertAt_REQUIRED_ARGC 4
#define uiTabInsertAt_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabInsertAt(mrb_state* mrb, mrb_value self)
{

  mrb_value t;
  char * native_name = NULL;
  mrb_int native_before;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "ozio", &t, &native_name, &native_before, &c);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  uiControl * native_c = (mrb_nil_p(c) ? NULL : mruby_UI_unbox_uiControl(c));

  /* Invocation */
  uiTabInsertAt(native_t, native_name, native_before, native_c);

  return mrb_nil_value();
}

/**
 * int
 * uiTabMargined(uiTab * t, int page)
 */
#define mruby_UI_tabMargined
#define uiTabMargined_REQUIRED_ARGC 2
#define uiTabMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value t;
  mrb_int native_page;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &t, &native_page);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  /* Invocation */
  int native_return_value = uiTabMargined(native_t, native_page);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * int
 * uiTabNumPages(uiTab * t)
 */
#define mruby_UI_tabNumPages
#define uiTabNumPages_REQUIRED_ARGC 1
#define uiTabNumPages_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabNumPages(mrb_state* mrb, mrb_value self)
{

  mrb_value t;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &t);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  /* Invocation */
  int native_return_value = uiTabNumPages(native_t);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiTabSetMargined(uiTab * t, int page, int margined)
 */
#define mruby_UI_tabSetMargined
#define uiTabSetMargined_REQUIRED_ARGC 3
#define uiTabSetMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_tabSetMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value t;
  mrb_int native_page;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &t, &native_page, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, t, UI_Tab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tab expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiTab * native_t = (mrb_nil_p(t) ? NULL : mruby_UI_unbox_uiTab(t));

  /* Invocation */
  uiTabSetMargined(native_t, native_page, native_margined);

  return mrb_nil_value();
}

/**
 * void
 * uiUninit()
 */
#define mruby_UI_uninit
#define uiUninit_REQUIRED_ARGC 0
#define uiUninit_OPTIONAL_ARGC 0
mrb_value
mrb_UI_uninit(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  uiUninit();

  return mrb_nil_value();
}

/**
 * void
 * uiUserBugCannotSetParentOnToplevel(const char * type)
 */
#define mruby_UI_userBugCannotSetParentOnToplevel
#define uiUserBugCannotSetParentOnToplevel_REQUIRED_ARGC 1
#define uiUserBugCannotSetParentOnToplevel_OPTIONAL_ARGC 0
mrb_value
mrb_UI_userBugCannotSetParentOnToplevel(mrb_state* mrb, mrb_value self)
{

  char * native_type = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_type);

  /* Invocation */
  uiUserBugCannotSetParentOnToplevel(native_type);

  return mrb_nil_value();
}

/**
 * int
 * uiWindowBorderless(uiWindow * w)
 */
#define mruby_UI_windowBorderless
#define uiWindowBorderless_REQUIRED_ARGC 1
#define uiWindowBorderless_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowBorderless(mrb_state* mrb, mrb_value self)
{

  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowBorderless(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * void
 * uiWindowContentSize(uiWindow * w, int * width, int * height)
 */
#define mruby_UI_windowContentSize
#define uiWindowContentSize_REQUIRED_ARGC 3
#define uiWindowContentSize_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowContentSize(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_value width;
  mrb_value height;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &w, &width, &height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, width, "int *")) {
    return mrb_nil_value();
  }
  if (!mruby_UI_typecheck_void_ptr(mrb, height, "int *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  void * native_width = (mrb_nil_p(width) ? NULL : mruby_UI_unbox_void_ptr(width));

  void * native_height = (mrb_nil_p(height) ? NULL : mruby_UI_unbox_void_ptr(height));

  /* Invocation */
  uiWindowContentSize(native_w, native_width, native_height);

  return mrb_nil_value();
}

/**
 * int
 * uiWindowFullscreen(uiWindow * w)
 */
#define mruby_UI_windowFullscreen
#define uiWindowFullscreen_REQUIRED_ARGC 1
#define uiWindowFullscreen_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowFullscreen(mrb_state* mrb, mrb_value self)
{

  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowFullscreen(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

/**
 * int
 * uiWindowMargined(uiWindow * w)
 */
#define mruby_UI_windowMargined
#define uiWindowMargined_REQUIRED_ARGC 1
#define uiWindowMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  int native_return_value = uiWindowMargined(native_w);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);

  return return_value;
}

///**
// * void
// * uiWindowOnClosing(uiWindow * w, int (*)(uiWindow *, void *) f, void * data)
// */
//#define mruby_UI_windowOnClosing
//#define uiWindowOnClosing_REQUIRED_ARGC 3
//#define uiWindowOnClosing_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_windowOnClosing(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value w;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &w, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));
//
//  int (*native_f)(uiWindow *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiWindowOnClosing(native_w, native_f, native_data);
//
//  return mrb_nil_value();
//}

///**
// * void
// * uiWindowOnContentSizeChanged(uiWindow * w, void (*)(uiWindow *, void *) f, void * data)
// */
//#define mruby_UI_windowOnContentSizeChanged
//#define uiWindowOnContentSizeChanged_REQUIRED_ARGC 3
//#define uiWindowOnContentSizeChanged_OPTIONAL_ARGC 0
//mrb_value
//mrb_UI_windowOnContentSizeChanged(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value w;
//  mrb_value f;
//  mrb_value data;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &w, &f, &data);
//
//  /* Type checking */
//  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
//    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//  if (!mruby_UI_typecheck_void_ptr(mrb, data, "void *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));
//
//  void (*native_f)(uiWindow *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiWindow_PTR_COMMA_void_PTR_RPAREN(f);
//
//  void * native_data = (mrb_nil_p(data) ? NULL : mruby_UI_unbox_void_ptr(data));
//
//  /* Invocation */
//  uiWindowOnContentSizeChanged(native_w, native_f, native_data);
//
//  return mrb_nil_value();
//}

/**
 * void
 * uiWindowSetBorderless(uiWindow * w, int borderless)
 */
#define mruby_UI_windowSetBorderless
#define uiWindowSetBorderless_REQUIRED_ARGC 2
#define uiWindowSetBorderless_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetBorderless(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_int native_borderless;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_borderless);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetBorderless(native_w, native_borderless);

  return mrb_nil_value();
}

/**
 * void
 * uiWindowSetChild(uiWindow * w, uiControl * child)
 */
#define mruby_UI_windowSetChild
#define uiWindowSetChild_REQUIRED_ARGC 2
#define uiWindowSetChild_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetChild(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_value child;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &w, &child);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, child, UI_Control_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Control expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  uiControl * native_child = (mrb_nil_p(child) ? NULL : mruby_UI_unbox_uiControl(child));

  /* Invocation */
  uiWindowSetChild(native_w, native_child);

  return mrb_nil_value();
}

/**
 * void
 * uiWindowSetContentSize(uiWindow * w, int width, int height)
 */
#define mruby_UI_windowSetContentSize
#define uiWindowSetContentSize_REQUIRED_ARGC 3
#define uiWindowSetContentSize_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetContentSize(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_int native_width;
  mrb_int native_height;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &w, &native_width, &native_height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetContentSize(native_w, native_width, native_height);

  return mrb_nil_value();
}

/**
 * void
 * uiWindowSetFullscreen(uiWindow * w, int fullscreen)
 */
#define mruby_UI_windowSetFullscreen
#define uiWindowSetFullscreen_REQUIRED_ARGC 2
#define uiWindowSetFullscreen_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetFullscreen(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_int native_fullscreen;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_fullscreen);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetFullscreen(native_w, native_fullscreen);

  return mrb_nil_value();
}

/**
 * void
 * uiWindowSetMargined(uiWindow * w, int margined)
 */
#define mruby_UI_windowSetMargined
#define uiWindowSetMargined_REQUIRED_ARGC 2
#define uiWindowSetMargined_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetMargined(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  mrb_int native_margined;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &w, &native_margined);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetMargined(native_w, native_margined);

  return mrb_nil_value();
}

/**
 * void
 * uiWindowSetTitle(uiWindow * w, const char * title)
 */
#define mruby_UI_windowSetTitle
#define uiWindowSetTitle_REQUIRED_ARGC 2
#define uiWindowSetTitle_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowSetTitle(mrb_state* mrb, mrb_value self)
{

  mrb_value w;
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &w, &native_title);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  uiWindowSetTitle(native_w, native_title);

  return mrb_nil_value();
}

/**
 * char *
 * uiWindowTitle(uiWindow * w)
 */
#define mruby_UI_windowTitle
#define uiWindowTitle_REQUIRED_ARGC 1
#define uiWindowTitle_OPTIONAL_ARGC 0
mrb_value
mrb_UI_windowTitle(mrb_state* mrb, mrb_value self)
{

  mrb_value w;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &w);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, w, UI_Window_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Window expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  uiWindow * native_w = (mrb_nil_p(w) ? NULL : mruby_UI_unbox_uiWindow(w));

  /* Invocation */
  char * native_return_value = uiWindowTitle(native_w);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_UI_box_void_ptr(mrb, native_return_value));

  return return_value;
}

