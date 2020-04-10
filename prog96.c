// program to accept student details and store them in a file (marks.txt)

#include <stdio.h>
void main()
{
	int idno, sub1, sub2, sub3, ch;
	char name[20];
	FILE *fp;
	fp=fopen("marks.txt","a");		// "w" mode always creates a new file
	do 								// to add more data to exising file use "a" mode
	{
		printf("\n enter idno, name and 3 subject marks ");
		scanf("%d%s%d%d%d",&idno,name,&sub1,&sub2,&sub3);
		fprintf(fp,"\n%d %s %d %d %d",idno,name,sub1,sub2,sub3);
		printf("type 1 to repeat OR 0 to stop ");
		scanf("%d",&ch);
	} while(ch==1);
	fclose (fp);
	printf("\n file is closed");
}
