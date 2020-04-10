#include <stdio.h>
void main()
{
	int marks;
	printf("enter marks obtained ");
	scanf("%d",&marks);
	if(marks>40)
		printf("\n pass");
	else if (marks==40)
	{
		printf("\n promoted");
		printf("\n must work hard");
	}
	else
	{
		printf("\n fail");
		printf("\n redo the exam");
	}
		
}
