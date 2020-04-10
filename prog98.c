// program to accept student rno and display the details of only that student (if available in the file)
#include <stdio.h>
void main()
{
	int idno, sub1, sub2, sub3, tot, n, t_idno;
	float avg;
	char name[20];
	FILE *fp;
	fp=fopen("marks.txt","r");		// "r" mode opens the file to read data
	printf("enter idno to search ");
	scanf("%d",&t_idno);
	n=0;
	while(fscanf(fp,"%d%s%d%d%d",&idno,name,&sub1,&sub2,&sub3)!=EOF) 	
	{
		if (idno == t_idno)
		{
			tot=sub1+sub2+sub3;
			avg=tot/3.0;
			printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",idno,name,sub1,sub2,sub3,tot,avg);
			printf("\t%s",(sub1>=35 && sub2>=35 && sub3>=35)? "PASS" : "FAIL");
			n++;
		}
	} 	
	if(n==0)	
		printf("Idno does not exist");
	else
		printf("\n number of students listed %d",n);
	fclose (fp);
	printf("\n file is closed");
}
