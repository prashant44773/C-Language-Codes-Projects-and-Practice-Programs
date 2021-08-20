/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    int  i, Roll_No[10] ;
   
   
    for ( i= 0 ; i<5 ; i++  )
    {
      printf("Enter the value of %d of the Array\n ",i);
      scanf("%d",&Roll_No[i]);
    }
   
    
    for ( i= 0 ; i<5 ; i++  )
    {
      printf("Enter the value of %d of the Array is %d\n ",i,Roll_No[i]);
     
    }  
   
    return 0;
}
         