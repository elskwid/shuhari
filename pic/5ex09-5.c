// pic: 5 exercise 9 : rewrite 5.5 to use while statement

// pic: 5.5 using nested for loops

#include <stdio.h>

int
main(void)
{
  int n, number, triangular_number, counter;
  
  counter = 1;
  while (counter <= 5) {
    printf("What triangular number do you want?\n");
    scanf("%i", &number);

    triangular_number = 0;
    
    n = 1;
    while (n <= number) {
      triangular_number += n;
      n++;
    }

    printf("Triangular number %i is %i\n", number, triangular_number);
    counter++;
  }

  return 0;
}