/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
Star_Pattern (int N)
{

  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j <= i; j++)
	{
	  printf ("*");
	}

      printf ("\n");
    }



}

int
R_Star_Pattern (int M)
{

  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j <= M - i - 1; j++)
	{
	  printf ("*");
	}

      printf ("\n");
    }




}


int
main ()
{
  int num1, Var2;


  printf
    ("Enter '0' To print the Star Pattern   OR   Enter  '1'  To print the Reverse Star Pattern\n\n");
  scanf ("%d\n", &num1);


  printf ("How Many rows you want to print  \n");
  scanf ("%d\n", &Var2);


  switch (num1)

    {






    case 1:
      {
	Star_Pattern (Var2);

	break;
      }


    case 0:
      {
	R_Star_Pattern (Var2);

	break;
      }

    default:
      {
	printf ("Invalid choice");
	break;

      }
    }


  return 0;
}
