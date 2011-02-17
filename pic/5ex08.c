// pic: 5 exercise 8 : modify 5.5 for user determined number of triangular numbers

// pic: 5.5 using nested for loops

#include <stdio.h>

int
main(void)
{
  int n, number, triangular_number, counter, quantity;
  
  printf("How many different triangular numbers do you want to calculate? ");
  scanf("%i", &quantity);
  
  for (counter = 1; counter <= quantity; ++counter) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangular_number = 0;

    for (n = 1; n <= number; ++n) {
      triangular_number += n;
    }

    printf("Triangular number %i is %i\n", number, triangular_number);
  }

  return 0;
}