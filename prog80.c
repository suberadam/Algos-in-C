//  Example program USING FUNCTIONS to transpose a matrix of 3 x 2  into 2 x 3
#include <stdio.h>
void main()
{
	int x[3][2], y[2][3], r, c;
    printf("enter 6 values for a matrix ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&x[r][c]);
			y[c][r] = x[r][c];
		}
	}
    printf("\n the given matrix is ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<2;c++)
		{
			printf("\t%d",x[r][c]);
		}
	}
    printf("\n the transpose matrix is ");
	for(r=0;r<2;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf("\t%d",y[r][c]);
		}
	}
}
