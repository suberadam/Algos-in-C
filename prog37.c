// program to accept and print if a number is even or odd for 5 times
#include <stdio.h>
void main()
{
	int n, c;
	for(c=1;c<=5;c++)
	{
		printf("\n enter a number ");
		scanf("%d",&n);
		if (n%2==0)
			printf("even number");
		else
			printf("odd number");
	}
}
