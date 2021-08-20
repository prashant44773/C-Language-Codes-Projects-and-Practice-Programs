/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>
#include<stdlib.h>
int
main ()
{
/*

// program for Malloc functions...........

  int *Pointer, i;
  int V;
  printf ("Enter the size of Array You want to Print\n ");
  scanf ("%d", &V);

  Pointer = (int *) malloc (V * sizeof (int));

  for (i = 0; i < V; i++)
    {

      printf ("Enter the value of Pointer at %d Arrayth Number\n ", i);
      scanf ("%d", &Pointer[i]);

    }

  for (i = 0; i < V; i++)
    {

      printf ("The value of Pointer at %d Arrayth Number  is  %d \n ", i,
	      Pointer[i]);

    }


*/



 // program for Calloc functions...........  
 
  int *Pointer, i;
  int V;
  printf ("Enter the size of Array You want to Print\n ");
  scanf ("%d", &V);

  Pointer = (int *)calloc(V , sizeof (int));

  for (i = 0; i < V; i++)
    {

      printf ("Enter the value of Pointer at %d Arrayth Number\n ", i);
      scanf ("%d", &Pointer[i]);

    }

  for (i = 0; i < V; i++)
    {

      printf ("The value of Pointer at %d Arrayth Number  is  %d \n", i,
	      Pointer[i]);

    }
   printf("\n\n");

   free(Pointer);
 
  // program for Realloc functions...........  
 
 
  printf ("Enter the New size of Array You want to Print\n ");
  scanf ("%d", &V);

  Pointer = (int *)realloc(Pointer,V*sizeof (int));

  for (i = 0; i < V; i++)
    {

      printf ("Enter the value of Pointer at %d Arrayth Number\n ", i);
      scanf ("%d", &Pointer[i]);

    }

  for (i = 0; i < V; i++)
    {

      printf ("The value of Pointer at %d Arrayth Number  is  %d \n", i,
	      Pointer[i]);

    }

 

  return 0;
}
