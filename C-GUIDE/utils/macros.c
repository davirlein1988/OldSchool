#include <stdio.h>

#define max(A,B) ((A) > (B) ? (A) : (B))
#define paste(fron, back) front ## back
#if SYSTEM == SYSV
#define HDR "sysv.h"
#elif SYSTEM == BSD
#define HDR "bsd.h"
#elif SYSTEM == MSDOS
#define HDR "msdos.h"
#else
#define HDR "default.h"
#endif
#include HDR



int main() {
  int p=23, q=345, r=43, s=234;
  int x = max(p+q, r+s);
  printf("The bigest number is %d\n", x);
  return 0;
}