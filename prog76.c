// example to process all elements of a double dimension array
#include <stdio.h>
void main()
{
	int x[3][5], r, c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<5;c++)
		{
			printf("enter a value for x[%d][%d]  ",r,c);
			scanf("%d",&x[r][c]);
		}
	} 
    printf("\n\n Given values are ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<5;c++)
		{
			printf("%d\t",x[r][c]);
		}
	}
}
