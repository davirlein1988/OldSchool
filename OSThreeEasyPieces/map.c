#include <stdio.h>
int main(){
  int i,j,k, length;
  scanf("%d", &length);
  printf("The length will be: %d\n", length);
  int nums[length+1];

  for(i=0;i<length;i++){
    scanf("%d\n", &nums[i]);
  }
  for(j=0;j<length-1;j++){
    printf("Number: %d\n", nums[j]);
  }
  return 0;
}