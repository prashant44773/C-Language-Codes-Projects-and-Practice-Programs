/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void
Function_Str (char N[])
{
  int i;
  while (N[i] != '\0')
    {

      printf ("%c", N[i]);
      i++;


    }

  printf ("\n");
}


int
main ()
{

  // char String[] = { 'P', 'r', 'a', 's', 'h', 'a', 'n', 't', '\0' };

  char String[80] = "Prashant";

  //      gets(String);


  //   printf("using custom function : \n");
//     Function_Str (String);



  printf ("using puts :  \n");
  puts (String);

  printf ("%s/n", String);

  return 0;
}
