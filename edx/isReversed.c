#include <stdio.h>

int  isReverse(char *s1, char *s2);
int main() {
  char str1[99], str2[99];
  int result = 0;
  scanf("%s%s", str1, str2);
  result = isReverse(str1, str2);
  result ? printf("%s is the reverse of %s", str1, str2) : printf("%s is not the reverse of %s", str1, str2);
}

int isReverse(char *str1, char *str2) {
  int h,i=0, j=0, k;
  int length1, length2, test = 0;
  while(str1[i] != '\0') {
    length1++;
    i++;
  }
  while(str2[j] != '\0') {
    length2++;
    j++;
  }
  
  if (length1 != length2) return 0;
  for(k = 0, h = length2; k < length1, h > 0; k++, h--) {
    if(str1[k] == str2[h]) {
      test = 1;
    }
  }
  return test;
}