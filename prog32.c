/* program to accept the class number of student (1-12)
   and print the block name.
   		class	block name
      	1-5		primary block
      	6-7		upper primary block
      	8-10	secondary block
      	11-12	higher secondary block
      	others	invalid class      */
#include <stdio.h>
void main()
{
	int cl;
	printf("enter class number (1-12) ");
	scanf("%d",&cl);
	switch(cl)
	{
		case 5 : 
		case 1 :
		case 3 :
		case 2 :
		case 4 :	printf("primary block")	; break;
		case 6 :
		case 7 :	printf("upper primary block");  break;
		case 8 :
		case 9 :
		case 10:	printf("secondary block")	; 	break;
		case 11:
		case 12:	printf("higher secondary block")	; break;
		default:	printf("invalid class")	;
	}
}


