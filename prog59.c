/* Recurrsive calling or Recurrsion : A function being called inside the body of same function  */
#include <stdio.h>
void main()
{
   int factorial(int x);
   int n, res;
   printf("enter a value ");
   scanf("%d",&n);
   res=factorial(n);
   printf("\n factorial is %d",res);    //       5! = 5*4*3*2*1   
}										//		 = 1*2*3*4*5
int factorial(int x)					//		 = 5*4!
{										//			 4*3!	
   int f;								//			   3*2!
   if (x==1)							//				 2*1!
      f=1;								//				   1
   else
	 f=x*factorial(x-1);
   return f;
}	
