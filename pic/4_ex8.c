// pic: 4 exercise 8 : round off integer to the next largest even multiple of another integer

/*
 forumla is: next_int = i + j - i % j

 example, to round off 256 days to the next largest number of days evenly divisible
 by a week, values i = 256 and j = 7

 = 256 + 7 - 256 % 7
 = 256 + 7 - 4
 = 259

*/

#include <stdio.h>

int
main(void)
{
  int i1 = 365;
  int j1 = 7;

  int i2 = 12258;
  int j2 = 23;

  int i3 = 996;
  int j3 = 4;

  printf("for 365 & 7 = %i\n", i1 + j1 - i1 % j1);
  printf("for 12,258 & 23 = %i\n", i2 + j2 - i2 % j2);
  printf("for 996 & 4 = %i\n", i3 + j3 - i3 % j3);

  return 0;
}

