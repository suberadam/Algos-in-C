		#include <stdio.h>
		void main()
		{
		   int x=3, y=9, z=5;
		   printf("\n %d ",(x>y && z<x));	//  0
		   printf("\n %d ",(x>y || z<x));	//  0
		   printf("\n %d ",(x>y || x<z));	//  1
		   printf("\n result %d ",(x+(z<y) && x<z));	//  1   (4 && 1)
		   printf("\n %d ",!(x+z<y && x<z));	//  0
		   printf("\n %d ", (1 && 0));    // 0
		}

