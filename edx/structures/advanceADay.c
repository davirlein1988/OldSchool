#include <stdio.h>
/* This programs received a date in the format YYYY MM DD and advances one day even counting leap years */
struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
int isLeap(int year);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

struct date advanceDay(struct date d) {
  struct date tomorrow;
  if(d.day < 28) {
    tomorrow.day = d.day + 1;
    tomorrow.month = d.month;
    tomorrow.year = d.year;
    return tomorrow;
  }
  if(d.day == 31 && d.month == 12) {
    tomorrow.day = 01;
    tomorrow.month = 01;
    tomorrow.year = d.year + 1;
    return tomorrow;
  }
  switch (d.month)
  {
  case 4:
  case 6:
  case 9:
  case 11:
     if(d.day < 30) {
       tomorrow.day = d.day + 1;
       tomorrow.month = d.month;
       tomorrow.year = d.year;
     } else {
       tomorrow.day = 1;
       tomorrow.month = d.month + 1;
       tomorrow.year = d.year;
     }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
    if(d.day < 31) {
       tomorrow.day = d.day + 1;
       tomorrow.month = d.month;
       tomorrow.year = d.year;
     } else {
       tomorrow.day = 1;
       tomorrow.month = d.month + 1;
       tomorrow.year = d.year;
     }
  case 2:
    if(d.day < 28 && !isLeap(d.year)) {
       tomorrow.day = d.day + 1;
       tomorrow.month = d.month;
       tomorrow.year = d.year;
     } 
     else if (d.day == 28 && isLeap(d.year)) {
       tomorrow.day = d.day + 1;
       tomorrow.month = d.month;
       tomorrow.year = d.year;
     }     
     else {
       tomorrow.day = 1;
       tomorrow.month = d.month + 1;
       tomorrow.year = d.year;
     }  
  default:
    break;
  }

  return tomorrow;
}

void readDate(struct date *date) {
  scanf("%d%d%d", &date -> year, &date -> month, &date -> day);
}

void printDate(struct date dt) {
  printf("%02d/%02d/%d\n", dt.month, dt.day,dt.year);
}

int isLeap(int year) {
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 1;
  }
  else {
    return 0;
  }
}