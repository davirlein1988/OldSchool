#include <stdio.h>
void format(char, int);

int main() {
  char type;
  int variables;
  scanf("%c%d", &type, &variables);
  format(type, variables);
}

void format(char type, int var) {
  int base;
  int totalBytes;
  int mb, kv;
  switch (type)
  {
  case 's':
    base = sizeof(short);        
    break;
  case 'c':
    base = sizeof(char);
    break;
  case 'i':
    base = sizeof(int);
    break;
  case 'd':
    base = sizeof(double);
    break;  
  default:
    printf("that value is not supported");
    break;
  }
  totalBytes = var * base;
  if(totalBytes < 1000) {
    printf("%d B and ", totalBytes);
  } else if ((totalBytes >= 1000) && (totalBytes < 1000000)) {
    kv = totalBytes / 1000;
    totalBytes % 1000 > 0 ? printf("%d KB and %d B\n", kv, totalBytes % 1000) :  printf("%d KB\n", kv);    
  } else if (totalBytes >= 1000000) {
    mb = totalBytes / 1000000;
    kv = totalBytes % 1000000;
    printf("%d MB and ", mb);
    printf("%d KB and %d B\n", (kv/1000), (kv % 1000));
  }
}