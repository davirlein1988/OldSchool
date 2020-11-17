#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

void *mythread(void *arg)
{
  printf("%s\n", (char *)arg);
  return NULL;
}

int main(int argc, char *argv[])
{
  pthread_t p1, p2, p3;
  int rc;
  printf("main: begin \n");
  Pthread_create(&p1, NULL, mythread, "A");
  Pthread_create(&p2, NULL, mythread, "B");
  Pthread_create(&p3, NULL, mythread, "C");
  Pthread_join(p1, NULL);
  Pthread_join(p2, NULL);
  Pthread_join(p3, NULL);
  printf("main ends:\n");
  return 0;
}

//gcc -pthread -o thread thread.c