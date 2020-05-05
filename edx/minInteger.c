#include <stdio.h>
int min(int a, int b);
int main(){
  int numEntries = 0, i, j, minNum, temp;
  scanf("%d", &numEntries);
  int values[numEntries];
  for(i = 0; i < numEntries;++i){
    scanf("%d", &values[i]);
  }
  minNum = values[0];
  for(j = 0; j < numEntries; j++){
    minNum = min(minNum, values[j]);
  }
  printf("%d\n", minNum);
  return 0;
}

int min(int a, int b){
  if(a >= b)
    return b;
  else
    return a;
}