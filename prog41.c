/* write a program to print the following series
	1	4	9	16	25	36	49	64	81	100     */
#include <stdio.h>
void main()
{
	int c, n;
	for(c=1;c<=10;c++)
	{
		printf("\n %d",c*c);
	}
	// another method
	n=1;
	printf("\n %d ",n);
	for(c=1;c<10;c++)
	{
		n=n+c*2+1;
		printf("\n %d",n);
	}
}

