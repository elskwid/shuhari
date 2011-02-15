// pic: 4 exercise 3 : test constant names

int
main(void)
{
  float f1 = 123.456;
  int i1 = 0001;
  float f2 = 0xab05;
  float f3 = 123.5e2;
  float f4 = 98.6F; // Is f a valid suffix?
  //float f5 = 0996; // invalid oct number
  float f6 = 1234uL; // can't be unsigned with L?
  float f7 = 1.234L;
  int i2 = 0XABCDEFL; // can this be hex and long?
  //float f8 = 0x10.5; // invalid hex
  int i3 = 0xFFFF;
  int i4 = 0L;
  float f9 = .0001;
  //float f10 = 98.7U; // can't be unsigned float
  float f11 = -12E-12;
  //float f12 = 1.2Fe-7; // this doesn't look right
  int i5 = 197u;
  int i6 = 0xabcu; // unsigned hex, okay?
  //int i7 = 0x0G1; // invalid hex
  int i8 = 123L;
  float f13 = -597.25;
  int i9 = +12; // okay with unary op?
  //int i10 = 17777s; // s doesn't mean signed ...
  int i11 = 07777;
  //int i12 = 15,000; // can't use comma
  int i13 = 100U;
  int i14 = +123;
}