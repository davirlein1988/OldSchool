
#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"
#include "concurrent-list.c"


typedef struct __hash_t {
  list_t lists[BUCKETS];
} hash_t;


void Hash_Init(hash_t *H) {
  int i;
  for(i = 0; i < BUCKETS; i++) {
    List_Init(&H ->lists[i]);
  }
}

int Hash_Insert(hash_t *H, int key) {
  return List_Insert(&H ->lists[key * BUCKETS], key);
}

int Hash_Lookup(hash_t *H, int key) {
  return List_Lookup(&H ->lists[key * BUCKETS], key);
}
