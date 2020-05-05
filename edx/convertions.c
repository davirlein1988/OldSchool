#include <stdio.h>
void compute(double val, char *letter);

int main(){
  int convertions, i=0, j=0; 
  double value = 0;
  char entry;
  char type[100];
  char measure[convertions];
  double values[convertions];
  scanf("%d", &convertions);
  for(i = 0; i < convertions; i++ ) {
    scanf("%lf%s",&value, type);
    compute(value, type);
  }


}

void compute(double value, char *ch){
  double meter = 3.2808;
  double gram =  0.002205;
  double result = 0;
  int x = 0;
  double fahh = 32 + 1.8 * value;
  if(*ch == 'm'){
    result = value * meter;
    printf("%lf %s\n", result, "ft");
  }
  if(*ch == 'g') {
    result = value * gram;
    printf("%lf %s\n", result, "lbs");
  }
  if(*ch == 'c') {
    printf("%lf %s\n", fahh, "f");
  }
}