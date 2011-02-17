// pic: 5 exercise 10 : sum the digits of an integer

#include <stdio.h>

int
main(void)
{
  int number, right_digit, sum;

  printf("Enter your number: ");
  scanf("%i", &number);
  
  sum = 0;
  
  while (number != 0) {
    right_digit = number % 10;
    number = number / 10;
    sum += right_digit;
  }

  printf("sum of digits: %i\n", sum);

  return 0;
}