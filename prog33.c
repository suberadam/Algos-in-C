/* program to accept grade and print the remarks 
		A		very good
		B		can do better
		C		work hard
		D		poor/retake the exam
		others  Invalid grade   */
#include <stdio.h>
void main()
{
	char grade;
	printf("enter grade (A/B/C/D) ");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'a':
		case 'A': printf("very good"); break;
		case 'b':
		case 'B': printf("can do better"); break;
		case 'c':
		case 'C': printf("work hard"); break;
		case 'd':
		case 'D': printf("poor/retake the exam"); break;
		default : printf("invalid grade");		
	}
}
