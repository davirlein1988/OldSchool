#include <stdio.h>
/*strlength: returns the length of a string*/

int strlength(char *s) {
  int n;
  for(n = 0; *s != '\0'; s++)
    n++;
  return n;
}

int main() {
  char name[] = "a long string here";
  printf("%s\n", name);
  printf("is %d long\n", strlength(name));
}