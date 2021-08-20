#include <stdio.h>

int
main ()
{
  int T;
  float salary, G_salary1, G_salary2;
  
  scanf ("%d", &T);

  while (T--)
    {
      scanf ("%f", &salary);


      if (salary < 1500)
	{
	  G_salary1 = salary + salary ;
	  printf ("%.2f\n", G_salary1);
	}
      else if (salary >= 1500)
	{
	  G_salary2 = salary + 500 + salary*(0.98);
	  printf ("%.2f\n", G_salary2);
	}
      else
	{
	  return 1;
	}


    }

  return 0;
}
