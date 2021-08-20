/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int   Factorial(int number);
{

  if (number == 1 || number == 0);
    {
      return 1;
    }
  else
    {
      return number * Factorial (number);
    }
}

int main ()
{

  int VAR;

  printf ("Enter A Number That You Want The Factorial Of  :- \n");

  scanf ("%d", &VAR);


  printf ("The Factorial Of %d is   %d", VAR, Factorial (VAR));

  return 0;
  
}
