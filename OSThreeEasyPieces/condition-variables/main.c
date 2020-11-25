#include <stdio.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

static volatile int done = 0;

void *child(void *arg)
{
  printf("child: \n");
  done = 1;

  return NULL;
}

// create three threads and wait for them

int main(int argc, char *argv[])
{
  printf("parent : begin\n");
  pthread_t c;
  Pthread_create(&c, NULL, child, NULL);
  while(done == 0)
  ;
  // join them
  // Pthread_join(c, NULL);
  printf("parent : done \n");
  return 0;
}

//gcc -o main main.c -Wall -pthread; ./main
// every time we run the ./main function we get a different result of the counter, this brings us to the problem of uncontrolled scheduling