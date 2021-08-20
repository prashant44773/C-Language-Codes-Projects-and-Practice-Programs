/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int  RandomNumber ( )
{
  
  srand (time (NULL));

  return rand () % 3;


}

int  Comparison (char p1 , char c1)
{
    //...............................................Rock
    
    if( (p1 == 'R') && (c1 == 'R') )
       {
           return 0 ;
       }
    else if( (p1 == 'R') && (c1 == 'P') )
       {
           return -1 ;
       }
    else if( (p1 == 'R') && (c1 == 'S') )
       {
           return 1 ; 
       } 
    // ...............................................Paper  
       
    else if( (p1 == 'P') && (c1 == 'R') )
       {
           return 1 ;
       }
    else if( (p1 == 'P') && (c1 == 'P') )
       {
           return 0 ; 
       }
    else if( (p1 == 'P') && (c1 == 'S') )
       {
           return -1 ;
       }
    //.................................................Sciccors   
    else if( (p1 == 'S') && (c1 == 'R') )
       {
           return -1 ; 
       }   
    else if( (p1 == 'S') && (c1 == 'P') )
       {
           return 1 ;
       }
    else if ( (p1 == 'S') && (c1 == 'S') )
       {
           return 0 ; 
       }   
    else 
       {
           printf("!!!!!!!");
       }
       
}





int main()
{

char Player_Turn , Comp_Turn  ;

int P_Score , C_Score ; // We are going to use This Variables to Get The Final Scores.....

int Temp  ;

int Variables[] = {'R','P','S'};

printf("Welcome in the Game Of Rock , Paper and Sciccors\nTo Play please press the Following Buttons\n\n");
printf("( R = Rock , P = Paper , S = Sciccors)\n\n");

for( int i=1 ; i<4 ; i++ )
{
printf("Round : %d\n",i);    
printf("If You Choose To Play Then  Press '1' for Rock ,  '2'  for Paper , '3'  for Sciccors\n");    
    
// Program For Players Code.......................: 

scanf("%d",&Temp);
getchar();
Player_Turn = Variables[Temp-1];
printf("You Choose  %c",Player_Turn);    
printf("\n");    


// Program For Computer Code......................:


Comp_Turn = Variables[RandomNumber()];
printf("Computer Choose  %c",Comp_Turn);    
printf("\n"); 

}


if ( Comparison ( Player_Turn , Comp_Turn ) == 1)
    {
        P_Score++ ;    
    }    
    
else if ( Comparison ( Player_Turn , Comp_Turn ) == -1)
    { 
        C_Score++ ;
        P_Score++ ;    
    }
    
else
    {
        C_Score++ ;
    }
    
    
if (P_Score > C_Score)
{
    printf("You Won\n");
}
else if(C_Score > P_Score)
{
    printf("Computer Won\n");
}
else
{
    return 5 ;
}

printf("The Score Of Player's is %d\n",P_Score);
printf("The Score Of Computer's is %d\n",C_Score);



  return 0;
}
