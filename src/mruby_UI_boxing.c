/*
 * Boxing Code (Generated)
 * =======================
 *
 * The code generator learns the data types declared in the C/C++ source files
 * it is run against, and generates this boxing, unboxing, and GC code.
 * 
 * Terms
 * ------
 *
 * ### Boxing
 * In general refers to wrapping a native object in an mrb_value.
 * 
 * ### Gift Wrapping
 * A specific type of boxing, indicating that the object belongs
 * to Ruby and should be free'd when the mrb_value is GC'ed.
 * 
 * ### Unboxing
 * Retrieving the wrapped native object from an mrb_value.
 *
 * Customizing
 * -----------
 * 
 * By default, all data types are assumed to be destructable by the `free`
 * function. To use a custom destructor for your type, tell CTypes with
 * `CTypes.set_destructor`.
 *
 * Example
 * ```
 * // I have `struct GError` objects from glib,
 * // which should be freed with `g_error_free`
 * CTypes.set_destructor('struct GError', 'g_error_free')
 * ```
 */
#include "mruby_UI.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Area_boxing */
/* sha: 43315910e7ec52a96f51419ff4d5639dd05e202f1c03ce670bf508086d7f88f3 */
#if BIND_Area_TYPE
/*
 * Boxing implementation for uiArea
 */

static void free_uiArea(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiArea_data_type = {
   "uiArea", free_uiArea
};

mrb_value
mruby_box_uiArea(mrb_state* mrb, uiArea *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Area_class(mrb), &uiArea_data_type, box));
}

mrb_value
mruby_giftwrap_uiArea(mrb_state* mrb, uiArea *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Area_class(mrb), &uiArea_data_type, box));
}

void
mruby_set_uiArea_data_ptr(mrb_value obj, uiArea *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiArea_data_type);
}

void
mruby_gift_uiArea_data_ptr(mrb_value obj, uiArea *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiArea_data_type);
}

uiArea *
mruby_unbox_uiArea(mrb_value boxed) {
  return (uiArea *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams_boxing */
/* sha: 6a03be5fea86ffc1f4e493395d7cf6d97dc7afb7e9d390f4f1c7a7c8e4ecafab */
#if BIND_AreaDrawParams_TYPE
/*
 * Boxing implementation for uiAreaDrawParams
 */

static void free_uiAreaDrawParams(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiAreaDrawParams_data_type = {
   "uiAreaDrawParams", free_uiAreaDrawParams
};

mrb_value
mruby_box_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, AreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, AreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
}

void
mruby_set_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaDrawParams_data_type);
}

void
mruby_gift_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaDrawParams_data_type);
}

uiAreaDrawParams *
mruby_unbox_uiAreaDrawParams(mrb_value boxed) {
  return (uiAreaDrawParams *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler_boxing */
/* sha: 6311c59e01e0adfdc23ece314dffbcf2bddacc20102be55559048bc5a9434daf */
#if BIND_AreaHandler_TYPE
/*
 * Boxing implementation for uiAreaHandler
 */

static void free_uiAreaHandler(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiAreaHandler_data_type = {
   "uiAreaHandler", free_uiAreaHandler
};

mrb_value
mruby_box_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, AreaHandler_class(mrb), &uiAreaHandler_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, AreaHandler_class(mrb), &uiAreaHandler_data_type, box));
}

void
mruby_set_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaHandler_data_type);
}

void
mruby_gift_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaHandler_data_type);
}

uiAreaHandler *
mruby_unbox_uiAreaHandler(mrb_value boxed) {
  return (uiAreaHandler *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent_boxing */
/* sha: fe504d5c478863a71498cebbcbb997addb8ab55f7e73a2fc721e17cd1000cffb */
#if BIND_AreaKeyEvent_TYPE
/*
 * Boxing implementation for uiAreaKeyEvent
 */

static void free_uiAreaKeyEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiAreaKeyEvent_data_type = {
   "uiAreaKeyEvent", free_uiAreaKeyEvent
};

mrb_value
mruby_box_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, AreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, AreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
}

void
mruby_set_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaKeyEvent_data_type);
}

void
mruby_gift_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaKeyEvent_data_type);
}

uiAreaKeyEvent *
mruby_unbox_uiAreaKeyEvent(mrb_value boxed) {
  return (uiAreaKeyEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent_boxing */
/* sha: 3eb8f1b8b0082f3ee075b6a62cf34190fd7a23bd9f9c5aff799277c4f41df26d */
#if BIND_AreaMouseEvent_TYPE
/*
 * Boxing implementation for uiAreaMouseEvent
 */

static void free_uiAreaMouseEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiAreaMouseEvent_data_type = {
   "uiAreaMouseEvent", free_uiAreaMouseEvent
};

mrb_value
mruby_box_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, AreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, AreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
}

void
mruby_set_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaMouseEvent_data_type);
}

void
mruby_gift_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiAreaMouseEvent_data_type);
}

uiAreaMouseEvent *
mruby_unbox_uiAreaMouseEvent(mrb_value boxed) {
  return (uiAreaMouseEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box_boxing */
/* sha: c384af47541ead1f6383a568f3330d5382aef56db4e2ce09b00a531da9ac0db8 */
#if BIND_Box_TYPE
/*
 * Boxing implementation for uiBox
 */

static void free_uiBox(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiBox_data_type = {
   "uiBox", free_uiBox
};

mrb_value
mruby_box_uiBox(mrb_state* mrb, uiBox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Box_class(mrb), &uiBox_data_type, box));
}

mrb_value
mruby_giftwrap_uiBox(mrb_state* mrb, uiBox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Box_class(mrb), &uiBox_data_type, box));
}

void
mruby_set_uiBox_data_ptr(mrb_value obj, uiBox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiBox_data_type);
}

void
mruby_gift_uiBox_data_ptr(mrb_value obj, uiBox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiBox_data_type);
}

uiBox *
mruby_unbox_uiBox(mrb_value boxed) {
  return (uiBox *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button_boxing */
/* sha: 11f64f47b52ad792af256f0e441d3aa95203673aa39e883692872bd654e75e79 */
#if BIND_Button_TYPE
/*
 * Boxing implementation for uiButton
 */

static void free_uiButton(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiButton_data_type = {
   "uiButton", free_uiButton
};

mrb_value
mruby_box_uiButton(mrb_state* mrb, uiButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Button_class(mrb), &uiButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiButton(mrb_state* mrb, uiButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Button_class(mrb), &uiButton_data_type, box));
}

void
mruby_set_uiButton_data_ptr(mrb_value obj, uiButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiButton_data_type);
}

void
mruby_gift_uiButton_data_ptr(mrb_value obj, uiButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiButton_data_type);
}

uiButton *
mruby_unbox_uiButton(mrb_value boxed) {
  return (uiButton *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox_boxing */
/* sha: c1b21cbede44b00670224d132c793b99a84a066e9285b83e302ea58d93614c15 */
#if BIND_Checkbox_TYPE
/*
 * Boxing implementation for uiCheckbox
 */

static void free_uiCheckbox(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiCheckbox_data_type = {
   "uiCheckbox", free_uiCheckbox
};

mrb_value
mruby_box_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Checkbox_class(mrb), &uiCheckbox_data_type, box));
}

mrb_value
mruby_giftwrap_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Checkbox_class(mrb), &uiCheckbox_data_type, box));
}

void
mruby_set_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiCheckbox_data_type);
}

void
mruby_gift_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiCheckbox_data_type);
}

uiCheckbox *
mruby_unbox_uiCheckbox(mrb_value boxed) {
  return (uiCheckbox *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton_boxing */
/* sha: 5a60bfdfee3148f8e2adc02981ac93d5b12f4e3b31a872a0942681e9ae942dbc */
#if BIND_ColorButton_TYPE
/*
 * Boxing implementation for uiColorButton
 */

static void free_uiColorButton(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiColorButton_data_type = {
   "uiColorButton", free_uiColorButton
};

mrb_value
mruby_box_uiColorButton(mrb_state* mrb, uiColorButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ColorButton_class(mrb), &uiColorButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiColorButton(mrb_state* mrb, uiColorButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ColorButton_class(mrb), &uiColorButton_data_type, box));
}

void
mruby_set_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiColorButton_data_type);
}

void
mruby_gift_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiColorButton_data_type);
}

uiColorButton *
mruby_unbox_uiColorButton(mrb_value boxed) {
  return (uiColorButton *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox_boxing */
/* sha: 72c242fa46f43f532aa8b3f209eba90368fb91841f79bfa5aa07758d893e9e25 */
#if BIND_Combobox_TYPE
/*
 * Boxing implementation for uiCombobox
 */

static void free_uiCombobox(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiCombobox_data_type = {
   "uiCombobox", free_uiCombobox
};

mrb_value
mruby_box_uiCombobox(mrb_state* mrb, uiCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Combobox_class(mrb), &uiCombobox_data_type, box));
}

mrb_value
mruby_giftwrap_uiCombobox(mrb_state* mrb, uiCombobox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Combobox_class(mrb), &uiCombobox_data_type, box));
}

void
mruby_set_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiCombobox_data_type);
}

void
mruby_gift_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiCombobox_data_type);
}

uiCombobox *
mruby_unbox_uiCombobox(mrb_value boxed) {
  return (uiCombobox *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control_boxing */
/* sha: f74545f4c19c2b6cb458d82741b9884faa44b8188b8d1388360f257e9c5660ca */
#if BIND_Control_TYPE
/*
 * Boxing implementation for uiControl
 */

static void free_uiControl(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiControl_data_type = {
   "uiControl", free_uiControl
};

mrb_value
mruby_box_uiControl(mrb_state* mrb, uiControl *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Control_class(mrb), &uiControl_data_type, box));
}

mrb_value
mruby_giftwrap_uiControl(mrb_state* mrb, uiControl *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Control_class(mrb), &uiControl_data_type, box));
}

void
mruby_set_uiControl_data_ptr(mrb_value obj, uiControl *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiControl_data_type);
}

void
mruby_gift_uiControl_data_ptr(mrb_value obj, uiControl *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiControl_data_type);
}

uiControl *
mruby_unbox_uiControl(mrb_value boxed) {
  return (uiControl *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker_boxing */
/* sha: 4793ce81aecd13afd3725499728fe3dce70ccefd1b4df5c8c4addd767266c5fa */
#if BIND_DateTimePicker_TYPE
/*
 * Boxing implementation for uiDateTimePicker
 */

static void free_uiDateTimePicker(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDateTimePicker_data_type = {
   "uiDateTimePicker", free_uiDateTimePicker
};

mrb_value
mruby_box_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
}

mrb_value
mruby_giftwrap_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
}

void
mruby_set_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDateTimePicker_data_type);
}

void
mruby_gift_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDateTimePicker_data_type);
}

uiDateTimePicker *
mruby_unbox_uiDateTimePicker(mrb_value boxed) {
  return (uiDateTimePicker *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush_boxing */
/* sha: 107db1dd5065e196dc6d2b782875fd5d630daf2d67a7e7f45c0083278e118d0b */
#if BIND_DrawBrush_TYPE
/*
 * Boxing implementation for uiDrawBrush
 */

static void free_uiDrawBrush(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawBrush_data_type = {
   "uiDrawBrush", free_uiDrawBrush
};

mrb_value
mruby_box_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawBrush_class(mrb), &uiDrawBrush_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawBrush_class(mrb), &uiDrawBrush_data_type, box));
}

void
mruby_set_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawBrush_data_type);
}

void
mruby_gift_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawBrush_data_type);
}

uiDrawBrush *
mruby_unbox_uiDrawBrush(mrb_value boxed) {
  return (uiDrawBrush *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop_boxing */
/* sha: 0776d148335e10151c3e06c5e612370a91c8efe8be9d407c2327008f5b664298 */
#if BIND_DrawBrushGradientStop_TYPE
/*
 * Boxing implementation for uiDrawBrushGradientStop
 */

static void free_uiDrawBrushGradientStop(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawBrushGradientStop_data_type = {
   "uiDrawBrushGradientStop", free_uiDrawBrushGradientStop
};

mrb_value
mruby_box_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
}

void
mruby_set_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawBrushGradientStop_data_type);
}

void
mruby_gift_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawBrushGradientStop_data_type);
}

uiDrawBrushGradientStop *
mruby_unbox_uiDrawBrushGradientStop(mrb_value boxed) {
  return (uiDrawBrushGradientStop *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext_boxing */
/* sha: 9b07677c5f8f383cae44a4a48f420c60984dcfd92a0c0ca355499bdba22c7a25 */
#if BIND_DrawContext_TYPE
/*
 * Boxing implementation for uiDrawContext
 */

static void free_uiDrawContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawContext_data_type = {
   "uiDrawContext", free_uiDrawContext
};

mrb_value
mruby_box_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawContext_class(mrb), &uiDrawContext_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawContext_class(mrb), &uiDrawContext_data_type, box));
}

void
mruby_set_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawContext_data_type);
}

void
mruby_gift_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawContext_data_type);
}

uiDrawContext *
mruby_unbox_uiDrawContext(mrb_value boxed) {
  return (uiDrawContext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies_boxing */
/* sha: 3f257010f9afb81dbda4f17298f444f17b5cf56ab0d6ad99b3dd2506b565dd6a */
#if BIND_DrawFontFamilies_TYPE
/*
 * Boxing implementation for uiDrawFontFamilies
 */

static void free_uiDrawFontFamilies(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawFontFamilies_data_type = {
   "uiDrawFontFamilies", free_uiDrawFontFamilies
};

mrb_value
mruby_box_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
}

void
mruby_set_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawFontFamilies_data_type);
}

void
mruby_gift_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawFontFamilies_data_type);
}

uiDrawFontFamilies *
mruby_unbox_uiDrawFontFamilies(mrb_value boxed) {
  return (uiDrawFontFamilies *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix_boxing */
/* sha: abbb3f630f75ced671da558f8ed82edff92bbaa9661ef361b8c891ac98a2fd6c */
#if BIND_DrawMatrix_TYPE
/*
 * Boxing implementation for uiDrawMatrix
 */

static void free_uiDrawMatrix(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawMatrix_data_type = {
   "uiDrawMatrix", free_uiDrawMatrix
};

mrb_value
mruby_box_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
}

void
mruby_set_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawMatrix_data_type);
}

void
mruby_gift_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawMatrix_data_type);
}

uiDrawMatrix *
mruby_unbox_uiDrawMatrix(mrb_value boxed) {
  return (uiDrawMatrix *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath_boxing */
/* sha: ded85ebbf5c4cbcecd531f4c8fec9133dd41c79436296ede28c293f71d317af0 */
#if BIND_DrawPath_TYPE
/*
 * Boxing implementation for uiDrawPath
 */

static void free_uiDrawPath(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawPath_data_type = {
   "uiDrawPath", free_uiDrawPath
};

mrb_value
mruby_box_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawPath_class(mrb), &uiDrawPath_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawPath_class(mrb), &uiDrawPath_data_type, box));
}

void
mruby_set_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawPath_data_type);
}

void
mruby_gift_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawPath_data_type);
}

uiDrawPath *
mruby_unbox_uiDrawPath(mrb_value boxed) {
  return (uiDrawPath *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams_boxing */
/* sha: 466c55097887f11bc445b09338c6ff70f8e33cb88bd84a38192c99115c0a4c40 */
#if BIND_DrawStrokeParams_TYPE
/*
 * Boxing implementation for uiDrawStrokeParams
 */

static void free_uiDrawStrokeParams(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawStrokeParams_data_type = {
   "uiDrawStrokeParams", free_uiDrawStrokeParams
};

mrb_value
mruby_box_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
}

void
mruby_set_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawStrokeParams_data_type);
}

void
mruby_gift_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawStrokeParams_data_type);
}

uiDrawStrokeParams *
mruby_unbox_uiDrawStrokeParams(mrb_value boxed) {
  return (uiDrawStrokeParams *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont_boxing */
/* sha: f40895848e4aec8c8bf38bc48737ec1efb1dc6b022e766af2da56bdd4e1d5626 */
#if BIND_DrawTextFont_TYPE
/*
 * Boxing implementation for uiDrawTextFont
 */

static void free_uiDrawTextFont(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawTextFont_data_type = {
   "uiDrawTextFont", free_uiDrawTextFont
};

mrb_value
mruby_box_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
}

void
mruby_set_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFont_data_type);
}

void
mruby_gift_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFont_data_type);
}

uiDrawTextFont *
mruby_unbox_uiDrawTextFont(mrb_value boxed) {
  return (uiDrawTextFont *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor_boxing */
/* sha: 12ea41012a132d729f79ca94475001a72f1a73f08c29ac34540908a92dbf87ed */
#if BIND_DrawTextFontDescriptor_TYPE
/*
 * Boxing implementation for uiDrawTextFontDescriptor
 */

static void free_uiDrawTextFontDescriptor(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawTextFontDescriptor_data_type = {
   "uiDrawTextFontDescriptor", free_uiDrawTextFontDescriptor
};

mrb_value
mruby_box_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
}

void
mruby_set_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFontDescriptor_data_type);
}

void
mruby_gift_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFontDescriptor_data_type);
}

uiDrawTextFontDescriptor *
mruby_unbox_uiDrawTextFontDescriptor(mrb_value boxed) {
  return (uiDrawTextFontDescriptor *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics_boxing */
/* sha: b5b997a20f300b86975ff20f039b345b5311e47827b944edeb8ae818ede3e2e5 */
#if BIND_DrawTextFontMetrics_TYPE
/*
 * Boxing implementation for uiDrawTextFontMetrics
 */

static void free_uiDrawTextFontMetrics(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawTextFontMetrics_data_type = {
   "uiDrawTextFontMetrics", free_uiDrawTextFontMetrics
};

mrb_value
mruby_box_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
}

void
mruby_set_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFontMetrics_data_type);
}

void
mruby_gift_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextFontMetrics_data_type);
}

uiDrawTextFontMetrics *
mruby_unbox_uiDrawTextFontMetrics(mrb_value boxed) {
  return (uiDrawTextFontMetrics *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout_boxing */
/* sha: 2fb2b079bc4e0e7a3c379d3647a37a704db4e1fedff1455ce74d74ee01458c0f */
#if BIND_DrawTextLayout_TYPE
/*
 * Boxing implementation for uiDrawTextLayout
 */

static void free_uiDrawTextLayout(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiDrawTextLayout_data_type = {
   "uiDrawTextLayout", free_uiDrawTextLayout
};

mrb_value
mruby_box_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
}

void
mruby_set_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextLayout_data_type);
}

void
mruby_gift_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiDrawTextLayout_data_type);
}

uiDrawTextLayout *
mruby_unbox_uiDrawTextLayout(mrb_value boxed) {
  return (uiDrawTextLayout *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox_boxing */
/* sha: 99fa1c3e52dc6eb360ef3cd59957bab35e13f60480f4e071ad8af19058c91a6d */
#if BIND_EditableCombobox_TYPE
/*
 * Boxing implementation for uiEditableCombobox
 */

static void free_uiEditableCombobox(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiEditableCombobox_data_type = {
   "uiEditableCombobox", free_uiEditableCombobox
};

mrb_value
mruby_box_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, EditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
}

mrb_value
mruby_giftwrap_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, EditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
}

void
mruby_set_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiEditableCombobox_data_type);
}

void
mruby_gift_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiEditableCombobox_data_type);
}

uiEditableCombobox *
mruby_unbox_uiEditableCombobox(mrb_value boxed) {
  return (uiEditableCombobox *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry_boxing */
/* sha: 6d6635331a117f6e8ce451e57bcc736d4251027f25298b64b7ea0a4288091da6 */
#if BIND_Entry_TYPE
/*
 * Boxing implementation for uiEntry
 */

static void free_uiEntry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiEntry_data_type = {
   "uiEntry", free_uiEntry
};

mrb_value
mruby_box_uiEntry(mrb_state* mrb, uiEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Entry_class(mrb), &uiEntry_data_type, box));
}

mrb_value
mruby_giftwrap_uiEntry(mrb_state* mrb, uiEntry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Entry_class(mrb), &uiEntry_data_type, box));
}

void
mruby_set_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiEntry_data_type);
}

void
mruby_gift_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiEntry_data_type);
}

uiEntry *
mruby_unbox_uiEntry(mrb_value boxed) {
  return (uiEntry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton_boxing */
/* sha: 1e4aad4d5485b74cdb9ca4c9ce81847d0545a9a4f2efbe3f0e02de36fa398ad2 */
#if BIND_FontButton_TYPE
/*
 * Boxing implementation for uiFontButton
 */

static void free_uiFontButton(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiFontButton_data_type = {
   "uiFontButton", free_uiFontButton
};

mrb_value
mruby_box_uiFontButton(mrb_state* mrb, uiFontButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FontButton_class(mrb), &uiFontButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiFontButton(mrb_state* mrb, uiFontButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FontButton_class(mrb), &uiFontButton_data_type, box));
}

void
mruby_set_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiFontButton_data_type);
}

void
mruby_gift_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiFontButton_data_type);
}

uiFontButton *
mruby_unbox_uiFontButton(mrb_value boxed) {
  return (uiFontButton *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form_boxing */
/* sha: 3d0be99627543cab4e411c633c20614f8c0fb33bb5c74a9896925f2cfeface81 */
#if BIND_Form_TYPE
/*
 * Boxing implementation for uiForm
 */

static void free_uiForm(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiForm_data_type = {
   "uiForm", free_uiForm
};

mrb_value
mruby_box_uiForm(mrb_state* mrb, uiForm *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Form_class(mrb), &uiForm_data_type, box));
}

mrb_value
mruby_giftwrap_uiForm(mrb_state* mrb, uiForm *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Form_class(mrb), &uiForm_data_type, box));
}

void
mruby_set_uiForm_data_ptr(mrb_value obj, uiForm *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiForm_data_type);
}

void
mruby_gift_uiForm_data_ptr(mrb_value obj, uiForm *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiForm_data_type);
}

uiForm *
mruby_unbox_uiForm(mrb_value boxed) {
  return (uiForm *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid_boxing */
/* sha: 96438c73f977e47ce2004192126f487837248631fc7649672b55e52f4e23e807 */
#if BIND_Grid_TYPE
/*
 * Boxing implementation for uiGrid
 */

static void free_uiGrid(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiGrid_data_type = {
   "uiGrid", free_uiGrid
};

mrb_value
mruby_box_uiGrid(mrb_state* mrb, uiGrid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Grid_class(mrb), &uiGrid_data_type, box));
}

mrb_value
mruby_giftwrap_uiGrid(mrb_state* mrb, uiGrid *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Grid_class(mrb), &uiGrid_data_type, box));
}

void
mruby_set_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiGrid_data_type);
}

void
mruby_gift_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiGrid_data_type);
}

uiGrid *
mruby_unbox_uiGrid(mrb_value boxed) {
  return (uiGrid *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group_boxing */
/* sha: 97bea19b3b30186eaae300de189cbe9341db6cd4d52b3de731842559cc3a3816 */
#if BIND_Group_TYPE
/*
 * Boxing implementation for uiGroup
 */

static void free_uiGroup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiGroup_data_type = {
   "uiGroup", free_uiGroup
};

mrb_value
mruby_box_uiGroup(mrb_state* mrb, uiGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Group_class(mrb), &uiGroup_data_type, box));
}

mrb_value
mruby_giftwrap_uiGroup(mrb_state* mrb, uiGroup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Group_class(mrb), &uiGroup_data_type, box));
}

void
mruby_set_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiGroup_data_type);
}

void
mruby_gift_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiGroup_data_type);
}

uiGroup *
mruby_unbox_uiGroup(mrb_value boxed) {
  return (uiGroup *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions_boxing */
/* sha: b5fafcc84a5041306eb523476ca380a75950ea8b55f6358d8410614672552f14 */
#if BIND_InitOptions_TYPE
/*
 * Boxing implementation for uiInitOptions
 */

static void free_uiInitOptions(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiInitOptions_data_type = {
   "uiInitOptions", free_uiInitOptions
};

mrb_value
mruby_box_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, InitOptions_class(mrb), &uiInitOptions_data_type, box));
}

mrb_value
mruby_giftwrap_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, InitOptions_class(mrb), &uiInitOptions_data_type, box));
}

void
mruby_set_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiInitOptions_data_type);
}

void
mruby_gift_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiInitOptions_data_type);
}

uiInitOptions *
mruby_unbox_uiInitOptions(mrb_value boxed) {
  return (uiInitOptions *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label_boxing */
/* sha: f49fd80f4c38ac4662e6dfe02fcb8f0d8049ac183050b3d64e996df537c730db */
#if BIND_Label_TYPE
/*
 * Boxing implementation for uiLabel
 */

static void free_uiLabel(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiLabel_data_type = {
   "uiLabel", free_uiLabel
};

mrb_value
mruby_box_uiLabel(mrb_state* mrb, uiLabel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Label_class(mrb), &uiLabel_data_type, box));
}

mrb_value
mruby_giftwrap_uiLabel(mrb_state* mrb, uiLabel *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Label_class(mrb), &uiLabel_data_type, box));
}

void
mruby_set_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiLabel_data_type);
}

void
mruby_gift_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiLabel_data_type);
}

uiLabel *
mruby_unbox_uiLabel(mrb_value boxed) {
  return (uiLabel *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu_boxing */
/* sha: 30ff78861ef417b5e7249c7356c303d0edac91595d643c516d140104fe8f7c4f */
#if BIND_Menu_TYPE
/*
 * Boxing implementation for uiMenu
 */

static void free_uiMenu(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiMenu_data_type = {
   "uiMenu", free_uiMenu
};

mrb_value
mruby_box_uiMenu(mrb_state* mrb, uiMenu *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Menu_class(mrb), &uiMenu_data_type, box));
}

mrb_value
mruby_giftwrap_uiMenu(mrb_state* mrb, uiMenu *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Menu_class(mrb), &uiMenu_data_type, box));
}

void
mruby_set_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMenu_data_type);
}

void
mruby_gift_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMenu_data_type);
}

uiMenu *
mruby_unbox_uiMenu(mrb_value boxed) {
  return (uiMenu *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem_boxing */
/* sha: fe1be735ca7f175ce118c09909f967e6a3f69d3dfc763292967615c5ac58fc28 */
#if BIND_MenuItem_TYPE
/*
 * Boxing implementation for uiMenuItem
 */

static void free_uiMenuItem(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiMenuItem_data_type = {
   "uiMenuItem", free_uiMenuItem
};

mrb_value
mruby_box_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MenuItem_class(mrb), &uiMenuItem_data_type, box));
}

mrb_value
mruby_giftwrap_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MenuItem_class(mrb), &uiMenuItem_data_type, box));
}

void
mruby_set_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMenuItem_data_type);
}

void
mruby_gift_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMenuItem_data_type);
}

uiMenuItem *
mruby_unbox_uiMenuItem(mrb_value boxed) {
  return (uiMenuItem *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry_boxing */
/* sha: 8b4b656f5deb51fb447d882c84a35e84c8a7d90036323c428f40770ad3176bc2 */
#if BIND_MultilineEntry_TYPE
/*
 * Boxing implementation for uiMultilineEntry
 */

static void free_uiMultilineEntry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiMultilineEntry_data_type = {
   "uiMultilineEntry", free_uiMultilineEntry
};

mrb_value
mruby_box_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
}

mrb_value
mruby_giftwrap_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
}

void
mruby_set_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMultilineEntry_data_type);
}

void
mruby_gift_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiMultilineEntry_data_type);
}

uiMultilineEntry *
mruby_unbox_uiMultilineEntry(mrb_value boxed) {
  return (uiMultilineEntry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar_boxing */
/* sha: 4dcc6df41544d05c1d7bb8cb5dd73e7e5a81060353ee82220f0419f67c9304e8 */
#if BIND_ProgressBar_TYPE
/*
 * Boxing implementation for uiProgressBar
 */

static void free_uiProgressBar(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiProgressBar_data_type = {
   "uiProgressBar", free_uiProgressBar
};

mrb_value
mruby_box_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ProgressBar_class(mrb), &uiProgressBar_data_type, box));
}

mrb_value
mruby_giftwrap_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ProgressBar_class(mrb), &uiProgressBar_data_type, box));
}

void
mruby_set_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiProgressBar_data_type);
}

void
mruby_gift_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiProgressBar_data_type);
}

uiProgressBar *
mruby_unbox_uiProgressBar(mrb_value boxed) {
  return (uiProgressBar *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons_boxing */
/* sha: 504bb0ac884b9092177816011d9b349d40fae916990bec1ff5c4a19ef48b5c2f */
#if BIND_RadioButtons_TYPE
/*
 * Boxing implementation for uiRadioButtons
 */

static void free_uiRadioButtons(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiRadioButtons_data_type = {
   "uiRadioButtons", free_uiRadioButtons
};

mrb_value
mruby_box_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RadioButtons_class(mrb), &uiRadioButtons_data_type, box));
}

mrb_value
mruby_giftwrap_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RadioButtons_class(mrb), &uiRadioButtons_data_type, box));
}

void
mruby_set_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiRadioButtons_data_type);
}

void
mruby_gift_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiRadioButtons_data_type);
}

uiRadioButtons *
mruby_unbox_uiRadioButtons(mrb_value boxed) {
  return (uiRadioButtons *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator_boxing */
/* sha: 61bd03d4154a9c4af69b41f52bee7f120041077ffdd42c4546547c8fc3fde283 */
#if BIND_Separator_TYPE
/*
 * Boxing implementation for uiSeparator
 */

static void free_uiSeparator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiSeparator_data_type = {
   "uiSeparator", free_uiSeparator
};

mrb_value
mruby_box_uiSeparator(mrb_state* mrb, uiSeparator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Separator_class(mrb), &uiSeparator_data_type, box));
}

mrb_value
mruby_giftwrap_uiSeparator(mrb_state* mrb, uiSeparator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Separator_class(mrb), &uiSeparator_data_type, box));
}

void
mruby_set_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSeparator_data_type);
}

void
mruby_gift_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSeparator_data_type);
}

uiSeparator *
mruby_unbox_uiSeparator(mrb_value boxed) {
  return (uiSeparator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider_boxing */
/* sha: 9dab7b61e271de0eaf572b3d060419d40642a1f46034337d91549fcc40b44dde */
#if BIND_Slider_TYPE
/*
 * Boxing implementation for uiSlider
 */

static void free_uiSlider(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiSlider_data_type = {
   "uiSlider", free_uiSlider
};

mrb_value
mruby_box_uiSlider(mrb_state* mrb, uiSlider *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Slider_class(mrb), &uiSlider_data_type, box));
}

mrb_value
mruby_giftwrap_uiSlider(mrb_state* mrb, uiSlider *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Slider_class(mrb), &uiSlider_data_type, box));
}

void
mruby_set_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSlider_data_type);
}

void
mruby_gift_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSlider_data_type);
}

uiSlider *
mruby_unbox_uiSlider(mrb_value boxed) {
  return (uiSlider *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox_boxing */
/* sha: 45d23e76dd26e78c27e66c5247e8dffabeaf7f815207d56d6c5542795cee7022 */
#if BIND_Spinbox_TYPE
/*
 * Boxing implementation for uiSpinbox
 */

static void free_uiSpinbox(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiSpinbox_data_type = {
   "uiSpinbox", free_uiSpinbox
};

mrb_value
mruby_box_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Spinbox_class(mrb), &uiSpinbox_data_type, box));
}

mrb_value
mruby_giftwrap_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Spinbox_class(mrb), &uiSpinbox_data_type, box));
}

void
mruby_set_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSpinbox_data_type);
}

void
mruby_gift_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiSpinbox_data_type);
}

uiSpinbox *
mruby_unbox_uiSpinbox(mrb_value boxed) {
  return (uiSpinbox *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab_boxing */
/* sha: 8869dcc18a3b285444ddcf9c4a446506939c68b09f0cce9f1cdcb1be0b856309 */
#if BIND_Tab_TYPE
/*
 * Boxing implementation for uiTab
 */

static void free_uiTab(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiTab_data_type = {
   "uiTab", free_uiTab
};

mrb_value
mruby_box_uiTab(mrb_state* mrb, uiTab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Tab_class(mrb), &uiTab_data_type, box));
}

mrb_value
mruby_giftwrap_uiTab(mrb_state* mrb, uiTab *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Tab_class(mrb), &uiTab_data_type, box));
}

void
mruby_set_uiTab_data_ptr(mrb_value obj, uiTab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiTab_data_type);
}

void
mruby_gift_uiTab_data_ptr(mrb_value obj, uiTab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiTab_data_type);
}

uiTab *
mruby_unbox_uiTab(mrb_value boxed) {
  return (uiTab *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window_boxing */
/* sha: f420039551ab627e36e857e7455f992be9f3f3a6aa50cd9270e68596dfc34c81 */
#if BIND_Window_TYPE
/*
 * Boxing implementation for uiWindow
 */

static void free_uiWindow(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uiWindow_data_type = {
   "uiWindow", free_uiWindow
};

mrb_value
mruby_box_uiWindow(mrb_state* mrb, uiWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Window_class(mrb), &uiWindow_data_type, box));
}

mrb_value
mruby_giftwrap_uiWindow(mrb_state* mrb, uiWindow *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Window_class(mrb), &uiWindow_data_type, box));
}

void
mruby_set_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiWindow_data_type);
}

void
mruby_gift_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uiWindow_data_type);
}

uiWindow *
mruby_unbox_uiWindow(mrb_value boxed) {
  return (uiWindow *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
