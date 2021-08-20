/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int
ReverseTheArray (int array[])
{
  int temp, i;


  printf ("The value of Array After Reversed\n\n#####################\n");
  for (i = 0; i < 7; i++)
    {
      temp = array[i];
      array[i] = array[6 - i];
      array[6 - i] = temp;

      printf ("The value of Array at %d is %d\n", i, array[i]);

    }



}

int
main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 99 };

  printf
    ("The value of Array Before Reversed\n\n****************************\n");
  for (int i = 0; i < 7; i++)
    {
      printf ("The value of Array at %d is %d\n", i, arr[i]);

    }
  ReverseTheArray (arr);
  return 0;
}
