/*
 * uiAreaDrawParams
 * Defined in file ui.h @ line 275
 */

#include "mruby_UI.h"

#if BIND_AreaDrawParams_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::initialize */
/* sha: 86e47fa50320fed1411d4ff29f790808f5c7c418f4432577f1594e64eac6d5d3 */
#if BIND_AreaDrawParams_INITIALIZE
mrb_value
mrb_UI_AreaDrawParams_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::Context_reader */
/* sha: 8a7416d2a4acc460a255257b32d06dcccee6c7ea02a867804ab2a99da9968137 */
#if BIND_AreaDrawParams_Context_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_Context(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  uiDrawContext * native_Context = native_self->Context;

  mrb_value Context = (native_Context == NULL ? mrb_nil_value() : mruby_box_uiDrawContext(mrb, native_Context));

  return Context;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::Context_writer */
/* sha: b86f69d42cbd8a1092d0c75ca6f6ecc9cf5a95e5ef31495d44d8f159deadea43 */
#if BIND_AreaDrawParams_Context_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_Context(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);
  mrb_value Context;

  mrb_get_args(mrb, "o", &Context);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, Context, DrawContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DrawContext expected");
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

/* MRUBY_BINDING: AreaDrawParams::AreaWidth_reader */
/* sha: f25faeb7ddfca1f9141d2d74b7c20a8c95cb71c4ab41d6f930cc78b07a2abe3b */
#if BIND_AreaDrawParams_AreaWidth_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_AreaWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_AreaWidth = native_self->AreaWidth;

  mrb_value AreaWidth = mrb_float_value(mrb, native_AreaWidth);

  return AreaWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::AreaWidth_writer */
/* sha: 2c4bb588a05f9e1b80ec3fc9c98b8646cb2bcf1ed880265a8c3ac9a169308b5a */
#if BIND_AreaDrawParams_AreaWidth_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_AreaWidth(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::AreaHeight_reader */
/* sha: 9d6eb33c5a35cc607e4e967e65acaa84b84e5865ec546b30b1bc10e587dd7d5b */
#if BIND_AreaDrawParams_AreaHeight_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_AreaHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_AreaHeight = native_self->AreaHeight;

  mrb_value AreaHeight = mrb_float_value(mrb, native_AreaHeight);

  return AreaHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::AreaHeight_writer */
/* sha: a82a07050f2aa2bc657cb742bb7469d16a2abb7a91d27eef65942d436c5ab1ff */
#if BIND_AreaDrawParams_AreaHeight_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_AreaHeight(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::ClipX_reader */
/* sha: 0f3a8ec834ad612644c7dabb3b3789e37e63882a71ec46c815bca8660589f608 */
#if BIND_AreaDrawParams_ClipX_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_ClipX(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipX = native_self->ClipX;

  mrb_value ClipX = mrb_float_value(mrb, native_ClipX);

  return ClipX;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::ClipX_writer */
/* sha: e6e169fc5c9dec3db5c10b30991d000a526d738edf85454158a44198134ae0ac */
#if BIND_AreaDrawParams_ClipX_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_ClipX(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::ClipY_reader */
/* sha: cd9d20afb66c821d9fa5fa8605cdba8ce189eff437c18dc3a078210ac8dd8c59 */
#if BIND_AreaDrawParams_ClipY_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_ClipY(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipY = native_self->ClipY;

  mrb_value ClipY = mrb_float_value(mrb, native_ClipY);

  return ClipY;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::ClipY_writer */
/* sha: bc2b897b4e5a482b62a10738949a88850fe8d51ea5613d484db7ec527efdfb07 */
#if BIND_AreaDrawParams_ClipY_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_ClipY(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::ClipWidth_reader */
/* sha: 1cda9ec7c7673c35aea9c51b6e812ba7d28cd69a72c8eafc20407cbdf2b3c6d5 */
#if BIND_AreaDrawParams_ClipWidth_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_ClipWidth(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipWidth = native_self->ClipWidth;

  mrb_value ClipWidth = mrb_float_value(mrb, native_ClipWidth);

  return ClipWidth;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::ClipWidth_writer */
/* sha: 9fa5152a5cf14d30f9054f7837078f4081258a17fdc8a56399ebaf614f0adee3 */
#if BIND_AreaDrawParams_ClipWidth_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_ClipWidth(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: AreaDrawParams::ClipHeight_reader */
/* sha: c04b67e4b98e260fbd9a01f79354cd1633bafe0cac9021249f3c8b71a2f8b2df */
#if BIND_AreaDrawParams_ClipHeight_FIELD_READER
mrb_value
mrb_UI_AreaDrawParams_get_ClipHeight(mrb_state* mrb, mrb_value self) {
  uiAreaDrawParams * native_self = mruby_unbox_uiAreaDrawParams(self);

  double native_ClipHeight = native_self->ClipHeight;

  mrb_value ClipHeight = mrb_float_value(mrb, native_ClipHeight);

  return ClipHeight;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::ClipHeight_writer */
/* sha: f5f35f7fa4096e9d12808490d204738d0124fc508a9b40402e7f8dba2960350c */
#if BIND_AreaDrawParams_ClipHeight_FIELD_WRITER
mrb_value
mrb_UI_AreaDrawParams_set_ClipHeight(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_AreaDrawParams_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::class_definition */
/* sha: eab7e7ad57a6779f07f2c2535191feaa3c2026ffce9f91d3b65dd8dc5f72804e */
  struct RClass* AreaDrawParams_class = mrb_define_class_under(mrb, UI_module(mrb), "AreaDrawParams", mrb->object_class);
  MRB_SET_INSTANCE_TT(AreaDrawParams_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::class_method_definitions */
/* sha: fd94c2005a0584ab59f9c323a8da41a79ab35a6a6b034dfd51e481b2a9fb5d8e */
#if BIND_AreaDrawParams_INITIALIZE
  mrb_define_method(mrb, AreaDrawParams_class, "initialize", mrb_UI_AreaDrawParams_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AreaDrawParams::attr_definitions */
/* sha: d16dda14af27a7a77efdbadafe814b041daad3cba94754425eda90451c27ff51 */
  /*
   * Fields
   */
#if BIND_AreaDrawParams_Context_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "Context", mrb_UI_AreaDrawParams_get_Context, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_Context_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "Context=", mrb_UI_AreaDrawParams_set_Context, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_AreaWidth_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "AreaWidth", mrb_UI_AreaDrawParams_get_AreaWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_AreaWidth_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "AreaWidth=", mrb_UI_AreaDrawParams_set_AreaWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_AreaHeight_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "AreaHeight", mrb_UI_AreaDrawParams_get_AreaHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_AreaHeight_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "AreaHeight=", mrb_UI_AreaDrawParams_set_AreaHeight, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_ClipX_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipX", mrb_UI_AreaDrawParams_get_ClipX, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_ClipX_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipX=", mrb_UI_AreaDrawParams_set_ClipX, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_ClipY_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipY", mrb_UI_AreaDrawParams_get_ClipY, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_ClipY_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipY=", mrb_UI_AreaDrawParams_set_ClipY, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_ClipWidth_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipWidth", mrb_UI_AreaDrawParams_get_ClipWidth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_ClipWidth_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipWidth=", mrb_UI_AreaDrawParams_set_ClipWidth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AreaDrawParams_ClipHeight_FIELD_READER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipHeight", mrb_UI_AreaDrawParams_get_ClipHeight, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_AreaDrawParams_ClipHeight_FIELD_WRITER
  mrb_define_method(mrb, AreaDrawParams_class, "ClipHeight=", mrb_UI_AreaDrawParams_set_ClipHeight, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: AreaDrawParams::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
