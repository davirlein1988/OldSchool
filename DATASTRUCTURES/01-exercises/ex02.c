#include <stdio.h>

int main() {
  int count = 0;
  for (int i = 0; i < 200; ++i ) {
    if(i%2 == 0)
      count++;
  }
  printf("There are %d even number between 1 and 200\n", count);
  return 0;
}