// program to compare character input values
#include <stdio.h>
void main()
{
	char gender;
	printf("enter gender m/f    ");
	scanf("%c",&gender);
	if(gender=='m' || gender=='M')
		printf("male");
	else if (gender=='f' || gender=='F')
		printf("female");
	else
		printf("invalid input");
}
/*  if (gender=='m' || gender=='M' || gender=='f' || gender=='F' || gender=='o')
		printf("valid");
	else
		printf("invalid");  */
