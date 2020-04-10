/* program to accept length of 3 sides of a triangle
   and calculate its area and perimeter */
#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, c, area, peri, s;
	printf("enter 3 sides of a triangle ");
	scanf("%f%f%f",&a,&b,&c);
	peri=a+b+c;
	s=peri/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n perimeter is %f",peri);
	printf("\n area is %f",area);
}

