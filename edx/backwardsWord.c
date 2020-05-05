#include <stdio.h>

int main() {
  char doc[68][40];
  int i, j;
  for(i = 0; i < 68; i++) {
    scanf("%s", &doc[i]);
  }
  for(j = 67; j >= 0; j--) {
    printf("%s ", doc[j]);
  }
}