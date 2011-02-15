// pic: 4.5 converting integers and floats

#include <stdio.h>

int
main(void)
{
  float f1 = 123.125;
  float f2;
  int i1;
  int i2 = -150;
  char c = 'a';

  i1 = f1; // floating to integer conv
  printf("%f assigned to an int produces %i\n", f1, i1);

  f1 = i2; // integer to floating conv
  printf("%i assigned to a float produces %f\n", i2, f1);

  f1 = i2 / 100; // integer divided by 100
  printf("%i divided by 100 produces %f\n", i2, f1);

  f2 = i2 / 100.0; // integer divided by float
  printf("%i divided by 100.0 produces %f\n", i2, f2);

  f2 = (float)i2 / 100; // type cast operator
  printf("(float)%i divided by 100 produces %f\n", i2, f2);

  return 0;
}