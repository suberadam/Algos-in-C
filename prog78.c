//  Example program to add two matrices of 3 x 2  size
#include <stdio.h>
void main()
{
	int x[3][2], y[3][2], z[3][2], r, c;

	printf("enter 6 values for first matrix ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	printf("\n enter 6 values for second matrix ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&y[r][c]);
		}
	}
	printf("\n the first matrix is ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<2;c++)
		{
			printf("\t%d",x[r][c]);
		}
	}	
	printf("\n the second matrix is ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<2;c++)
		{
			printf("\t%d",y[r][c]);
		}
	}	
	printf("\n the sum matrix is ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<2;c++)
		{
			z[r][c] = x[r][c] + y[r][c];
			printf("\t%d",z[r][c]);
		}
	}	
}

