#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"root.h"
void cancel(void)
{
	FILE *fp1,*fp2;
	int id;
    printf("------------------------\n");
    printf("Enter Pnr to be deleted\n");
    printf("------------------------\n");
    scanf("%d",&id);
    pd pr;
	fp1=fopen("seats_reserved.txt","r+");
    fp2=fopen("temp.txt","a+");
	if (fp1==NULL)
	{
		printf("No Records");
        exit(0);
	}
while(fread(&pr,sizeof(pr),1,fp1))
{
    if(pr.pnr!=id)
    {
        fwrite(&pr,sizeof(pr),1,fp2);
    }
}
fclose(fp1);
fclose(fp2); 
remove("seats_reserved.txt");
rename("temp.txt","seats_reserved.txt");
printf("=============================================");
printf("\nYour Ticket has been Cancelled Successfully\n");
printf("=============================================");
getch();
}