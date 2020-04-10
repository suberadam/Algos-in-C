// program to accept 5 values into first 2 arrays, calculate totals into the 3rd array
#include <stdio.h>
void main()
{
	int x[5], y[5], z[5], c;

	printf("enter 5 values for first array ");
	for(c=0;c<5;c++)
	{
		scanf("%d",&x[c]);
	}
	printf("enter 5 values for second array ");
	for(c=0;c<5;c++)
	{
		scanf("%d",&y[c]);
	}
	printf("result array ");
	for(c=0;c<5;c++)
	{
		z[c] = x[c] + y[c];
		printf("\n %d\t %d\t %d",x[c], y[c], z[c]);
	}
}
