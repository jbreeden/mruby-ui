#include "mruby_UI.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_UI_define_enum_constants(mrb_state* mrb) {
  struct RClass * UI_module = UI_module(mrb);
  mrb_value UI_mod = mrb_obj_value(UI_module(mrb));

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
