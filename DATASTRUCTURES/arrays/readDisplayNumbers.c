#include <stdio.h>

int main() {
  int i, n;
  printf("enter the numbers of numbers to print: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++ ) {
    printf("The number at arr[%d]:", i);
    scanf("%d", &arr[i]);
  }
  printf("The numbers in the array are:\n");
  for(i = 0; i < n; i++) {
    printf("%d \n", arr[i]);
  }
}