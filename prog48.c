// program to accept a number and print sum of digits in it 
// if input is given as 8375 ---output---> 23  (sum of digits)
#include <stdio.h>			   
void main()
{
	int n,r,s;
	printf("enter a number to test  ");
	scanf("%d",&n);
	s=0;
	do
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}while(n!=0);
	printf("\n sum of digits %d",s);
}

