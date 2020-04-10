/* program to accept 'n' subject marks and calculate total */
#include <stdio.h>
void main()
{
	int c, marks, sum, n, s;
	float avg;
    for(s=1;s<=5;s++)
    {
		printf("enter the number of subjects of student %d ",s);
		scanf("%d",&n);
		sum=0;
		for(c=1;c<=n;c++)
		{
			printf("enter subject %d marks ",c);
			scanf("%d",&marks);
			sum=sum+marks;
		}
		avg=sum/(n*1.0);
		printf("\n total marks %d",sum);
		printf("\n average marks %f",avg);
	}
}
