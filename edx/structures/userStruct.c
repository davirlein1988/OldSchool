#include <stdio.h>

struct user
{
  char firstName[30];
  char lastName[30];
  int birthYear;
  char month[20];
  int day;
  double gpa;
};
void printUser(struct user usr);
void readUser(struct user *usr);
int main(void) {
  struct user learner;
  struct user me = {
    "Lein", 
    "Davir",
    1989,
    "December",
    14,
    3.68
  };

  readUser(&learner);
  printUser(learner);
  printUser(me);
}

void printUser(struct user usr) {
  printf("\n%s %s %d %s %d %.2lf\n", usr.firstName, usr.lastName, usr.birthYear, usr.month, usr.day, usr.gpa);

}
void readUser(struct user *usr) {
  printf("Enter First name:\n");
  scanf("%s", (*usr).firstName);
  printf("Enter last name:\n");
  scanf("%s", (*usr).lastName);
  printf("Enter birth date: year month day format:\n");
  scanf("%d%s%d", &(*usr).birthYear, (*usr).month, &(*usr).day);
  printf("enter GPA\n");
  scanf("%lf", &(*usr).gpa);
}
