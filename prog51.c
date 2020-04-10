// program to accept a number and print if it is palindrome number or not
// if a number is equal to its reverse it is palindrome number
// ex 485 reverse is 584 so not palindrome
// ex 484 reverse is 484 so it is a palindrome number
#include <stdio.h>			   
void main()
{
	int n,r,s,t;
	printf("enter a number to test  ");
	scanf("%d",&n);
	t=n;
	s=0;		
	do
	{
		r=n%10;			
		s=s*10+r;		
		n=n/10;				
	}while(n!=0);			
	if(s==t)
		printf("\n palindrome number");
	else
		printf("\n not a palindrome number");
}

