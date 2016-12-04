#include <stdlib.h>
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/hash.h"
#include "mruby/array.h"
#include "mruby/error.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "mruby/string.h"
#include "mruby/compile.h"
#include "mruby/proc.h"
#include "mruby/data.h"

#include "mruby_to_native_ref.h"

#include "ui.h"

#include "mruby_UI_class_macros.h"
#include "generated/mruby_UI_native_object.c"
#include "generated/mruby_UI_void_ptr.c"
#include "generated/mruby_UI_classes.c"
#include "generated/mruby_UI_functions.c"

#include "./ext/mruby_UI_thunk.c"
#include "./ext/mruby_UI_event_handlers.c"

mrb_value
mruby_UI_InitOptions_initialize(mrb_state *mrb, mrb_value self)
{
  mruby_UI_gift_uiInitOptions_data_ptr(self, calloc(1, sizeof(uiInitOptions)));
  return self;
}

void
mrb_mruby_ui_gem_init(mrb_state* mrb)
{
  mrb_define_module(mrb, "UI");
  mruby_UI_NativeObject_init(mrb);

  #include "./ext/mruby_UI_control_hierarchy.c"

  #include "generated/mruby_UI_class_initializations.c"
  #include "generated/mruby_UI_function_initializations.c"
  #include "generated/mruby_UI_enum_constants.c"

  #include "./ext/mruby_UI_macro_constants.c"
  mruby_UI_event_handlers_init(mrb);
  mrb_define_method(mrb, UI_InitOptions_class(mrb), "initialize", mruby_UI_InitOptions_initialize, MRB_ARGS_ARG(0, 0));
}

void
mrb_mruby_ui_gem_final(mrb_state* mrb)
{ }
