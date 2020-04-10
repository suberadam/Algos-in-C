// counting number of elements, number of eligible to vote and not eligible to vote
#include <stdio.h>
void main()
{
	int age[]={10,5,6,19,19,20,8,10,28,25,29}; 
	int c, n, eligible=0, noteligible=0;
	n = sizeof(age)/sizeof(age[0]);	//	no. of elements = sizeof(array) / sizeof(first element of array)
	printf("\n number of members %d",n);
	for(c=0;c<n;c++)
	{
		printf("\n %d",age[c]);
		if (age[c] > 18)
			eligible++;
		else
			noteligible++;
	}	
	printf("\n Eligible count %d, Not eligible count %d", eligible, noteligible);
}

