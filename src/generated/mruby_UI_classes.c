/**
 * Ruby Class: Area 
 * Wraps: uiArea
 */

static void
free_uiArea(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiArea_data_type = {
   "uiArea", free_uiArea
};

void mrb_UI_Area_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Area"))) {
    struct RClass* Area_class = mrb_define_class_under(mrb, UI_module(mrb), "Area", mrb->object_class);
    MRB_SET_INSTANCE_TT(Area_class, MRB_TT_DATA);

    mrb_include_module(mrb, Area_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiArea(mrb_state* mrb, uiArea *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Area_class(mrb), &uiArea_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiArea(mrb_state* mrb, uiArea *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Area_class(mrb), &uiArea_data_type, box));
}

void
mruby_UI_set_uiArea_data_ptr(mrb_value obj, uiArea *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiArea_data_type);
}

void
mruby_UI_gift_uiArea_data_ptr(mrb_value obj, uiArea *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiArea_data_type);
}

uiArea *
mruby_UI_unbox_uiArea(mrb_value boxed)
{
  return (uiArea *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: AreaDrawParams 
 * Wraps: uiAreaDrawParams
 */

static void
free_uiAreaDrawParams(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiAreaDrawParams_data_type = {
   "uiAreaDrawParams", free_uiAreaDrawParams
};

void mrb_UI_AreaDrawParams_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaDrawParams"))) {
    struct RClass* AreaDrawParams_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaDrawParams", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaDrawParams_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaDrawParams_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
}

void
mruby_UI_set_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaDrawParams_data_type);
}

void
mruby_UI_gift_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaDrawParams_data_type);
}

uiAreaDrawParams *
mruby_UI_unbox_uiAreaDrawParams(mrb_value boxed)
{
  return (uiAreaDrawParams *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: AreaHandler 
 * Wraps: uiAreaHandler
 */

static void
free_uiAreaHandler(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiAreaHandler_data_type = {
   "uiAreaHandler", free_uiAreaHandler
};

void mrb_UI_AreaHandler_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaHandler"))) {
    struct RClass* AreaHandler_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaHandler", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaHandler_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaHandler_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaHandler_class(mrb), &uiAreaHandler_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaHandler_class(mrb), &uiAreaHandler_data_type, box));
}

void
mruby_UI_set_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaHandler_data_type);
}

void
mruby_UI_gift_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaHandler_data_type);
}

uiAreaHandler *
mruby_UI_unbox_uiAreaHandler(mrb_value boxed)
{
  return (uiAreaHandler *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: AreaKeyEvent 
 * Wraps: uiAreaKeyEvent
 */

static void
free_uiAreaKeyEvent(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiAreaKeyEvent_data_type = {
   "uiAreaKeyEvent", free_uiAreaKeyEvent
};

void mrb_UI_AreaKeyEvent_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaKeyEvent"))) {
    struct RClass* AreaKeyEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaKeyEvent", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaKeyEvent_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaKeyEvent_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
}

void
mruby_UI_set_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaKeyEvent_data_type);
}

void
mruby_UI_gift_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaKeyEvent_data_type);
}

uiAreaKeyEvent *
mruby_UI_unbox_uiAreaKeyEvent(mrb_value boxed)
{
  return (uiAreaKeyEvent *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: AreaMouseEvent 
 * Wraps: uiAreaMouseEvent
 */

static void
free_uiAreaMouseEvent(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiAreaMouseEvent_data_type = {
   "uiAreaMouseEvent", free_uiAreaMouseEvent
};

void mrb_UI_AreaMouseEvent_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaMouseEvent"))) {
    struct RClass* AreaMouseEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaMouseEvent", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaMouseEvent_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaMouseEvent_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_AreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
}

void
mruby_UI_set_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaMouseEvent_data_type);
}

void
mruby_UI_gift_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiAreaMouseEvent_data_type);
}

uiAreaMouseEvent *
mruby_UI_unbox_uiAreaMouseEvent(mrb_value boxed)
{
  return (uiAreaMouseEvent *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Box 
 * Wraps: uiBox
 */

static void
free_uiBox(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiBox_data_type = {
   "uiBox", free_uiBox
};

void mrb_UI_Box_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Box"))) {
    struct RClass* Box_class = mrb_define_class_under(mrb, UI_module(mrb), "Box", mrb->object_class);
    MRB_SET_INSTANCE_TT(Box_class, MRB_TT_DATA);

    mrb_include_module(mrb, Box_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiBox(mrb_state* mrb, uiBox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Box_class(mrb), &uiBox_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiBox(mrb_state* mrb, uiBox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Box_class(mrb), &uiBox_data_type, box));
}

void
mruby_UI_set_uiBox_data_ptr(mrb_value obj, uiBox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiBox_data_type);
}

void
mruby_UI_gift_uiBox_data_ptr(mrb_value obj, uiBox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiBox_data_type);
}

uiBox *
mruby_UI_unbox_uiBox(mrb_value boxed)
{
  return (uiBox *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Button 
 * Wraps: uiButton
 */

static void
free_uiButton(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiButton_data_type = {
   "uiButton", free_uiButton
};

void mrb_UI_Button_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Button"))) {
    struct RClass* Button_class = mrb_define_class_under(mrb, UI_module(mrb), "Button", mrb->object_class);
    MRB_SET_INSTANCE_TT(Button_class, MRB_TT_DATA);

    mrb_include_module(mrb, Button_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiButton(mrb_state* mrb, uiButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Button_class(mrb), &uiButton_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiButton(mrb_state* mrb, uiButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Button_class(mrb), &uiButton_data_type, box));
}

void
mruby_UI_set_uiButton_data_ptr(mrb_value obj, uiButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiButton_data_type);
}

void
mruby_UI_gift_uiButton_data_ptr(mrb_value obj, uiButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiButton_data_type);
}

uiButton *
mruby_UI_unbox_uiButton(mrb_value boxed)
{
  return (uiButton *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Checkbox 
 * Wraps: uiCheckbox
 */

static void
free_uiCheckbox(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiCheckbox_data_type = {
   "uiCheckbox", free_uiCheckbox
};

void mrb_UI_Checkbox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Checkbox"))) {
    struct RClass* Checkbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Checkbox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Checkbox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Checkbox_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Checkbox_class(mrb), &uiCheckbox_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Checkbox_class(mrb), &uiCheckbox_data_type, box));
}

void
mruby_UI_set_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiCheckbox_data_type);
}

void
mruby_UI_gift_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiCheckbox_data_type);
}

uiCheckbox *
mruby_UI_unbox_uiCheckbox(mrb_value boxed)
{
  return (uiCheckbox *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: ColorButton 
 * Wraps: uiColorButton
 */

static void
free_uiColorButton(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiColorButton_data_type = {
   "uiColorButton", free_uiColorButton
};

void mrb_UI_ColorButton_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "ColorButton"))) {
    struct RClass* ColorButton_class = mrb_define_class_under(mrb, UI_module(mrb), "ColorButton", mrb->object_class);
    MRB_SET_INSTANCE_TT(ColorButton_class, MRB_TT_DATA);

    mrb_include_module(mrb, ColorButton_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiColorButton(mrb_state* mrb, uiColorButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_ColorButton_class(mrb), &uiColorButton_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiColorButton(mrb_state* mrb, uiColorButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_ColorButton_class(mrb), &uiColorButton_data_type, box));
}

void
mruby_UI_set_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiColorButton_data_type);
}

void
mruby_UI_gift_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiColorButton_data_type);
}

uiColorButton *
mruby_UI_unbox_uiColorButton(mrb_value boxed)
{
  return (uiColorButton *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Combobox 
 * Wraps: uiCombobox
 */

static void
free_uiCombobox(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiCombobox_data_type = {
   "uiCombobox", free_uiCombobox
};

void mrb_UI_Combobox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Combobox"))) {
    struct RClass* Combobox_class = mrb_define_class_under(mrb, UI_module(mrb), "Combobox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Combobox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Combobox_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiCombobox(mrb_state* mrb, uiCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Combobox_class(mrb), &uiCombobox_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiCombobox(mrb_state* mrb, uiCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Combobox_class(mrb), &uiCombobox_data_type, box));
}

void
mruby_UI_set_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiCombobox_data_type);
}

void
mruby_UI_gift_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiCombobox_data_type);
}

uiCombobox *
mruby_UI_unbox_uiCombobox(mrb_value boxed)
{
  return (uiCombobox *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Control 
 * Wraps: uiControl
 */

static void
free_uiControl(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiControl_data_type = {
   "uiControl", free_uiControl
};

void mrb_UI_Control_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Control"))) {
    struct RClass* Control_class = mrb_define_class_under(mrb, UI_module(mrb), "Control", mrb->object_class);
    MRB_SET_INSTANCE_TT(Control_class, MRB_TT_DATA);

    mrb_include_module(mrb, Control_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiControl(mrb_state* mrb, uiControl *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Control_class(mrb), &uiControl_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiControl(mrb_state* mrb, uiControl *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Control_class(mrb), &uiControl_data_type, box));
}

void
mruby_UI_set_uiControl_data_ptr(mrb_value obj, uiControl *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiControl_data_type);
}

void
mruby_UI_gift_uiControl_data_ptr(mrb_value obj, uiControl *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiControl_data_type);
}

uiControl *
mruby_UI_unbox_uiControl(mrb_value boxed)
{
  return (uiControl *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DateTimePicker 
 * Wraps: uiDateTimePicker
 */

static void
free_uiDateTimePicker(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDateTimePicker_data_type = {
   "uiDateTimePicker", free_uiDateTimePicker
};

void mrb_UI_DateTimePicker_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DateTimePicker"))) {
    struct RClass* DateTimePicker_class = mrb_define_class_under(mrb, UI_module(mrb), "DateTimePicker", mrb->object_class);
    MRB_SET_INSTANCE_TT(DateTimePicker_class, MRB_TT_DATA);

    mrb_include_module(mrb, DateTimePicker_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
}

void
mruby_UI_set_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDateTimePicker_data_type);
}

void
mruby_UI_gift_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDateTimePicker_data_type);
}

uiDateTimePicker *
mruby_UI_unbox_uiDateTimePicker(mrb_value boxed)
{
  return (uiDateTimePicker *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawBrush 
 * Wraps: uiDrawBrush
 */

static void
free_uiDrawBrush(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawBrush_data_type = {
   "uiDrawBrush", free_uiDrawBrush
};

void mrb_UI_DrawBrush_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawBrush"))) {
    struct RClass* DrawBrush_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrush", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawBrush_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawBrush_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawBrush_class(mrb), &uiDrawBrush_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawBrush_class(mrb), &uiDrawBrush_data_type, box));
}

void
mruby_UI_set_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawBrush_data_type);
}

void
mruby_UI_gift_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawBrush_data_type);
}

uiDrawBrush *
mruby_UI_unbox_uiDrawBrush(mrb_value boxed)
{
  return (uiDrawBrush *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawBrushGradientStop 
 * Wraps: uiDrawBrushGradientStop
 */

static void
free_uiDrawBrushGradientStop(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawBrushGradientStop_data_type = {
   "uiDrawBrushGradientStop", free_uiDrawBrushGradientStop
};

void mrb_UI_DrawBrushGradientStop_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawBrushGradientStop"))) {
    struct RClass* DrawBrushGradientStop_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrushGradientStop", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawBrushGradientStop_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawBrushGradientStop_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
}

void
mruby_UI_set_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawBrushGradientStop_data_type);
}

void
mruby_UI_gift_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawBrushGradientStop_data_type);
}

uiDrawBrushGradientStop *
mruby_UI_unbox_uiDrawBrushGradientStop(mrb_value boxed)
{
  return (uiDrawBrushGradientStop *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawContext 
 * Wraps: uiDrawContext
 */

static void
free_uiDrawContext(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawContext_data_type = {
   "uiDrawContext", free_uiDrawContext
};

void mrb_UI_DrawContext_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawContext"))) {
    struct RClass* DrawContext_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawContext", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawContext_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawContext_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawContext_class(mrb), &uiDrawContext_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawContext_class(mrb), &uiDrawContext_data_type, box));
}

void
mruby_UI_set_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawContext_data_type);
}

void
mruby_UI_gift_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawContext_data_type);
}

uiDrawContext *
mruby_UI_unbox_uiDrawContext(mrb_value boxed)
{
  return (uiDrawContext *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawFontFamilies 
 * Wraps: uiDrawFontFamilies
 */

static void
free_uiDrawFontFamilies(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawFontFamilies_data_type = {
   "uiDrawFontFamilies", free_uiDrawFontFamilies
};

void mrb_UI_DrawFontFamilies_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawFontFamilies"))) {
    struct RClass* DrawFontFamilies_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawFontFamilies", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawFontFamilies_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawFontFamilies_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
}

void
mruby_UI_set_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawFontFamilies_data_type);
}

void
mruby_UI_gift_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawFontFamilies_data_type);
}

uiDrawFontFamilies *
mruby_UI_unbox_uiDrawFontFamilies(mrb_value boxed)
{
  return (uiDrawFontFamilies *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawMatrix 
 * Wraps: uiDrawMatrix
 */

static void
free_uiDrawMatrix(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawMatrix_data_type = {
   "uiDrawMatrix", free_uiDrawMatrix
};

void mrb_UI_DrawMatrix_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawMatrix"))) {
    struct RClass* DrawMatrix_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawMatrix", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawMatrix_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawMatrix_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
}

void
mruby_UI_set_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawMatrix_data_type);
}

void
mruby_UI_gift_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawMatrix_data_type);
}

uiDrawMatrix *
mruby_UI_unbox_uiDrawMatrix(mrb_value boxed)
{
  return (uiDrawMatrix *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawPath 
 * Wraps: uiDrawPath
 */

static void
free_uiDrawPath(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawPath_data_type = {
   "uiDrawPath", free_uiDrawPath
};

void mrb_UI_DrawPath_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawPath"))) {
    struct RClass* DrawPath_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawPath", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawPath_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawPath_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawPath_class(mrb), &uiDrawPath_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawPath_class(mrb), &uiDrawPath_data_type, box));
}

void
mruby_UI_set_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawPath_data_type);
}

void
mruby_UI_gift_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawPath_data_type);
}

uiDrawPath *
mruby_UI_unbox_uiDrawPath(mrb_value boxed)
{
  return (uiDrawPath *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawStrokeParams 
 * Wraps: uiDrawStrokeParams
 */

static void
free_uiDrawStrokeParams(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawStrokeParams_data_type = {
   "uiDrawStrokeParams", free_uiDrawStrokeParams
};

void mrb_UI_DrawStrokeParams_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawStrokeParams"))) {
    struct RClass* DrawStrokeParams_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawStrokeParams", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawStrokeParams_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawStrokeParams_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
}

void
mruby_UI_set_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawStrokeParams_data_type);
}

void
mruby_UI_gift_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawStrokeParams_data_type);
}

uiDrawStrokeParams *
mruby_UI_unbox_uiDrawStrokeParams(mrb_value boxed)
{
  return (uiDrawStrokeParams *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawTextFont 
 * Wraps: uiDrawTextFont
 */

static void
free_uiDrawTextFont(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawTextFont_data_type = {
   "uiDrawTextFont", free_uiDrawTextFont
};

void mrb_UI_DrawTextFont_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFont"))) {
    struct RClass* DrawTextFont_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFont", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFont_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFont_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
}

void
mruby_UI_set_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFont_data_type);
}

void
mruby_UI_gift_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFont_data_type);
}

uiDrawTextFont *
mruby_UI_unbox_uiDrawTextFont(mrb_value boxed)
{
  return (uiDrawTextFont *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawTextFontDescriptor 
 * Wraps: uiDrawTextFontDescriptor
 */

static void
free_uiDrawTextFontDescriptor(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawTextFontDescriptor_data_type = {
   "uiDrawTextFontDescriptor", free_uiDrawTextFontDescriptor
};

void mrb_UI_DrawTextFontDescriptor_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFontDescriptor"))) {
    struct RClass* DrawTextFontDescriptor_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontDescriptor", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFontDescriptor_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFontDescriptor_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
}

void
mruby_UI_set_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFontDescriptor_data_type);
}

void
mruby_UI_gift_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFontDescriptor_data_type);
}

uiDrawTextFontDescriptor *
mruby_UI_unbox_uiDrawTextFontDescriptor(mrb_value boxed)
{
  return (uiDrawTextFontDescriptor *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawTextFontMetrics 
 * Wraps: uiDrawTextFontMetrics
 */

static void
free_uiDrawTextFontMetrics(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawTextFontMetrics_data_type = {
   "uiDrawTextFontMetrics", free_uiDrawTextFontMetrics
};

void mrb_UI_DrawTextFontMetrics_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFontMetrics"))) {
    struct RClass* DrawTextFontMetrics_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontMetrics", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFontMetrics_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFontMetrics_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
}

void
mruby_UI_set_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFontMetrics_data_type);
}

void
mruby_UI_gift_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextFontMetrics_data_type);
}

uiDrawTextFontMetrics *
mruby_UI_unbox_uiDrawTextFontMetrics(mrb_value boxed)
{
  return (uiDrawTextFontMetrics *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: DrawTextLayout 
 * Wraps: uiDrawTextLayout
 */

static void
free_uiDrawTextLayout(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiDrawTextLayout_data_type = {
   "uiDrawTextLayout", free_uiDrawTextLayout
};

void mrb_UI_DrawTextLayout_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextLayout"))) {
    struct RClass* DrawTextLayout_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextLayout", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextLayout_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextLayout_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_DrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
}

void
mruby_UI_set_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextLayout_data_type);
}

void
mruby_UI_gift_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiDrawTextLayout_data_type);
}

uiDrawTextLayout *
mruby_UI_unbox_uiDrawTextLayout(mrb_value boxed)
{
  return (uiDrawTextLayout *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: EditableCombobox 
 * Wraps: uiEditableCombobox
 */

static void
free_uiEditableCombobox(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiEditableCombobox_data_type = {
   "uiEditableCombobox", free_uiEditableCombobox
};

void mrb_UI_EditableCombobox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "EditableCombobox"))) {
    struct RClass* EditableCombobox_class = mrb_define_class_under(mrb, UI_module(mrb), "EditableCombobox", mrb->object_class);
    MRB_SET_INSTANCE_TT(EditableCombobox_class, MRB_TT_DATA);

    mrb_include_module(mrb, EditableCombobox_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_EditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_EditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
}

void
mruby_UI_set_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiEditableCombobox_data_type);
}

void
mruby_UI_gift_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiEditableCombobox_data_type);
}

uiEditableCombobox *
mruby_UI_unbox_uiEditableCombobox(mrb_value boxed)
{
  return (uiEditableCombobox *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Entry 
 * Wraps: uiEntry
 */

static void
free_uiEntry(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiEntry_data_type = {
   "uiEntry", free_uiEntry
};

void mrb_UI_Entry_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Entry"))) {
    struct RClass* Entry_class = mrb_define_class_under(mrb, UI_module(mrb), "Entry", mrb->object_class);
    MRB_SET_INSTANCE_TT(Entry_class, MRB_TT_DATA);

    mrb_include_module(mrb, Entry_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiEntry(mrb_state* mrb, uiEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Entry_class(mrb), &uiEntry_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiEntry(mrb_state* mrb, uiEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Entry_class(mrb), &uiEntry_data_type, box));
}

void
mruby_UI_set_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiEntry_data_type);
}

void
mruby_UI_gift_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiEntry_data_type);
}

uiEntry *
mruby_UI_unbox_uiEntry(mrb_value boxed)
{
  return (uiEntry *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: FontButton 
 * Wraps: uiFontButton
 */

static void
free_uiFontButton(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiFontButton_data_type = {
   "uiFontButton", free_uiFontButton
};

void mrb_UI_FontButton_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "FontButton"))) {
    struct RClass* FontButton_class = mrb_define_class_under(mrb, UI_module(mrb), "FontButton", mrb->object_class);
    MRB_SET_INSTANCE_TT(FontButton_class, MRB_TT_DATA);

    mrb_include_module(mrb, FontButton_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiFontButton(mrb_state* mrb, uiFontButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_FontButton_class(mrb), &uiFontButton_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiFontButton(mrb_state* mrb, uiFontButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_FontButton_class(mrb), &uiFontButton_data_type, box));
}

void
mruby_UI_set_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiFontButton_data_type);
}

void
mruby_UI_gift_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiFontButton_data_type);
}

uiFontButton *
mruby_UI_unbox_uiFontButton(mrb_value boxed)
{
  return (uiFontButton *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Form 
 * Wraps: uiForm
 */

static void
free_uiForm(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiForm_data_type = {
   "uiForm", free_uiForm
};

void mrb_UI_Form_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Form"))) {
    struct RClass* Form_class = mrb_define_class_under(mrb, UI_module(mrb), "Form", mrb->object_class);
    MRB_SET_INSTANCE_TT(Form_class, MRB_TT_DATA);

    mrb_include_module(mrb, Form_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiForm(mrb_state* mrb, uiForm *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Form_class(mrb), &uiForm_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiForm(mrb_state* mrb, uiForm *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Form_class(mrb), &uiForm_data_type, box));
}

void
mruby_UI_set_uiForm_data_ptr(mrb_value obj, uiForm *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiForm_data_type);
}

void
mruby_UI_gift_uiForm_data_ptr(mrb_value obj, uiForm *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiForm_data_type);
}

uiForm *
mruby_UI_unbox_uiForm(mrb_value boxed)
{
  return (uiForm *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Grid 
 * Wraps: uiGrid
 */

static void
free_uiGrid(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiGrid_data_type = {
   "uiGrid", free_uiGrid
};

void mrb_UI_Grid_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Grid"))) {
    struct RClass* Grid_class = mrb_define_class_under(mrb, UI_module(mrb), "Grid", mrb->object_class);
    MRB_SET_INSTANCE_TT(Grid_class, MRB_TT_DATA);

    mrb_include_module(mrb, Grid_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiGrid(mrb_state* mrb, uiGrid *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Grid_class(mrb), &uiGrid_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiGrid(mrb_state* mrb, uiGrid *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Grid_class(mrb), &uiGrid_data_type, box));
}

void
mruby_UI_set_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiGrid_data_type);
}

void
mruby_UI_gift_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiGrid_data_type);
}

uiGrid *
mruby_UI_unbox_uiGrid(mrb_value boxed)
{
  return (uiGrid *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Group 
 * Wraps: uiGroup
 */

static void
free_uiGroup(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiGroup_data_type = {
   "uiGroup", free_uiGroup
};

void mrb_UI_Group_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Group"))) {
    struct RClass* Group_class = mrb_define_class_under(mrb, UI_module(mrb), "Group", mrb->object_class);
    MRB_SET_INSTANCE_TT(Group_class, MRB_TT_DATA);

    mrb_include_module(mrb, Group_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiGroup(mrb_state* mrb, uiGroup *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Group_class(mrb), &uiGroup_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiGroup(mrb_state* mrb, uiGroup *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Group_class(mrb), &uiGroup_data_type, box));
}

void
mruby_UI_set_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiGroup_data_type);
}

void
mruby_UI_gift_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiGroup_data_type);
}

uiGroup *
mruby_UI_unbox_uiGroup(mrb_value boxed)
{
  return (uiGroup *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: InitOptions 
 * Wraps: uiInitOptions
 */

static void
free_uiInitOptions(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiInitOptions_data_type = {
   "uiInitOptions", free_uiInitOptions
};

void mrb_UI_InitOptions_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "InitOptions"))) {
    struct RClass* InitOptions_class = mrb_define_class_under(mrb, UI_module(mrb), "InitOptions", mrb->object_class);
    MRB_SET_INSTANCE_TT(InitOptions_class, MRB_TT_DATA);

    mrb_include_module(mrb, InitOptions_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_InitOptions_class(mrb), &uiInitOptions_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_InitOptions_class(mrb), &uiInitOptions_data_type, box));
}

void
mruby_UI_set_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiInitOptions_data_type);
}

void
mruby_UI_gift_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiInitOptions_data_type);
}

uiInitOptions *
mruby_UI_unbox_uiInitOptions(mrb_value boxed)
{
  return (uiInitOptions *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Label 
 * Wraps: uiLabel
 */

static void
free_uiLabel(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiLabel_data_type = {
   "uiLabel", free_uiLabel
};

void mrb_UI_Label_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Label"))) {
    struct RClass* Label_class = mrb_define_class_under(mrb, UI_module(mrb), "Label", mrb->object_class);
    MRB_SET_INSTANCE_TT(Label_class, MRB_TT_DATA);

    mrb_include_module(mrb, Label_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiLabel(mrb_state* mrb, uiLabel *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Label_class(mrb), &uiLabel_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiLabel(mrb_state* mrb, uiLabel *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Label_class(mrb), &uiLabel_data_type, box));
}

void
mruby_UI_set_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiLabel_data_type);
}

void
mruby_UI_gift_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiLabel_data_type);
}

uiLabel *
mruby_UI_unbox_uiLabel(mrb_value boxed)
{
  return (uiLabel *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Menu 
 * Wraps: uiMenu
 */

static void
free_uiMenu(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiMenu_data_type = {
   "uiMenu", free_uiMenu
};

void mrb_UI_Menu_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Menu"))) {
    struct RClass* Menu_class = mrb_define_class_under(mrb, UI_module(mrb), "Menu", mrb->object_class);
    MRB_SET_INSTANCE_TT(Menu_class, MRB_TT_DATA);

    mrb_include_module(mrb, Menu_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiMenu(mrb_state* mrb, uiMenu *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Menu_class(mrb), &uiMenu_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiMenu(mrb_state* mrb, uiMenu *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Menu_class(mrb), &uiMenu_data_type, box));
}

void
mruby_UI_set_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMenu_data_type);
}

void
mruby_UI_gift_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMenu_data_type);
}

uiMenu *
mruby_UI_unbox_uiMenu(mrb_value boxed)
{
  return (uiMenu *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: MenuItem 
 * Wraps: uiMenuItem
 */

static void
free_uiMenuItem(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiMenuItem_data_type = {
   "uiMenuItem", free_uiMenuItem
};

void mrb_UI_MenuItem_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "MenuItem"))) {
    struct RClass* MenuItem_class = mrb_define_class_under(mrb, UI_module(mrb), "MenuItem", mrb->object_class);
    MRB_SET_INSTANCE_TT(MenuItem_class, MRB_TT_DATA);

    mrb_include_module(mrb, MenuItem_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_MenuItem_class(mrb), &uiMenuItem_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_MenuItem_class(mrb), &uiMenuItem_data_type, box));
}

void
mruby_UI_set_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMenuItem_data_type);
}

void
mruby_UI_gift_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMenuItem_data_type);
}

uiMenuItem *
mruby_UI_unbox_uiMenuItem(mrb_value boxed)
{
  return (uiMenuItem *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: MultilineEntry 
 * Wraps: uiMultilineEntry
 */

static void
free_uiMultilineEntry(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiMultilineEntry_data_type = {
   "uiMultilineEntry", free_uiMultilineEntry
};

void mrb_UI_MultilineEntry_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "MultilineEntry"))) {
    struct RClass* MultilineEntry_class = mrb_define_class_under(mrb, UI_module(mrb), "MultilineEntry", mrb->object_class);
    MRB_SET_INSTANCE_TT(MultilineEntry_class, MRB_TT_DATA);

    mrb_include_module(mrb, MultilineEntry_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_MultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_MultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
}

void
mruby_UI_set_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMultilineEntry_data_type);
}

void
mruby_UI_gift_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiMultilineEntry_data_type);
}

uiMultilineEntry *
mruby_UI_unbox_uiMultilineEntry(mrb_value boxed)
{
  return (uiMultilineEntry *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: ProgressBar 
 * Wraps: uiProgressBar
 */

static void
free_uiProgressBar(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiProgressBar_data_type = {
   "uiProgressBar", free_uiProgressBar
};

void mrb_UI_ProgressBar_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "ProgressBar"))) {
    struct RClass* ProgressBar_class = mrb_define_class_under(mrb, UI_module(mrb), "ProgressBar", mrb->object_class);
    MRB_SET_INSTANCE_TT(ProgressBar_class, MRB_TT_DATA);

    mrb_include_module(mrb, ProgressBar_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_ProgressBar_class(mrb), &uiProgressBar_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_ProgressBar_class(mrb), &uiProgressBar_data_type, box));
}

void
mruby_UI_set_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiProgressBar_data_type);
}

void
mruby_UI_gift_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiProgressBar_data_type);
}

uiProgressBar *
mruby_UI_unbox_uiProgressBar(mrb_value boxed)
{
  return (uiProgressBar *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: RadioButtons 
 * Wraps: uiRadioButtons
 */

static void
free_uiRadioButtons(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiRadioButtons_data_type = {
   "uiRadioButtons", free_uiRadioButtons
};

void mrb_UI_RadioButtons_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "RadioButtons"))) {
    struct RClass* RadioButtons_class = mrb_define_class_under(mrb, UI_module(mrb), "RadioButtons", mrb->object_class);
    MRB_SET_INSTANCE_TT(RadioButtons_class, MRB_TT_DATA);

    mrb_include_module(mrb, RadioButtons_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_RadioButtons_class(mrb), &uiRadioButtons_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_RadioButtons_class(mrb), &uiRadioButtons_data_type, box));
}

void
mruby_UI_set_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiRadioButtons_data_type);
}

void
mruby_UI_gift_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiRadioButtons_data_type);
}

uiRadioButtons *
mruby_UI_unbox_uiRadioButtons(mrb_value boxed)
{
  return (uiRadioButtons *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Separator 
 * Wraps: uiSeparator
 */

static void
free_uiSeparator(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiSeparator_data_type = {
   "uiSeparator", free_uiSeparator
};

void mrb_UI_Separator_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Separator"))) {
    struct RClass* Separator_class = mrb_define_class_under(mrb, UI_module(mrb), "Separator", mrb->object_class);
    MRB_SET_INSTANCE_TT(Separator_class, MRB_TT_DATA);

    mrb_include_module(mrb, Separator_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiSeparator(mrb_state* mrb, uiSeparator *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Separator_class(mrb), &uiSeparator_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiSeparator(mrb_state* mrb, uiSeparator *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Separator_class(mrb), &uiSeparator_data_type, box));
}

void
mruby_UI_set_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSeparator_data_type);
}

void
mruby_UI_gift_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSeparator_data_type);
}

uiSeparator *
mruby_UI_unbox_uiSeparator(mrb_value boxed)
{
  return (uiSeparator *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Slider 
 * Wraps: uiSlider
 */

static void
free_uiSlider(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiSlider_data_type = {
   "uiSlider", free_uiSlider
};

void mrb_UI_Slider_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Slider"))) {
    struct RClass* Slider_class = mrb_define_class_under(mrb, UI_module(mrb), "Slider", mrb->object_class);
    MRB_SET_INSTANCE_TT(Slider_class, MRB_TT_DATA);

    mrb_include_module(mrb, Slider_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiSlider(mrb_state* mrb, uiSlider *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Slider_class(mrb), &uiSlider_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiSlider(mrb_state* mrb, uiSlider *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Slider_class(mrb), &uiSlider_data_type, box));
}

void
mruby_UI_set_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSlider_data_type);
}

void
mruby_UI_gift_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSlider_data_type);
}

uiSlider *
mruby_UI_unbox_uiSlider(mrb_value boxed)
{
  return (uiSlider *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Spinbox 
 * Wraps: uiSpinbox
 */

static void
free_uiSpinbox(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiSpinbox_data_type = {
   "uiSpinbox", free_uiSpinbox
};

void mrb_UI_Spinbox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Spinbox"))) {
    struct RClass* Spinbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Spinbox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Spinbox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Spinbox_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Spinbox_class(mrb), &uiSpinbox_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Spinbox_class(mrb), &uiSpinbox_data_type, box));
}

void
mruby_UI_set_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSpinbox_data_type);
}

void
mruby_UI_gift_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiSpinbox_data_type);
}

uiSpinbox *
mruby_UI_unbox_uiSpinbox(mrb_value boxed)
{
  return (uiSpinbox *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Tab 
 * Wraps: uiTab
 */

static void
free_uiTab(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiTab_data_type = {
   "uiTab", free_uiTab
};

void mrb_UI_Tab_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Tab"))) {
    struct RClass* Tab_class = mrb_define_class_under(mrb, UI_module(mrb), "Tab", mrb->object_class);
    MRB_SET_INSTANCE_TT(Tab_class, MRB_TT_DATA);

    mrb_include_module(mrb, Tab_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiTab(mrb_state* mrb, uiTab *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Tab_class(mrb), &uiTab_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiTab(mrb_state* mrb, uiTab *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Tab_class(mrb), &uiTab_data_type, box));
}

void
mruby_UI_set_uiTab_data_ptr(mrb_value obj, uiTab *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiTab_data_type);
}

void
mruby_UI_gift_uiTab_data_ptr(mrb_value obj, uiTab *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiTab_data_type);
}

uiTab *
mruby_UI_unbox_uiTab(mrb_value boxed)
{
  return (uiTab *)mruby_UI_unbox(boxed);
}

/**
 * Ruby Class: Window 
 * Wraps: uiWindow
 */

static void
free_uiWindow(mrb_state* mrb, void* ptr)
{
  if (ptr && mruby_UI_owns(mrb, ptr)) {
    free(ptr);
  }
}

static const
mrb_data_type uiWindow_data_type = {
   "uiWindow", free_uiWindow
};

void mrb_UI_Window_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Window"))) {
    struct RClass* Window_class = mrb_define_class_under(mrb, UI_module(mrb), "Window", mrb->object_class);
    MRB_SET_INSTANCE_TT(Window_class, MRB_TT_DATA);

    mrb_include_module(mrb, Window_class, UI_NativeObject_module(mrb));
  }
}

mrb_value
mruby_UI_box_uiWindow(mrb_state* mrb, uiWindow *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Window_class(mrb), &uiWindow_data_type, box));
}

mrb_value
mruby_UI_giftwrap_uiWindow(mrb_state* mrb, uiWindow *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, UI_Window_class(mrb), &uiWindow_data_type, box));
}

void
mruby_UI_set_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &uiWindow_data_type);
}

void
mruby_UI_gift_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed)
{
  mruby_to_native_ref* box = mruby_UI_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &uiWindow_data_type);
}

uiWindow *
mruby_UI_unbox_uiWindow(mrb_value boxed)
{
  return (uiWindow *)mruby_UI_unbox(boxed);
}

