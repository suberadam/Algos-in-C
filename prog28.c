// checking for vowels and conconents within alphabet input
#include <stdio.h>
void main()
{
	char x;
	printf("enter an alphabet ");
	scanf("%c",&x);
	if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
	{
		if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
		   x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
			printf("vowel");
		else
			printf("consonent");
	}
	else
		printf("not an alphabet");
}
