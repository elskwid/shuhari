// pic: 4 exerise 6 : evaluate polynomial

#include <stdio.h>

int
main(void)
{
  float x = 2.55;
  float result;

  // added parens to clarify precedence
  result = (3 * (x * x * x)) - (5 * (x * x)) + 6;

  printf("result = %g\n", result);

  return 0;
}