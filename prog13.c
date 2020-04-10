#include <stdio.h>
void main()
{
	int age1, age2, diff;
	printf("enter age of two persons ");
	scanf("%d%d",&age1,&age2);

    diff=(age1>age2)? age1-age2 : age2-age1;

	printf("age difference is %d",diff);
}

