#ifndef ROOT_H  
#define ROOT_H 

/*******************************************GLOBAL VARIABLES**********************************************************/
//ALl the globle variables and the composite data types will be declared here
typedef struct{
	char name[50];
	int train_num;
	int num_of_seats;
    int pnr;
    float fares;
}pd;




/*******************************************FUNCTION PROTOTYPE**********************************************************/
//function prototypes to be used
void booking(void);							//main reservation function
void viewdetails(void);							//view details of all the trains
void cancel(void);								
void printticket(char name[],int,int,float);	//print ticket 
void traindetail(int);						//print data related to specific train
float fare(int,int);							//Fare automatically w.r.t number of seats and train
void login();
void viewticket(void);


#endif