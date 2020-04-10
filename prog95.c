	Dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>			// <process.h>     <alloc.h>   
void main()
{
	int x, y;
	printf(......)
	x
	y
	malloc()	: to allocate dynamic memory (memory created at runtime of a program)
	free()		: to deallocate (remove) dynamic memory 
	
	<pointer var> = (datatype *) malloc(sizeof(datatype));
ex:	int *p;
	p=(int *) malloc(sizeof(int));
	*p=30;
	printf("%d",*p);
	
	free(p);		// to remove the memory
	p=NULL;			// to empty the pointer  
	.
	....
	..50 lines
	.....
	.....
}
	
