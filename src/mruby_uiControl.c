/*
 * uiControl
 * Defined in file ui.h @ line 58
 */

#include "mruby_UI.h"

#if BIND_Control_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::initialize */
/* sha: ea3a5caca22267f13ebb569041b128f1d8bb5521eadff438d2a89e71ed845b54 */
#if BIND_Control_INITIALIZE
mrb_value
mrb_UI_Control_initialize(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Signature_reader */
/* sha: d1ffc41fa56ac459b69e8cf125c59b0f1ebbe3149fd152419402f82a58f6c0e8 */
#if BIND_Control_Signature_FIELD_READER
mrb_value
mrb_UI_Control_get_Signature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_Signature = native_self->Signature;

  mrb_value Signature = TODO_mruby_box_uint32_t(mrb, native_Signature);

  return Signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Signature_writer */
/* sha: ee4cbaceed62fb9359023e9a67d89cc4a8ee153a8b167a043d840428704c65c9 */
#if BIND_Control_Signature_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Signature(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::OSSignature_reader */
/* sha: 3fdda1ade528a69a9c1a18641653c1dd61fc2cde1cc425f9cfa594b81a9c431a */
#if BIND_Control_OSSignature_FIELD_READER
mrb_value
mrb_UI_Control_get_OSSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_OSSignature = native_self->OSSignature;

  mrb_value OSSignature = TODO_mruby_box_uint32_t(mrb, native_OSSignature);

  return OSSignature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::OSSignature_writer */
/* sha: bc55b86fee086411e500ac7f6224f023b504911af878d023c217e99c59fc6248 */
#if BIND_Control_OSSignature_FIELD_WRITER
mrb_value
mrb_UI_Control_set_OSSignature(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::TypeSignature_reader */
/* sha: c95a19ed1dff7d90cbe8f8d3c25d03983c3a7337b24370a5e086ff62924c44c9 */
#if BIND_Control_TypeSignature_FIELD_READER
mrb_value
mrb_UI_Control_get_TypeSignature(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uint32_t native_TypeSignature = native_self->TypeSignature;

  mrb_value TypeSignature = TODO_mruby_box_uint32_t(mrb, native_TypeSignature);

  return TypeSignature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::TypeSignature_writer */
/* sha: c87e83d0a63a95a9e0f3f51e4d34e5c72c4ca1de0019add7bfeca5903f3c2ad9 */
#if BIND_Control_TypeSignature_FIELD_WRITER
mrb_value
mrb_UI_Control_set_TypeSignature(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Destroy_reader */
/* sha: 0ebab61f694fea363cd2ad3e083b053b92614f8837ab005c0a18315849c6ecec */
#if BIND_Control_Destroy_FIELD_READER
mrb_value
mrb_UI_Control_get_Destroy(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Destroy = native_self->Destroy;

  mrb_value Destroy = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Destroy);

  return Destroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Destroy_writer */
/* sha: 8906f927f673644361ef0579dbe707a58d44326cd71ad4c461bf849df5ea554a */
#if BIND_Control_Destroy_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Destroy(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Handle_reader */
/* sha: 78613a8ff9fb7617315de5ecb30eec0159611d4221fa616b5559573b881329fa */
#if BIND_Control_Handle_FIELD_READER
mrb_value
mrb_UI_Control_get_Handle(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uintptr_t (*)(uiControl *) native_Handle = native_self->Handle;

  mrb_value Handle = TODO_mruby_box_uintptr_t_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Handle);

  return Handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Handle_writer */
/* sha: 7150fce0d2361f096b20540a26386939b2f0d67ac9e37748c29d1f2445fb3dd2 */
#if BIND_Control_Handle_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Handle(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Parent_reader */
/* sha: dd4e75f0e044f0e55cb8497e8fa7f67a270572cd8e12ce9352ddc430d717d9a3 */
#if BIND_Control_Parent_FIELD_READER
mrb_value
mrb_UI_Control_get_Parent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  uiControl *(*)(uiControl *) native_Parent = native_self->Parent;

  mrb_value Parent = TODO_mruby_box_uiControl_PTR_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Parent);

  return Parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Parent_writer */
/* sha: 9256b0580a86de8fd90997eeeb4f2b8a291340dfd021cd8d04e2a898fd560adb */
#if BIND_Control_Parent_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Parent(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::SetParent_reader */
/* sha: 5658db8a11c199d12010b7e1c825c668c90a11e9d874a306f3421910a95ba3ee */
#if BIND_Control_SetParent_FIELD_READER
mrb_value
mrb_UI_Control_get_SetParent(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *, uiControl *) native_SetParent = native_self->SetParent;

  mrb_value SetParent = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_COMMA_uiControl_PTR_RPAREN(mrb, native_SetParent);

  return SetParent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::SetParent_writer */
/* sha: 500b4d118fe4c18ee3f114f5413d70ccb89ebe85a1b1b108843efbd5de0bd956 */
#if BIND_Control_SetParent_FIELD_WRITER
mrb_value
mrb_UI_Control_set_SetParent(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Toplevel_reader */
/* sha: 174e5753d2653533a52882e852de1b3e22b5e8c0d1bccf657346521ea9d3759c */
#if BIND_Control_Toplevel_FIELD_READER
mrb_value
mrb_UI_Control_get_Toplevel(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Toplevel = native_self->Toplevel;

  mrb_value Toplevel = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Toplevel);

  return Toplevel;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Toplevel_writer */
/* sha: 3195b4f811eb1e4e4e47543859fd80ef570cfcaf665208b3bd8b320b26cb6eb6 */
#if BIND_Control_Toplevel_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Toplevel(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Visible_reader */
/* sha: ae6ab80fad55e84e421c068c8e14643b50042dd3d1ad709c2860acd3b975db90 */
#if BIND_Control_Visible_FIELD_READER
mrb_value
mrb_UI_Control_get_Visible(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Visible = native_self->Visible;

  mrb_value Visible = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Visible);

  return Visible;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Visible_writer */
/* sha: cd456e8dd9d9d387897eb9f7bcf67a55d0106d6d06d9aa2aa03901c0e2ac1d95 */
#if BIND_Control_Visible_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Visible(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Show_reader */
/* sha: c6533c7fbaa682bd86ae33a8c22adfee658c545a3a1aa83686ac46583b6cb6dc */
#if BIND_Control_Show_FIELD_READER
mrb_value
mrb_UI_Control_get_Show(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Show = native_self->Show;

  mrb_value Show = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Show);

  return Show;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Show_writer */
/* sha: 1e37adcfca9d1bb709cea55ed18feb93268f11481a4655ac21403065e77600bb */
#if BIND_Control_Show_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Show(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Hide_reader */
/* sha: 754b92e2ccf714e016e1eebd708911971ef51fa0df07b9c3d7e4402d0a07f2a5 */
#if BIND_Control_Hide_FIELD_READER
mrb_value
mrb_UI_Control_get_Hide(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Hide = native_self->Hide;

  mrb_value Hide = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Hide);

  return Hide;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Hide_writer */
/* sha: 499a4863264c8670116fd1312e06d35270b01d674c1e919db0ffb867e14c31aa */
#if BIND_Control_Hide_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Hide(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Enabled_reader */
/* sha: b8efc9dd338abea59de81c4e8846dbb457501275a3eb1f29b7cd5b1f8c4612f2 */
#if BIND_Control_Enabled_FIELD_READER
mrb_value
mrb_UI_Control_get_Enabled(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  int (*)(uiControl *) native_Enabled = native_self->Enabled;

  mrb_value Enabled = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Enabled);

  return Enabled;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Enabled_writer */
/* sha: 20466b4870c45d01e34901059e588b4769ed7355c265e66e68f8005cb39c01f9 */
#if BIND_Control_Enabled_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Enabled(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Enable_reader */
/* sha: f97e5da1e32c1bc7bcc8b2094a23ccfb9f3ee440a243fa4b4786c4e9e93fe8c5 */
#if BIND_Control_Enable_FIELD_READER
mrb_value
mrb_UI_Control_get_Enable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Enable = native_self->Enable;

  mrb_value Enable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Enable);

  return Enable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Enable_writer */
/* sha: ffaa3fd2943fc25b2b55bcc5495e6d6f5bf8f08d67c9eacd91382839c34eb7a0 */
#if BIND_Control_Enable_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Enable(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Control::Disable_reader */
/* sha: 476f2f64426a069acb4aa7ae7b904d41a734fb8b965203bcde9c00407bcaee7d */
#if BIND_Control_Disable_FIELD_READER
mrb_value
mrb_UI_Control_get_Disable(mrb_state* mrb, mrb_value self) {
  uiControl * native_self = mruby_unbox_uiControl(self);

  void (*)(uiControl *) native_Disable = native_self->Disable;

  mrb_value Disable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_uiControl_PTR_RPAREN(mrb, native_Disable);

  return Disable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::Disable_writer */
/* sha: 81a0368da7b5c53d42803fcf2a29b6648f070a76958e9cae88c08afd5c461ef6 */
#if BIND_Control_Disable_FIELD_WRITER
mrb_value
mrb_UI_Control_set_Disable(mrb_state* mrb, mrb_value self) {
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


void mrb_UI_Control_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::class_definition */
/* sha: b58c4cc98b3e0bcfdefdb7236297900f05feaada924204f73dc19d983bb503ab */
  struct RClass* Control_class = mrb_define_class_under(mrb, UI_module(mrb), "Control", mrb->object_class);
  MRB_SET_INSTANCE_TT(Control_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::class_method_definitions */
/* sha: f3bfab37fe92cb8cf9721099ec865d4ae7735a0bea448327877c00b48bf58359 */
#if BIND_Control_INITIALIZE
  mrb_define_method(mrb, Control_class, "initialize", mrb_UI_Control_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Control::attr_definitions */
/* sha: deea881b463908da2e1cc0050d5eab00f74512dd2b4879fc317ebb02b182c0ba */
  /*
   * Fields
   */
#if BIND_Control_Signature_FIELD_READER
  mrb_define_method(mrb, Control_class, "Signature", mrb_UI_Control_get_Signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Signature_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Signature=", mrb_UI_Control_set_Signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_OSSignature_FIELD_READER
  mrb_define_method(mrb, Control_class, "OSSignature", mrb_UI_Control_get_OSSignature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_OSSignature_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "OSSignature=", mrb_UI_Control_set_OSSignature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_TypeSignature_FIELD_READER
  mrb_define_method(mrb, Control_class, "TypeSignature", mrb_UI_Control_get_TypeSignature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_TypeSignature_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "TypeSignature=", mrb_UI_Control_set_TypeSignature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Destroy_FIELD_READER
  mrb_define_method(mrb, Control_class, "Destroy", mrb_UI_Control_get_Destroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Destroy_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Destroy=", mrb_UI_Control_set_Destroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Handle_FIELD_READER
  mrb_define_method(mrb, Control_class, "Handle", mrb_UI_Control_get_Handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Handle_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Handle=", mrb_UI_Control_set_Handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Parent_FIELD_READER
  mrb_define_method(mrb, Control_class, "Parent", mrb_UI_Control_get_Parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Parent_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Parent=", mrb_UI_Control_set_Parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_SetParent_FIELD_READER
  mrb_define_method(mrb, Control_class, "SetParent", mrb_UI_Control_get_SetParent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_SetParent_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "SetParent=", mrb_UI_Control_set_SetParent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Toplevel_FIELD_READER
  mrb_define_method(mrb, Control_class, "Toplevel", mrb_UI_Control_get_Toplevel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Toplevel_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Toplevel=", mrb_UI_Control_set_Toplevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Visible_FIELD_READER
  mrb_define_method(mrb, Control_class, "Visible", mrb_UI_Control_get_Visible, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Visible_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Visible=", mrb_UI_Control_set_Visible, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Show_FIELD_READER
  mrb_define_method(mrb, Control_class, "Show", mrb_UI_Control_get_Show, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Show_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Show=", mrb_UI_Control_set_Show, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Hide_FIELD_READER
  mrb_define_method(mrb, Control_class, "Hide", mrb_UI_Control_get_Hide, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Hide_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Hide=", mrb_UI_Control_set_Hide, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Enabled_FIELD_READER
  mrb_define_method(mrb, Control_class, "Enabled", mrb_UI_Control_get_Enabled, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Enabled_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Enabled=", mrb_UI_Control_set_Enabled, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Enable_FIELD_READER
  mrb_define_method(mrb, Control_class, "Enable", mrb_UI_Control_get_Enable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Enable_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Enable=", mrb_UI_Control_set_Enable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Control_Disable_FIELD_READER
  mrb_define_method(mrb, Control_class, "Disable", mrb_UI_Control_get_Disable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Control_Disable_FIELD_WRITER
  mrb_define_method(mrb, Control_class, "Disable=", mrb_UI_Control_set_Disable, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Control::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
