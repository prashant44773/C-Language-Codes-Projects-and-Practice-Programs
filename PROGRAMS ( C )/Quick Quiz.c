/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<string.h>

int
main ()
{

  char s1[50];
  char s2[50];
  char s3[70];


  printf ("Enter the First Name \n");
  gets (s1);
  printf ("Enter the First Name \n");
  gets (s2);

  printf ("These both %s and %s are friends  \n", s1, s2);

  strcpy (s3, strcat (s1, s2));
  puts (s3);
  return 0;
}
