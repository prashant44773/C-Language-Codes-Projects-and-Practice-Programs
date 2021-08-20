/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 #include<stdio.h>

int  Recursive_funN(int n) ;
{
     if(n= 1 || n=2)
       {
           return n-1;
       }
     else
       {
           return   Recursive_funN(n-1)    +    Recursive_funN(n-2) ;
       }
   retuen 0;
}


int main() 
{
    
    
  int   limit ; 
    
  printf("Enter any number that fibonacci series will be printed \n");    
  scanf("%d\n",&limit);

  printf("The Value Of   %d as per fibonnacci  series is %d \n",limit, Recursive_funN(limit));
    
    
    
    return 0;
}