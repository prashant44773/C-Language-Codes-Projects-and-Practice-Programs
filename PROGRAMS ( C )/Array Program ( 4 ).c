/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
   
   int Array[2][4] = {  {3,5,8,2},
                        {4,7,5,8}  };
   printf("\n\n");
   
   for (int i=0 ; i<2 ; i++) 
   {
       
     for (int j=0 ; j<4 ; j++)    
       
      printf("The Value of Row %d and Column %d  is  %d\n",i,j,Array[i][j]);
      
       
       
   }
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}
         