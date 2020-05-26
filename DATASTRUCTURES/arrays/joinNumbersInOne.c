#include <stdio.h>
#include <math.h>

int main() {
 int i, n, newnum;
  printf("Enter the amount of numbers to check: \n");
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++) {
    printf("Enter the number at arr[%d]:\n", i);
    scanf("%d", &arr[i]);
  } 
  i = 0;
  while(i < n) {
    newnum = newnum + arr[i] * pow(10, i);
    i++;
  }

  printf("The number is : %d\n", newnum);
  return 0;
}