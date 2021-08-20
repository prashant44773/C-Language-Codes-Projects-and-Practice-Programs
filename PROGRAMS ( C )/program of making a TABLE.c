/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{

  int i;

  printf ("Enter The Number That's Table You wANT TO PRINT :- \n");
  scanf ("%d\n", &i);

  printf ("The Table Of %d is \n", i);

  printf ("%d X 1   =   %d\n", i, i * 1);
  printf ("%d X 2   =   %d\n", i, i * 2);
  printf ("%d X 3   =   %d\n", i, i * 3);
  printf ("%d X 4   =   %d\n", i, i * 4);
  printf ("%d X 5   =   %d\n", i, i * 5);
  printf ("%d X 6   =   %d\n", i, i * 6);
  printf ("%d X 7   =   %d\n", i, i * 7);
  printf ("%d X 8   =   %d\n", i, i * 8);
  printf ("%d X 9   =   %d\n", i, i * 9);
  printf ("%d X 10  =   %d", i, i * 10);


  return 0;
}
