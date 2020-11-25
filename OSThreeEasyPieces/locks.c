#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

// This lock may lead to starvation on single CPU 
int TestAndSet(int *old_prt, int new) {
  int old = *old_prt;
  *old_prt = new;
  return old;
}

typedef struct __lock_t {
  int flaf;
} lock_t;

void init(lock_t, *lock) {
  lock->flag = 0;
}

void lock(lock_t, *lock) {
  while(TestAndSet(*lock->flag, 1) == 1)
  ;
}

void unlock(lock_t, *lock){
  lock->flag = 0;
}



