#include <stdio.h>
#include <math.h>
const  int  RATE = 22.0;
const float COMP_RATE = 0.05;
const int COMP_FREQUENCY = 12;
int main() {
  int amount, days, months, years;
  float interest, total, ctotal;
  printf("the interst rate is 22 percent in a yearly base\n");
  printf("Enter the amount to be loaned: \n");
  scanf("%d", &amount);
  printf("Enter the days when you will pay:\n");
  scanf("%d", &days);
  interest = (22.0 / 365) * days;
  total = amount + (amount * interest) / 100;
  printf("Under Simple interest you need to pay: %.2f\n", total);
  printf("Compounded results:\n");
  months = days / 30;
  years = days / 365;
  ctotal = amount * pow((1 + COMP_RATE / COMP_FREQUENCY), (float)(COMP_FREQUENCY * years));
  printf("Compund interest would be: %f\n", ctotal);
  printf("Total to pay will be %f\n", amount + ctotal);
}git 