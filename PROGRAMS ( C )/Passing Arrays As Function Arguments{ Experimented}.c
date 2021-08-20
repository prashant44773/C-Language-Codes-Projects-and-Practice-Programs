/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//  printing by simple functions...........
/*
void Funct1(int array[2][4])
{
    
         for(int i =0 ; i<3 ; i++) 
     {
         for(int j =0 ; j<5 ;j++)
         {
             printf("The Value Of Array at  Row %d and Column %d  is  %d\n",i,j,array[i][j]); 
              
         }         
         
     }

}                                             */




//  printing by Pointer functions...........
void
Funct2 (int *ptr[2][4])
{

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
	{
	  printf ("The Value Of Array at  Row %d and Column %d  is  %d\n", i,
		  j, ptr[i + 1][j + 1]);

	}

    }

}





int
main ()
{
  int arr[2][4] = { {3, 5, 8, 7, 6}, {2, 6, 4, 9, 8} };

  /*   for(int i =0 ; i<3 ; i++) 
     {
     for(int j =0 ; j<5 ;j++)
     {
     printf("The Value Of Array at  Row %d and Column %d  is  %d\n",i,j,arr[i][j]);
     }         

     }

   */

  Funct2 (arr);


  return 0;
}
