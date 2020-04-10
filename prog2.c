// sample program to perform calculation with user input values
#include <stdio.h>
void main()
{
	float cost, amount;
	int qty;
	printf("enter the cost ");
	scanf("%f",&cost);
	printf("enter quantity ");
	scanf("%d",&qty);
	amount=cost*qty;
	printf("\n cost of product is %f",cost);
	printf("\n quantity is %d",qty);
	printf("\n total amount is %f",amount);
}

