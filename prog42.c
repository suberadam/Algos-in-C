/* write a program to print the following series
	-20	-18	-16	-14	-12	-10	-8	-6	-4	-2    */
#include <stdio.h>
void main()
{
	int c;
	for(c=-20;c<=-2;c++)
		if(c%2==0)
			printf("\n %d",c);
	// another method
	for(c=-20;c<=-2;c=c+2)
		printf("\n %d",c);  
	// another method
	for(c=10;c>=1;c--)
		printf("\n %d",c*-2);   
	// another method
	for(c=20;c>=2;c=c-2)	
		printf("\n %d",-c);
}

