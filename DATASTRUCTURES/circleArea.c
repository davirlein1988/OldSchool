#include <stdio.h>

int main() {
  float radius;
  double area;
  printf("Enter the radius of a circle\n");
  scanf("%f", &radius);
  area = 3.2416 * radius * radius;
  printf("Area is %2.lf\n", area);
  return 0;
}