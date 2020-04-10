// example program to print the difference between the reverse of 2 input values
#include <stdio.h>
void main()
{
	int reverse_number(int x);		// function declaration
	void show_difference(int p, int q);		// function declaration
	int a, b, reva, revb;
	printf("enter 2 values ");
	scanf("%d%d",&a,&b);
	reva=reverse_number(a);			// function calling
	revb=reverse_number(b);			// function calling
	show_difference(reva,revb);		// function calling
}
int reverse_number(int x)			// function description
{
	int rev=0, r;
	do
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}while(x!=0);
	return rev;
}
void show_difference(int p, int q)
{
	if(p>q)
		printf("\n difference between %d and %d is %d",p,q,p-q);
	else
		printf("\n difference between %d and %d is %d",p,q,q-p);
}
