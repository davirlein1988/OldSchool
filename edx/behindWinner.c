#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * scores, int players) {
  int max = 0, i, j;
  for(i = 0; i < players; i++) {
    if(scores[i] > max)
      max = scores[i];
  }
  for(j = 0; j < players; j++) {
    int temp = max - scores[j];
    scores[j] = temp;
  }
}