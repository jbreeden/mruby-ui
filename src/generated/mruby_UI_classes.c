/**
 * Ruby Class: Area 
 * Wraps: uiArea
 */

#ifndef mruby_UI_free_Area
#define mruby_UI_free_Area(obj) free(obj)
#endif

static void
free_uiArea(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Area(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiArea_data_type = {
   "uiArea", free_uiArea
};

void mruby_UI_Area_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Area"))) {
    struct RClass* Area_class = mrb_define_class_under(mrb, UI_module(mrb), "Area", mrb->object_class);
    MRB_SET_INSTANCE_TT(Area_class, MRB_TT_DATA);

    mrb_include_module(mrb, Area_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Area(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Area_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_AreaDrawParams
#define mruby_UI_free_AreaDrawParams(obj) free(obj)
#endif

static void
free_uiAreaDrawParams(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_AreaDrawParams(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiAreaDrawParams_data_type = {
   "uiAreaDrawParams", free_uiAreaDrawParams
};

void mruby_UI_AreaDrawParams_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaDrawParams"))) {
    struct RClass* AreaDrawParams_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaDrawParams", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaDrawParams_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaDrawParams_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_AreaDrawParams(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_AreaDrawParams_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_AreaHandler
#define mruby_UI_free_AreaHandler(obj) free(obj)
#endif

static void
free_uiAreaHandler(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_AreaHandler(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiAreaHandler_data_type = {
   "uiAreaHandler", free_uiAreaHandler
};

void mruby_UI_AreaHandler_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaHandler"))) {
    struct RClass* AreaHandler_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaHandler", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaHandler_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaHandler_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_AreaHandler(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_AreaHandler_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_AreaKeyEvent
#define mruby_UI_free_AreaKeyEvent(obj) free(obj)
#endif

static void
free_uiAreaKeyEvent(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_AreaKeyEvent(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiAreaKeyEvent_data_type = {
   "uiAreaKeyEvent", free_uiAreaKeyEvent
};

void mruby_UI_AreaKeyEvent_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaKeyEvent"))) {
    struct RClass* AreaKeyEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaKeyEvent", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaKeyEvent_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaKeyEvent_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_AreaKeyEvent(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_AreaKeyEvent_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_AreaMouseEvent
#define mruby_UI_free_AreaMouseEvent(obj) free(obj)
#endif

static void
free_uiAreaMouseEvent(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_AreaMouseEvent(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiAreaMouseEvent_data_type = {
   "uiAreaMouseEvent", free_uiAreaMouseEvent
};

void mruby_UI_AreaMouseEvent_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "AreaMouseEvent"))) {
    struct RClass* AreaMouseEvent_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaMouseEvent", mrb->object_class);
    MRB_SET_INSTANCE_TT(AreaMouseEvent_class, MRB_TT_DATA);

    mrb_include_module(mrb, AreaMouseEvent_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_AreaMouseEvent(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_AreaMouseEvent_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Box
#define mruby_UI_free_Box(obj) free(obj)
#endif

static void
free_uiBox(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Box(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiBox_data_type = {
   "uiBox", free_uiBox
};

void mruby_UI_Box_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Box"))) {
    struct RClass* Box_class = mrb_define_class_under(mrb, UI_module(mrb), "Box", mrb->object_class);
    MRB_SET_INSTANCE_TT(Box_class, MRB_TT_DATA);

    mrb_include_module(mrb, Box_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Box(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Box_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Button
#define mruby_UI_free_Button(obj) free(obj)
#endif

static void
free_uiButton(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Button(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiButton_data_type = {
   "uiButton", free_uiButton
};

void mruby_UI_Button_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Button"))) {
    struct RClass* Button_class = mrb_define_class_under(mrb, UI_module(mrb), "Button", mrb->object_class);
    MRB_SET_INSTANCE_TT(Button_class, MRB_TT_DATA);

    mrb_include_module(mrb, Button_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Button(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Button_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Checkbox
#define mruby_UI_free_Checkbox(obj) free(obj)
#endif

static void
free_uiCheckbox(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Checkbox(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiCheckbox_data_type = {
   "uiCheckbox", free_uiCheckbox
};

void mruby_UI_Checkbox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Checkbox"))) {
    struct RClass* Checkbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Checkbox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Checkbox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Checkbox_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Checkbox(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Checkbox_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_ColorButton
#define mruby_UI_free_ColorButton(obj) free(obj)
#endif

static void
free_uiColorButton(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_ColorButton(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiColorButton_data_type = {
   "uiColorButton", free_uiColorButton
};

void mruby_UI_ColorButton_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "ColorButton"))) {
    struct RClass* ColorButton_class = mrb_define_class_under(mrb, UI_module(mrb), "ColorButton", mrb->object_class);
    MRB_SET_INSTANCE_TT(ColorButton_class, MRB_TT_DATA);

    mrb_include_module(mrb, ColorButton_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_ColorButton(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_ColorButton_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Combobox
#define mruby_UI_free_Combobox(obj) free(obj)
#endif

static void
free_uiCombobox(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Combobox(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiCombobox_data_type = {
   "uiCombobox", free_uiCombobox
};

void mruby_UI_Combobox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Combobox"))) {
    struct RClass* Combobox_class = mrb_define_class_under(mrb, UI_module(mrb), "Combobox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Combobox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Combobox_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Combobox(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Combobox_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Control
#define mruby_UI_free_Control(obj) free(obj)
#endif

static void
free_uiControl(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Control(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiControl_data_type = {
   "uiControl", free_uiControl
};

void mruby_UI_Control_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Control"))) {
    struct RClass* Control_class = mrb_define_class_under(mrb, UI_module(mrb), "Control", mrb->object_class);
    MRB_SET_INSTANCE_TT(Control_class, MRB_TT_DATA);

    mrb_include_module(mrb, Control_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Control(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Control_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DateTimePicker
#define mruby_UI_free_DateTimePicker(obj) free(obj)
#endif

static void
free_uiDateTimePicker(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DateTimePicker(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDateTimePicker_data_type = {
   "uiDateTimePicker", free_uiDateTimePicker
};

void mruby_UI_DateTimePicker_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DateTimePicker"))) {
    struct RClass* DateTimePicker_class = mrb_define_class_under(mrb, UI_module(mrb), "DateTimePicker", mrb->object_class);
    MRB_SET_INSTANCE_TT(DateTimePicker_class, MRB_TT_DATA);

    mrb_include_module(mrb, DateTimePicker_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DateTimePicker(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DateTimePicker_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawBrush
#define mruby_UI_free_DrawBrush(obj) free(obj)
#endif

static void
free_uiDrawBrush(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawBrush(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawBrush_data_type = {
   "uiDrawBrush", free_uiDrawBrush
};

void mruby_UI_DrawBrush_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawBrush"))) {
    struct RClass* DrawBrush_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrush", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawBrush_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawBrush_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawBrush(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawBrush_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawBrushGradientStop
#define mruby_UI_free_DrawBrushGradientStop(obj) free(obj)
#endif

static void
free_uiDrawBrushGradientStop(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawBrushGradientStop(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawBrushGradientStop_data_type = {
   "uiDrawBrushGradientStop", free_uiDrawBrushGradientStop
};

void mruby_UI_DrawBrushGradientStop_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawBrushGradientStop"))) {
    struct RClass* DrawBrushGradientStop_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawBrushGradientStop", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawBrushGradientStop_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawBrushGradientStop_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawBrushGradientStop(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawBrushGradientStop_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawContext
#define mruby_UI_free_DrawContext(obj) free(obj)
#endif

static void
free_uiDrawContext(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawContext(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawContext_data_type = {
   "uiDrawContext", free_uiDrawContext
};

void mruby_UI_DrawContext_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawContext"))) {
    struct RClass* DrawContext_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawContext", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawContext_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawContext_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawContext(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawContext_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawFontFamilies
#define mruby_UI_free_DrawFontFamilies(obj) free(obj)
#endif

static void
free_uiDrawFontFamilies(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawFontFamilies(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawFontFamilies_data_type = {
   "uiDrawFontFamilies", free_uiDrawFontFamilies
};

void mruby_UI_DrawFontFamilies_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawFontFamilies"))) {
    struct RClass* DrawFontFamilies_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawFontFamilies", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawFontFamilies_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawFontFamilies_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawFontFamilies(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawFontFamilies_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawMatrix
#define mruby_UI_free_DrawMatrix(obj) free(obj)
#endif

static void
free_uiDrawMatrix(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawMatrix(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawMatrix_data_type = {
   "uiDrawMatrix", free_uiDrawMatrix
};

void mruby_UI_DrawMatrix_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawMatrix"))) {
    struct RClass* DrawMatrix_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawMatrix", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawMatrix_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawMatrix_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawMatrix(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawMatrix_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawPath
#define mruby_UI_free_DrawPath(obj) free(obj)
#endif

static void
free_uiDrawPath(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawPath(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawPath_data_type = {
   "uiDrawPath", free_uiDrawPath
};

void mruby_UI_DrawPath_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawPath"))) {
    struct RClass* DrawPath_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawPath", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawPath_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawPath_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawPath(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawPath_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawStrokeParams
#define mruby_UI_free_DrawStrokeParams(obj) free(obj)
#endif

static void
free_uiDrawStrokeParams(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawStrokeParams(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawStrokeParams_data_type = {
   "uiDrawStrokeParams", free_uiDrawStrokeParams
};

void mruby_UI_DrawStrokeParams_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawStrokeParams"))) {
    struct RClass* DrawStrokeParams_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawStrokeParams", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawStrokeParams_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawStrokeParams_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawStrokeParams(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawStrokeParams_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawTextFont
#define mruby_UI_free_DrawTextFont(obj) free(obj)
#endif

static void
free_uiDrawTextFont(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawTextFont(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawTextFont_data_type = {
   "uiDrawTextFont", free_uiDrawTextFont
};

void mruby_UI_DrawTextFont_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFont"))) {
    struct RClass* DrawTextFont_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFont", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFont_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFont_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawTextFont(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawTextFont_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawTextFontDescriptor
#define mruby_UI_free_DrawTextFontDescriptor(obj) free(obj)
#endif

static void
free_uiDrawTextFontDescriptor(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawTextFontDescriptor(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawTextFontDescriptor_data_type = {
   "uiDrawTextFontDescriptor", free_uiDrawTextFontDescriptor
};

void mruby_UI_DrawTextFontDescriptor_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFontDescriptor"))) {
    struct RClass* DrawTextFontDescriptor_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontDescriptor", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFontDescriptor_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFontDescriptor_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawTextFontDescriptor(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawTextFontDescriptor_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawTextFontMetrics
#define mruby_UI_free_DrawTextFontMetrics(obj) free(obj)
#endif

static void
free_uiDrawTextFontMetrics(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawTextFontMetrics(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawTextFontMetrics_data_type = {
   "uiDrawTextFontMetrics", free_uiDrawTextFontMetrics
};

void mruby_UI_DrawTextFontMetrics_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextFontMetrics"))) {
    struct RClass* DrawTextFontMetrics_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextFontMetrics", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextFontMetrics_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextFontMetrics_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawTextFontMetrics(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawTextFontMetrics_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_DrawTextLayout
#define mruby_UI_free_DrawTextLayout(obj) free(obj)
#endif

static void
free_uiDrawTextLayout(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_DrawTextLayout(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiDrawTextLayout_data_type = {
   "uiDrawTextLayout", free_uiDrawTextLayout
};

void mruby_UI_DrawTextLayout_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "DrawTextLayout"))) {
    struct RClass* DrawTextLayout_class = mrb_define_class_under(mrb, UI_module(mrb), "DrawTextLayout", mrb->object_class);
    MRB_SET_INSTANCE_TT(DrawTextLayout_class, MRB_TT_DATA);

    mrb_include_module(mrb, DrawTextLayout_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_DrawTextLayout(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_DrawTextLayout_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_EditableCombobox
#define mruby_UI_free_EditableCombobox(obj) free(obj)
#endif

static void
free_uiEditableCombobox(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_EditableCombobox(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiEditableCombobox_data_type = {
   "uiEditableCombobox", free_uiEditableCombobox
};

void mruby_UI_EditableCombobox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "EditableCombobox"))) {
    struct RClass* EditableCombobox_class = mrb_define_class_under(mrb, UI_module(mrb), "EditableCombobox", mrb->object_class);
    MRB_SET_INSTANCE_TT(EditableCombobox_class, MRB_TT_DATA);

    mrb_include_module(mrb, EditableCombobox_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_EditableCombobox(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_EditableCombobox_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Entry
#define mruby_UI_free_Entry(obj) free(obj)
#endif

static void
free_uiEntry(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Entry(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiEntry_data_type = {
   "uiEntry", free_uiEntry
};

void mruby_UI_Entry_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Entry"))) {
    struct RClass* Entry_class = mrb_define_class_under(mrb, UI_module(mrb), "Entry", mrb->object_class);
    MRB_SET_INSTANCE_TT(Entry_class, MRB_TT_DATA);

    mrb_include_module(mrb, Entry_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Entry(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Entry_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_FontButton
#define mruby_UI_free_FontButton(obj) free(obj)
#endif

static void
free_uiFontButton(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_FontButton(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiFontButton_data_type = {
   "uiFontButton", free_uiFontButton
};

void mruby_UI_FontButton_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "FontButton"))) {
    struct RClass* FontButton_class = mrb_define_class_under(mrb, UI_module(mrb), "FontButton", mrb->object_class);
    MRB_SET_INSTANCE_TT(FontButton_class, MRB_TT_DATA);

    mrb_include_module(mrb, FontButton_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_FontButton(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_FontButton_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Form
#define mruby_UI_free_Form(obj) free(obj)
#endif

static void
free_uiForm(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Form(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiForm_data_type = {
   "uiForm", free_uiForm
};

void mruby_UI_Form_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Form"))) {
    struct RClass* Form_class = mrb_define_class_under(mrb, UI_module(mrb), "Form", mrb->object_class);
    MRB_SET_INSTANCE_TT(Form_class, MRB_TT_DATA);

    mrb_include_module(mrb, Form_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Form(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Form_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Grid
#define mruby_UI_free_Grid(obj) free(obj)
#endif

static void
free_uiGrid(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Grid(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiGrid_data_type = {
   "uiGrid", free_uiGrid
};

void mruby_UI_Grid_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Grid"))) {
    struct RClass* Grid_class = mrb_define_class_under(mrb, UI_module(mrb), "Grid", mrb->object_class);
    MRB_SET_INSTANCE_TT(Grid_class, MRB_TT_DATA);

    mrb_include_module(mrb, Grid_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Grid(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Grid_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Group
#define mruby_UI_free_Group(obj) free(obj)
#endif

static void
free_uiGroup(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Group(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiGroup_data_type = {
   "uiGroup", free_uiGroup
};

void mruby_UI_Group_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Group"))) {
    struct RClass* Group_class = mrb_define_class_under(mrb, UI_module(mrb), "Group", mrb->object_class);
    MRB_SET_INSTANCE_TT(Group_class, MRB_TT_DATA);

    mrb_include_module(mrb, Group_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Group(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Group_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_InitOptions
#define mruby_UI_free_InitOptions(obj) free(obj)
#endif

static void
free_uiInitOptions(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_InitOptions(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiInitOptions_data_type = {
   "uiInitOptions", free_uiInitOptions
};

void mruby_UI_InitOptions_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "InitOptions"))) {
    struct RClass* InitOptions_class = mrb_define_class_under(mrb, UI_module(mrb), "InitOptions", mrb->object_class);
    MRB_SET_INSTANCE_TT(InitOptions_class, MRB_TT_DATA);

    mrb_include_module(mrb, InitOptions_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_InitOptions(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_InitOptions_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Label
#define mruby_UI_free_Label(obj) free(obj)
#endif

static void
free_uiLabel(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Label(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiLabel_data_type = {
   "uiLabel", free_uiLabel
};

void mruby_UI_Label_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Label"))) {
    struct RClass* Label_class = mrb_define_class_under(mrb, UI_module(mrb), "Label", mrb->object_class);
    MRB_SET_INSTANCE_TT(Label_class, MRB_TT_DATA);

    mrb_include_module(mrb, Label_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Label(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Label_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Menu
#define mruby_UI_free_Menu(obj) free(obj)
#endif

static void
free_uiMenu(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Menu(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiMenu_data_type = {
   "uiMenu", free_uiMenu
};

void mruby_UI_Menu_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Menu"))) {
    struct RClass* Menu_class = mrb_define_class_under(mrb, UI_module(mrb), "Menu", mrb->object_class);
    MRB_SET_INSTANCE_TT(Menu_class, MRB_TT_DATA);

    mrb_include_module(mrb, Menu_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Menu(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Menu_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_MenuItem
#define mruby_UI_free_MenuItem(obj) free(obj)
#endif

static void
free_uiMenuItem(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_MenuItem(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiMenuItem_data_type = {
   "uiMenuItem", free_uiMenuItem
};

void mruby_UI_MenuItem_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "MenuItem"))) {
    struct RClass* MenuItem_class = mrb_define_class_under(mrb, UI_module(mrb), "MenuItem", mrb->object_class);
    MRB_SET_INSTANCE_TT(MenuItem_class, MRB_TT_DATA);

    mrb_include_module(mrb, MenuItem_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_MenuItem(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_MenuItem_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_MultilineEntry
#define mruby_UI_free_MultilineEntry(obj) free(obj)
#endif

static void
free_uiMultilineEntry(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_MultilineEntry(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiMultilineEntry_data_type = {
   "uiMultilineEntry", free_uiMultilineEntry
};

void mruby_UI_MultilineEntry_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "MultilineEntry"))) {
    struct RClass* MultilineEntry_class = mrb_define_class_under(mrb, UI_module(mrb), "MultilineEntry", mrb->object_class);
    MRB_SET_INSTANCE_TT(MultilineEntry_class, MRB_TT_DATA);

    mrb_include_module(mrb, MultilineEntry_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_MultilineEntry(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_MultilineEntry_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_ProgressBar
#define mruby_UI_free_ProgressBar(obj) free(obj)
#endif

static void
free_uiProgressBar(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_ProgressBar(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiProgressBar_data_type = {
   "uiProgressBar", free_uiProgressBar
};

void mruby_UI_ProgressBar_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "ProgressBar"))) {
    struct RClass* ProgressBar_class = mrb_define_class_under(mrb, UI_module(mrb), "ProgressBar", mrb->object_class);
    MRB_SET_INSTANCE_TT(ProgressBar_class, MRB_TT_DATA);

    mrb_include_module(mrb, ProgressBar_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_ProgressBar(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_ProgressBar_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_RadioButtons
#define mruby_UI_free_RadioButtons(obj) free(obj)
#endif

static void
free_uiRadioButtons(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_RadioButtons(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiRadioButtons_data_type = {
   "uiRadioButtons", free_uiRadioButtons
};

void mruby_UI_RadioButtons_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "RadioButtons"))) {
    struct RClass* RadioButtons_class = mrb_define_class_under(mrb, UI_module(mrb), "RadioButtons", mrb->object_class);
    MRB_SET_INSTANCE_TT(RadioButtons_class, MRB_TT_DATA);

    mrb_include_module(mrb, RadioButtons_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_RadioButtons(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_RadioButtons_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Separator
#define mruby_UI_free_Separator(obj) free(obj)
#endif

static void
free_uiSeparator(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Separator(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiSeparator_data_type = {
   "uiSeparator", free_uiSeparator
};

void mruby_UI_Separator_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Separator"))) {
    struct RClass* Separator_class = mrb_define_class_under(mrb, UI_module(mrb), "Separator", mrb->object_class);
    MRB_SET_INSTANCE_TT(Separator_class, MRB_TT_DATA);

    mrb_include_module(mrb, Separator_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Separator(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Separator_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Slider
#define mruby_UI_free_Slider(obj) free(obj)
#endif

static void
free_uiSlider(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Slider(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiSlider_data_type = {
   "uiSlider", free_uiSlider
};

void mruby_UI_Slider_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Slider"))) {
    struct RClass* Slider_class = mrb_define_class_under(mrb, UI_module(mrb), "Slider", mrb->object_class);
    MRB_SET_INSTANCE_TT(Slider_class, MRB_TT_DATA);

    mrb_include_module(mrb, Slider_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Slider(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Slider_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Spinbox
#define mruby_UI_free_Spinbox(obj) free(obj)
#endif

static void
free_uiSpinbox(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Spinbox(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiSpinbox_data_type = {
   "uiSpinbox", free_uiSpinbox
};

void mruby_UI_Spinbox_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Spinbox"))) {
    struct RClass* Spinbox_class = mrb_define_class_under(mrb, UI_module(mrb), "Spinbox", mrb->object_class);
    MRB_SET_INSTANCE_TT(Spinbox_class, MRB_TT_DATA);

    mrb_include_module(mrb, Spinbox_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Spinbox(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Spinbox_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Tab
#define mruby_UI_free_Tab(obj) free(obj)
#endif

static void
free_uiTab(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Tab(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiTab_data_type = {
   "uiTab", free_uiTab
};

void mruby_UI_Tab_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Tab"))) {
    struct RClass* Tab_class = mrb_define_class_under(mrb, UI_module(mrb), "Tab", mrb->object_class);
    MRB_SET_INSTANCE_TT(Tab_class, MRB_TT_DATA);

    mrb_include_module(mrb, Tab_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Tab(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Tab_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

#ifndef mruby_UI_free_Window
#define mruby_UI_free_Window(obj) free(obj)
#endif

static void
free_uiWindow(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_UI_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_UI_free_Window(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type uiWindow_data_type = {
   "uiWindow", free_uiWindow
};

void mruby_UI_Window_init(mrb_state* mrb)
{
  if (!mrb_const_defined(mrb, mrb_obj_value(UI_module(mrb)), mrb_intern_cstr(mrb, "Window"))) {
    struct RClass* Window_class = mrb_define_class_under(mrb, UI_module(mrb), "Window", mrb->object_class);
    MRB_SET_INSTANCE_TT(Window_class, MRB_TT_DATA);

    mrb_include_module(mrb, Window_class, UI_Pointer_module(mrb));
  }
}

unsigned char
mruby_UI_typecheck_Window(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, UI_Window_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, UI_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
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

