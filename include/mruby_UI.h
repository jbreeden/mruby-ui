#ifndef UI_HEADER
#define UI_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

/* MRUBY_BINDING: pre_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: includes */
/* sha: eefc287167b6d0720c69ecfa7ed591dea2c860571087c023a21bb228bf5c27f2 */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/compile.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "ui.h"

#include "mruby_UI_functions.h"
#include "mruby_UI_classes.h"
#include "mruby_UI_boxing.h"
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

/* MRUBY_BINDING: pre_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_macros */
/* sha: bcad52bbb80064f866595ceae121b6ec1fbec6ff971e8ee637683cc8386f24a4 */
#define UI_module(mrb) mrb_module_get(mrb, "UI")
#define UiArea_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiArea")
#define UiAreaDrawParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiAreaDrawParams")
#define UiAreaHandler_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiAreaHandler")
#define UiAreaKeyEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiAreaKeyEvent")
#define UiAreaMouseEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiAreaMouseEvent")
#define UiBox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiBox")
#define UiButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiButton")
#define UiCheckbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiCheckbox")
#define UiColorButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiColorButton")
#define UiCombobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiCombobox")
#define UiControl_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiControl")
#define UiDateTimePicker_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDateTimePicker")
#define UiDrawBrush_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawBrush")
#define UiDrawBrushGradientStop_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawBrushGradientStop")
#define UiDrawContext_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawContext")
#define UiDrawFontFamilies_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawFontFamilies")
#define UiDrawMatrix_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawMatrix")
#define UiDrawPath_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawPath")
#define UiDrawStrokeParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawStrokeParams")
#define UiDrawTextFont_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawTextFont")
#define UiDrawTextFontDescriptor_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawTextFontDescriptor")
#define UiDrawTextFontMetrics_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawTextFontMetrics")
#define UiDrawTextLayout_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiDrawTextLayout")
#define UiEditableCombobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiEditableCombobox")
#define UiEntry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiEntry")
#define UiFontButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiFontButton")
#define UiForm_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiForm")
#define UiGrid_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiGrid")
#define UiGroup_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiGroup")
#define UiInitOptions_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiInitOptions")
#define UiLabel_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiLabel")
#define UiMenu_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiMenu")
#define UiMenuItem_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiMenuItem")
#define UiMultilineEntry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiMultilineEntry")
#define UiProgressBar_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiProgressBar")
#define UiRadioButtons_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiRadioButtons")
#define UiSeparator_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiSeparator")
#define UiSlider_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiSlider")
#define UiSpinbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiSpinbox")
#define UiTab_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiTab")
#define UiWindow_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "UiWindow")
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class initialization function declarations
 * ------------------------------------------
 */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: 55f2999944c3474d11ee8c3df797c4a5ca9ec288f49c22fd64da00bc70b31665 */
#if BIND_UiArea_TYPE
void mrb_UI_UiArea_init(mrb_state* mrb);
#endif
#if BIND_UiAreaDrawParams_TYPE
void mrb_UI_UiAreaDrawParams_init(mrb_state* mrb);
#endif
#if BIND_UiAreaHandler_TYPE
void mrb_UI_UiAreaHandler_init(mrb_state* mrb);
#endif
#if BIND_UiAreaKeyEvent_TYPE
void mrb_UI_UiAreaKeyEvent_init(mrb_state* mrb);
#endif
#if BIND_UiAreaMouseEvent_TYPE
void mrb_UI_UiAreaMouseEvent_init(mrb_state* mrb);
#endif
#if BIND_UiBox_TYPE
void mrb_UI_UiBox_init(mrb_state* mrb);
#endif
#if BIND_UiButton_TYPE
void mrb_UI_UiButton_init(mrb_state* mrb);
#endif
#if BIND_UiCheckbox_TYPE
void mrb_UI_UiCheckbox_init(mrb_state* mrb);
#endif
#if BIND_UiColorButton_TYPE
void mrb_UI_UiColorButton_init(mrb_state* mrb);
#endif
#if BIND_UiCombobox_TYPE
void mrb_UI_UiCombobox_init(mrb_state* mrb);
#endif
#if BIND_UiControl_TYPE
void mrb_UI_UiControl_init(mrb_state* mrb);
#endif
#if BIND_UiDateTimePicker_TYPE
void mrb_UI_UiDateTimePicker_init(mrb_state* mrb);
#endif
#if BIND_UiDrawBrush_TYPE
void mrb_UI_UiDrawBrush_init(mrb_state* mrb);
#endif
#if BIND_UiDrawBrushGradientStop_TYPE
void mrb_UI_UiDrawBrushGradientStop_init(mrb_state* mrb);
#endif
#if BIND_UiDrawContext_TYPE
void mrb_UI_UiDrawContext_init(mrb_state* mrb);
#endif
#if BIND_UiDrawFontFamilies_TYPE
void mrb_UI_UiDrawFontFamilies_init(mrb_state* mrb);
#endif
#if BIND_UiDrawMatrix_TYPE
void mrb_UI_UiDrawMatrix_init(mrb_state* mrb);
#endif
#if BIND_UiDrawPath_TYPE
void mrb_UI_UiDrawPath_init(mrb_state* mrb);
#endif
#if BIND_UiDrawStrokeParams_TYPE
void mrb_UI_UiDrawStrokeParams_init(mrb_state* mrb);
#endif
#if BIND_UiDrawTextFont_TYPE
void mrb_UI_UiDrawTextFont_init(mrb_state* mrb);
#endif
#if BIND_UiDrawTextFontDescriptor_TYPE
void mrb_UI_UiDrawTextFontDescriptor_init(mrb_state* mrb);
#endif
#if BIND_UiDrawTextFontMetrics_TYPE
void mrb_UI_UiDrawTextFontMetrics_init(mrb_state* mrb);
#endif
#if BIND_UiDrawTextLayout_TYPE
void mrb_UI_UiDrawTextLayout_init(mrb_state* mrb);
#endif
#if BIND_UiEditableCombobox_TYPE
void mrb_UI_UiEditableCombobox_init(mrb_state* mrb);
#endif
#if BIND_UiEntry_TYPE
void mrb_UI_UiEntry_init(mrb_state* mrb);
#endif
#if BIND_UiFontButton_TYPE
void mrb_UI_UiFontButton_init(mrb_state* mrb);
#endif
#if BIND_UiForm_TYPE
void mrb_UI_UiForm_init(mrb_state* mrb);
#endif
#if BIND_UiGrid_TYPE
void mrb_UI_UiGrid_init(mrb_state* mrb);
#endif
#if BIND_UiGroup_TYPE
void mrb_UI_UiGroup_init(mrb_state* mrb);
#endif
#if BIND_UiInitOptions_TYPE
void mrb_UI_UiInitOptions_init(mrb_state* mrb);
#endif
#if BIND_UiLabel_TYPE
void mrb_UI_UiLabel_init(mrb_state* mrb);
#endif
#if BIND_UiMenu_TYPE
void mrb_UI_UiMenu_init(mrb_state* mrb);
#endif
#if BIND_UiMenuItem_TYPE
void mrb_UI_UiMenuItem_init(mrb_state* mrb);
#endif
#if BIND_UiMultilineEntry_TYPE
void mrb_UI_UiMultilineEntry_init(mrb_state* mrb);
#endif
#if BIND_UiProgressBar_TYPE
void mrb_UI_UiProgressBar_init(mrb_state* mrb);
#endif
#if BIND_UiRadioButtons_TYPE
void mrb_UI_UiRadioButtons_init(mrb_state* mrb);
#endif
#if BIND_UiSeparator_TYPE
void mrb_UI_UiSeparator_init(mrb_state* mrb);
#endif
#if BIND_UiSlider_TYPE
void mrb_UI_UiSlider_init(mrb_state* mrb);
#endif
#if BIND_UiSpinbox_TYPE
void mrb_UI_UiSpinbox_init(mrb_state* mrb);
#endif
#if BIND_UiTab_TYPE
void mrb_UI_UiTab_init(mrb_state* mrb);
#endif
#if BIND_UiWindow_TYPE
void mrb_UI_UiWindow_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro & Enum definition function declarations
 * ---------------------------------------------
 */
void mruby_UI_define_macro_constants(mrb_state* mrb);
void mruby_UI_define_enum_constants(mrb_state* mrb);

#endif
