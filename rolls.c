#include <stdio.h>

int main(){
    int numRolls, i, red=0,yellow=0,green=0;
    double avg = 0.0;
    int together=0;
    scanf("%d", &numRolls);
    for (i=1;i<= numRolls;i++){
      scanf("%d %d %d", &red, &yellow, &green);
      printf("%d", i);
      together =((green*100)+(yellow*10)+red);
      avg = (avg + together) / i;
      printf("%d. you rolled: %d, current average: %.1lf\n",i, together, avg);
    }
}