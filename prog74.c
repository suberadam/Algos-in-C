/* write a program to accept 10 values and copy them into 
  another array in reverse order of their index.   ex:
   x---> 34   56   78   77   99   44   79   26   48   53
   y---> 53   48   26   79   44   99   77   78   56   34   */
   
#include <stdio.h>
void main()
{
	int x[10], y[10], c;
	//accepting 10 values
	for(c=0;c<10;c++)
	{
		printf("enter a value ");
		scanf("%d",&x[c]);
	    y[9-c] = x[c];			// assigning values into another array
	}
	for(c=0;c<10;c++)
	{
		printf("\n %d\t%d",x[c],y[c]);		//   \t means tab space
	}
}
/*			y[9] = x[0]
			y[8] = x[1]
			y[7] = x[2]
			y[6] = x[3]
			y[5] = x[4]
			y[4] = x[5]
			y[3] = x[6]
			y[2] = x[7]
			y[1] = x[8]
			y[0] = x[9]  */
			
