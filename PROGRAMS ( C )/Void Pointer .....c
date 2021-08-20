/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  char Name = 'R';
  int Var = 23;
  float Var2 = 56.7849;

  void *Pointer;

  Pointer = &Var;
  printf ("The Value of First Variable is %d\n", (*(int *) Pointer));

  Pointer = &Name;
  printf ("The Value of Second Variable is %c\n", (*(char *) Pointer));

  Pointer = &Var2;
  printf ("The Value of First Variable is %f\n", (*(float *) Pointer));



  return 0;
}
