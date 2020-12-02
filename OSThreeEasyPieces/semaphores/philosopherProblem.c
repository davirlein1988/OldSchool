#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

void get_forks(int p)
{
  if (p == 4)
  {
    sem_wait(&forks[right(p)]);
    sem_wait(&forks[left(p)]);
  }
  else
  {
    sem_wait(&forks[left(p)]);
    sem_wait(&forks[right(p)]);
  }
}

void put_forks(int p)
{
  sem_post(&forks[left(p)]);
  sem_post(&forks[right(p)]);
}