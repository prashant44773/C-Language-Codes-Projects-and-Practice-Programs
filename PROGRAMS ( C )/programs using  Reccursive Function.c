/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>

int factorial(int number)
{
    
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);
    }
    
}


int
main ()
{

  int zap;
  printf("Enter The Number that you want Factorial of :-  \n");
  scanf("%d",&zap);
  printf("The Factorial of %d is %d",zap,factorial(zap));
  

  return 0;
}
