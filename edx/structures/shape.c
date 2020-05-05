#include <stdio.h>

struct point {
  int x;
  int y;
};
void readPoint(struct point *);
void printPoint(struct point, int);
void shape(struct point *, int);
int main(void) {
  struct point rectangle[4];
  int i, j;
  for(i = 0; i < 4; i++) {
    readPoint(&rectangle[i]);
    // another way to access the shape
    (rectangle + 3)-> y = 444;
  }
  shape(rectangle, 4);
  
  return 0;
}

void readPoint(struct point * ptr) {
  printf("Enter a new point: \n");
  printf("x-coordinate: ");
  scanf("%d", &ptr -> x);
  printf("y-coordinate: ");
  scanf("%d", &ptr -> y);
}

void printPoint(struct point pt, int p) {
  printf("Point %d: [%d : %d]\n",p, pt.x, pt.y);
}

void shape(struct point * ptr, int sides) {
  int j;
  for(j=0; j< sides; j++) {
    printPoint(ptr[j], j);
  }
}