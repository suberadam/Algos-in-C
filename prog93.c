// program using call by value (passing values to functions)
#include <stdio.h>
void main()
{
	int a,b,c,b1,b2,b3;
	int get_biggest(int x, int y);
	printf("enter 3 values ");
	scanf("%d%d%d",&a,&b,&c);
	b1=get_biggest(a,b);			// passing values    call by value	
	b2=get_biggest(a,c);
	b3=get_biggest(b,c);
	printf("\n biggest of %d and %d is %d",a,b,b1);
	printf("\n biggest of %d and %d is %d",a,c,b2);
	printf("\n biggest of %d and %d is %d",b,c,b3);
}

int get_biggest(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}
