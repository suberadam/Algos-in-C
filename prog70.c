// program to accept marks of 10 students and calculate the average
#include <stdio.h>
void main()
{
	int marks[10], c, tot;
	float avg;
	tot=0;
	for(c=0;c<10;c++)
	{
		printf("enter student marks ");
		scanf("%d",&marks[c]);
		tot=tot+marks[c];
	}
	avg=tot/10.0;
	printf("\n average marks %f",avg);
}
