#include <stdio.h>
void main()
{
	char name1[20],name2[20];
	puts("enter a name ");
	// scanf("%s",name); 
	gets(name1);
	puts("enter another name ");
	gets(name2);
	// printf("\n Hello %s and %s",name1,name2);
	puts("Hello ");
	puts(name1);
	puts(" and ");
	puts(name2);
}
