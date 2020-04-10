// program to print even numbers from 2 to 20
#include <stdio.h>
void main()
{
	int c;
	for(c=2;c<=20;c=c+2)
		printf("\n %d ",c);
	
	// another method
	for(c=1;c<=20;c++)
		if(c%2==0)
			printf("\n %d ",c);
	
	// another method			
	for(c=1;c<=10;c++)
		printf("\n %d ",c*2);
}

