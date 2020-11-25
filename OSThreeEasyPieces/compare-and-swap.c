#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

// a better alternative lock for multiple CPU

int CompareAndSwap(int *ptr, int expected, int new) {
  int original = *ptr;
  if(original == expected) {
    *ptr = new;
  }
  return original;
}

typedef struct __lock_t {
  int flaf;
} lock_t;

void init(lock_t, *lock) {
  lock->flag = 0;
}

void lock(lock_t *lock) {
  while(CompareAndSwap(*lock -> flag, 0, 1) == 1)
  ;
}

void unlock(lock_t, *lock){
  lock->flag = 0;
}