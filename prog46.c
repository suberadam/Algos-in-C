// example on do-while loop
#include <stdio.h>
void main()
{
	int n,c;
	do
	{
		printf("\n enter a number ");
		scanf("%d",&n);
		if (n%2==0)
			printf("even number ");
		else
			printf("odd number");
	}while(n!=0);
	printf("end of program");
}

