#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *date) {
  scanf("%d%d%d", &(*date).year, &(*date).month, &(*date).day);
}

void printDate(struct date dt) {
  printf("%02d/%02d/%d", dt.month, dt.day,dt.year);
}