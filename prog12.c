// usage of assignment operators
#include <stdio.h>
void main()
{
	int x=6, y=3;
	printf("\n x=%d,  y=%d",x,y);	
	x+=y;     //x=x+y;
	printf("\n x=%d,  y=%d",x,y);
	x-=4;	// x=x-4
	printf("\n x=%d,  y=%d",x,y);	
	x/=3;	// x=x/3
	printf("\n x=%d,  y=%d",x,y);	
	x*=5;	// x=x*5
	printf("\n x=%d,  y=%d",x,y);	
	x%=3;	// x=x%3
	printf("\n x=%d,  y=%d",x,y);	
}
