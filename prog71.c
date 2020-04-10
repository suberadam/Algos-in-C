// program to accept marks of 10 students and find the highest 
#include <stdio.h>
void main()
{
	int marks[10], c, big;
	for(c=0;c<10;c++)
	{
		printf("enter student marks ");
		scanf("%d",&marks[c]);
	}
	big = marks[0];
	for(c=1;c<10;c++)
	{
		if(marks[c] > big)
			big = marks[c];
	}
	printf("\n highest marks %d",big);
}
