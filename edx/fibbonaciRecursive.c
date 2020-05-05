#include <stdio.h>

int fibbonaci(int n);

int main() {
  int n, fibbo;
  printf("Enter the number to calcualte the fibbonacci sequence\n");
  scanf("%d", &n);
  if(n <= 0)
    printf("The number %d is not positive\n", n);
  else
    fibbo = fibbonaci(n);
  printf("The fibbonaci number of %d is %d\n", n, fibbo);
}

int fibbonaci(int n) {
  int fib;
  if(n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else {
    fib = fibbonaci(n-1) + fibbonaci(n-2);
  }
  return fib;
}