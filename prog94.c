// program using call by reference (passing pointer to functions)
#include <stdio.h>
void main()
{
	int a,b,c,b1,b2,b3;
	int get_biggest(int *p, int *q);
	printf("enter 3 values ");
	scanf("%d%d%d",&a,&b,&c);
	b1=get_biggest(&a,&b);		//	passing addresses  --->   call by refernce	
	b2=get_biggest(&a,&c);		//	passing addresses  --->   call by refernce	
	b3=get_biggest(&b,&c);		//	passing addresses  --->   call by refernce	
	printf("\n biggest of %d and %d is %d",a,b,b1);
	printf("\n biggest of %d and %d is %d",a,c,b2);
	printf("\n biggest of %d and %d is %d",b,c,b3);
}

int get_biggest(int *p, int *q)
{
	if (*p>*q) 
		return *p;
	else
		return *q;
}
