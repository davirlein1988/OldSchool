#include <stdio.h>

int main(){
  int num, i, result=0;
  int val;
  char type;
  scanf("%d", &num);
  for(i = 0; i < num; i++) {
    scanf("%d %c", &val, &type);
    if(type == 'i') {
      result += val * 4;
    }else if(type == 'c') {
      result += val;
    } else  if (type == 'd'){
      result += val * 8;
    } else {
      printf("Invalid tracking code type");
      return 0;
    }
  }
  printf("%d %s\n", result, "bytes");
}