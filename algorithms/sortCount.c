#include <stdio.h>
int main(){
  char word[51];
  int j=0,i=0,temp=0,counter=0, length=0, l=0, k=0,w=0, repeated=0;
  scanf("%s", word);

  while(word[l] != '\0')
  {
    length++;
    l++;
  }
  for(i=0; i<length-1;i++){
    for(j=length-1;j>=0;j--){
      if(word[j] < word[j-1]){
        temp = word[j];
        word[j] = word[j-1];
        word[j-1] = temp;
      }
    }
  }

  for(k=0;k<length-1;k++){
    if(word[k] == word[k+1] && word[k+1] != repeated){
        counter++;
        repeated =word[k+1];
      }
  }
  printf("\n%d", counter);

}