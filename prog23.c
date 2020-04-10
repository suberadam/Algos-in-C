// program to identify if a given number is even or odd
#include <stdio.h>
void main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	if(!(n%2==1))	
		printf("even number");
	else
		printf("odd number");
		
/*	if(n%2!=1)
		printf("even number");
	else
		printf("odd number");
		
	if(n%2==1)
		printf("odd number");
	else
		printf("even number");
		
	if (n%2==0)
		printf("even number");
	else
		printf("odd number");  */
}
