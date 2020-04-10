/* program to accept 3 subject marks and calculate 
   total and average */
#include <stdio.h>
void main()
{
	int rno, sub1, sub2, sub3, tot;
	float avg;
	char name[20];
	printf("enter roll number and name ");
	scanf("%d%s",&rno,name);    // no '&' for name as it is set of chars
	printf("enter 3 subject marks ");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	tot=sub1+sub2+sub3;
	avg=tot/3.0;		// 3.0 is used to calculate float division
	printf("\n total marks %d",tot);
	printf("\n average marks %f",avg);
}
