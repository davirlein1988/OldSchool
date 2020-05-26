#include <stdio.h>

int main() {
  int i, n, sum=0;
  float mean = 0.0;
  printf("enter the numbers of numbers to compute: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++ ) {
    printf("The number at arr[%d]:", i);
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < n; i++) {
    sum += arr[i];
  }
  mean = (float)sum/n;

  printf("The sum of the elements is: %d\n", sum);
  printf("The mean if all the elements is: %.2lf\n", mean);
  return 0;
}