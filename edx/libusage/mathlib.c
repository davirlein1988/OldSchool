#include <stdio.h>
#include <math.h>

int main()
{
  double a = 3.45;
  double aSquared = pow(a, 2.0);
  printf("%.2lf squared = %.2lf\n", a, aSquared);
  return 0;
}
// gcc -o power mathlib.c -lm
// cc mathlib.c -lm