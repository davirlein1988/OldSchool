#include <stdio.h>

int main(void) {
  int num;
  float num_f;
  printf("Enter an iteger: \n");
  scanf("%d", &num);
  num_f = (float)num;
  printf("The number %d in float variant is %f\n", num, num_f);
  return 0;
}