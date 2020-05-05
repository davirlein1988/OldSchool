#include <stdio.h>
void printd(int);

int main() {
  int times = 0, i, value;
  printf("How manny numbers do you want to convert? \n");
  scanf("%d", &times);
  for (i = 0; i < times; i++) {
    scanf("%d", &value);
    printd(value);
  }
}
/* print n in decimal*/

void printd(int n) {
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n / 10) 
    printd(n/10);
  putchar(n % 10 + '0');
}