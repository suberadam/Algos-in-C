//  program to accept values for starting number (x) and ending number (y),  
//  and print all palindrome numbers between x and y
#include <stdio.h>			   
void main()
{
	int x, y, n, r, s, t, c;
	printf("enter starting number and ending number  ");
	scanf("%d%d",&x,&y);
	for(c=x;c<=y;c++)
	{
		t=n=c;
		s=0;
		do
		{
			r=n%10;			
			s=s*10+r;		
			n=n/10;				
		}while(n!=0);			
		if(s==t)
			printf("\n palindrome number %d",c);
	}
}

