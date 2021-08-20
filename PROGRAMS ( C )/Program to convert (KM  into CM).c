/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num;

  printf ("Enter the distance that you wamt to convert :-  \n ");
  scanf ("%d", &num);
  printf ("%d km  is Equals to %d cm", num, num * 100000);

  return 0;
}
