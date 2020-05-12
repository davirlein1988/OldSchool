#include <libjpeg.h>
#include <stdio.h>

int main() {
  printf("gcc -std=c11 -Wall -fmax-errors=10 vizplus.c.c -ljpeg -o vizplus\n");
  return 0;
}