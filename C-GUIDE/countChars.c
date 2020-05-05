#include <stdio.h>

int main() {
  long nc;
  nc = 0;

  while(getchar() != EOF || '\n')
    nc++;
     printf("%ld", nc);
  printf("Final: %ld", nc);  

}