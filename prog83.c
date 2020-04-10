// string functions  examples
#include <stdio.h>
#include <string.h>
void main()
{
	char x[40], y[40];
    printf("enter a string ");
	gets(x);
	printf("enter another string ");
	gets(y);
//	printf("\n %d",strlen(x));
//	printf("\n %s",strupr(x));
//	printf("\n %s",strlwr(x));
//	printf("\n %s",strrev(x));
	printf("\n x value %s",x);
	printf("\n y value %s",y);
	strcat(x,y)	;
	printf("\n after x value %s",x);
	printf("\n after y value %s",y);
}
