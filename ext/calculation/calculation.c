#include <ruby.h>

VALUE Calculation = Qnil;

void Init_calculation();
VALUE _sum(VALUE self, VALUE x, VALUE y);
VALUE _sub(VALUE self, VALUE x, VALUE y);
VALUE _mul(VALUE self, VALUE x, VALUE y);
VALUE _div(VALUE self, VALUE x, VALUE y);

void Init_calculation() {
  Calculation = rb_define_module("Calculation");
  rb_define_singleton_method(Calculation, "sum", _sum, 2);
  rb_define_singleton_method(Calculation, "sub", _sub, 2);
  rb_define_singleton_method(Calculation, "mul", _mul, 2);
  rb_define_singleton_method(Calculation, "div", _div, 2);
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
    return x;
  }else {
    return rb_float_new(_x / _y);
  }
}