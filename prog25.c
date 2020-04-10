// program to identify if a given number is single digit or not 
#include <stdio.h>
void main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	if (n>=-9 && n<=9)
		printf("single digit");
	else
		printf("not a single digit");	
}
