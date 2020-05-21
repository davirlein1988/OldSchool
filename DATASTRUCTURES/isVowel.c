#include <stdio.h>
int main() {
  char lt;
  printf("Enter a letter: \n");
  scanf("%c", &lt);
  switch (lt)
  {
  case 'a':
  case  'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    printf("%c is a vowel\n", lt);
    break;
  
  default:
    printf("%c is not a vowel\n", lt);
    break;
  }
}