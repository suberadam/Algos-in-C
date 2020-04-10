// sample program to demonstrate a function execution
#include <stdio.h>
void main()
{
	void greet();		// function declaration
	printf("\n this is the FIRST  line of main");
	greet();			// function calling
	printf("\n this is the LAST line of main");
}
void greet()			// function description
{
	printf("\n**********************************");
	printf("\n******* H e l l o    A l l *******");
	printf("\n**********************************");
}
