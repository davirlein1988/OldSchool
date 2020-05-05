#include <stdio.h>

int main() {
  int list[] = {2,3,4,5,6,746,5,6,8,9,67,89,67,45,34,-2,56};
  int n = 17, item=0, i =0, found=0;
  int counter = 0;
  printf("Which number are you lokking for? ");
  scanf("%d", &item);

  while(!found && i < n) {
    counter++;
    if(item == list[i])
      found = 1;
    else
      i++;
  }
  printf("I did %d Iterations in the list\n", counter);
  if(!found)
    printf("%d is not in this list\n", item);
  else
    printf("I found %d at the position %d in the list\n", item, i);
  return 0;
}