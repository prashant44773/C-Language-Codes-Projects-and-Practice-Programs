/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*/


#include<stdio.h>
#include<conio.h>


int
main ()
{
  int a[3][3], b[3][3], R[3][3];	// Here a & b are matrix ,, and  R is their Resultant.   
  int Sum ;
  
  // To Take Input for Matrix a :

  printf ("Enter the Input for Matrix a\n\n");

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf ("Enter the a[%d][%d]th Matrix\n", i, j);
	  scanf ("%d", &a[i][j]);
	  //   getchar();

	}

    }


  // To Take Input for Matrix b :

  printf ("Enter the Input for Matrix a\n\n");

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf ("Enter the a[%d][%d]th Matrix\n", i, j);
	  scanf ("%d", &b[i][j]);
	  //   getchar();

	}

    }

  // Calculating The Resultant(R)  for Matrix a & b  : 

  printf ("The Resultant  Matrix of a & b\n\n");

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{

	  for (int k = 0; k < 3; k++)
	    {
	        
	      Sum += a[i][k] * b[k][j];
	   //   Sum = 0;
	    }

	  R[i][j] = Sum;

	}

    }

  // Printing the Resultant Matrix of a &  b :

  printf ("Printing the Resultant for Matrix a & b\n\n");

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	     printf("%d\n",R[i][j]);
	  
	}

    }


  return 0;
}
