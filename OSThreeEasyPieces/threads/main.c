#include <stdio.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

static volatile int counter = 0;

void *mythread(void *arg)
{
  printf("%s: begin\n", (char *)arg);
  int i;
  for (i = 0; i < 1e8; i++)
  {
    counter = counter + 1;
  }
  printf("%s: done\n", (char *)arg);
  return NULL;
}

// create three threads and wait for them

int main(int argc, char *argv[])
{
  pthread_t p1, p2, p3;
  printf("main : begin (counter = %d)\n", counter);
  Pthread_create(&p1, NULL, mythread, "A");
  Pthread_create(&p2, NULL, mythread, "B");
  Pthread_create(&p3, NULL, mythread, "C");
  // join them
  Pthread_join(p1, NULL);
  Pthread_join(p2, NULL);
  Pthread_join(p3, NULL);
  printf("main : done with all (counter = %d)\n", counter);
  return 0;
}

//gcc -o main main.c -Wall -pthread; ./main
// every time we run the ./main function we get a different result of the counter, this brings us to the problem of uncontrolled scheduling