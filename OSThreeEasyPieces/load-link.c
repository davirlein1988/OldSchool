#include <stdio.h>

int LoadLink(int *ptr) {
  return *ptr;
}

int StoreConditional(int *prt, int value) {
  if(/*no update to ptr*/ (*ptr -> flag) != value) {
    *ptr = value;
    return 1
  } else {
    return 0;
  }
}

void lock(lock_t *lock) {
  while(1) {
    while(LoadLink(&lock->flag) == 1)
    ;
    if(StoreConditional(*lock -> flag, 1) == 1)
    return;
  }
}

void unlock(lock_t *lock) {
  *lock -> flag = 0;
}