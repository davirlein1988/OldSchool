#include <stdio.h>
int main()
{
  int data[] = {25, 94, 45, 77, 11, 4, 100, 25, 45, 55, 5, 80, 55, 66, 6, 4, 45, 94, 100, 6, 94, 77, 30, 55, 4, 80, 9, 77, 22, 11, 66, 22, 94, 4, 77, 0, 77, 10, 94, 0, 6, 77, 0, 0, 11, 94, 4, 66, 10, 4, 11, 4, 80, 25, 30, 66, 94, 66, 94, 6, 94, 6, 94, 45, 4, 25, 55, 35, 4, 10, 4, 80, 10, 35, 11, 25, 11, 35, 11, 35, 4, 25, 11, 80, 22, 94, 4, 30, 6, 66, 11, 4, 80, 2, 80, 25, 0, 45, 55, 25};
  int length = 100;
  int i =0, j=0, temp=0, counter=0;
  // Printing the unsorted list
  for(i=0;i<length;i++){
    printf("%d ", data[i]);
  }
  printf("Sorting list.....");
  for(i=0;i<length-1;i++){
    for(j=length-1;j>= 0;j--){
      if(data[j] > data[j+1]){
        temp = data[j];
        data[j] = data[j-1];
        data[j-1] = temp;
        counter++;
      }
    }
  }
  printf("It took %d iterations to sort a list of %d items", counter, length);
  printf("Sorted list:\n");
  for(i=0;i<100;i++)
    printf("%d ", data[i]);
}