/* program to accept length and breadth or a rectangle
   and calculate area and perimeter */
#include <stdio.h>
void main()
{
	double len, bre, area, peri;
	printf("enter length and breadth of a rectangle ");
	scanf("%lf%lf",&len,&bre);
	area=len*bre;
	peri=2*(len+bre);
	printf("\n area is %.2lf, perimeter is %.0lf",area,peri);
}

