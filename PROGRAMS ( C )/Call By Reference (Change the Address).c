/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int  changevalue(int *Var )
{
   
   *Var = 455 ;

   return 0;
}


int
main ()
{
  int a, b;

  a = 44, b = 77;

  printf ("The Value of a and  b is %d  and  %d\n ", a, b);

  changevalue(&a);
  printf ("Then Their Value is being swaped as %d  \n", a);

  return 0;
}
