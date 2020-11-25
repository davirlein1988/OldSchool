#include <stdio.h>

int flag[2];
int turn;

void init() {
  flag[0] = flag[1] = 0;
  turn = 0;
}

void lock() {
  flag[self] = 1;
  turn = 1 - self;
  while((flag[1 - self]) == 1 && (turn == 1 - self))
  ;
}

void unlock() {
  flag[self] = 0;
}