#include <stdio.h>
void main()
{
	int x;
	printf("enter a number ");
	scanf("%d",&x);
	if(x>0)
		printf("positive number");
	else if (x<0)
		printf("negative number");
	else
		printf("nutral number");
}
