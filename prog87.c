// example program using pointers to accept 2 values and add them
#include <stdio.h>
void main()
{
	int x,y,z,*p,*q,*r;
	p=&x;
	q=&y;
	r=&z;
	printf("enter 2 values ");
	scanf("%d%d",p,q);
	*r = *p + *q;
	printf("\n x value is %d, y value is %d, sum is %d",*p,*q,*r);
}
