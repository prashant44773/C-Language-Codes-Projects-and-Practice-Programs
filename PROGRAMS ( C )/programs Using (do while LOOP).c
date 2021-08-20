/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int num1,num2 = 0;
  printf("Enter A Number :-    ");
  scanf("%d",&num1);
  
  do
  {
    printf("%d\n",num2);
    
    num2 = num2 + 1;
  }  
    while( num2 < num1-2 );
  
  
    return 0;
}
