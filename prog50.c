/*  program to accept a number and print      ex 83762
   - sum of digits at even positions  -------->   9  
   - sum of digits at odd positions   -------->   17    */
#include <stdio.h>			   
void main()
{
	int n,t,c,r,s;
	printf("enter a number to test  ");
	scanf("%d",&n);
	t=n;
	// counting number of digits
	c=0;
	do
	{
		t=t/10;
		c++;
	}while(t!=0);
	// now if number of digits is even digits then given value is ok 
	// otherwise eleminate the last digit (n=n/10) to make it even number of ditits
	if(c%2==1)
		n=n/10;   
	// now calculate the sum 				
	s=0;
	do
	{
		r=n%10;		// get the last digit
		s=s+r;		// add the digit to sum
		n=n/100;	// eleminate last 2 digits
	}while(n!=0);
	printf("\n sum of digits at even positions is %d",s);
}

