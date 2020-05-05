#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
  struct point * next;
};
void printPoint(struct point *);
struct point * append(struct point *, struct point *);
struct point * createPoint(int, int);
void freePoints(struct point *);

int main(void) {
  struct point * start, *end, *newpt;
  int num, i, x, y;
  printf("How many points? \n");
  scanf("%d", &num);
  for(i = 0; i < num; i++) {
    printf("x-coordinate: ");
    scanf("%d", &x);
    printf("y-coordinate: ");
    scanf("%d", &y);
    newpt = createPoint(x, y);
    if(i == 0) {
      start = end = newpt;
    } else {
      end = append(end, newpt);
    }
  }
  printf("You entered: \n");
  printPoint(start);
  return 0;
}

void printPoint(struct point * start) {
  struct point * ptr;
  ptr = start;
  while(ptr != NULL) {
    printf("[%d %d]\n", ptr ->x, ptr ->y);
    ptr = ptr ->next;
  }
}
struct point * append(struct point * end, struct point * newItem) {
  end -> next = newItem;
  return (end -> next);
}

struct point * createPoint(int x, int y) {
  struct point *ptr;
  ptr = (struct point *)malloc(sizeof(struct point));
  ptr ->x = x;
  ptr -> y = y;
  ptr ->next = NULL;
  return (ptr);
}
void freePoints(struct point * start) {
  struct point *ptr = start;
  while(ptr != NULL) {
    start = ptr;
    ptr = ptr -> next;
    free(start);
  }
}