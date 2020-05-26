#include <stdio.h>
int main() {
  int i, n, j, flag = 0;
  printf("Enter the amount of numbers to check: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++) {
    printf("Enter the number at arr[%d]:\n", i);
    scanf("%d", &arr[i]);
  }
  for(i = 0; i < n; i++) {
    for(j = i+1; j < n; j++) {
      if(arr[i] == arr[j] && i != j) {
        flag = 1;
        printf("Diuplicates found at: %d %d\n", i, j);
      }
    }
  }
  if(flag == 0) {
    printf("There were no duplicates found....\n");
    return 0;
  }
}