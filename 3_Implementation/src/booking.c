#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "../inc/root.h"
/*********************************************BOOKING()*************************************************/

void booking(void)
{
	char confirm;
	int i=0;
	float fares;
    long long int mob_no;
	pd passdetails;
    passdetails.pnr=0;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");
	
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(passdetails.name);
	//error here have to take input of the name 
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Trains<< ");
	getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter train number:> ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=23345 && passdetails.train_num<=23355)
	{
		passdetails.fares=fare(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,passdetails.fares);		
	}
	else
	{
		printf("\nInvalid train Number! Enter again--> ");
		goto start;
	}
	
	printf("\n\nConfirm Your Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
        for(int i=0;i<5;i++)
        {
            passdetails.pnr=passdetails.pnr*10+(rand()%9)+1;
        }
		fprintf(fp,"%d\t\t%s\t\t%d\t\t%d\t\t%.2f\n",passdetails.pnr,&passdetails.name,passdetails.num_of_seats,passdetails.train_num,passdetails.fares);
		printf("=======================================");
		printf("\n Reservation Done Your Pnr Is %d\n",passdetails.pnr);
		printf("=======================================");
		printf("\nPress any key to go back to Main Menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main Menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}