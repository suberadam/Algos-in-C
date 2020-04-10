#include <stdio.h>
#include <string.h>
void main()
{	
	char x[10]="RAmesh.", y[10]="RAMESH.";
	int i;
// There are 256 ASCII codes  numbered from	0 to 255  
//  A-Z  65-90      a-z  97-122      0-9  48-57   
//	if (x==y)	// error    cannot compare character arrays using == 
/*	strcmp(x,y);	this function will return the difference between the ASCII codes.
					if the difference is -ve value, it means string1 < string2
					if the difference is +ve value, it means string1 > string2
					if the difference is 0 value, it means string1 == string2		  */
	if(strcmpi(x,y)==0)
		printf("both strings are same");
	else
		printf("both strings are not same");
	
	int x=65;
	printf("%d   %c",x,x);		// 65   A
	
	char x='A';
	printf("%d",x);		//   65
	
	for(i=0;i<=255;i++)
	{
		printf("\t %d   %c", i, i);
	}
}
