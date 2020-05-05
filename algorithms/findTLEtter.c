#include <stdio.h>

int main(){
  int i=0;
  int j =0;
  char word[50];
  int middle = 0;
  int length = 0;
  int found = 0;
  int k = 0;
  scanf("%s", word);
  while(word[i] != '\0') {
    length++;
    i++;
  }
  middle = length /2;

  for(j=0; j<= middle; j++){
    found = 0;
    if(word[j] == 't' || word[j] == 'T'){
      printf("%d\n",1);
      found = 1;
    }
  
  }
  for(k = length; k > middle; k--) {
    found = 0;
    if(word[k] == 'T' || word[k] == 't') {
      printf("%d\n",2);
      found = 1;
    }
  }

  if(!found)
    printf("%d", -1);
}