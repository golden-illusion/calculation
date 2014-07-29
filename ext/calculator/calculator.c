#include <ruby.h>

VALUE Calculator = Qnil;

void Init_calculator();
VALUE _sum(VALUE self, VALUE x, VALUE y);
VALUE _sub(VALUE self, VALUE x, VALUE y);
VALUE _mul(VALUE self, VALUE x, VALUE y);
VALUE _div(VALUE self, VALUE x, VALUE y);

void Init_calculator() {
  Calculator = rb_define_module("Calculator");
  rb_define_singleton_method(Calculator, "sum", _sum, 2);
  rb_define_singleton_method(Calculator, "sub", _sub, 2);
  rb_define_singleton_method(Calculator, "mul", _mul, 2);
  rb_define_singleton_method(Calculator, "div", _div, 2);
}

VALUE _sum(VALUE self, VALUE x, VALUE y) {
  int _x = NUM2INT(x);
  int _y = NUM2INT(y);
  return INT2NUM(_x + _y);
}

VALUE _sub(VALUE self, VALUE x, VALUE y) {
  int _x = NUM2INT(x);
  int _y = NUM2INT(y);
  return INT2NUM(_x - _y);
}

VALUE _mul(VALUE self, VALUE x, VALUE y) {
  int _x = NUM2INT(x);
  int _y = NUM2INT(y);
  return INT2NUM(_x * _y);
}

VALUE _div(VALUE self, VALUE x, VALUE y) {
  int _x = NUM2DBL(x);
  int _y = NUM2DBL(y);
  if (_y == 0.0) {
    return rb_str_new2("zero division detection");
  }else {
    return rb_float_new(_x / _y);
  }
}