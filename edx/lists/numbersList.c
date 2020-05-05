#include <stdlib.h>
#include <stdio.h>

struct digit {
  int num;
  struct digit * next;
};
struct digit * createDigit(int);
struct digit *append(struct digit *, struct digit *);
void printDigits(struct digit *start);
void freeDigit(struct digit *start);
struct digit * readNumber();
struct digit *searchNumber(struct digit *start, int number);
struct digit *reverseNumber(struct digit * start);
struct digit * insertAtFront(struct digit *start, struct digit *newptr);
struct digit *sortList(struct digit* head);
int printRedundancies(struct digit *start);
int main(void) {
  struct digit *start, *found, *backwards, *sorted;
  int searchNum = 5;
  printf("Please enter a number: ");
  start = readNumber();
  printDigits(start);
  found = searchNumber(start, searchNum);
  if(found != NULL) {
    printf("Found digit %d at location %p.\n", searchNum, found);
  } else {
    printf("Digit %d was not found.\n", searchNum);
  }
  backwards = reverseNumber(start);
  printDigits(backwards);

  sorted = sortList(start);
  printf("Sorted list:\n");
  printDigits(sorted);
  printDigits(start);
  printf("Redundancy of digits: %d\n", printRedundancies(start));
  freeDigit(start);
  return 0;
}

struct digit * createDigit(int dig) {
  struct digit *ptr;
  ptr = (struct digit *) malloc(sizeof(struct digit));
  ptr ->num = dig;
  ptr ->next = NULL;
  return ptr;
}
struct digit *append(struct digit *end, struct digit *newDig) {
  end ->next = newDig;
  return (end ->next);
}

void printDigits(struct digit *start) {
  struct digit *dg;
  dg = start;
  while(dg != NULL) {
    printf("%d", dg->num);
    dg = dg->next;
  }
  printf("\n");
}
void freeDigit(struct digit *start) {
  struct digit *dg = start;
  struct digit *temp;
  while(dg != NULL) {
    temp = dg->next;
    free(dg);
    dg = temp;
  }
}

struct digit * readNumber() {
  char c;
  int d;
  struct digit *start, *end, *newptr;
  start = NULL;
  scanf("%c", &c);
  while (c != '\n') {
    d = c - 48;
    newptr = createDigit(d);
    if (start == NULL) {
      start = newptr;
      end = start;
    } else {
      end = append(end, newptr);
    }
    scanf("%c", &c);
  }
  return start;
}
struct digit *searchNumber(struct digit *start, int number) {
  struct digit *ptr = start;
  while((ptr != NULL) && (ptr ->num != number)) {
    ptr = ptr->next;
  }
  return (ptr);
}

struct digit *reverseNumber(struct digit * start) {
  struct digit *ptr = start;
  struct digit *bstart = NULL;
  struct digit *newDigit;
  if(start != NULL) {
    bstart = createDigit(start -> num);
    ptr = ptr->next;
  }
  while (ptr != NULL) {
    newDigit = createDigit(ptr ->num);
    bstart = insertAtFront(bstart, newDigit);
    ptr = ptr ->next;
  }
  return bstart;
}

struct digit * insertAtFront(struct digit *start, struct digit *newptr) {
  newptr->next = start;
  return (newptr);
}
struct digit *insertIntoSorted(struct digit *start, struct digit *newDig) {
  struct digit *ptr = start;
  struct digit *prev = NULL;
  while(ptr != NULL && (ptr -> num < newDig ->num)) {
    prev = ptr;
    ptr = ptr ->next;
  }
  if (prev == NULL) {
    start = insertAtFront(start, newDig);
  } else {
    prev ->next = newDig;
    newDig ->next = ptr;
  }
  return (start);
}
struct digit *sortList(struct digit* start) {
  struct digit * temp = start;
  struct digit *sortedStart = NULL;
  struct digit *newdigit;
  if(start != NULL) {
    sortedStart = createDigit(start ->num);
    temp = temp ->next;
  }

  while(temp != NULL) {
    newdigit = createDigit(temp ->num);
    sortedStart =  insertIntoSorted(sortedStart, newdigit);
    temp = temp ->next;
  }
  return (sortedStart);
}

int printRedundancies(struct digit *start) {
  struct digit *sorted = sortList(start);
  struct digit *ptr = sorted;
  int redundancies = 0;
  int previous = -1;
  while (ptr != NULL) {
    if(ptr->num == previous)
      redundancies++;
    else
      previous = ptr->num;
    ptr = ptr->next;
  }
  freeDigit(sorted);
  return redundancies;
}