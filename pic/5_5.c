// pic: 5.5 using nested for loops

#include <stdio.h>

int
main(void)
{
  int n, number, triangular_number, counter;

  for (counter = 1; counter <= 5; ++counter) {
    printf("What triangular number do you want?\n");
    scanf("%i", &number);

    triangular_number = 0;

    for (n = 1; n <= number; ++n) {
      triangular_number += n;
    }

    printf("Triangular number %i is %i\n", number, triangular_number);
  }

  return 0;
}