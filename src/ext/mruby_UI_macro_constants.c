mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_LEFT", mrb_fixnum_value(uiWindowResizeEdgeLeft));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_TOP", mrb_fixnum_value(uiWindowResizeEdgeTop));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_RIGHT", mrb_fixnum_value(uiWindowResizeEdgeRight));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_BOTTOM", mrb_fixnum_value(uiWindowResizeEdgeBottom));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_TOP_LEFT", mrb_fixnum_value(uiWindowResizeEdgeTopLeft));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_TOP_RIGHT", mrb_fixnum_value(uiWindowResizeEdgeTopRight));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_BOTTOM_LEFT", mrb_fixnum_value(uiWindowResizeEdgeBottomLeft));
mrb_define_const(mrb, UI_module(mrb), "WINDOW_RESIZE_EDGE_BOTTOM_RIGHT", mrb_fixnum_value(uiWindowResizeEdgeBottomRight));
mrb_define_const(mrb, UI_module(mrb), "DRAW_BRUSH_TYPE_SOLID", mrb_fixnum_value(uiDrawBrushTypeSolid));
mrb_define_const(mrb, UI_module(mrb), "DRAW_BRUSH_TYPE_LINEAR_GRADIENT", mrb_fixnum_value(uiDrawBrushTypeLinearGradient));
mrb_define_const(mrb, UI_module(mrb), "DRAW_BRUSH_TYPE_RADIAL_GRADIENT", mrb_fixnum_value(uiDrawBrushTypeRadialGradient));
mrb_define_const(mrb, UI_module(mrb), "DRAW_BRUSH_TYPE_IMAGE", mrb_fixnum_value(uiDrawBrushTypeImage));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_CAP_FLAT", mrb_fixnum_value(uiDrawLineCapFlat));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_CAP_ROUND", mrb_fixnum_value(uiDrawLineCapRound));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_CAP_SQUARE", mrb_fixnum_value(uiDrawLineCapSquare));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_JOIN_MITER", mrb_fixnum_value(uiDrawLineJoinMiter));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_JOIN_ROUND", mrb_fixnum_value(uiDrawLineJoinRound));
mrb_define_const(mrb, UI_module(mrb), "DRAW_LINE_JOIN_BEVEL", mrb_fixnum_value(uiDrawLineJoinBevel));
mrb_define_const(mrb, UI_module(mrb), "DRAW_FILL_MODE_WINDING", mrb_fixnum_value(uiDrawFillModeWinding));
mrb_define_const(mrb, UI_module(mrb), "DRAW_FILL_MODE_ALTERNATE", mrb_fixnum_value(uiDrawFillModeAlternate));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_THIN", mrb_fixnum_value(uiDrawTextWeightThin));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_ULTRA_LIGHT", mrb_fixnum_value(uiDrawTextWeightUltraLight));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_LIGHT", mrb_fixnum_value(uiDrawTextWeightLight));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_BOOK", mrb_fixnum_value(uiDrawTextWeightBook));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_NORMAL", mrb_fixnum_value(uiDrawTextWeightNormal));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_MEDIUM", mrb_fixnum_value(uiDrawTextWeightMedium));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_SEMI_BOLD", mrb_fixnum_value(uiDrawTextWeightSemiBold));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_BOLD", mrb_fixnum_value(uiDrawTextWeightBold));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_ULTRA_BOLD", mrb_fixnum_value(uiDrawTextWeightUltraBold));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_HEAVY", mrb_fixnum_value(uiDrawTextWeightHeavy));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_WEIGHT_ULTRA_HEAVY", mrb_fixnum_value(uiDrawTextWeightUltraHeavy));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_ITALIC_NORMAL", mrb_fixnum_value(uiDrawTextItalicNormal));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_ITALIC_OBLIQUE", mrb_fixnum_value(uiDrawTextItalicOblique));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_ITALIC_ITALIC", mrb_fixnum_value(uiDrawTextItalicItalic));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_ULTRA_CONDENSED", mrb_fixnum_value(uiDrawTextStretchUltraCondensed));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_EXTRA_CONDENSED", mrb_fixnum_value(uiDrawTextStretchExtraCondensed));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_CONDENSED", mrb_fixnum_value(uiDrawTextStretchCondensed));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_SEMI_CONDENSED", mrb_fixnum_value(uiDrawTextStretchSemiCondensed));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_NORMAL", mrb_fixnum_value(uiDrawTextStretchNormal));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_SEMI_EXPANDED", mrb_fixnum_value(uiDrawTextStretchSemiExpanded));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_EXPANDED", mrb_fixnum_value(uiDrawTextStretchExpanded));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_EXTRA_EXPANDED", mrb_fixnum_value(uiDrawTextStretchExtraExpanded));
mrb_define_const(mrb, UI_module(mrb), "DRAW_TEXT_STRETCH_ULTRA_EXPANDED", mrb_fixnum_value(uiDrawTextStretchUltraExpanded));
mrb_define_const(mrb, UI_module(mrb), "MODIFIER_CTRL", mrb_fixnum_value(uiModifierCtrl));
mrb_define_const(mrb, UI_module(mrb), "MODIFIER_ALT", mrb_fixnum_value(uiModifierAlt));
mrb_define_const(mrb, UI_module(mrb), "MODIFIER_SHIFT", mrb_fixnum_value(uiModifierShift));
mrb_define_const(mrb, UI_module(mrb), "MODIFIER_SUPER", mrb_fixnum_value(uiModifierSuper));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_ESCAPE", mrb_fixnum_value(uiExtKeyEscape));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_DELETE", mrb_fixnum_value(uiExtKeyDelete));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_HOME", mrb_fixnum_value(uiExtKeyHome));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_END", mrb_fixnum_value(uiExtKeyEnd));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_PAGE_UP", mrb_fixnum_value(uiExtKeyPageUp));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_PAGE_DOWN", mrb_fixnum_value(uiExtKeyPageDown));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_UP", mrb_fixnum_value(uiExtKeyUp));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_DOWN", mrb_fixnum_value(uiExtKeyDown));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_LEFT", mrb_fixnum_value(uiExtKeyLeft));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_RIGHT", mrb_fixnum_value(uiExtKeyRight));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F2", mrb_fixnum_value(uiExtKeyF2));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F3", mrb_fixnum_value(uiExtKeyF3));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F4", mrb_fixnum_value(uiExtKeyF4));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F5", mrb_fixnum_value(uiExtKeyF5));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F6", mrb_fixnum_value(uiExtKeyF6));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F7", mrb_fixnum_value(uiExtKeyF7));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F8", mrb_fixnum_value(uiExtKeyF8));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F9", mrb_fixnum_value(uiExtKeyF9));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F10", mrb_fixnum_value(uiExtKeyF10));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F11", mrb_fixnum_value(uiExtKeyF11));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_F12", mrb_fixnum_value(uiExtKeyF12));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N2", mrb_fixnum_value(uiExtKeyN2));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N3", mrb_fixnum_value(uiExtKeyN3));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N4", mrb_fixnum_value(uiExtKeyN4));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N5", mrb_fixnum_value(uiExtKeyN5));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N6", mrb_fixnum_value(uiExtKeyN6));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N7", mrb_fixnum_value(uiExtKeyN7));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N8", mrb_fixnum_value(uiExtKeyN8));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_N9", mrb_fixnum_value(uiExtKeyN9));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NDOT", mrb_fixnum_value(uiExtKeyNDot));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NENTER", mrb_fixnum_value(uiExtKeyNEnter));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NADD", mrb_fixnum_value(uiExtKeyNAdd));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NSUBTRACT", mrb_fixnum_value(uiExtKeyNSubtract));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NMULTIPLY", mrb_fixnum_value(uiExtKeyNMultiply));
mrb_define_const(mrb, UI_module(mrb), "EXT_KEY_NDIVIDE", mrb_fixnum_value(uiExtKeyNDivide));
mrb_define_const(mrb, UI_module(mrb), "ALIGN_FILL", mrb_fixnum_value(uiAlignFill));
mrb_define_const(mrb, UI_module(mrb), "ALIGN_START", mrb_fixnum_value(uiAlignStart));
mrb_define_const(mrb, UI_module(mrb), "ALIGN_CENTER", mrb_fixnum_value(uiAlignCenter));
mrb_define_const(mrb, UI_module(mrb), "ALIGN_END", mrb_fixnum_value(uiAlignEnd));
mrb_define_const(mrb, UI_module(mrb), "AT_LEADING", mrb_fixnum_value(uiAtLeading));
mrb_define_const(mrb, UI_module(mrb), "AT_TOP", mrb_fixnum_value(uiAtTop));
mrb_define_const(mrb, UI_module(mrb), "AT_TRAILING", mrb_fixnum_value(uiAtTrailing));
mrb_define_const(mrb, UI_module(mrb), "AT_BOTTOM", mrb_fixnum_value(uiAtBottom));
