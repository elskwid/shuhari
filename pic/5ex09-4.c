// pic: 5 exercise 9 : rewrite 5.4 to use while statement

// pic: 5.4 asking the user for input

#include <stdio.h>

int
main(void)
{
  int n, number, triangular_number;

  printf("What triangular number do you want? \n");
  scanf("%i", &number);

  triangular_number = 0;
  n = 1;
  while (n <= number) {
    triangular_number += n;
    n++;
  }

  printf("Triangular number %i is %i\n", number, triangular_number);

  return 0;
}