// program to identify if a given number is even or odd
#include <stdio.h>
void main()
{
	int n, d;
	printf("enter a number ");
	scanf("%d",&n);
	d=n%10;
	if (d==1 || d==3 || d==5 || d==7 || d==9)
		printf("odd number");
	else
		printf("even number");	
}
