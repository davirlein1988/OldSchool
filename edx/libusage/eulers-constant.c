#include <stdio.h>
#include <math.h>

int main() {
  int number;
  double sqNumber, e;
  scanf("%d", &number);
  sqNumber = sqrt(number);
  printf("%.8lf\n", sqNumber);
  e = exp(1);
  printf("%.10lf\n", e);
  printf("gcc -std=c11 -Wall -fmax-errors=10 program.c -lm -o program\n");
  return 0;
}