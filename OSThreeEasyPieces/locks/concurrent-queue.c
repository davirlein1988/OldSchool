#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"
#define BUCKETS (101)
typedef struct __node_t {
  int value;
  struct __node_t *next;
} node_t;

typedef struct __queue_t {
  node_t *head;
  node_t *tail;
  pthread_mutex_lock head_lock, tail_lock;
} queue_t;


void Queue_Init(queue_t *q) {
  node_t *temp = malloc(sizeof(node_t));
  temp ->next = NULL;
  q->head = q ->tail = temp;
  pthread_mutex_init(&q->head_lock, NULL);
  pthread_mutex_init(&q ->tail_lock, NULL);
}

void Queue_Enqueue(queue_t *q, int value) {
  node_t *temp = malloc(sizeof(node_t));
  assert(temp != NULL);
  temp ->value = value;
  temp ->next = NULL;
  pthread_mutex_lock(&q ->tail_lock, NULL);
  q ->tail ->next = temp;
  q ->tail = temp;
  pthread_mutex_unlock(&q ->tail_lock, NULL);
}

void Queue_Dequeue(queue_t *q, int *value) {
  pthread_mutex_lock(&q ->head_lock);
  node_t *temp = q ->head;
  node_t *new_head = temp ->next;
  if(new_head == NULL) {
    pthread_mutex_unlock(&q ->head_lock);
    return -1;
  }
  *value = new_head ->value;
  q ->head = new_head;
  pthread_mutex_unlock(&q ->head_lock);
  free(temp);
  return 0;
}


