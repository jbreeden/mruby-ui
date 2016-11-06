#ifndef MRUBY_UI_BOXING_HEADER
#define MRUBY_UI_BOXING_HEADER

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */


/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_UI_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object.
   * 
   * Possible uses:
   * - A function pointer to invoke instead of `free` on GC.
   * - A pointer back to the RObject, to be accessed during GC.
   * - etc.
   */
  void* data;
} mruby_to_native_ref;

/* MRUBY_BINDING: Area::boxing_decls */
/* sha: c7e1bffabda9ae9142018212a4d168ac7b01bb1279bfde625c7b109f6b674b97 */
#if BIND_Area_TYPE
mrb_value
mruby_box_uiArea(mrb_state* mrb, uiArea *unboxed);

mrb_value
mruby_giftwrap_uiArea(mrb_state* mrb, uiArea *unboxed);

void
mruby_set_uiArea_data_ptr(mrb_value obj, uiArea *unboxed);

void
mruby_gift_uiArea_data_ptr(mrb_value obj, uiArea *unboxed);

uiArea *
mruby_unbox_uiArea(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::boxing_decls */
/* sha: 75100a520bc1566d5207757f877281a5c55e37390d2b8b2b3ebaf73a6f9bb45a */
#if BIND_AreaDrawParams_TYPE
mrb_value
mruby_box_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed);

mrb_value
mruby_giftwrap_uiAreaDrawParams(mrb_state* mrb, uiAreaDrawParams *unboxed);

void
mruby_set_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed);

void
mruby_gift_uiAreaDrawParams_data_ptr(mrb_value obj, uiAreaDrawParams *unboxed);

uiAreaDrawParams *
mruby_unbox_uiAreaDrawParams(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaHandler::boxing_decls */
/* sha: 94477087b740c56adab9295555080d2d4db9c750c65e5a859b214422e9a5840e */
#if BIND_AreaHandler_TYPE
mrb_value
mruby_box_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed);

mrb_value
mruby_giftwrap_uiAreaHandler(mrb_state* mrb, uiAreaHandler *unboxed);

void
mruby_set_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed);

void
mruby_gift_uiAreaHandler_data_ptr(mrb_value obj, uiAreaHandler *unboxed);

uiAreaHandler *
mruby_unbox_uiAreaHandler(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaKeyEvent::boxing_decls */
/* sha: 9c5733abda6f5a5b6864a41b243a4aefa03ee00258f9172f50e442acbb71664d */
#if BIND_AreaKeyEvent_TYPE
mrb_value
mruby_box_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed);

mrb_value
mruby_giftwrap_uiAreaKeyEvent(mrb_state* mrb, uiAreaKeyEvent *unboxed);

void
mruby_set_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed);

void
mruby_gift_uiAreaKeyEvent_data_ptr(mrb_value obj, uiAreaKeyEvent *unboxed);

uiAreaKeyEvent *
mruby_unbox_uiAreaKeyEvent(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaMouseEvent::boxing_decls */
/* sha: fe5c4a1d53123f1d44e4577c1614312ae5213fcd4dc597d90bf0f52a0d7868cb */
#if BIND_AreaMouseEvent_TYPE
mrb_value
mruby_box_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed);

mrb_value
mruby_giftwrap_uiAreaMouseEvent(mrb_state* mrb, uiAreaMouseEvent *unboxed);

void
mruby_set_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed);

void
mruby_gift_uiAreaMouseEvent_data_ptr(mrb_value obj, uiAreaMouseEvent *unboxed);

uiAreaMouseEvent *
mruby_unbox_uiAreaMouseEvent(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Box::boxing_decls */
/* sha: 626956a31c9aa8919bfbbc68ba42105df8019a9d91b041cdf4257815b5e25dd9 */
#if BIND_Box_TYPE
mrb_value
mruby_box_uiBox(mrb_state* mrb, uiBox *unboxed);

mrb_value
mruby_giftwrap_uiBox(mrb_state* mrb, uiBox *unboxed);

void
mruby_set_uiBox_data_ptr(mrb_value obj, uiBox *unboxed);

void
mruby_gift_uiBox_data_ptr(mrb_value obj, uiBox *unboxed);

uiBox *
mruby_unbox_uiBox(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Button::boxing_decls */
/* sha: 5a2cfdf8a49b56b570a7ef6d1b40f270e91f624b9e5a5b9d331b2af99edcc281 */
#if BIND_Button_TYPE
mrb_value
mruby_box_uiButton(mrb_state* mrb, uiButton *unboxed);

mrb_value
mruby_giftwrap_uiButton(mrb_state* mrb, uiButton *unboxed);

void
mruby_set_uiButton_data_ptr(mrb_value obj, uiButton *unboxed);

void
mruby_gift_uiButton_data_ptr(mrb_value obj, uiButton *unboxed);

uiButton *
mruby_unbox_uiButton(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Checkbox::boxing_decls */
/* sha: c4143190b61fa230629ff60485dcbf69522da56b82a6e065960041610fdc902e */
#if BIND_Checkbox_TYPE
mrb_value
mruby_box_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed);

mrb_value
mruby_giftwrap_uiCheckbox(mrb_state* mrb, uiCheckbox *unboxed);

void
mruby_set_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed);

void
mruby_gift_uiCheckbox_data_ptr(mrb_value obj, uiCheckbox *unboxed);

uiCheckbox *
mruby_unbox_uiCheckbox(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ColorButton::boxing_decls */
/* sha: 7238597255804e6203ba00b680a5357b999e719d0175911cad28b76c4cfdcba8 */
#if BIND_ColorButton_TYPE
mrb_value
mruby_box_uiColorButton(mrb_state* mrb, uiColorButton *unboxed);

mrb_value
mruby_giftwrap_uiColorButton(mrb_state* mrb, uiColorButton *unboxed);

void
mruby_set_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed);

void
mruby_gift_uiColorButton_data_ptr(mrb_value obj, uiColorButton *unboxed);

uiColorButton *
mruby_unbox_uiColorButton(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Combobox::boxing_decls */
/* sha: c0e2800d7b7dffb07730ce5948666c139563f22849964324d2f1b415e5f549af */
#if BIND_Combobox_TYPE
mrb_value
mruby_box_uiCombobox(mrb_state* mrb, uiCombobox *unboxed);

mrb_value
mruby_giftwrap_uiCombobox(mrb_state* mrb, uiCombobox *unboxed);

void
mruby_set_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed);

void
mruby_gift_uiCombobox_data_ptr(mrb_value obj, uiCombobox *unboxed);

uiCombobox *
mruby_unbox_uiCombobox(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::boxing_decls */
/* sha: d3c3a24cfdb6b64b5f4388c80c19cb9450b7afd3c5fbd5199c287be81280a242 */
#if BIND_Control_TYPE
mrb_value
mruby_box_uiControl(mrb_state* mrb, uiControl *unboxed);

mrb_value
mruby_giftwrap_uiControl(mrb_state* mrb, uiControl *unboxed);

void
mruby_set_uiControl_data_ptr(mrb_value obj, uiControl *unboxed);

void
mruby_gift_uiControl_data_ptr(mrb_value obj, uiControl *unboxed);

uiControl *
mruby_unbox_uiControl(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DateTimePicker::boxing_decls */
/* sha: d0dd98639dc525f57ec45236eb30a57790106c0b670bcc08776c04bc303c750f */
#if BIND_DateTimePicker_TYPE
mrb_value
mruby_box_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed);

mrb_value
mruby_giftwrap_uiDateTimePicker(mrb_state* mrb, uiDateTimePicker *unboxed);

void
mruby_set_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed);

void
mruby_gift_uiDateTimePicker_data_ptr(mrb_value obj, uiDateTimePicker *unboxed);

uiDateTimePicker *
mruby_unbox_uiDateTimePicker(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrush::boxing_decls */
/* sha: d66618705304b0463a5eaa73f59722c243db73e99de75eecb9852b7be2c9c1a5 */
#if BIND_DrawBrush_TYPE
mrb_value
mruby_box_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed);

mrb_value
mruby_giftwrap_uiDrawBrush(mrb_state* mrb, uiDrawBrush *unboxed);

void
mruby_set_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed);

void
mruby_gift_uiDrawBrush_data_ptr(mrb_value obj, uiDrawBrush *unboxed);

uiDrawBrush *
mruby_unbox_uiDrawBrush(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawBrushGradientStop::boxing_decls */
/* sha: 5dc8c73fee26a9a82668d2923dd9f372130b054f5b08415b330cb505a73f7594 */
#if BIND_DrawBrushGradientStop_TYPE
mrb_value
mruby_box_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed);

mrb_value
mruby_giftwrap_uiDrawBrushGradientStop(mrb_state* mrb, uiDrawBrushGradientStop *unboxed);

void
mruby_set_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed);

void
mruby_gift_uiDrawBrushGradientStop_data_ptr(mrb_value obj, uiDrawBrushGradientStop *unboxed);

uiDrawBrushGradientStop *
mruby_unbox_uiDrawBrushGradientStop(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawContext::boxing_decls */
/* sha: 21e49df314809d48e774365a233d0f25fd69c7d3747514a7983fb06d52eea31f */
#if BIND_DrawContext_TYPE
mrb_value
mruby_box_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed);

mrb_value
mruby_giftwrap_uiDrawContext(mrb_state* mrb, uiDrawContext *unboxed);

void
mruby_set_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed);

void
mruby_gift_uiDrawContext_data_ptr(mrb_value obj, uiDrawContext *unboxed);

uiDrawContext *
mruby_unbox_uiDrawContext(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawFontFamilies::boxing_decls */
/* sha: cd07bf3c27d817174cda284f079f141faeab984e75770c4af53318f3df04e4c3 */
#if BIND_DrawFontFamilies_TYPE
mrb_value
mruby_box_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed);

mrb_value
mruby_giftwrap_uiDrawFontFamilies(mrb_state* mrb, uiDrawFontFamilies *unboxed);

void
mruby_set_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed);

void
mruby_gift_uiDrawFontFamilies_data_ptr(mrb_value obj, uiDrawFontFamilies *unboxed);

uiDrawFontFamilies *
mruby_unbox_uiDrawFontFamilies(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawMatrix::boxing_decls */
/* sha: 66fb054a5bde22b74e0ed79a46b59af06350b068ddf57e934f40c4cb8192731b */
#if BIND_DrawMatrix_TYPE
mrb_value
mruby_box_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed);

mrb_value
mruby_giftwrap_uiDrawMatrix(mrb_state* mrb, uiDrawMatrix *unboxed);

void
mruby_set_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed);

void
mruby_gift_uiDrawMatrix_data_ptr(mrb_value obj, uiDrawMatrix *unboxed);

uiDrawMatrix *
mruby_unbox_uiDrawMatrix(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawPath::boxing_decls */
/* sha: d65c2569ea986e1b998aaaf631100e63d2c3f23ed2821d5a440f5d5a106f856c */
#if BIND_DrawPath_TYPE
mrb_value
mruby_box_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed);

mrb_value
mruby_giftwrap_uiDrawPath(mrb_state* mrb, uiDrawPath *unboxed);

void
mruby_set_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed);

void
mruby_gift_uiDrawPath_data_ptr(mrb_value obj, uiDrawPath *unboxed);

uiDrawPath *
mruby_unbox_uiDrawPath(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawStrokeParams::boxing_decls */
/* sha: cc9ee553419515721c5366ffa55d88c261f918459186af3b1db7df597ea67402 */
#if BIND_DrawStrokeParams_TYPE
mrb_value
mruby_box_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed);

mrb_value
mruby_giftwrap_uiDrawStrokeParams(mrb_state* mrb, uiDrawStrokeParams *unboxed);

void
mruby_set_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed);

void
mruby_gift_uiDrawStrokeParams_data_ptr(mrb_value obj, uiDrawStrokeParams *unboxed);

uiDrawStrokeParams *
mruby_unbox_uiDrawStrokeParams(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFont::boxing_decls */
/* sha: 55ec54ed6b307cca83e2438133c858ae7eda4004d8025c9a79f1bd6edee58698 */
#if BIND_DrawTextFont_TYPE
mrb_value
mruby_box_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed);

mrb_value
mruby_giftwrap_uiDrawTextFont(mrb_state* mrb, uiDrawTextFont *unboxed);

void
mruby_set_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed);

void
mruby_gift_uiDrawTextFont_data_ptr(mrb_value obj, uiDrawTextFont *unboxed);

uiDrawTextFont *
mruby_unbox_uiDrawTextFont(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontDescriptor::boxing_decls */
/* sha: 2f6072c5b2166f30e62cca4c2d6f478746a2ba719962f14f95a7f105a167e1ad */
#if BIND_DrawTextFontDescriptor_TYPE
mrb_value
mruby_box_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed);

mrb_value
mruby_giftwrap_uiDrawTextFontDescriptor(mrb_state* mrb, uiDrawTextFontDescriptor *unboxed);

void
mruby_set_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed);

void
mruby_gift_uiDrawTextFontDescriptor_data_ptr(mrb_value obj, uiDrawTextFontDescriptor *unboxed);

uiDrawTextFontDescriptor *
mruby_unbox_uiDrawTextFontDescriptor(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextFontMetrics::boxing_decls */
/* sha: 4792bd7003a04984bf73e5c3dd3918ca94926f1c2ad5a409fe6bac9324108de8 */
#if BIND_DrawTextFontMetrics_TYPE
mrb_value
mruby_box_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed);

mrb_value
mruby_giftwrap_uiDrawTextFontMetrics(mrb_state* mrb, uiDrawTextFontMetrics *unboxed);

void
mruby_set_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed);

void
mruby_gift_uiDrawTextFontMetrics_data_ptr(mrb_value obj, uiDrawTextFontMetrics *unboxed);

uiDrawTextFontMetrics *
mruby_unbox_uiDrawTextFontMetrics(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DrawTextLayout::boxing_decls */
/* sha: 184280388c7cc5a05f458da615faab27bed7617ece41e63f8c62c9adf9e98312 */
#if BIND_DrawTextLayout_TYPE
mrb_value
mruby_box_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed);

mrb_value
mruby_giftwrap_uiDrawTextLayout(mrb_state* mrb, uiDrawTextLayout *unboxed);

void
mruby_set_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed);

void
mruby_gift_uiDrawTextLayout_data_ptr(mrb_value obj, uiDrawTextLayout *unboxed);

uiDrawTextLayout *
mruby_unbox_uiDrawTextLayout(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: EditableCombobox::boxing_decls */
/* sha: 4830c977c366215a9301e8dba59d3896ac76a7d5ce05b8d8eb5afd707fe3533e */
#if BIND_EditableCombobox_TYPE
mrb_value
mruby_box_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed);

mrb_value
mruby_giftwrap_uiEditableCombobox(mrb_state* mrb, uiEditableCombobox *unboxed);

void
mruby_set_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed);

void
mruby_gift_uiEditableCombobox_data_ptr(mrb_value obj, uiEditableCombobox *unboxed);

uiEditableCombobox *
mruby_unbox_uiEditableCombobox(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Entry::boxing_decls */
/* sha: 26fd20b3e5cf253fc359fc1369d3d293bc4d932d0ccc91016b3837d6b1713cae */
#if BIND_Entry_TYPE
mrb_value
mruby_box_uiEntry(mrb_state* mrb, uiEntry *unboxed);

mrb_value
mruby_giftwrap_uiEntry(mrb_state* mrb, uiEntry *unboxed);

void
mruby_set_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed);

void
mruby_gift_uiEntry_data_ptr(mrb_value obj, uiEntry *unboxed);

uiEntry *
mruby_unbox_uiEntry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FontButton::boxing_decls */
/* sha: 91b0deec8edac66a90e697d59cade9477ac625af68c6fa69f88edfa353222ae2 */
#if BIND_FontButton_TYPE
mrb_value
mruby_box_uiFontButton(mrb_state* mrb, uiFontButton *unboxed);

mrb_value
mruby_giftwrap_uiFontButton(mrb_state* mrb, uiFontButton *unboxed);

void
mruby_set_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed);

void
mruby_gift_uiFontButton_data_ptr(mrb_value obj, uiFontButton *unboxed);

uiFontButton *
mruby_unbox_uiFontButton(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Form::boxing_decls */
/* sha: f61ad0b0b84dff18aa6a4e7a10868b26124c53b3448c8af10ae462a97fa3011b */
#if BIND_Form_TYPE
mrb_value
mruby_box_uiForm(mrb_state* mrb, uiForm *unboxed);

mrb_value
mruby_giftwrap_uiForm(mrb_state* mrb, uiForm *unboxed);

void
mruby_set_uiForm_data_ptr(mrb_value obj, uiForm *unboxed);

void
mruby_gift_uiForm_data_ptr(mrb_value obj, uiForm *unboxed);

uiForm *
mruby_unbox_uiForm(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Grid::boxing_decls */
/* sha: 498ddbbeef653af979badc394959bc518eacd4bdc612740441fc658e204e8075 */
#if BIND_Grid_TYPE
mrb_value
mruby_box_uiGrid(mrb_state* mrb, uiGrid *unboxed);

mrb_value
mruby_giftwrap_uiGrid(mrb_state* mrb, uiGrid *unboxed);

void
mruby_set_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed);

void
mruby_gift_uiGrid_data_ptr(mrb_value obj, uiGrid *unboxed);

uiGrid *
mruby_unbox_uiGrid(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Group::boxing_decls */
/* sha: b56f0a40bbaf5332dedc043b8f441521c50a6ae8c454f965a87cd1bf588e28e6 */
#if BIND_Group_TYPE
mrb_value
mruby_box_uiGroup(mrb_state* mrb, uiGroup *unboxed);

mrb_value
mruby_giftwrap_uiGroup(mrb_state* mrb, uiGroup *unboxed);

void
mruby_set_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed);

void
mruby_gift_uiGroup_data_ptr(mrb_value obj, uiGroup *unboxed);

uiGroup *
mruby_unbox_uiGroup(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InitOptions::boxing_decls */
/* sha: bdaddb7fbd3c236c973fa9b4dbb134a481de1a9910c318a4152a6ec4b706b0d0 */
#if BIND_InitOptions_TYPE
mrb_value
mruby_box_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed);

mrb_value
mruby_giftwrap_uiInitOptions(mrb_state* mrb, uiInitOptions *unboxed);

void
mruby_set_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed);

void
mruby_gift_uiInitOptions_data_ptr(mrb_value obj, uiInitOptions *unboxed);

uiInitOptions *
mruby_unbox_uiInitOptions(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Label::boxing_decls */
/* sha: 94db056a7b1d42f976e894e1aa5adc0f044d0bdb0597fbc1e283d1470e0bffbc */
#if BIND_Label_TYPE
mrb_value
mruby_box_uiLabel(mrb_state* mrb, uiLabel *unboxed);

mrb_value
mruby_giftwrap_uiLabel(mrb_state* mrb, uiLabel *unboxed);

void
mruby_set_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed);

void
mruby_gift_uiLabel_data_ptr(mrb_value obj, uiLabel *unboxed);

uiLabel *
mruby_unbox_uiLabel(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Menu::boxing_decls */
/* sha: e21fb040de83da54c2b1367ab820f75ac970ab82dd620422257cc21f4af927af */
#if BIND_Menu_TYPE
mrb_value
mruby_box_uiMenu(mrb_state* mrb, uiMenu *unboxed);

mrb_value
mruby_giftwrap_uiMenu(mrb_state* mrb, uiMenu *unboxed);

void
mruby_set_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed);

void
mruby_gift_uiMenu_data_ptr(mrb_value obj, uiMenu *unboxed);

uiMenu *
mruby_unbox_uiMenu(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MenuItem::boxing_decls */
/* sha: 6247c182ed7c3ee1e1f3c0c8d9db0d6173f1e4bac3e05167b9822a76b1076d3c */
#if BIND_MenuItem_TYPE
mrb_value
mruby_box_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed);

mrb_value
mruby_giftwrap_uiMenuItem(mrb_state* mrb, uiMenuItem *unboxed);

void
mruby_set_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed);

void
mruby_gift_uiMenuItem_data_ptr(mrb_value obj, uiMenuItem *unboxed);

uiMenuItem *
mruby_unbox_uiMenuItem(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MultilineEntry::boxing_decls */
/* sha: 073d3e76ab5aaa8e2c972c10bfc1d89e4178ac9e29b39c657e3ca88fc90a46c6 */
#if BIND_MultilineEntry_TYPE
mrb_value
mruby_box_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed);

mrb_value
mruby_giftwrap_uiMultilineEntry(mrb_state* mrb, uiMultilineEntry *unboxed);

void
mruby_set_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed);

void
mruby_gift_uiMultilineEntry_data_ptr(mrb_value obj, uiMultilineEntry *unboxed);

uiMultilineEntry *
mruby_unbox_uiMultilineEntry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProgressBar::boxing_decls */
/* sha: 92b5c7187c67437181c532710e88c531ac4bf5eab1d9740ffb0151d912fa41eb */
#if BIND_ProgressBar_TYPE
mrb_value
mruby_box_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed);

mrb_value
mruby_giftwrap_uiProgressBar(mrb_state* mrb, uiProgressBar *unboxed);

void
mruby_set_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed);

void
mruby_gift_uiProgressBar_data_ptr(mrb_value obj, uiProgressBar *unboxed);

uiProgressBar *
mruby_unbox_uiProgressBar(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RadioButtons::boxing_decls */
/* sha: 5301dbd54fc6dbe7b43f92719ae98a755b5c932791872b9d73af0964067e6a26 */
#if BIND_RadioButtons_TYPE
mrb_value
mruby_box_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed);

mrb_value
mruby_giftwrap_uiRadioButtons(mrb_state* mrb, uiRadioButtons *unboxed);

void
mruby_set_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed);

void
mruby_gift_uiRadioButtons_data_ptr(mrb_value obj, uiRadioButtons *unboxed);

uiRadioButtons *
mruby_unbox_uiRadioButtons(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Separator::boxing_decls */
/* sha: 012b578da6299a43735697eab72288df2f67287fad3485888e3fb0a5a474e310 */
#if BIND_Separator_TYPE
mrb_value
mruby_box_uiSeparator(mrb_state* mrb, uiSeparator *unboxed);

mrb_value
mruby_giftwrap_uiSeparator(mrb_state* mrb, uiSeparator *unboxed);

void
mruby_set_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed);

void
mruby_gift_uiSeparator_data_ptr(mrb_value obj, uiSeparator *unboxed);

uiSeparator *
mruby_unbox_uiSeparator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Slider::boxing_decls */
/* sha: d96c9cc07439e489cadcd44a535ad7a5f0a796f79d8421234e7e028dfbe18021 */
#if BIND_Slider_TYPE
mrb_value
mruby_box_uiSlider(mrb_state* mrb, uiSlider *unboxed);

mrb_value
mruby_giftwrap_uiSlider(mrb_state* mrb, uiSlider *unboxed);

void
mruby_set_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed);

void
mruby_gift_uiSlider_data_ptr(mrb_value obj, uiSlider *unboxed);

uiSlider *
mruby_unbox_uiSlider(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Spinbox::boxing_decls */
/* sha: 2ac993e973e9698b506464fac82c907455f1a36b4afc2f375fb69b8458b45366 */
#if BIND_Spinbox_TYPE
mrb_value
mruby_box_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed);

mrb_value
mruby_giftwrap_uiSpinbox(mrb_state* mrb, uiSpinbox *unboxed);

void
mruby_set_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed);

void
mruby_gift_uiSpinbox_data_ptr(mrb_value obj, uiSpinbox *unboxed);

uiSpinbox *
mruby_unbox_uiSpinbox(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tab::boxing_decls */
/* sha: 5283f0fc4462e2c35916cd5c10074a2168e90ed902251e48134f07324a698ac9 */
#if BIND_Tab_TYPE
mrb_value
mruby_box_uiTab(mrb_state* mrb, uiTab *unboxed);

mrb_value
mruby_giftwrap_uiTab(mrb_state* mrb, uiTab *unboxed);

void
mruby_set_uiTab_data_ptr(mrb_value obj, uiTab *unboxed);

void
mruby_gift_uiTab_data_ptr(mrb_value obj, uiTab *unboxed);

uiTab *
mruby_unbox_uiTab(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Window::boxing_decls */
/* sha: beb7358f72b138b2182c11867d5f89dcf5d129a2e90f7230957d305b54e9e4b8 */
#if BIND_Window_TYPE
mrb_value
mruby_box_uiWindow(mrb_state* mrb, uiWindow *unboxed);

mrb_value
mruby_giftwrap_uiWindow(mrb_state* mrb, uiWindow *unboxed);

void
mruby_set_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed);

void
mruby_gift_uiWindow_data_ptr(mrb_value obj, uiWindow *unboxed);

uiWindow *
mruby_unbox_uiWindow(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
