#include <stdio.h>

int main(){
  int i, marks[10];
  int arr1[] = {34,56,34,56,7,8,7,67,9,87};
  int arr2[10];
  int arr3[20];
  for(i=0; i<10;i++)
    marks[i] = -1;
  for(i=0; i<10; i++) {
    arr2[i] = arr1[i];
  }
  for(int j=0; j<10;j++) {
    printf("%d ", (arr2[j] * 2));
  }
}