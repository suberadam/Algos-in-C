//  Example program USING FUNCTIONS to transpose a matrix of p x q into q x p
#include <stdio.h>
void main()
{
	int x[10][10], y[10][10], r, c, p, q;
	printf("enter the number of rows and columns needed ");
	scanf("%d%d",&p,&q);
    printf("\nenter %d values for a matrix ",p*q);
	for(r=0;r<p;r++)
	{
		for(c=0;c<q;c++)
		{
			scanf("%d",&x[r][c]);
			y[c][r] = x[r][c];
		}
	}
    printf("\n the given matrix is ");
	for(r=0;r<p;r++)
	{
		printf("\n");
		for(c=0;c<q;c++)
		{
			printf("\t%d",x[r][c]);
		}
	}
    printf("\n the transpose matrix is ");
	for(r=0;r<q;r++)
	{
		printf("\n");
		for(c=0;c<p;c++)
		{
			printf("\t%d",y[r][c]);
		}
	}
}
