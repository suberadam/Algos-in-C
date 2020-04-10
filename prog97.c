// program to read student details from the file (marks.txt) and display the results

#include <stdio.h>
void main()
{
	int idno, sub1, sub2, sub3, tot, n;
	float avg;
	char name[20];
	FILE *fp;
	fp=fopen("marks.txt","r");		// "r" mode opens the file to read data
	n=0;
	while(fscanf(fp,"%d%s%d%d%d",&idno,name,&sub1,&sub2,&sub3)!=EOF) 	
	{
		tot=sub1+sub2+sub3;
		avg=tot/3.0;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",idno,name,sub1,sub2,sub3,tot,avg);
		printf("\t%s",(sub1>=35 && sub2>=35 && sub3>=35)? "PASS" : "FAIL");
		n++;
	} 
	printf("\n number of students listed %d",n);
	fclose (fp);
	printf("\n file is closed");
}
