//  Example program USING FUNCTIONS to add two matrices of 3 x 2  size
#include <stdio.h>
void main()
{
	int x[3][2], y[3][2], z[3][2], r, c;
	
	void accept_array(int a[3][2], int p, int q);		// function declaration
	void show_array(int a[3][2], int p, int q);		// function declaration
	
	printf("enter 6 values for first matrix ");
	accept_array(x,3,2);		// function calling
	
	printf("\n enter 6 values for second matrix ");
	accept_array(y,3,2);		// function calling
	
	printf("\n the first matrix is ");
    show_array(x,3,2);		// function calling
    
	printf("\n the second matrix is ");
    show_array(y,3,2);		// function calling
    
   	for(r=0;r<3;r++)
		for(c=0;c<2;c++)
			z[r][c] = x[r][c] + y[r][c];

	printf("\n the sum matrix is ");
    show_array(z,3,2);		// function calling
}
void accept_array(int a[3][2], int p, int q)		// function description
{
	int r,c;
	for(r=0;r<p;r++)
	{
		for(c=0;c<q;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
}
void show_array(int a[3][2], int p, int q)		// function description
{
	int r,c;
	for(r=0;r<p;r++)
	{
		printf("\n");
		for(c=0;c<q;c++)
		{
			printf("\t%d",a[r][c]);
		}
	}
}
