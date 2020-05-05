#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};
void readPoint(struct point *);
void printPoint(struct point, int);
void printPolygon(struct point * ptr, int);
int main(void) {
  struct point * polygon;
  int i, num;
  printf("How many vertices your polygon has? ");
  scanf("%d", &num);
  polygon = (struct point *) malloc(num * sizeof(struct point));
  for(i = 0; i < num; i++) {
    readPoint(&polygon[i]);
  }
  printPolygon(polygon, num);
  free(polygon);
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

void printPolygon(struct point * ptr, int vertices) {
  int j;
  for(j=0; j< vertices; j++) {
    printPoint(ptr[j], j);
  }
}