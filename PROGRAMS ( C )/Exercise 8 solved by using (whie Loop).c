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
  int N, i = 1;

  char *Employee_ID;






  while (i <= 4)
    {
      printf ("Enter the length Of your ID Number \n");
      scanf ("%d", &N);
      printf ("\n");


      Employee_ID = (char *) malloc (N * sizeof (char));


      printf ("Enter The Employee_ID   Of  Employee No. %d\n", i);
      scanf ("%s", Employee_ID);



      printf ("The Employee_ID of Employee No.  is  %s \n\n\n", Employee_ID);

      free (Employee_ID);


    }



  return 0;
}
