#include <stdio.h>
int multiply(int *, int *);
int main() {
  int num1, num2;
  scanf("%d%d", &num1, &num2);
  printf("The result is: %d\n",  multiply(&num1, &num2));
  int numbers[] = {2,3,4,5,6,7};
}

int multiply(int * a, int * b) {
  return *a * *b;
}