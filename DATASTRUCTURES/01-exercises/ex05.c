#include <stdio.h>

int main() {
  int sum;
  float num1, num2;
  scanf("%f%f", &num1,&num2);
  sum = (int) num1 + num2;
  printf("The sum of %f and %f is %d\n", num1, num2, sum);
  return 0;
}