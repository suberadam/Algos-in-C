/* program to accept base and height of a triangle
   and calculate its area */
#include <stdio.h>
void main()
{
	double base, height, area;
	printf("enter base and height of a triangle ");
	scanf("%lf%lf",&base,&height);
	area=0.5*base*height;
	printf("\n area is %lf",area);
}

