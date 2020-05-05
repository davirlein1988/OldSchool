#include <stdio.h>

int main()
{
  int list[] = {0, 2, 4, 5, 6, 9, 10, 11, 22, 25, 30, 35, 45, 55, 66, 77, 80, 94, 100};
  int n = 19;
  int low = 0;
  int top = 19;
  int middle = 0;
  int item = 0;
  int found = 0;
  printf("What item are we looking for?\n");
  scanf("%d", &item);
  while(!found && (low <= top))
  {
    middle = (low + top) / 2;
    if(item == list[middle])
      found = 1;
    else if (item < list[middle])
      top = middle -1;
    else
      low = middle + 1;
  }
  if (!found)
  {
    printf("Number %d was not found in the list...", item);
  }
  else
    printf("Number %d was found in the list at position %d\n", item, middle);

}