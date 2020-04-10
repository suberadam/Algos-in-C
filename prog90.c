#include <stdio.h>
void main()
{
	int x[10]={30,55,66,44,68,88,89,65,33,85}, *ptr;    
	int c;
	ptr=&x[0];   		// suppose ptr has 1001
	
	for(c=0;c<=9;c++)
		printf("\n addresss is %u,  value is %d",(ptr+c), *(ptr+c));
}
