// Pointer variable of any datatype will take (8bytes only in Dev C++) (2 in case of Turbo C++)
// The reference of value will read the number of bytes of the variable in accordance to the 
// datatype of the pointer NOT according to the datatype of the variable whose address is stored. 
// Therefore pointer variable cannot be mismatched with other datatype variables address.
#include <stdio.h>
void main()
{
	int x,*p;
	double y, *q;
	
	p=&x;	// valid			
	q=&y;	// valid
//	p=&y;	// invalid
//	q=&x;	// invalid ??? 
}

