// write a program to accept 10 values and print each value along with word even or odd
#include <stdio.h>
void main()
{
	int x[10], c;
	//accepting 10 values
	for(c=0;c<10;c++)
	{
		printf("enter a value ");
		scanf("%d",&x[c]);
	}
	
	for(c=0;c<10;c++)
	{
		printf("\n %d is ",x[c]);
		if (x[c]%2 == 0)
			printf("even");
		else
			printf("odd");
	}	
}
