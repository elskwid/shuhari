// pic: 4.1 basic data types

#include <stdio.h>

int
main(void)
{
  int int_var = 100;
  float float_var = 331.79;
  double double_var = 8.44e+11;
  char char_var = 'W';
  _Bool bool_var = 0;

  printf("integer_var = %i\n", int_var);
  printf("floating_var = %f\n", float_var);
  printf("double_var = %e\n", double_var);
  printf("double_var = %g\n", double_var);
  printf("char_var = %c\n", char_var);
  printf("bool_var = %i\n", bool_var);

  return 0;
}