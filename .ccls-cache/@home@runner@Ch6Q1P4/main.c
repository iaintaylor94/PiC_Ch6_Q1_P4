// Program to determine if a number is even or odd (Ver. 2)

#include <stdio.h>

int main(void) {
  int numberToTest, remainder;

  printf ("Enter your number to be tester: ");
  scanf ("%d", &numberToTest);

  remainder = numberToTest % 2;

  if (remainder == 0) {
    printf ("The unmber is even\n");
  }
  else {
    printf ("The number is odd\n");
  }
  
  return 0;
}