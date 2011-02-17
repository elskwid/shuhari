// pic: 5 exercise 3 : triangular number alt algo

#include <stdio.h>

int
main(void)
{
  int n, triangular_number;

  printf("TRIANGULAR NUMBERS INC OF 5\n\n");

  printf("   n              tri num\n");
  printf("---------------------------\n\n");

  triangular_number = 0;

  for (n = 0; n <= 50; n = n + 5) {
    triangular_number = n * (n + 1) / 2;
    printf("  %2i                 %4i\n", n, triangular_number);
  }

  printf("\n");
  return 0;
}