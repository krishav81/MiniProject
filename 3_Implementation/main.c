/**********************************************PREPROCESSORS**********************************************************/
//Working on basic structure
//including all libraries for now
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "../inc/root.h"
int main()
{
	system("cls"); 
	printf("\t\t_________________________________________________\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        *****************************          |\n");
	printf("\t\t|          RAILWAY RESERVATION SYSTEM           |\n");
	printf("\t\t|        *****************************          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|            BOOK YOUR TICKETS HERE             |\n");
	printf("\t\t|           -----INDIAN RAILWAYS-----           |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|_______________________________________________|\n\n\n");
		
	    
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
	login();
	int choice,choice_return;
	start:
	system("cls");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
    printf("\n4>> View Ticket");
    printf("\n------------------------");
	printf("\n5>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			booking();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			cancel();
			break;
		case 4:
            viewticket();
            break;
        case 5:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}
