// pic: 4 exercise 7 : evaluate expression and display in exponential format

#include <stdio.h>

int
main(void)
{
  float result;

  result = (3.31 * 10E-8 * 2.01 * 10E-7) / ((7.16 * 10E-6) + (2.01 * 10E-8));
  printf("result is %e\n", result);

  return 0;
}