#include <stdio.h>

int main() {
  int i, count, length;
  char text[] = "this is my super long string to check its vowoooaaauuiieeels inside this all thing";
  for(i = 0; text[i] != '\0'; ++i) {
    switch(text[i]) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        count++;
        break;
      default:
        break;
    }
  }
  printf("There are %d vowels in the text\n", count);
}