// program to identify if a given number is two digit or not 
#include <stdio.h>
void main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
//	if ((n>=-99 && n<=-10) || (n>=10 && n<=99))
	if((n>=-99 && n<=99) && !(n>=-9 && n<=9))
		printf("two digit number");
	else
		printf("NOT a two digit number");	
}
