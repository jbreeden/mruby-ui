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

/* MRUBY_BINDING: UiArea::boxing_decls */
/* sha: cb9beef04d625926f7ed47bc5800f433ae6d316dd3528c1fc51026679d54a101 */
#if BIND_UiArea_TYPE
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

/* MRUBY_BINDING: UiAreaDrawParams::boxing_decls */
/* sha: fc479a4f44b07a843231f7ec5c7b00a84f750a79ede565277b15190a8b12a126 */
#if BIND_UiAreaDrawParams_TYPE
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

/* MRUBY_BINDING: UiAreaHandler::boxing_decls */
/* sha: 97e1278da30c449d378714d397c68c6cb30890fb760c566ebc9d1550c75db605 */
#if BIND_UiAreaHandler_TYPE
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

/* MRUBY_BINDING: UiAreaKeyEvent::boxing_decls */
/* sha: a99072e6aebe236cd3e43c72519040a6a6c091b49241c9c22b8ef83112157d68 */
#if BIND_UiAreaKeyEvent_TYPE
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

/* MRUBY_BINDING: UiAreaMouseEvent::boxing_decls */
/* sha: 960e4cae5dd4d5ef994a3cddc8459726cef3e43aaf1caa1a2fa01f876bd26f30 */
#if BIND_UiAreaMouseEvent_TYPE
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

/* MRUBY_BINDING: UiBox::boxing_decls */
/* sha: b90c1d27c4ae7ab548a1d130863cdb6dcabcce68b269199071e771e3f7cd533c */
#if BIND_UiBox_TYPE
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

/* MRUBY_BINDING: UiButton::boxing_decls */
/* sha: 15b56bcd48d3e3da18341b1805189f211ac6ff49b18f875e94e321d854571ece */
#if BIND_UiButton_TYPE
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

/* MRUBY_BINDING: UiCheckbox::boxing_decls */
/* sha: ee3e6b3fd88010b8b7ea73e6d27b1f6582167d1af00f9b17ab3403613f7fbfe0 */
#if BIND_UiCheckbox_TYPE
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

/* MRUBY_BINDING: UiColorButton::boxing_decls */
/* sha: 0dc74a3fe93e9cdaab69b24a6f6bfaf18edc67c9c517a30b4deca864cb75304f */
#if BIND_UiColorButton_TYPE
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

/* MRUBY_BINDING: UiCombobox::boxing_decls */
/* sha: 8e5c277c1012cbd8c6748a8b070f910606ea90609bd1dad81fd039058afb9f31 */
#if BIND_UiCombobox_TYPE
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

/* MRUBY_BINDING: UiControl::boxing_decls */
/* sha: 4180334c368dcba0d24bab5d733eb0617cdf1882ed6b3c39108d9c8cb4b6ed17 */
#if BIND_UiControl_TYPE
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

/* MRUBY_BINDING: UiDateTimePicker::boxing_decls */
/* sha: a880237489f7c06d3b3d2dc36a3bc94438bc793874d929c3a0af6f40dd97e4dc */
#if BIND_UiDateTimePicker_TYPE
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

/* MRUBY_BINDING: UiDrawBrush::boxing_decls */
/* sha: 48c0411539d60f7cb82ea1c49bfc0bc09b564d64d04cbfeb191e60925165e858 */
#if BIND_UiDrawBrush_TYPE
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

/* MRUBY_BINDING: UiDrawBrushGradientStop::boxing_decls */
/* sha: 55deddf565cceca41931a5c7771fb196eb3008005e695150aabb33291598a9f0 */
#if BIND_UiDrawBrushGradientStop_TYPE
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

/* MRUBY_BINDING: UiDrawContext::boxing_decls */
/* sha: 840c253d9cf9aa804d9d6e5abc00755df818d5664572ef4389e02de3d90b25b5 */
#if BIND_UiDrawContext_TYPE
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

/* MRUBY_BINDING: UiDrawFontFamilies::boxing_decls */
/* sha: b822d0dfc29283e257de136c697bf46403a031b8f4763f02c0ba16f69675855c */
#if BIND_UiDrawFontFamilies_TYPE
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

/* MRUBY_BINDING: UiDrawMatrix::boxing_decls */
/* sha: e31402fbe71413f5e4424a7333fcbaf118cd4f08752a41a3f82476825a09d040 */
#if BIND_UiDrawMatrix_TYPE
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

/* MRUBY_BINDING: UiDrawPath::boxing_decls */
/* sha: 1295dca9c188bcc15d27f49455103ceb074a6fa8af5c8674e33dfaa52297a2ea */
#if BIND_UiDrawPath_TYPE
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

/* MRUBY_BINDING: UiDrawStrokeParams::boxing_decls */
/* sha: 6d53ebfa8f5dcb9ee986b3af2b311af546339603323d73f018869733bc82a314 */
#if BIND_UiDrawStrokeParams_TYPE
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

/* MRUBY_BINDING: UiDrawTextFont::boxing_decls */
/* sha: c8806c022831816da4b2bd6edec8b9e21ed9a6aadca5d931ee7eb0c73272865f */
#if BIND_UiDrawTextFont_TYPE
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

/* MRUBY_BINDING: UiDrawTextFontDescriptor::boxing_decls */
/* sha: 043d60884fc4e8c9cd80fb68eea85ccfcd4e452a7b97b569e9b5cc28862a32b8 */
#if BIND_UiDrawTextFontDescriptor_TYPE
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

/* MRUBY_BINDING: UiDrawTextFontMetrics::boxing_decls */
/* sha: 1180b3f0fb29563dd3eee4f8829e01d10b5464064a186c3e364b88964c3c47d4 */
#if BIND_UiDrawTextFontMetrics_TYPE
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

/* MRUBY_BINDING: UiDrawTextLayout::boxing_decls */
/* sha: a5a309a196ff14e857dad810051c1fec6c5b0131d91da52d8246d5e00833d49d */
#if BIND_UiDrawTextLayout_TYPE
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

/* MRUBY_BINDING: UiEditableCombobox::boxing_decls */
/* sha: aefc4fa30bc501448ac680039e82ae3e8b0362422ec255666b820407dd751d12 */
#if BIND_UiEditableCombobox_TYPE
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

/* MRUBY_BINDING: UiEntry::boxing_decls */
/* sha: 4a697b5fd41dc5ce8bb30a1a475fd76dd482dc1b0bbfc6445ed2895b39484c6c */
#if BIND_UiEntry_TYPE
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

/* MRUBY_BINDING: UiFontButton::boxing_decls */
/* sha: b90985215270e595c240ec94ff34ea70f61d19a7f59a71166305a43f42881da3 */
#if BIND_UiFontButton_TYPE
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

/* MRUBY_BINDING: UiForm::boxing_decls */
/* sha: e3fb9ceb4f5ff364ef337d593272994ebbabd549d54abdac1262e609c2de1d5e */
#if BIND_UiForm_TYPE
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

/* MRUBY_BINDING: UiGrid::boxing_decls */
/* sha: df91c8d6c0d7eb7f6b9b2e2335129ef0cee436ab6377ce9c44801bff3aaa3ba9 */
#if BIND_UiGrid_TYPE
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

/* MRUBY_BINDING: UiGroup::boxing_decls */
/* sha: 280f012369bac8cf18908b08eeab1d4485f8fa6d1b712e8f26a9e598d22087b6 */
#if BIND_UiGroup_TYPE
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

/* MRUBY_BINDING: UiInitOptions::boxing_decls */
/* sha: 7f6b21d0c1c519b840556f7891738871b6e880ac8c482fe3630b8b4d04beb69d */
#if BIND_UiInitOptions_TYPE
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

/* MRUBY_BINDING: UiLabel::boxing_decls */
/* sha: 9b164378ce75d64651a1d5f7124e3fe9f727c24030b468a585fca32dac03bb2e */
#if BIND_UiLabel_TYPE
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

/* MRUBY_BINDING: UiMenu::boxing_decls */
/* sha: 99dba0ebd66396d301704b5fe2da98846779c378b73b55aa19b605d1967a4f6e */
#if BIND_UiMenu_TYPE
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

/* MRUBY_BINDING: UiMenuItem::boxing_decls */
/* sha: 353e286ce851ae8d0da7f723fbf010cee109abd36961e51418489ff904b60873 */
#if BIND_UiMenuItem_TYPE
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

/* MRUBY_BINDING: UiMultilineEntry::boxing_decls */
/* sha: 8a1a88da6bcacfaf8152d073dbdfdd64682b608de2188a55709e234437b5bab7 */
#if BIND_UiMultilineEntry_TYPE
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

/* MRUBY_BINDING: UiProgressBar::boxing_decls */
/* sha: 49467d0a974f5f35b26bd0c273809c4e1bffecd78bd0d9f20a8e8d8ab0969a16 */
#if BIND_UiProgressBar_TYPE
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

/* MRUBY_BINDING: UiRadioButtons::boxing_decls */
/* sha: 3afad8f657f0d6c5f2537e0a24659406ada26e878054164e1de0c12f75bdcaf0 */
#if BIND_UiRadioButtons_TYPE
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

/* MRUBY_BINDING: UiSeparator::boxing_decls */
/* sha: a8a2445f7cee52585fbb5e4f5a724e86ac88ad2abb2d66746a1dbba8acc526a6 */
#if BIND_UiSeparator_TYPE
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

/* MRUBY_BINDING: UiSlider::boxing_decls */
/* sha: 1adc656627cd2345172cba2220f9067ffc6eb4c530bf12cfb93885c31eb09122 */
#if BIND_UiSlider_TYPE
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

/* MRUBY_BINDING: UiSpinbox::boxing_decls */
/* sha: df40e12de60086a9dc967bc9104e371b0685c7c259eed459e682933373f8b9d1 */
#if BIND_UiSpinbox_TYPE
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

/* MRUBY_BINDING: UiTab::boxing_decls */
/* sha: d30749337ae6795c6f4e08208c87da88941b26de044dfb5c7d34c0872a3c20f7 */
#if BIND_UiTab_TYPE
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

/* MRUBY_BINDING: UiWindow::boxing_decls */
/* sha: 290aaa629800cc7b9d0deff6de0a78f26da0213908e08bf4bdab200a0b605ab2 */
#if BIND_UiWindow_TYPE
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
