/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{

label:
  printf ("we are inside a label\n");
  
  goto end;

  printf ("Hello World");

  goto label;
  end :
  printf("we are at the end");
  
  return 0;
}
