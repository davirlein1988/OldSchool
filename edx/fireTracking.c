#include <stdio.h>
#include <stdlib.h>
int ** allocateIntStarArray(int);
int * allocateIntArray(int);
int main() {
  int columns, rows, i, j;
  int **col, *r;
  scanf("%d%d", &columns, &rows);
  col = allocateIntStarArray(rows);

  for(i = 0; i < rows; i++) {
    col[i] = allocateIntArray(columns);
  }
  for(i=0; i<rows; i++) {
    for(j=0; j< columns; j++) {
      scanf("%d", &col[i][j]);
    }
  }
  char sign = ' ';
  for(i=0;i<rows; i++) {
    for(j =0; j< columns; j++) {
      int item = col[i][j];
      if(item >= 100 && item <= 1000) {
        sign = '*';
      } else if (item > 1000) {
        sign = 'X';
      } else {
        sign = ' ';
      } 
      printf("[%c]", sign);
    }
    printf("\n");
  }
  free(col);
  return 0;
}
int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}
int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}