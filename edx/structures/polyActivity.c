#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
  struct point * polygon;
  int i, num;
  printf("Number of vertice? \n");
  scanf("%d", &num);
  polygon = (struct point *) malloc(num * sizeof(struct point));
  initializePoly(polygon, num);
  printPoly(polygon, num);
  free(polygon);
  return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * polygon, int sides) {
  int i;
  for(i=0; i < sides; i++) {
    scanf("Enter x: %d", &polygon ->x);
    polygon[i].x = -1 * i;
    scanf("Enter y: %d", &polygon -> y);
    polygon[i].y = i * i;
  }
}