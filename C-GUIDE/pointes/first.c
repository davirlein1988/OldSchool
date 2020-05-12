#include <stdio.h>
void swap(int *, int *);
int main() {
  int x = 3, y = 2, z[10];
  int *ip;
   ip = &x;
   y = *ip;
   *ip = *ip + 10;
   ip = &z[0];
   double *dp, atof(char *);
   printf("%d %d\n", x, y);
   swap(&x, &y);
   printf("Then: %d %d\n", x, y);
  printf("%d\n", *ip);
}

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}