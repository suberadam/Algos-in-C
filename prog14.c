#include <stdio.h>
void main()
{
	int age, bonus;
	printf("enter age of the person ");
	scanf("%d",&age);   // 18

    bonus = (age != 18) ? 1000 : 500;     

	printf("bonus is  %d",bonus);
}
//  <18 1000   ==18 800   >18 500

	//	bonus = (age<18)?1000:(age==18)?800:500 ;
     
   
