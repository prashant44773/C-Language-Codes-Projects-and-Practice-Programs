/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int
main ()
{
  char Name[] = "Prashant";
  char SurName[] = "Naiker";
  char s3[100];
//     puts(strcat(Name,SurName));



/*      printf("The length of the sring is %d",strlen(Name));     
        printf("The length of the sring is %d",strlen(SurNameName));        */



  // the below code shows Error when Executed..............
  /*   puts(strlen(SurName));       */



  //     puts(SurName);



  /*
     // the code didn't work...................

     printf("The Sring will be Printed in Reverse Format\n");
     puts(strev(Name));

   */


/* 
 // It Copies The value of one VARIABLE INTO ANOTHER VARIABLE  :
    strcpy(s3,strcat(Name,SurName));
 
    puts(s3); 
 
*/



  printf
    ("the strcmp Function Return the ASCII difference Between Two STRINGS\n\n The difference between these String is %d",
     strcmp (Name, SurName));

  return 0;
}
