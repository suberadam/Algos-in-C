// initializing (giving starting values) to all elements of a double dimension array
#include <stdio.h>
void main()
{
//	int x[3][5]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150}, r, c;
	int x[3][5]={{10,20,30},{40,50},{60,70,80,90}}, r, c;	// row wise
	//the uninitialized elements are taken as zeros  (because they are ints)
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
