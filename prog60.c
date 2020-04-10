/* Recurrsive function : program to calculate sum of digits of a given number */
#include <stdio.h>
void main()
{
   	int sum_of_digits(int x);
   	int n, res;
   	printf("enter a value ");
   	scanf("%d",&n);
   	res=sum_of_digits(n);						//	res=sum_of_digits(3725)
   	printf("\n Sum of digitst is %d",res);   	//           5 + sum_of_digits(372)
}												//				      2 + sum_of_digits(37)
int sum_of_digits(int x)						//							   7 + sum_of_digits(3)
{												//									  return 3
   	int s=x;						
   	if (x>9)						
      	s=(x%10)+sum_of_digits(x/10);			
   	return s;
}	

