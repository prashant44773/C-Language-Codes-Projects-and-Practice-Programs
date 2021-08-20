/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int   iterative_fuN(int n) ;
{
    
   int a = 0;
   int b = 1;
   
   for(i = 0  ;  i<n-1 ;  i++ );
   {
        b = a + b;
        a = b - a;
     
   
   }

    return a;
}      


int main()    

{
    int limit;
    
    printf("Enter A Number to get its Fibonnacci Sereies\n");
    scanf("%d\n",&limit);

    printf("The value of  %d  is as per Fibonnaacci Series is %d\n",limit,iterative_fuN(limit) );     
    
    
    return 0;
    
}