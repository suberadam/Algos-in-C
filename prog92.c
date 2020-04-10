// example program using pointer to structure variable  (usage of -> operator)
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
	struct student x, *p;
	p=&x;	// address of structure variable x is stored in pointer p
	printf("%d",sizeof(struct student));
	printf("\n enter rno name, class");
	scanf("%d%s%d",&p->rno,p->name,&p->class);
	printf("enter section ");
	fflush(stdin);
	scanf("%c",&p->sec);
	printf("enter grade ");
	fflush(stdin);
	scanf("%c",&p->grade);
	printf("enter marks and percentage ");
	scanf("%f%lf",&p->marks,&p->per);
	printf("\n rno is %d",p->rno);
	printf("\n name is %s",p->name);
	printf("\n class is %d",p->class);
	printf("\n section %c",p->sec);
	printf("\n grade is %c",p->grade);
	printf("\n marks is %f",p->marks);
	printf("\n percentage is %lf",p->per);
}
							
			
