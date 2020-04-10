// program to accept a number and print number of digits in it 
#include <stdio.h>			   
void main()
{
	int n,c;
	printf("enter a number to test  ");
	scanf("%d",&n);
	c=0;
	do
	{
		n=n/10;
		c++;
	}while(n!=0);
	printf("\n number of digits %d",c);
}
