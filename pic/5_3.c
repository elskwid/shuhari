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

  for (n = 1; n <= 10; ++n) {
    triangular_number += n;
    // printf("  %i            %i\n", n, triangular_number); // 5.3
    printf(" %2i            %i\n", n, triangular_number); // 5.3A
  }

  return 0;
}