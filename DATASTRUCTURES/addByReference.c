#include <stdio.h>

void add(int *, int *, int *);
int main(int argc, char const *argv[])
{
  int num, addition, result;
  printf("Enter a positive number followed by the sum to add them together:\n");
  scanf("%d%d", &num, &addition);
  add(&num, &addition, &result);
  printf("The sum of %d and %d is: %d\n",num, addition, result);
  return 0;
}

void add(int *num, int *addition, int *result) {
  *result = *num + *addition;
}
