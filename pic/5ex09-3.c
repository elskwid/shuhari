// pic: 5 exercise 9 : rewrite 5.3 to use while statement

// pic: 5.3 generate a table of triangular number

#include <stdio.h>

int
main(void)
{
  int n, triangular_number;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n    Sum from 1 to n\n");
  printf("---   ---------------\n");

  triangular_number = 0;
  
  n = 1;
  while (n <= 10) {
    triangular_number += n;
    printf(" %2i            %i\n", n, triangular_number); // 5.3A
    n++;
  }

  return 0;
}