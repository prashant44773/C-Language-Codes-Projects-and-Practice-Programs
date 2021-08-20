/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int  RandomNumber (int n)
{
  
  srand (time (NULL));

  return rand () % n;


}

char  Computer_Turn (int Value)
{
  
  
   switch(Value)
   {
       case 0 :
        {
           printf ("Rock\n");
           break ;
        }
      
       case  1 :
        {
           printf ("Paper\n");
           break ;
        }
       
        case  2 :
        {
           printf ("Sciccors\n");
           break ;
        }
      
         case 3 :
        {
           printf ("Rock\n");
           break ;
        }
      
       
   }
  
}


int
main ()
{
   int k=3;
   int  Prob ;
    
   RandomNumber(k) ;  //The Fuction which passes the Variable.....:
   Prob=RandomNumber(k) ; //The Variable which stores our Random Number :

   char CT ;
   CT = Computer_Turn(Prob);

// From here we start the Execution of the loop ..............................................................   


// From Here We can Initiate the Loop.........................

  int i = 1;
 
  int P1;
while (i < 5)
    {                            
   
   
        
      int k=3;
      int  Prob ;
    
      RandomNumber(k) ;  //The Fuction which passes the Variable.....:
      Prob=RandomNumber(k) ; //The Variable which stores our Random Number :

      char CT ;
      CT = Computer_Turn(Prob);
  
  
      //From here we write the code to show the user the Computer_Turn :.............../ 
      
      printf ("Round %d\n", i);
      i++;

      printf ("Enter  '0' If you Choose Rock \n       '1' If you Choose Papers\n       '2' If you Choose Sciccors\n");
      scanf ("%d",&P1);
      getchar();
      
    switch(P1)  
    {
      case 0 :
      {
          printf("Rock");
          break;
      }
      case 1 :
      {
          printf("Paper");
          break;
      }
      case 2 :
      {
          printf("Sciccors");
          break;
      }
    }  
      printf("\n");
      
      
      printf ("The Computer's Turn is    ");
      printf("%c",CT);
      
      
    
   }


printf("\n\nWe are Showing Results Wait......\n\n");
 
   


  return 0;
}
