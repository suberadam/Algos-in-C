/*			ARRAYS
			
			Array is a sequence of variables of similar datatype.
			Array is needed when we want many variables.
			All Array variables are created in a continous memory locations   */

#include <stdio.h>
void main()
{
	int x[5];
	printf("\n %d",sizeof(x));
    printf("\n %d",sizeof(int));
    printf("\n %d",sizeof(int[5]));
}
