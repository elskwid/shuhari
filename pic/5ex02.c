// pic: 5 exercise 2 : gen and display a table of n and n2

#include <stdio.h>

int
main(void)
{
  int count, n, n2;

  printf("TABLE OF INTEGERS AND SQAURES OF INTEGERS\n\n");
  printf("  n       n2  \n");
  printf(" --      ---  \n");

  for (count = 1; count <= 10; ++count) {
    n = count;
    n2 = n * n;
    printf(" %2i      %3i\n", n, n2);
  }

  printf("\n");
  return 0;
}