/*
 * uiAreaDrawParams
 * Defined in file ui.h @ line 275
 */

#include "mruby_UI.h"

#if BIND_UiAreaDrawParams_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::initialize */
/* sha: c47c34a08bb067b2a5d3e5b29541256ad85957a3a48253a011def957f5c7036b */
#if BIND_UiAreaDrawParams_INITIALIZE
mrb_value
mrb_UI_UiAreaDrawParams_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiAreaDrawParams* native_object = (uiAreaDrawParams*)calloc(1, sizeof(uiAreaDrawParams));
  mruby_gift_uiAreaDrawParams_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiAreaDrawParams::Context_reader */
/* sha: 58b54590956574a7aa6d1ee1b5d3711e7b2ee686c6be71544e10e356954ba264 */
#if BIND_UiAreaDrawParams_Context_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_Context(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  uiDrawContext * native_Context = native_self->Context;

  mrb_value Context = (native_Context == NULL ? mrb_nil_value() : mruby_box_uiDrawContext(mrb, native_Context));

  return Context;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::Context_writer */
/* sha: 2af30fa69cc667947eabad6ed1bac540191201d757c59e91a2839d21acacd030 */
#if BIND_UiAreaDrawParams_Context_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_Context(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_value Context;

  mrb_get_args(mrb, "o", &Context);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, Context, UiDrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UiDrawContext expected");
    return mrb_nil_value();
  }

  uiDrawContext * native_Context = (mrb_nil_p(Context) ? NULL : mruby_unbox_uiDrawContext(Context));

  native_self->Context = native_Context;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::AreaWidth_reader */
/* sha: e6866824e3749beec71b5f0ed2fca070dad0e34e89fce6170fa90220c146d5fd */
#if BIND_UiAreaDrawParams_AreaWidth_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_AreaWidth = native_self->AreaWidth;

  mrb_value AreaWidth = mrb_float_value(mrb, native_AreaWidth);

  return AreaWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::AreaWidth_writer */
/* sha: e2abbcb0f53f1924a02334bd9247a97f53926ec3a9ac7b8ec19fb6e94aadd502 */
#if BIND_UiAreaDrawParams_AreaWidth_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_AreaWidth;

  mrb_get_args(mrb, "f", &native_AreaWidth);

  native_self->AreaWidth = native_AreaWidth;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::AreaHeight_reader */
/* sha: 441a2e5ba772a35f92e4285020e70fbeb7d6801a89d840953950ca2bc43cf23a */
#if BIND_UiAreaDrawParams_AreaHeight_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_AreaHeight = native_self->AreaHeight;

  mrb_value AreaHeight = mrb_float_value(mrb, native_AreaHeight);

  return AreaHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::AreaHeight_writer */
/* sha: 0339da5bc88abf4bfcf8365f6b70e51708114da9f381e6e33d6a38e77f4d7f5e */
#if BIND_UiAreaDrawParams_AreaHeight_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_AreaHeight;

  mrb_get_args(mrb, "f", &native_AreaHeight);

  native_self->AreaHeight = native_AreaHeight;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipX_reader */
/* sha: 233189652181e5b18bb248e4cc1e3246b0a10f983aa185aaa595569d4e920570 */
#if BIND_UiAreaDrawParams_ClipX_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_ClipX(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipX = native_self->ClipX;

  mrb_value ClipX = mrb_float_value(mrb, native_ClipX);

  return ClipX;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipX_writer */
/* sha: 172c159214d5fd1cb4113a0b961a0d0b556cde5e1e8cb0adf63696d376a30dd2 */
#if BIND_UiAreaDrawParams_ClipX_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_ClipX(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_ClipX;

  mrb_get_args(mrb, "f", &native_ClipX);

  native_self->ClipX = native_ClipX;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipY_reader */
/* sha: 6398a43f7c9a2a820dc5f620898ba06c878e7379e5e0475138e8aca0e9ad4423 */
#if BIND_UiAreaDrawParams_ClipY_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_ClipY(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipY = native_self->ClipY;

  mrb_value ClipY = mrb_float_value(mrb, native_ClipY);

  return ClipY;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipY_writer */
/* sha: e690d9791007693467f6d004e9b42722dcee98051c583d13e1952d3f9d8c32cb */
#if BIND_UiAreaDrawParams_ClipY_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_ClipY(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_ClipY;

  mrb_get_args(mrb, "f", &native_ClipY);

  native_self->ClipY = native_ClipY;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipWidth_reader */
/* sha: 6b538b19d9a81f7d1607f7b46438e20d8bd02be51271c86a677db9f059f8d690 */
#if BIND_UiAreaDrawParams_ClipWidth_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_ClipWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipWidth = native_self->ClipWidth;

  mrb_value ClipWidth = mrb_float_value(mrb, native_ClipWidth);

  return ClipWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipWidth_writer */
/* sha: e700879fbb46cf0b75c3013d88c52840d0871156855816c804f1f96edfd3f295 */
#if BIND_UiAreaDrawParams_ClipWidth_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_ClipWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_ClipWidth;

  mrb_get_args(mrb, "f", &native_ClipWidth);

  native_self->ClipWidth = native_ClipWidth;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipHeight_reader */
/* sha: 995dc8a2101f93288d15ecd4d91cd7784047f93af34f820c65ec8bfac4628218 */
#if BIND_UiAreaDrawParams_ClipHeight_FIELD_READER
mrb_value
mrb_UI_UiAreaDrawParams_get_ClipHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipHeight = native_self->ClipHeight;

  mrb_value ClipHeight = mrb_float_value(mrb, native_ClipHeight);

  return ClipHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::ClipHeight_writer */
/* sha: 88a1f7193c2c9966eb796fd89df566dfc412758baea0f8c605b23da7cc68097d */
#if BIND_UiAreaDrawParams_ClipHeight_FIELD_WRITER
mrb_value
mrb_UI_UiAreaDrawParams_set_ClipHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_float native_ClipHeight;

  mrb_get_args(mrb, "f", &native_ClipHeight);

  native_self->ClipHeight = native_ClipHeight;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiAreaDrawParams_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::class_definition */
/* sha: 97e571f3e791d5c3e2be4c42f14ce7330a70f1496c92824c42c72303f01d8569 */
  struct RClass* UiAreaDrawParams_class = mrb_define_class_under(mrb, UI_module(mrb), "UiAreaDrawParams", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiAreaDrawParams_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::class_method_definitions */
/* sha: 7d1d24934d459da029ebf20cc741af2e88b4cb57e2b0f1fd71df79082664f815 */
#if BIND_UiAreaDrawParams_INITIALIZE
  mrb_define_method(mrb, UiAreaDrawParams_class, "initialize", mrb_UI_UiAreaDrawParams_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiAreaDrawParams::attr_definitions */
/* sha: 9214112124c5eae8d9543acd890aab3564cb0748076ff3855510ef9dba106f9c */
  /*
   * Fields
   */
#if BIND_UiAreaDrawParams_Context_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "Context", mrb_UI_UiAreaDrawParams_get_Context, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_Context_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "Context=", mrb_UI_UiAreaDrawParams_set_Context, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_AreaWidth_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "AreaWidth", mrb_UI_UiAreaDrawParams_get_AreaWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_AreaWidth_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "AreaWidth=", mrb_UI_UiAreaDrawParams_set_AreaWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_AreaHeight_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "AreaHeight", mrb_UI_UiAreaDrawParams_get_AreaHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_AreaHeight_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "AreaHeight=", mrb_UI_UiAreaDrawParams_set_AreaHeight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_ClipX_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipX", mrb_UI_UiAreaDrawParams_get_ClipX, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_ClipX_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipX=", mrb_UI_UiAreaDrawParams_set_ClipX, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_ClipY_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipY", mrb_UI_UiAreaDrawParams_get_ClipY, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_ClipY_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipY=", mrb_UI_UiAreaDrawParams_set_ClipY, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_ClipWidth_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipWidth", mrb_UI_UiAreaDrawParams_get_ClipWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_ClipWidth_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipWidth=", mrb_UI_UiAreaDrawParams_set_ClipWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiAreaDrawParams_ClipHeight_FIELD_READER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipHeight", mrb_UI_UiAreaDrawParams_get_ClipHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiAreaDrawParams_ClipHeight_FIELD_WRITER
  mrb_define_method(mrb, UiAreaDrawParams_class, "ClipHeight=", mrb_UI_UiAreaDrawParams_set_ClipHeight, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiAreaDrawParams::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
