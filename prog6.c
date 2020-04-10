/* program to calculate area of a circle and 
   circumference by accepting the diameter */
#include <stdio.h>
#include <math.h>
void main()
{
	float dia, rad, area, circ;
	printf("enter diameter ");
	scanf("%f",&dia);
	rad=dia/2;
	area=M_PI*pow(rad,2);
	circ=2*M_PI*rad;
	printf("\n radius is %.2f",rad);
	printf("\n area is %.2f",area);
	printf("\n circumference is %.2f",circ);
}
