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
int main(void) {
  struct digit *start, *found, *backwards;
  int searchNum = 5;
  printf("Please enter a number: ");
  // int num, i, entry;
  // printf("How many digits do you want to save? \n");
  // scanf("%d", &num);
  // for(i = 0; i < num; i++) {
  //   printf("Enter your %d digit:", i);
  //   scanf("%d", &entry);
  //   if(i == 0) {
  //     start = createDigit(entry);
  //     end = start;
  //   } else {
  //     newDigitPtr = createDigit(entry);
  //     end = append(end, newDigitPtr);
  //   }
  // }
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
  struct digit *bstart;
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