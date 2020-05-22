#include <stdio.h>

int main() {
  int ip, n;
  float num;

  scanf("%f", &num);
  n = (int)num;
  ip = n%10;
  printf("The rightmost part of the retional part is %d\n", ip);
}