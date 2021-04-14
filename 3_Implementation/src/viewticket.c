#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"root.h"
void viewticket()
{  
    int id,a;
    printf("Enter PNR No. of the ticket\n");
    scanf("%d",&id);
    pd pm;
    FILE *fp = fopen("seats_reserved.txt", "r+");
    if (fp == NULL)
    {
        printf("\n\nNo Bookings Found!!");
        exit(0);
    }
    while (fread(&pm, sizeof(pm), 1, fp))
    {
        if (pm.pnr != id)
        {
            continue;
        }
		else
		{
			printf("1");
			break;
		}
    }

}