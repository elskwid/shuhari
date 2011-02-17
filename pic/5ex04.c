// pic: 5 exercise 4 : first 10 factorial 

#include <stdio.h>

int
main(void)
{
  int n, f, factorial;
  
  printf("First 10 factorials:\n");
  printf("--------------------\n\n");
  
  // factorials for 1 - 10
  for (n = 1; n <= 10; ++n) {
    
    factorial = 1;
    
    // gen factorial for n
    for (f = 1; f <= n; ++f) {
      factorial = factorial * f;
    }
    
    printf("%i! = %i\n", n, factorial);
  }
  
  return 0;
}