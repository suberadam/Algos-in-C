/*   program to accept a number and print      ex 83762
   - sum of even digits		------------------>   16	
   - sum of odd digits      ------------------>   10    */
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
		if(r%2==1)		// for sum of even digits compare with 0
			s=s+r;
		n=n/10;
	}while(n!=0);
	printf("\n sum of odd digits %d",s);
}

// you write
