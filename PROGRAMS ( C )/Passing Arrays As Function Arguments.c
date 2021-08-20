/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
fuction1 (int *ptr)
{

  for (int i = 0; i < 5; i++)
    {
      printf ("the value of array at %d is  %d\n", i, *ptr);

      *ptr++;

    }


}

int
main ()
{
  int arr[5] = { 5, 7, 8, 4, 3 };

  fuction1 (arr);

  return 0;
}
