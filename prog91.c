// program to add all 10 values given by the user using arrays and pointer to arrays
#include <stdio.h>
void main()
{
	int x[10], *ptr, c, sum, *q;
	ptr=&x[0];   		// suppose ptr has 1001
	q=&sum;
	*q=0;			//sum=0
	for(c=0;c<10;c++)
	{
		printf("enter a value ");
		scanf("%d",(ptr+c));
		*q = *q + *(ptr+c);
	}
	printf("sum is %d",*q);
}
