// checking if input is an alphabet or digit or special character
#include <stdio.h>
void main()
{									//	ASCII Codes
	char x;							//  A-Z	 65-90
	printf("enter a character ");	//  a-z	 97-122
	scanf("%c",&x);					//  0-9  48-57
//	if(x>='0' && x<='9')
	if(x>=48 && x<=57)
		printf("digit");
	else if(x>='A' && x<='Z')
		printf("uppercase letter");
	else if(x>='a' && x<='z')
		printf("lowercase letter");
	else
		printf("special character");
}
//	if (!(x>='0' && x<='9') || (x>='a' && x<='z') || (x>='A' && x<='Z'))
	
