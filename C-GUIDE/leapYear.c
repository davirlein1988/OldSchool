#include <stdio.h>

int main() {
  int year = 0, entry;
  printf("What year do you want to check: \n");
  scanf("%d", &entry);
  year = entry;
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    printf("--> %d It's a leap year\n", year);
  else
    printf("--> %d Is not a leap year\n", year);
}