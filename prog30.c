// program to accept a single digit (+ve) and print it in words
#include <stdio.h>
void main()
{
	int x;
	printf("enter a number (0-9)  ");   
	scanf("%d",&x);
	switch(x)
	{
		case 0 : printf("zero"); break;
		case 1 : printf("one"); break;
		case 2 : printf("two"); break;
		case 3 : printf("three"); break;
		case 4 : printf("four"); break;
		case 5 : printf("five"); break;
		case 6 : printf("six"); break;
		case 7 : printf("seven"); break;
		case 8 : printf("eight"); break;
		case 9 : printf("nine"); break;
		default: printf("not a single digit");
	}
}
