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
/* sha: 199195b5dacfc307eef2436ea04ab6ab47494a0a73d53856bebb56993af97d15 */
#define UI_module(mrb) mrb_module_get(mrb, "UI")
#define Area_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Area")
#define AreaDrawParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaDrawParams")
#define AreaHandler_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaHandler")
#define AreaKeyEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaKeyEvent")
#define AreaMouseEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaMouseEvent")
#define Box_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Box")
#define Button_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Button")
#define Checkbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Checkbox")
#define ColorButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "ColorButton")
#define Combobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Combobox")
#define Control_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Control")
#define DateTimePicker_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DateTimePicker")
#define DrawBrush_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawBrush")
#define DrawBrushGradientStop_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawBrushGradientStop")
#define DrawContext_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawContext")
#define DrawFontFamilies_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawFontFamilies")
#define DrawMatrix_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawMatrix")
#define DrawPath_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawPath")
#define DrawStrokeParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawStrokeParams")
#define DrawTextFont_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFont")
#define DrawTextFontDescriptor_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFontDescriptor")
#define DrawTextFontMetrics_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFontMetrics")
#define DrawTextLayout_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextLayout")
#define EditableCombobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "EditableCombobox")
#define Entry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Entry")
#define FontButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "FontButton")
#define Form_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Form")
#define Grid_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Grid")
#define Group_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Group")
#define InitOptions_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "InitOptions")
#define Label_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Label")
#define Menu_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Menu")
#define MenuItem_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "MenuItem")
#define MultilineEntry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "MultilineEntry")
#define ProgressBar_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "ProgressBar")
#define RadioButtons_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "RadioButtons")
#define Separator_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Separator")
#define Slider_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Slider")
#define Spinbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Spinbox")
#define Tab_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Tab")
#define Window_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Window")
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
/* sha: a88ed8890d42ded4ab9a1413a23655c785e487c158df2b01e8896ca0055e128d */
#if BIND_Area_TYPE
void mrb_UI_Area_init(mrb_state* mrb);
#endif
#if BIND_AreaDrawParams_TYPE
void mrb_UI_AreaDrawParams_init(mrb_state* mrb);
#endif
#if BIND_AreaHandler_TYPE
void mrb_UI_AreaHandler_init(mrb_state* mrb);
#endif
#if BIND_AreaKeyEvent_TYPE
void mrb_UI_AreaKeyEvent_init(mrb_state* mrb);
#endif
#if BIND_AreaMouseEvent_TYPE
void mrb_UI_AreaMouseEvent_init(mrb_state* mrb);
#endif
#if BIND_Box_TYPE
void mrb_UI_Box_init(mrb_state* mrb);
#endif
#if BIND_Button_TYPE
void mrb_UI_Button_init(mrb_state* mrb);
#endif
#if BIND_Checkbox_TYPE
void mrb_UI_Checkbox_init(mrb_state* mrb);
#endif
#if BIND_ColorButton_TYPE
void mrb_UI_ColorButton_init(mrb_state* mrb);
#endif
#if BIND_Combobox_TYPE
void mrb_UI_Combobox_init(mrb_state* mrb);
#endif
#if BIND_Control_TYPE
void mrb_UI_Control_init(mrb_state* mrb);
#endif
#if BIND_DateTimePicker_TYPE
void mrb_UI_DateTimePicker_init(mrb_state* mrb);
#endif
#if BIND_DrawBrush_TYPE
void mrb_UI_DrawBrush_init(mrb_state* mrb);
#endif
#if BIND_DrawBrushGradientStop_TYPE
void mrb_UI_DrawBrushGradientStop_init(mrb_state* mrb);
#endif
#if BIND_DrawContext_TYPE
void mrb_UI_DrawContext_init(mrb_state* mrb);
#endif
#if BIND_DrawFontFamilies_TYPE
void mrb_UI_DrawFontFamilies_init(mrb_state* mrb);
#endif
#if BIND_DrawMatrix_TYPE
void mrb_UI_DrawMatrix_init(mrb_state* mrb);
#endif
#if BIND_DrawPath_TYPE
void mrb_UI_DrawPath_init(mrb_state* mrb);
#endif
#if BIND_DrawStrokeParams_TYPE
void mrb_UI_DrawStrokeParams_init(mrb_state* mrb);
#endif
#if BIND_DrawTextFont_TYPE
void mrb_UI_DrawTextFont_init(mrb_state* mrb);
#endif
#if BIND_DrawTextFontDescriptor_TYPE
void mrb_UI_DrawTextFontDescriptor_init(mrb_state* mrb);
#endif
#if BIND_DrawTextFontMetrics_TYPE
void mrb_UI_DrawTextFontMetrics_init(mrb_state* mrb);
#endif
#if BIND_DrawTextLayout_TYPE
void mrb_UI_DrawTextLayout_init(mrb_state* mrb);
#endif
#if BIND_EditableCombobox_TYPE
void mrb_UI_EditableCombobox_init(mrb_state* mrb);
#endif
#if BIND_Entry_TYPE
void mrb_UI_Entry_init(mrb_state* mrb);
#endif
#if BIND_FontButton_TYPE
void mrb_UI_FontButton_init(mrb_state* mrb);
#endif
#if BIND_Form_TYPE
void mrb_UI_Form_init(mrb_state* mrb);
#endif
#if BIND_Grid_TYPE
void mrb_UI_Grid_init(mrb_state* mrb);
#endif
#if BIND_Group_TYPE
void mrb_UI_Group_init(mrb_state* mrb);
#endif
#if BIND_InitOptions_TYPE
void mrb_UI_InitOptions_init(mrb_state* mrb);
#endif
#if BIND_Label_TYPE
void mrb_UI_Label_init(mrb_state* mrb);
#endif
#if BIND_Menu_TYPE
void mrb_UI_Menu_init(mrb_state* mrb);
#endif
#if BIND_MenuItem_TYPE
void mrb_UI_MenuItem_init(mrb_state* mrb);
#endif
#if BIND_MultilineEntry_TYPE
void mrb_UI_MultilineEntry_init(mrb_state* mrb);
#endif
#if BIND_ProgressBar_TYPE
void mrb_UI_ProgressBar_init(mrb_state* mrb);
#endif
#if BIND_RadioButtons_TYPE
void mrb_UI_RadioButtons_init(mrb_state* mrb);
#endif
#if BIND_Separator_TYPE
void mrb_UI_Separator_init(mrb_state* mrb);
#endif
#if BIND_Slider_TYPE
void mrb_UI_Slider_init(mrb_state* mrb);
#endif
#if BIND_Spinbox_TYPE
void mrb_UI_Spinbox_init(mrb_state* mrb);
#endif
#if BIND_Tab_TYPE
void mrb_UI_Tab_init(mrb_state* mrb);
#endif
#if BIND_Window_TYPE
void mrb_UI_Window_init(mrb_state* mrb);
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
