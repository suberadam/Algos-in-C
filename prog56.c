// example program to print if a given value is even or odd using functions
#include <stdio.h>
void main()
{
	void show_evenodd(int x);
	int a;
	printf("enter a value ");
	scanf("%d",&a);
	show_evenodd(a);
}
void show_evenodd(int x)
{
	if (x%2==0)
		printf("even number");
	else
		printf("odd number");
}
