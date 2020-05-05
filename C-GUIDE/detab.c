#include <stdio.h>
#define TAB 8
int main(){
  int position, c, next;
  position = 1;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      next = TAB * (position / TAB) + TAB + 1;
      while (position < next) {
        putchar(' ');
        ++position;
      }
    }
    else if ( c == '\n') {
      putchar(c);
      position = 1;
    }
    else {
      putchar(c);
      ++position;
    }
  }
}