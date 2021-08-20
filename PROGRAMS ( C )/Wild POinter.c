/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>
#include <stdlib.h>
int
main ()
{
  int a = 4354;
  int *ptr;			// This is a wild pointer
  // *ptr = 34; // This is not a good thing to do
  ptr = &a;			// ptr is no longer a wild pointer
  printf ("The value of a is %d\n", *ptr);
  return 0;
}
