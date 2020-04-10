// example program using pointers to accept 3 values and print biggest among them
#include <stdio.h>
void main()
{
	int *ptr1, *ptr2, *ptr3, val1, val2, val3;
	ptr1 = &val1;
	ptr2 = &val2;
	ptr3 = &val3;
	printf("enter 3 values ");
	scanf("%d%d%d",ptr1,ptr2,ptr3);
	if (*ptr1>*ptr2 && *ptr1>*ptr3)
		printf("%d is biggest",*ptr1);
	else if (*ptr2>*ptr3)
		printf("%d is biggest",*ptr2);
	else
		printf("%d is biggest",*ptr3);
}
