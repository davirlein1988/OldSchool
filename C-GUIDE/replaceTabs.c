#include <stdio.h>

int main() {
  int tab, bc;
  while ((bc = getchar()) != EOF) 
  {
    if ( bc == '\t') {
      tab = '\b';
      putchar(tab);
    }
    if (bc == '\b') {
      tab = '\t';
      putchar(tab);
    }
  }
  
}