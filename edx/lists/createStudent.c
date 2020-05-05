#include <stdio.h>
#include <stdlib.h>

struct student {
  char name[50];
  int age;
  struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);

    freeStudents(start);

    return 0;
}
void freeStudents(struct student *start){
  struct student *std = start;
  struct student *temp;
  while(std != NULL) {
    temp = std->next;
    free(std);
    std = temp;
  }
}
void printStudents(struct student *start) {
  struct student * std;
  std = start;
  while (std != NULL) {
    printf("%s is %d years old.\n", std->name, std->age);
    std = std->next;
  }
}
struct student *append(struct student * end, struct student * newStudptr) {
  end ->next = newStudptr;
  return (end ->next);
}
struct student *createStudent(char name[], int age) {
  struct student *ptr;
  ptr = (struct student *) malloc(sizeof(struct student));
  char *n;
  int counter = 0;
  while(name[counter] != '\0') {
    ptr ->name[counter] = name[counter];
    counter ++;
  }
  ptr ->age = age;
  ptr ->next = NULL;
  return ptr;
}