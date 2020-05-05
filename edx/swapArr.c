#include <stdio.h>
void swap(int []);
int main() {
  int arr[6];
  int i, j;
  for(i = 0; i < 6; i++) {
    scanf("%d", &arr[i]);
  }
  swap(arr);
  for(j = 0; j < 6; j++) {
    printf("%d ** \n", arr[j]);
  }
}

void swap(int arr[]) {
  int i;
  int counter = 5;
  int temp;
  for(i = 0; i < 3, counter > 2; i++, counter--) {
    temp = arr[i];
    arr[i] = arr[counter];
    arr[counter] = temp;
  }
}