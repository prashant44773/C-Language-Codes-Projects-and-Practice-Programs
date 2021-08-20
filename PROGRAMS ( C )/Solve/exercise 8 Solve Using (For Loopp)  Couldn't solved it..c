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
  int N;

  printf ("Enter the length Of your ID Number \n");
  scanf ("%d", &N);
  printf ("\n");


  char *Employee_ID[N];



  Employee_ID[N] = (char *) malloc (3 * sizeof (char));



  for (int i = 1; i < 4; i++)
    {


      printf ("Enter The Employee_ID   Of  Employee No. %d\n", i);
      scanf ("%s", &Employee_ID[N]);



      printf ("The Employee_ID of Employee No. %d  is  %s \n\n\n", i,
	      Employee_ID[N]);

      //  free(Employee_ID[N])
    }






  return 0;
}
