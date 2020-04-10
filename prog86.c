// array of structures  
#include <stdio.h>
void main()
{
	struct student
	{
		int rno;
		char name[20];
		int s1,s2,s3,tot;
		float avg;
	};
	struct student x[10];
	int c;
	printf("%d",sizeof(x));
	for(c=0;c<5;c++)
	{
		printf("\n enter rno and name ");
		scanf("%d%s",&x[c].rno,x[c].name);
		printf("enter 3 subject marks ");
		scanf("%d%d%d",&x[c].s1,&x[c].s2,&x[c].s3);
		x[c].tot = x[c].s1 + x[c].s2 + x[c].s3;     //  tot=s1+s2+s3;   wrong
		x[c].avg = x[c].tot / 3.0;
	}
	for(c=0;c<5;c++)
	{
		printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%f",x[c].rno,x[c].name,x[c].s1,x[c].s2,x[c].s3,x[c].tot,x[c].avg);
 	}
}
