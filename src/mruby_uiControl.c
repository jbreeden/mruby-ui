/*
 * uiControl
 * Defined in file ui.h @ line 58
 */

#include "mruby_UI.h"

#if BIND_UiControl_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::initialize */
/* sha: 941e120bfe317225f65dc51eb2c20fb02fd43c88ba9584636845846ff5ae35d8 */
#if BIND_UiControl_INITIALIZE
mrb_value
mrb_UI_UiControl_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  uiControl* native_object = (uiControl*)calloc(1, sizeof(uiControl));
  mruby_gift_uiControl_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UiControl::Signature_reader */
/* sha: 74919fb030abcf149a47e4a03e5bf4e4a68d53dd59ede7484ac3de9cd2850e6b */
#if BIND_UiControl_Signature_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Signature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_Signature = native_self->Signature;

  mrb_value Signature = TODO_mruby_box_uint32_t(mrb, native_Signature);

  return Signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Signature_writer */
/* sha: 2f3161460f4dc536c2b6d3667c36f4a4947411e4c503e6d4ae23f6374ead5b77 */
#if BIND_UiControl_Signature_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Signature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Signature;

  mrb_get_args(mrb, "o", &Signature);

  /* type checking */
  TODO_type_check_uint32_t(Signature);

  uint32_t native_Signature = TODO_mruby_unbox_uint32_t(Signature);

  native_self->Signature = native_Signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::OSSignature_reader */
/* sha: 4ba05e3a6347a74a049d82fdff4fe96ce0337aef36cea0f06725726ff8299363 */
#if BIND_UiControl_OSSignature_FIELD_READER
mrb_value
mrb_UI_UiControl_get_OSSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_OSSignature = native_self->OSSignature;

  mrb_value OSSignature = TODO_mruby_box_uint32_t(mrb, native_OSSignature);

  return OSSignature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::OSSignature_writer */
/* sha: b02ed0f565b498ce36b995709b29f9fc3a443180442ca9d5954e9b2fd761adb6 */
#if BIND_UiControl_OSSignature_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_OSSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value OSSignature;

  mrb_get_args(mrb, "o", &OSSignature);

  /* type checking */
  TODO_type_check_uint32_t(OSSignature);

  uint32_t native_OSSignature = TODO_mruby_unbox_uint32_t(OSSignature);

  native_self->OSSignature = native_OSSignature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::TypeSignature_reader */
/* sha: 59bef1816c388e00a80000b9667372cdb75a6a025a357a4cc37acdd62906c77f */
#if BIND_UiControl_TypeSignature_FIELD_READER
mrb_value
mrb_UI_UiControl_get_TypeSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_TypeSignature = native_self->TypeSignature;

  mrb_value TypeSignature = TODO_mruby_box_uint32_t(mrb, native_TypeSignature);

  return TypeSignature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::TypeSignature_writer */
/* sha: 32e4ded231a552cfb21689d8d67b4c1142d86b86505dd7902e630bb94af36876 */
#if BIND_UiControl_TypeSignature_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_TypeSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value TypeSignature;

  mrb_get_args(mrb, "o", &TypeSignature);

  /* type checking */
  TODO_type_check_uint32_t(TypeSignature);

  uint32_t native_TypeSignature = TODO_mruby_unbox_uint32_t(TypeSignature);

  native_self->TypeSignature = native_TypeSignature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Destroy_reader */
/* sha: 086d0d1780a7f77c0ff277fdeeb08e6e5d7423e9fd54d6214184c348d273714c */
#if BIND_UiControl_Destroy_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Destroy(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Destroy = native_self->Destroy;

  mrb_value Destroy = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Destroy);

  return Destroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Destroy_writer */
/* sha: 6e9251ef5b09a10d5996212d433be56a1794532e3ced14436d653c6e202bf487 */
#if BIND_UiControl_Destroy_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Destroy(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Destroy;

  mrb_get_args(mrb, "o", &Destroy);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Destroy);

  void (*native_Destroy)(uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Destroy);

  native_self->Destroy = native_Destroy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Handle_reader */
/* sha: c66b42fdbd1f10bfcaee150bc348e8e8d901829cd7a3de9ef76236faa1a7e63d */
#if BIND_UiControl_Handle_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Handle(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uintptr_t (*)(uiControl *) native_Handle = native_self->Handle;

  mrb_value Handle = TODO_mruby_box_uintptr_t_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Handle);

  return Handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Handle_writer */
/* sha: 7e33810f9e13a2dff220c0c7feca2248716d4523c7538f45e82761ebdbc2e5ab */
#if BIND_UiControl_Handle_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Handle(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Handle;

  mrb_get_args(mrb, "o", &Handle);

  /* type checking */
  TODO_type_check_uintptr_t_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Handle);

  uintptr_t (*native_Handle)(uiControl *) = TODO_mruby_unbox_uintptr_t_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Handle);

  native_self->Handle = native_Handle;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Parent_reader */
/* sha: cc80eca3093139b3265e483fa481ed0da1e7c89176a9836f4800da859e406926 */
#if BIND_UiControl_Parent_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Parent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uiControl *(*)(uiControl *) native_Parent = native_self->Parent;

  mrb_value Parent = TODO_mruby_box_uiControl_PTR_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Parent);

  return Parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Parent_writer */
/* sha: 74d84100b5eb41cd652266bf3dc001a19f183754b9cef858b7fd024b7981078b */
#if BIND_UiControl_Parent_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Parent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Parent;

  mrb_get_args(mrb, "o", &Parent);

  /* type checking */
  TODO_type_check_uiControl_PTR_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Parent);

  uiControl *(*native_Parent)(uiControl *) = TODO_mruby_unbox_uiControl_PTR_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Parent);

  native_self->Parent = native_Parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::SetParent_reader */
/* sha: 72f9df11c1963585ce1294856c1b13f1cb64f84712cc411704bfd65c7f6efb34 */
#if BIND_UiControl_SetParent_FIELD_READER
mrb_value
mrb_UI_UiControl_get_SetParent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *, uiControl *) native_SetParent = native_self->SetParent;

  mrb_value SetParent = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_COMMA_uiControl_PTR_RPAREN(mrb, native_SetParent);

  return SetParent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::SetParent_writer */
/* sha: 12145bc330572e566747386a3156ab7e49dfc113d1acb118c3081e07924cee71 */
#if BIND_UiControl_SetParent_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_SetParent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value SetParent;

  mrb_get_args(mrb, "o", &SetParent);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_COMMA_uiControl_PTR_RPAREN(SetParent);

  void (*native_SetParent)(uiControl *, uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_COMMA_uiControl_PTR_RPAREN(SetParent);

  native_self->SetParent = native_SetParent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Toplevel_reader */
/* sha: 6204ac97bdd981b90bcd052e609b3621d587c07c3cda79869c962e488372b834 */
#if BIND_UiControl_Toplevel_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Toplevel(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Toplevel = native_self->Toplevel;

  mrb_value Toplevel = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Toplevel);

  return Toplevel;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Toplevel_writer */
/* sha: 90be137cc3de37bf3f68dde002c5f742524d9a02f834e22f8c7a2a34fe8f2f9c */
#if BIND_UiControl_Toplevel_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Toplevel(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Toplevel;

  mrb_get_args(mrb, "o", &Toplevel);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Toplevel);

  int (*native_Toplevel)(uiControl *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Toplevel);

  native_self->Toplevel = native_Toplevel;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Visible_reader */
/* sha: 485e49292e37c8f4b8e524ab12203f57decf521eb596fd4f3a5f163c83d12aed */
#if BIND_UiControl_Visible_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Visible(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Visible = native_self->Visible;

  mrb_value Visible = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Visible);

  return Visible;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Visible_writer */
/* sha: 0c99b4e7d4d9a7e8f48b3504d45e698c35ea3420ca8f75b7afc8a6cd95088070 */
#if BIND_UiControl_Visible_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Visible(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Visible;

  mrb_get_args(mrb, "o", &Visible);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Visible);

  int (*native_Visible)(uiControl *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Visible);

  native_self->Visible = native_Visible;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Show_reader */
/* sha: 3423406bbdc22d1814e79854a2c868f2921c3bfc684e9f62aa47253192537794 */
#if BIND_UiControl_Show_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Show(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Show = native_self->Show;

  mrb_value Show = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Show);

  return Show;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Show_writer */
/* sha: f64d7a71a39236f70e52d5e486704edabe724744422fa5cbb9186b3df1bb4f1f */
#if BIND_UiControl_Show_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Show(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Show;

  mrb_get_args(mrb, "o", &Show);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Show);

  void (*native_Show)(uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Show);

  native_self->Show = native_Show;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Hide_reader */
/* sha: 5e4043361e9196dd1d58c5e8f3e3a1969daba165852efcc87c0b0cacbdbe97e8 */
#if BIND_UiControl_Hide_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Hide(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Hide = native_self->Hide;

  mrb_value Hide = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Hide);

  return Hide;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Hide_writer */
/* sha: 86c40cb6a81111e714a714a7517c444d2b86c4baa8d6c6717e22f4347293e124 */
#if BIND_UiControl_Hide_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Hide(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Hide;

  mrb_get_args(mrb, "o", &Hide);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Hide);

  void (*native_Hide)(uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Hide);

  native_self->Hide = native_Hide;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Enabled_reader */
/* sha: 1d033dc31ecf82516c61c02c90f6f0c687cee0f3083262feb28c6b9f1aec6469 */
#if BIND_UiControl_Enabled_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Enabled(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Enabled = native_self->Enabled;

  mrb_value Enabled = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Enabled);

  return Enabled;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Enabled_writer */
/* sha: 9b0743de14736dcdae2ab3a450ef5f1265760ea66310ee506c8c9004b9f55c10 */
#if BIND_UiControl_Enabled_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Enabled(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Enabled;

  mrb_get_args(mrb, "o", &Enabled);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Enabled);

  int (*native_Enabled)(uiControl *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Enabled);

  native_self->Enabled = native_Enabled;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Enable_reader */
/* sha: 87cb3f147b2c48c3e5c35af8191e541da33c03f4317d0c71e9e4d15858807b72 */
#if BIND_UiControl_Enable_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Enable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Enable = native_self->Enable;

  mrb_value Enable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Enable);

  return Enable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Enable_writer */
/* sha: 7540d79b58dffc3b982f420027857c3051ed752237dc5d8d97c2e15fe4d4055f */
#if BIND_UiControl_Enable_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Enable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Enable;

  mrb_get_args(mrb, "o", &Enable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Enable);

  void (*native_Enable)(uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Enable);

  native_self->Enable = native_Enable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Disable_reader */
/* sha: bf55f568f54e0da6a98c0d2811bf69c421515d459df3ae0b6749699b68816e07 */
#if BIND_UiControl_Disable_FIELD_READER
mrb_value
mrb_UI_UiControl_get_Disable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Disable = native_self->Disable;

  mrb_value Disable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Disable);

  return Disable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::Disable_writer */
/* sha: 8665fa21750b903f3042fd308adc8c77883ffe3a7e47a6bc353d6d5732d81883 */
#if BIND_UiControl_Disable_FIELD_WRITER
mrb_value
mrb_UI_UiControl_set_Disable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);
  mrb_value Disable;

  mrb_get_args(mrb, "o", &Disable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Disable);

  void (*native_Disable)(uiControl *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(Disable);

  native_self->Disable = native_Disable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UI_UiControl_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::class_definition */
/* sha: a52f092ddea0b878857e05574ea6a7820f9e6e1146c7ec6e61fb83dab86124bf */
  struct RClass* UiControl_class = mrb_define_class_under(mrb, UI_module(mrb), "UiControl", mrb->object_class);
  MRB_SET_INSTANCE_TT(UiControl_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::class_method_definitions */
/* sha: ed5cd6c9b97bc619643b54ff30e4084af0c9fbe7a64a39039436a588c122ba94 */
#if BIND_UiControl_INITIALIZE
  mrb_define_method(mrb, UiControl_class, "initialize", mrb_UI_UiControl_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UiControl::attr_definitions */
/* sha: 12291ac23391e6f9d10d1dcd2b11aceee806810011109858be712845f78d209e */
  /*
   * Fields
   */
#if BIND_UiControl_Signature_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Signature", mrb_UI_UiControl_get_Signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Signature_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Signature=", mrb_UI_UiControl_set_Signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_OSSignature_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "OSSignature", mrb_UI_UiControl_get_OSSignature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_OSSignature_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "OSSignature=", mrb_UI_UiControl_set_OSSignature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_TypeSignature_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "TypeSignature", mrb_UI_UiControl_get_TypeSignature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_TypeSignature_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "TypeSignature=", mrb_UI_UiControl_set_TypeSignature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Destroy_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Destroy", mrb_UI_UiControl_get_Destroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Destroy_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Destroy=", mrb_UI_UiControl_set_Destroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Handle_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Handle", mrb_UI_UiControl_get_Handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Handle_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Handle=", mrb_UI_UiControl_set_Handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Parent_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Parent", mrb_UI_UiControl_get_Parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Parent_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Parent=", mrb_UI_UiControl_set_Parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_SetParent_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "SetParent", mrb_UI_UiControl_get_SetParent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_SetParent_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "SetParent=", mrb_UI_UiControl_set_SetParent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Toplevel_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Toplevel", mrb_UI_UiControl_get_Toplevel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Toplevel_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Toplevel=", mrb_UI_UiControl_set_Toplevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Visible_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Visible", mrb_UI_UiControl_get_Visible, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Visible_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Visible=", mrb_UI_UiControl_set_Visible, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Show_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Show", mrb_UI_UiControl_get_Show, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Show_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Show=", mrb_UI_UiControl_set_Show, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Hide_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Hide", mrb_UI_UiControl_get_Hide, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Hide_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Hide=", mrb_UI_UiControl_set_Hide, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Enabled_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Enabled", mrb_UI_UiControl_get_Enabled, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Enabled_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Enabled=", mrb_UI_UiControl_set_Enabled, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Enable_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Enable", mrb_UI_UiControl_get_Enable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Enable_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Enable=", mrb_UI_UiControl_set_Enable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UiControl_Disable_FIELD_READER
  mrb_define_method(mrb, UiControl_class, "Disable", mrb_UI_UiControl_get_Disable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UiControl_Disable_FIELD_WRITER
  mrb_define_method(mrb, UiControl_class, "Disable=", mrb_UI_UiControl_set_Disable, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UiControl::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
