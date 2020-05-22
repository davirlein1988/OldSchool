#include <stdio.h>
const  int  RATE = 22.0;
int main() {
  int amount, days;
  float interest, total;
  printf("the interst rate is 22 percent in a yearly base\n");
  printf("Enter the amount to be loaned: \n");
  scanf("%d", &amount);
  printf("Enter the days when you will pay:\n");
  scanf("%d", &days);
  interest = (22.0 / 365) * days;
  total = amount + (amount * interest) / 100;
  printf("Under Simple interest you need to pay: %.2f\n", total);

}