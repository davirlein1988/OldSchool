#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
	int count = 0;
  while (card_name[0] != 'Q') 
  {
    puts("enter a card name: ");
    scanf("%3s", card_name);
    int val = 0;
    switch (card_name[0])
    {
    case 'Q':
    case 'K':
    case 'J':
    case 'q':
    case 'k':
    case 'j':
      val = 10;
      break;
    case 'A':
    case 'a':
      val = 11;
      break;
    case 'X':
      puts("Not a valid card");
      continue;    
    default:
    val = atoi(card_name);
    if((val < 1) || (val > 10))
      {
        puts("Not a valid card");
        continue;
      }
    }
    if ((val > 2) && (val < 7))
    {
      count++;
    }
    else if ((val > 9) && (val < 11))
    {
      count--;
    }
    printf("Current count is: %i\n", count);
  }
  return 0;
}
