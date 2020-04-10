// example program using structures
#include <stdio.h>
void main()
{
	struct student
	{
		int rno,class;
		char name[20],sec,grade;
		float marks;
		double per;
	};
	struct student x,y;
	printf("%d",sizeof(struct student));
	printf("\n enter rno name, class");
	scanf("%d%s%d",&x.rno,x.name,&x.class);
	printf("enter section ");
	fflush(stdin);
	scanf("%c",&x.sec);
	printf("enter grade ");
	fflush(stdin);
	scanf("%c",&x.grade);
	printf("enter marks and percentage ");
	scanf("%f%lf",&x.marks,&x.per);
	printf("\n rno is %d",x.rno);
	printf("\n name is %s",x.name);
	printf("\n class is %d",x.class);
	printf("\n section %c",x.sec);
	printf("\n grade is %c",x.grade);
	printf("\n marks is %f",x.marks);
	printf("\n percentage is %lf",x.per);
}
							
			
