#include <stdio.h>

int main() {
  int nums[10], i;
  printf("Enter 10 numbers:\n");
  for(i = 0; i<10; ++i) {
    scanf("%d", &nums[i]);
  }
  for(i = 0; i < 10; ++i) {
    if(i%3 == 0)
      printf("%d\n", nums[i]);
    else 
      printf("%d ", nums[i]);
  }
  return 0;
}