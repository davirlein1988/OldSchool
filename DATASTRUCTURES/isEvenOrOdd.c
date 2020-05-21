#include <stdio.h>

int isEven(int n);
int isOdd(int n);

int main() {
  int n, even, odd;
  printf("Enter a positive number:\n");
  scanf("%d", &n);
  even = isEven(n);
  odd = isOdd(n);
  if(odd > 0)
    printf("Number %d is odd\n", n);
  if(even > 0)
    printf("number %d is even\n", n);
  return 0;
}

int isEven(int num) {
  if((num % 2) == 0)
    return 1;
  else 
    return -1;
}

int isOdd(int num) {
  return ((num % 2) != 0) ? 1 : -1;
}