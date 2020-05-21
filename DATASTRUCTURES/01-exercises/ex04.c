#include <stdio.h>
int main() {
  char street[50], number[50], city[50];
  int zip;
  printf("Enter your address int the form street, number, city, zip\n");
  scanf("%s%s%s%d", street, number, city, &zip);
  printf("Your address is %s\n %s\n %s\n %d \n", street, number,city, zip);
  return 0;
}