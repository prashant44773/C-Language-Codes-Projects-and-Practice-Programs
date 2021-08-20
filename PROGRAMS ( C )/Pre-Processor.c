/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>

#define Num 91


int
main ()
{

#if Num >= 35
  printf ("You Passed \n");

#elif Num >= 70
  printf ("You Did Well\n");

#elif Num >= 85
  printf ("You Rock \n");
#else
  printf ("Please Enter Your Marks \n");

#endif

  return 0;
}
