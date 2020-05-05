#include <stdio.h>

int main() {
  char c;
  int i;
  double d;
  char listChar[3];
  int listInt[3];
  double listDouble[3];

  printf("%zu bites\n", sizeof(listChar));
  printf("%zu bites\n", sizeof(listInt));
  printf("%zu bites\n", sizeof(listDouble));
}