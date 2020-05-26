#include <stdio.h>

int main() {
  int i, n, largest, second_largest;
  printf("Enter the amount of numbers to check: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++) {
    printf("Enter the number at arr[%d]:\n", i);
    scanf("%d", &arr[i]);
  }
  largest = arr[0];
  for(i = 0; i < n; i++) {
    if(arr[i] > largest) {
      largest = arr[i];
    }
  }
  second_largest = arr[1];
  for(i = 0; i < n; i++) {
    if(arr[i] != largest) {
      if(arr[i] > second_largest) {
        second_largest = arr[i];
      }
    }
  }

  printf("The largest number is: %d\n", largest);
  printf("The second largest number is: %d\n", second_largest);
}