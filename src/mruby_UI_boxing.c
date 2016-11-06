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

/* MRUBY_BINDING: UiArea_boxing */
/* sha: e5d5a8b4105f2b9feede5438c14170a181b675558ff9b4e8297e32a36dcb875e */
#if BIND_UiArea_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiArea_class(mrb), &uiArea_data_type, box));
}

mrb_value
mruby_giftwrap_uiArea(mrb_state* mrb, uiArea *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiArea_class(mrb), &uiArea_data_type, box));
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

/* MRUBY_BINDING: UiAreaDrawParams_boxing */
/* sha: bbd9ade78cbddcbdf6d178d076da92585685a0e3e53720413de956454055818c */
#if BIND_UiAreaDrawParams_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaDrawParams_class(mrb), &uiAreaDrawParams_data_type, box));
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

/* MRUBY_BINDING: UiAreaHandler_boxing */
/* sha: 4ec99d6e01a67f953f71445128e3ac1480e7cbeb73afa8d760e2d250315653e7 */
#if BIND_UiAreaHandler_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaHandler_class(mrb), &uiAreaHandler_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaHandler_class(mrb), &uiAreaHandler_data_type, box));
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

/* MRUBY_BINDING: UiAreaKeyEvent_boxing */
/* sha: b3285dc924b7b737c07dea58c33557ba18353228bdadb09b0a589edb76101360 */
#if BIND_UiAreaKeyEvent_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaKeyEvent_class(mrb), &uiAreaKeyEvent_data_type, box));
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

/* MRUBY_BINDING: UiAreaMouseEvent_boxing */
/* sha: b8cc54d2463e59092fed3e518870a9df0f918ef371d01f53c3de2ebd4292d2d4 */
#if BIND_UiAreaMouseEvent_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
}

mrb_value
mruby_giftwrap_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiAreaMouseEvent_class(mrb), &uiAreaMouseEvent_data_type, box));
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

/* MRUBY_BINDING: UiBox_boxing */
/* sha: 36bee9c5dd6e39d48c477c1da6dcfdf27b485535f690452d02154960d3fd0afc */
#if BIND_UiBox_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiBox_class(mrb), &uiBox_data_type, box));
}

mrb_value
mruby_giftwrap_uiBox(mrb_state* mrb, uiBox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiBox_class(mrb), &uiBox_data_type, box));
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

/* MRUBY_BINDING: UiButton_boxing */
/* sha: 2db49f6d07cbc9370295f4e00291bd94688e5e4d7d4e24aa83820af19c0ba787 */
#if BIND_UiButton_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiButton_class(mrb), &uiButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiButton(mrb_state* mrb, uiButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiButton_class(mrb), &uiButton_data_type, box));
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

/* MRUBY_BINDING: UiCheckbox_boxing */
/* sha: a7361dfdda2de55aab86f4d7906334fc73bc5d30bec90327b6ae93cfcd031128 */
#if BIND_UiCheckbox_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiCheckbox_class(mrb), &uiCheckbox_data_type, box));
}

mrb_value
mruby_giftwrap_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiCheckbox_class(mrb), &uiCheckbox_data_type, box));
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

/* MRUBY_BINDING: UiColorButton_boxing */
/* sha: 65fc2313d57781af419b6d72546cf413fb9f53d4f38c2a26f51dc8e900198fbe */
#if BIND_UiColorButton_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiColorButton_class(mrb), &uiColorButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiColorButton(mrb_state* mrb, uiColorButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiColorButton_class(mrb), &uiColorButton_data_type, box));
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

/* MRUBY_BINDING: UiCombobox_boxing */
/* sha: a90d435d59e1f6c7097d52d138f54931880b23e76cf4dc1f8400144c4d61dea9 */
#if BIND_UiCombobox_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiCombobox_class(mrb), &uiCombobox_data_type, box));
}

mrb_value
mruby_giftwrap_uiCombobox(mrb_state* mrb, uiCombobox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiCombobox_class(mrb), &uiCombobox_data_type, box));
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

/* MRUBY_BINDING: UiControl_boxing */
/* sha: 896431a2c7a6b71566080e0419b82c45768e871939f827d75cc79997820097ec */
#if BIND_UiControl_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiControl_class(mrb), &uiControl_data_type, box));
}

mrb_value
mruby_giftwrap_uiControl(mrb_state* mrb, uiControl *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiControl_class(mrb), &uiControl_data_type, box));
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

/* MRUBY_BINDING: UiDateTimePicker_boxing */
/* sha: ae67cddda8a2febdc5a09679266e6d8b974cb2c4c844abdb619c82266f2e9166 */
#if BIND_UiDateTimePicker_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
}

mrb_value
mruby_giftwrap_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDateTimePicker_class(mrb), &uiDateTimePicker_data_type, box));
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

/* MRUBY_BINDING: UiDrawBrush_boxing */
/* sha: 3f954b3acc769df0b97ef2456444fd15b5315265b9d49ed0d147270280543f5c */
#if BIND_UiDrawBrush_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawBrush_class(mrb), &uiDrawBrush_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawBrush_class(mrb), &uiDrawBrush_data_type, box));
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

/* MRUBY_BINDING: UiDrawBrushGradientStop_boxing */
/* sha: ab34801c035e548136046b6bfd0a09e2d444245c18a95d40649a7365bf2d80dc */
#if BIND_UiDrawBrushGradientStop_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawBrushGradientStop_class(mrb), &uiDrawBrushGradientStop_data_type, box));
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

/* MRUBY_BINDING: UiDrawContext_boxing */
/* sha: 4a9f9533a086ed12b1ab3997b941a47919acc38848724e5bdcd6859e1ed4cf00 */
#if BIND_UiDrawContext_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawContext_class(mrb), &uiDrawContext_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawContext_class(mrb), &uiDrawContext_data_type, box));
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

/* MRUBY_BINDING: UiDrawFontFamilies_boxing */
/* sha: 9d825f40639a702f52939b160933e6caef9d927c759cdb11bd16c867a7b617b7 */
#if BIND_UiDrawFontFamilies_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawFontFamilies_class(mrb), &uiDrawFontFamilies_data_type, box));
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

/* MRUBY_BINDING: UiDrawMatrix_boxing */
/* sha: 8ade48a8c86d1b0121ba4d7716640039738dbe1811a12ce9d323bf23510fb539 */
#if BIND_UiDrawMatrix_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawMatrix_class(mrb), &uiDrawMatrix_data_type, box));
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

/* MRUBY_BINDING: UiDrawPath_boxing */
/* sha: 93a22a4f8941add94d5e7930c4882d93e23361e9e45fdb9bd4a6bccaf1c52d24 */
#if BIND_UiDrawPath_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawPath_class(mrb), &uiDrawPath_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawPath_class(mrb), &uiDrawPath_data_type, box));
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

/* MRUBY_BINDING: UiDrawStrokeParams_boxing */
/* sha: ea6a24f73e2b9e7ec7782e3b00893146520d92473ca770c7292d65de53c02d58 */
#if BIND_UiDrawStrokeParams_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawStrokeParams_class(mrb), &uiDrawStrokeParams_data_type, box));
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

/* MRUBY_BINDING: UiDrawTextFont_boxing */
/* sha: dc7c909d7cfd1e224b8662401cb356cfca9cb9bcb48e332fbbb8ef3ad2745008 */
#if BIND_UiDrawTextFont_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFont_class(mrb), &uiDrawTextFont_data_type, box));
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

/* MRUBY_BINDING: UiDrawTextFontDescriptor_boxing */
/* sha: 9349ecb7bafa4fa0757d479a5e38855e1149f828b5ac620228cd998bd39a850e */
#if BIND_UiDrawTextFontDescriptor_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFontDescriptor_class(mrb), &uiDrawTextFontDescriptor_data_type, box));
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

/* MRUBY_BINDING: UiDrawTextFontMetrics_boxing */
/* sha: bbc77b249756e22d94943f214223658126eaf1e824c5cc1c0501f76881b7faf9 */
#if BIND_UiDrawTextFontMetrics_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextFontMetrics_class(mrb), &uiDrawTextFontMetrics_data_type, box));
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

/* MRUBY_BINDING: UiDrawTextLayout_boxing */
/* sha: d4d17afc68682dc01c348e5fa33d17911116e30d9d9dcd27114c46d04645193c */
#if BIND_UiDrawTextLayout_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
}

mrb_value
mruby_giftwrap_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiDrawTextLayout_class(mrb), &uiDrawTextLayout_data_type, box));
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

/* MRUBY_BINDING: UiEditableCombobox_boxing */
/* sha: 017d97d4cd22925fb7cfb5870f7314b6e3c91477b10bcd240369da71756ff7bb */
#if BIND_UiEditableCombobox_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiEditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
}

mrb_value
mruby_giftwrap_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiEditableCombobox_class(mrb), &uiEditableCombobox_data_type, box));
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

/* MRUBY_BINDING: UiEntry_boxing */
/* sha: a7c3b26a5c1607d9051a8b3fc12835cf0cd70dfe7e46c4f8153486cb9b343a3d */
#if BIND_UiEntry_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiEntry_class(mrb), &uiEntry_data_type, box));
}

mrb_value
mruby_giftwrap_uiEntry(mrb_state* mrb, uiEntry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiEntry_class(mrb), &uiEntry_data_type, box));
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

/* MRUBY_BINDING: UiFontButton_boxing */
/* sha: bf742f73b757073b6da312855422702dddc21c67190e8ffc3b5d5d1f95fc8ce8 */
#if BIND_UiFontButton_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiFontButton_class(mrb), &uiFontButton_data_type, box));
}

mrb_value
mruby_giftwrap_uiFontButton(mrb_state* mrb, uiFontButton *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiFontButton_class(mrb), &uiFontButton_data_type, box));
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

/* MRUBY_BINDING: UiForm_boxing */
/* sha: 6c588e59b4f8d0d814e9dfc57f92e1949e1a35159eadf8a63320692d7fde7df2 */
#if BIND_UiForm_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiForm_class(mrb), &uiForm_data_type, box));
}

mrb_value
mruby_giftwrap_uiForm(mrb_state* mrb, uiForm *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiForm_class(mrb), &uiForm_data_type, box));
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

/* MRUBY_BINDING: UiGrid_boxing */
/* sha: 7738f5c0c5512d73b124124035d90a3c62ada381d6d4aae4c8758c8865a8941a */
#if BIND_UiGrid_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiGrid_class(mrb), &uiGrid_data_type, box));
}

mrb_value
mruby_giftwrap_uiGrid(mrb_state* mrb, uiGrid *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiGrid_class(mrb), &uiGrid_data_type, box));
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

/* MRUBY_BINDING: UiGroup_boxing */
/* sha: a98bbd037416e857045f92b450de881634081b306bec0a6561ca0aa070418df3 */
#if BIND_UiGroup_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiGroup_class(mrb), &uiGroup_data_type, box));
}

mrb_value
mruby_giftwrap_uiGroup(mrb_state* mrb, uiGroup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiGroup_class(mrb), &uiGroup_data_type, box));
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

/* MRUBY_BINDING: UiInitOptions_boxing */
/* sha: e3ccd746efa8807d2d5724cc79fa2272ebcc131de00b03928ecb0af9a1f6bc36 */
#if BIND_UiInitOptions_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiInitOptions_class(mrb), &uiInitOptions_data_type, box));
}

mrb_value
mruby_giftwrap_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiInitOptions_class(mrb), &uiInitOptions_data_type, box));
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

/* MRUBY_BINDING: UiLabel_boxing */
/* sha: 1614dab10070e3d84a78f5ad078b9801ca41d39e81a45b8ad9a2c2f5ee55813f */
#if BIND_UiLabel_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiLabel_class(mrb), &uiLabel_data_type, box));
}

mrb_value
mruby_giftwrap_uiLabel(mrb_state* mrb, uiLabel *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiLabel_class(mrb), &uiLabel_data_type, box));
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

/* MRUBY_BINDING: UiMenu_boxing */
/* sha: 79ec33786b2a3e8585c829b4c8316a3bd52005dbed9f99e3e5a8274f4e85e501 */
#if BIND_UiMenu_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiMenu_class(mrb), &uiMenu_data_type, box));
}

mrb_value
mruby_giftwrap_uiMenu(mrb_state* mrb, uiMenu *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiMenu_class(mrb), &uiMenu_data_type, box));
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

/* MRUBY_BINDING: UiMenuItem_boxing */
/* sha: 9922518d6fb17fa696354c5a426d460a1bd736f27d08b95b5340c0ee34995899 */
#if BIND_UiMenuItem_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiMenuItem_class(mrb), &uiMenuItem_data_type, box));
}

mrb_value
mruby_giftwrap_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiMenuItem_class(mrb), &uiMenuItem_data_type, box));
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

/* MRUBY_BINDING: UiMultilineEntry_boxing */
/* sha: 19d6b7139b895f4e85547259309f8a23c9b098d8a95e796ed24c36d58af4de6d */
#if BIND_UiMultilineEntry_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiMultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
}

mrb_value
mruby_giftwrap_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiMultilineEntry_class(mrb), &uiMultilineEntry_data_type, box));
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

/* MRUBY_BINDING: UiProgressBar_boxing */
/* sha: 825ae73bdcbc0d0e2217c30efe5196411859c2fba491a7a804c8215125d09753 */
#if BIND_UiProgressBar_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiProgressBar_class(mrb), &uiProgressBar_data_type, box));
}

mrb_value
mruby_giftwrap_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiProgressBar_class(mrb), &uiProgressBar_data_type, box));
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

/* MRUBY_BINDING: UiRadioButtons_boxing */
/* sha: e0a722d917ae184a66a0b53a22dbc95e491fb73d003ce9a8115d9c1a4095cb0f */
#if BIND_UiRadioButtons_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiRadioButtons_class(mrb), &uiRadioButtons_data_type, box));
}

mrb_value
mruby_giftwrap_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiRadioButtons_class(mrb), &uiRadioButtons_data_type, box));
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

/* MRUBY_BINDING: UiSeparator_boxing */
/* sha: 56d8977f4030e3cc2adb3e3e25ad2009f6285f49c1f3b1a69b853eedb6491941 */
#if BIND_UiSeparator_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiSeparator_class(mrb), &uiSeparator_data_type, box));
}

mrb_value
mruby_giftwrap_uiSeparator(mrb_state* mrb, uiSeparator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiSeparator_class(mrb), &uiSeparator_data_type, box));
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

/* MRUBY_BINDING: UiSlider_boxing */
/* sha: fa3a0b8d224deb441ac12ccb93d8674f4d02a97fe592b7a65e91e275fbc66ee7 */
#if BIND_UiSlider_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiSlider_class(mrb), &uiSlider_data_type, box));
}

mrb_value
mruby_giftwrap_uiSlider(mrb_state* mrb, uiSlider *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiSlider_class(mrb), &uiSlider_data_type, box));
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

/* MRUBY_BINDING: UiSpinbox_boxing */
/* sha: e257b461c8d13bdf3ee56a59ea200c7f61c13ac534015946e8366c6058ddd8a0 */
#if BIND_UiSpinbox_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiSpinbox_class(mrb), &uiSpinbox_data_type, box));
}

mrb_value
mruby_giftwrap_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiSpinbox_class(mrb), &uiSpinbox_data_type, box));
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

/* MRUBY_BINDING: UiTab_boxing */
/* sha: 870f43f70177441da6e93b403b439be4955a62e92594365d4c35818a5b796b46 */
#if BIND_UiTab_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiTab_class(mrb), &uiTab_data_type, box));
}

mrb_value
mruby_giftwrap_uiTab(mrb_state* mrb, uiTab *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiTab_class(mrb), &uiTab_data_type, box));
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

/* MRUBY_BINDING: UiWindow_boxing */
/* sha: 7e517ffae05498603e46fa5d79d842ef56fa2945152757a99e6d17cf572ae9a9 */
#if BIND_UiWindow_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UiWindow_class(mrb), &uiWindow_data_type, box));
}

mrb_value
mruby_giftwrap_uiWindow(mrb_state* mrb, uiWindow *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UiWindow_class(mrb), &uiWindow_data_type, box));
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
