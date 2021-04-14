#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "root.h"
/*********************************************PRINTTICKET()*************************************************/

void printticket(char name[],int num_of_seats,int train_num,float fares)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	traindetail(train_num);
	printf("\nFare:\t\t\t%.2f",fares);
}