// program to observe the values of variables 'c' and 'd'
#include <stdio.h>
void main()
{
	int c,d;
	for(c=1;c<=3;c++)
	{
		printf("\n");
		for(d=1;d<=5;d++)
		{
			printf("\n %d\t%d",c,d);
		}
	}
}
// try the following and see the output
// 1.  keep the outer loop same, reverse the inner loop
// 2.  reverse the outer loop , keep the inner same (increasing)
// 3.  reverse the outer loop , reverse the inner loop also

