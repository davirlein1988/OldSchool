#include <stdio.h>

void add(int *, int *);
int main(int argc, char const *argv[])
{
  int num, addition;
  printf("Enter a positive number followed by the sum to add them together:\n");
  scanf("%d%d", &num, &addition);
  add(&num, &addition);
  printf("The final result is: %d\n", num);
  return 0;
}

void add(int *num, int *addition) {
  *num = *num + *addition;
}
