// program to accept 2 values and print them before and after swapping
#include <stdio.h>
void main()
{
	int x, y, t;
	printf("enter 2 values ");
	scanf("%d%d",&x,&y);
	printf("\n before swapping x=%d, y=%d",x,y);
//	t = x;     // using a 3rd variable
//	x = y;
//	y = t;
	x=x+y;     // without using 3rd variable
	y=x-y;
	x=x-y;
	printf("\n after swapping x=%d,  y=%d",x,y);	
}
