// Nested for loop : a for loop given inside another for loop is nested for loop
// The inner loop executes for every value of outer loop
#include <stdio.h>
void main()
{
	int c,d;
	for(c=1;c<=3;c++)
	{
		printf("\n");
		for(d=1;d<=5;d++)
		{
			printf("\n hello");
		}
	}
}
