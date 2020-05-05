#include <stdio.h>

int factorial(int a);

int main() {
  int n, facto;
  printf("Please enter a positive integer: ");
  scanf("%d", &n);

  if(n < 0) 
    printf("%d is a negative number, Aborting...", n);
  else {
    facto = factorial(n);
    printf("%d! = %d.\n", n, facto);
  }
  return 0;
}

int factorial(int n) {
  if (n == 0)
    return 1;
  else if(n <= 2) {
    return n;
  } else {
    return n * factorial(n-1);
  }
}