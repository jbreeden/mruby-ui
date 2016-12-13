#define UI_module(mrb) mrb_module_get(mrb, "UI")

#define UI_Pointer_module(mrb) mrb_module_get_under(mrb, UI_module(mrb), "Pointer")

#define UI_VoidPointer_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "VoidPointer")

#define UI_Area_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Area")

#define UI_AreaDrawParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaDrawParams")

#define UI_AreaHandler_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaHandler")

#define UI_AreaKeyEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaKeyEvent")

#define UI_AreaMouseEvent_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "AreaMouseEvent")

#define UI_Box_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Box")

#define UI_Button_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Button")

#define UI_Checkbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Checkbox")

#define UI_ColorButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "ColorButton")

#define UI_Combobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Combobox")

#define UI_Control_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Control")

#define UI_DateTimePicker_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DateTimePicker")

#define UI_DrawBrush_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawBrush")

#define UI_DrawBrushGradientStop_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawBrushGradientStop")

#define UI_DrawContext_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawContext")

#define UI_DrawFontFamilies_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawFontFamilies")

#define UI_DrawMatrix_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawMatrix")

#define UI_DrawPath_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawPath")

#define UI_DrawStrokeParams_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawStrokeParams")

#define UI_DrawTextFont_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFont")

#define UI_DrawTextFontDescriptor_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFontDescriptor")

#define UI_DrawTextFontMetrics_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextFontMetrics")

#define UI_DrawTextLayout_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "DrawTextLayout")

#define UI_EditableCombobox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "EditableCombobox")

#define UI_Entry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Entry")

#define UI_FontButton_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "FontButton")

#define UI_Form_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Form")

#define UI_Grid_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Grid")

#define UI_Group_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Group")

#define UI_InitOptions_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "InitOptions")

#define UI_Label_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Label")

#define UI_Menu_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Menu")

#define UI_MenuItem_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "MenuItem")

#define UI_MultilineEntry_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "MultilineEntry")

#define UI_ProgressBar_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "ProgressBar")

#define UI_RadioButtons_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "RadioButtons")

#define UI_Separator_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Separator")

#define UI_Slider_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Slider")

#define UI_Spinbox_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Spinbox")

#define UI_Tab_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Tab")

#define UI_Window_class(mrb) mrb_class_get_under(mrb, UI_module(mrb), "Window")

