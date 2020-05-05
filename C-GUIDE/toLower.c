#include <stdio.h>
int lower(int);
int main(){
	char c;
	printf("What letter would you like to convert? ");
	scanf("%c",&c);
	printf("\n: %c\n", lower(c));
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

