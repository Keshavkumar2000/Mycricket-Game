
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void result(void);
void score(void);
void opposite_run(void);
int n,p,z;
int main()
{
	int random,t,r,i,j,n,n2;
	int c,k,a=7,b=24,no,or,no2,run2;
	
	printf("\n-----------------------------------------------------------");
    printf("\n\t\t-- MY Cricket Game--\t\t\n");
   	printf("-----------------------------------------------------------"); 
	printf("\n\n\tPress any key to continue......") ;
	
	sleep(2);
	printf("\n\t **Instructions About Game--1. It is a 1 over Game \n\t\t\t\t   2. Which team scored more runs in an over won the match!!");
    printf("\n\n");
    printf("\t\tTime of toss....\n");
    
    printf("\n\tSelect 0 or 1\n");
    printf("Select 0 for Head--\n");
    printf("Select 1 for Tail--\n");
    scanf("%d",&t);
    
     
	srand(time(NULL));
    random =	(rand() % 2) ;    //0,1
    puts("Toss.....");
    sleep(1); 
	if(random ==0)
	     puts("\n\tYou won the toss");
	else
     	puts("\n\tyou loss the toss\n");
	if(random ==0)
	{
	printf("\n\tChoose Bat or Ball \n\t 1.For Bat put 1 :\n \t 2.For Ball put 2:\n");
	scanf("%d",&c);
    }
	if(random==0 && c==1)
	{
	puts("\n\t\t---You Selected to Bat First---");
	score();

    printf("\n\t!! The opponent have to score more than %d runs to win!!",z);
    opposite_run();
    result();
    } 
	else if(random==0 && c==2)
    {
			
	     puts("\n\t\t---You selected to Ball First---");
	      sleep(1);
    printf("\n\t---They are Playing their ininng .......---\n");
    sleep(1);
   	srand(time(NULL));
   	opposite_run();
   	//k=	(rand() % (b-a+1))+a ;
   	printf("\n\n\t--The opponent team give a Target of %d In 1 over match---",p);
   	printf("\n\n\t !!! For win the Match  you have to score %d runs in 1 over !!!",p+1);
   	n=no;
   	score();
   	result();
    }
	
	else if(random==1)
	{
			srand(time(NULL));
    or=	(rand() % 2) ;    //1,2,3,4,5,6
    puts("\n\t--- Opponents are making their decision----");
 //   printf("\n\tOps!!! Opponent won the toss and selected to Bat first");
    sleep(2);
    if(or==0)
    {
    puts("\n\n\t ---They decided to Bat first---");
    printf("\n\t---They are Playing their ininng .......---\n");
    sleep(1);
    opposite_run();
   	score();
    result();
    } 
    else
	{
	//	puts("\n\t--- Opponents are making their decision----");
	sleep(1);
	puts("\n\n\t ---They decided to Bowl first---");
	score();
	opposite_run();
    result();
		
	} 
	}   return 0;
}


void result(void)
{
	 int no,k,no2=0,n2;
		if(n>p)
   	puts("\n\n\t----!!!**Hurrah** You won!!!---");
   	else if(n==p)
   	puts("\n\n\t--!!!Score tied !!!--");
   	else
   	puts("\n\n\t---!!!!!Oops! You lost!!!!---");
   	
}
void score(void)
{	
    int no=0,run,i;
	sleep(1);
	printf("\n\n\t----- Now Your turn !!Ready to bat-----\n ");
//	int no=0,run;
	for(i=1;i<=6;i++)
	{
	   run=	(rand() % 7);
	    no+=run;	
	    
		srand(time(NULL));
	 	printf("\n\n \t--In %d  ball you scored %d runs ",i, run);
	sleep(2);
    }
   
    n=no;
    z=no;
    printf("\n\n\t--total sccore you scored in 1 over is : %d--",no);
 
}
void opposite_run(void)
{
	int no2,run2,j,n2;
	sleep(1);
	printf("\n\n\t-----Opponent Ready to bat-----\n ");
//	int no=0,run;
	for(j=1;j<=6;j++)
	{
	   run2=	(rand() % 7);
	    no2+=run2;	
	    
		srand(time(NULL));
	 	printf("\n\n \t--In %d Ball Opponent team scored %d runs ",j, run2);
	sleep(2);
    }
   
  
    printf("\n\n\t--Opponent total Score in 1 over is : %d--",no2);
 p=no2;
}
