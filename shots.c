#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int stock = 180;
	int order;
	while(stock > 0) {
		printf("%i glasses left\n", stock);
		scanf("%i", &order);
		stock = stock - order;
		printf("you ordered %i glasses\n", order);
		printf("Pointer info %p: \n", &order);
	}
	puts("We are out of stock!!");
	return 0;
}


