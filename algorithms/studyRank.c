#include <stdio.h>
#include <string.h>

int main(void) {
  int entries = 0;
  int i,j,k,l, temp, n,m;
  int grade;
  scanf("%d", &entries);
  printf("I read: %d \n", entries);
  char grades[entries];
  char names[entries][50], name[50];
  for(i=0; i<entries; i++) {
    scanf("%d",&grade);
    grades[i] = grade;
  }
  for(k=0;k<entries;k++){
    scanf("%s", names[k]);
  }

  for(j=0;j<entries;j++){
    printf("Num: %d\n", grades[j]);
  }

  for(l =0; l< entries;l++){
    printf("Name: %s\n", names[l]);
  }
  for(n=entries-1;n>=0;n--){
    for(m=entries-1;m>=0;m--){
      if(grades[m] < grades[m-1]){
        temp = grades[m];
        strcpy(name, names[m]);
        grades[m] = grades[m-1];
        strcpy(names[m], names[m-1]);
        grades[m-1] = temp;
        strcpy(names[m], name);
      }
    }
  }
  for(j=0;j<entries;j++){
    printf("Num sorted: %d\n", grades[j]);
  }
  for(l =0; l< entries;l++){
    printf("Nam sorted: %s\n", names[l]);
  }
  int counter = 1;
  for(j=entries-1;j>=0;j--){
    printf("%s Rank is: %d\n", names[j], counter);
    counter++;
  }
}

