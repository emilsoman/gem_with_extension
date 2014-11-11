#include <ruby.h>

static VALUE func() {
  fprintf(stderr, "In C Land  : %s:%d\n", __FILE__, __LINE__);
  return Qnil;
}

void Init_c_ext(void) {
  VALUE module = rb_define_module("GemWithExtension");
  rb_define_module_function(module, "run_c_code", func, 0);
}
