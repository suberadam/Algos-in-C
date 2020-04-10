// program to accept 2 number and print total - repeat 5 times
#include <stdio.h>
void main()
{
	int x,y,z,c;
	for(c=1;c<=5;c++)
	{
		printf("\n %d   enter 2 values ",c);
		scanf("%d%d",&x,&y);
		z=x+y;
		printf("total is %d",z);
	}	
}
