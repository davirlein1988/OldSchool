#include <stdio.h>

int main() {
  int i, n, min, pos = 0;
  float mean = 0.0;
  printf("enter the numbers of numbers to compute: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++ ) {
    printf("The number at arr[%d]:", i);
    scanf("%d", &arr[i]);
  }
  min = arr[0];
  for(i = 0; i < n; i++) {
    if(arr[i] < min) {
      min = arr[i];
      pos = i;
    }
  }

  printf("The samallest element is: %d\n", min);
  printf("The position of the samllest element is: %d\n", pos);
}