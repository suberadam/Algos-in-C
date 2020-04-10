/* write a program to print the following series
	5	10	15	20	25	30	35	40	45	50    	*/
#include <stdio.h>
void main()
{
	int c;
	for(c=5;c<=50;c=c+5)
	{
		printf("\n %d",c);
	}
	// another method
	for(c=1;c<=10;c++)
	{
		printf("\n %d",c*5);
	}
}

