// pic: 4 exercise 4 : convert 27degF to degC

#include <stdio.h>

int
main(void)
{
  float deg_f = 27;
  float deg_c;

  deg_c = (deg_f -32) / 1.8;

  printf("%g degrees Farenheit is %g degrees Celsius\n", deg_f, deg_c);
  return 0;
}