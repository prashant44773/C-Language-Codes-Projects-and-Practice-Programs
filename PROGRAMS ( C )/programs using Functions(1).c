/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int sum(int a , int b);

int main()

{
  
  int a,b,c;
  
  c = sum(a,b) ;
   
  printf("Enter The First Number :-  \n");
  scanf("%d \n",&a);
  
  printf("Enter The Second Number :-  \n");
  scanf("%d \n",&b);
  
  printf("the Sum Of Two Numbwer Is :-  ");
  scanf("%d",&c);
 
    return 0;

}


int sum(int a , int b);
{
    return a + b;
    
}
