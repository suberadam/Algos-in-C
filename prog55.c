// program to calculate the poisitive difference between 2 input values
// 7 and 4  diff should be 3    or    4 and 7   diff should be 3  not -3
#include <stdio.h>
void main()
{
	int get_difference(int p, int q);		// function declaration
	int x,y,z;
	printf("enter 2 values ");
	scanf("%d%d",&x,&y);
	z=get_difference(x,y);			// function calling
	printf("the difference is %d",z);
}
int get_difference(int p, int q)		// function description
{
	int d;
	if (p>q)
		d=p-q;
	else
		d=q-p;
	return d;
}

