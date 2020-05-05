#include <stdio.h>

int sumOfDigits(int);

int main() {
  int n;
  int sum = 0;
  scanf("%d", &n);
  sum = sumOfDigits(n);
  printf("%d", sum);
}

int sumOfDigits(int n) {
  if((n / 10) < 1)
    return n;
  else if ((n/10) >= 1 && ((n % 10) > 0))
    return (n%10) + (sumOfDigits(n/10));
}