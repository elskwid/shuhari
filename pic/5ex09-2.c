// pic: 5 exercise 9 : rewrite 5.2 to use while statement


// pic: 5.2 calculate the 200th triangular number, intro to for statement

#include <stdio.h>

int
main(void)
{
  int n, triangular_number;

  triangular_number = 0;
  
  n = 1;
  while (n <= 200) {
    triangular_number = triangular_number + n;
    n++;
  }

  printf("The 200th triangular number is %i\n", triangular_number);

  return 0;
}