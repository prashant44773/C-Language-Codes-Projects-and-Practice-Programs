/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct student
{

  int Roll;

  int Marks;

  char Name[50];

  char Fav_character[100];
};


int
main ()
{
  struct student Ronak, Mihir, Prakash;

  Ronak.Roll = 21;
  Ronak.Marks = 500;
  Ronak.Name[50];
  strcpy (Ronak.Name, "Ronak chutiya");
  Ronak.Fav_character;
  strcpy (Ronak.Fav_character, "Chutiyon Ka Raja");

  Mihir.Roll = 28;
  Mihir.Marks = 600;
  Mihir.Name[50];
  strcpy (Mihir.Name, "Mihir chutiya");
  Mihir.Fav_character;
  strcpy (Mihir.Fav_character, "Chutiyon Ka Shehanshah 1");


  Prakash.Roll = 35;
  Prakash.Marks = 200;
  Prakash.Name[50];
  strcpy (Prakash.Name, "Prakash chutiya");
  Prakash.Fav_character;
  strcpy (Prakash.Fav_character, "Chutiyon Ka Shehanshah 2");


  printf ("The Roll No. of Ronak is %d\n", Ronak.Roll);
  printf ("The Marks of Ronak is %d\n", Ronak.Marks);
  printf ("The Full Name of Ronak is %s\n", Ronak.Name);
  printf ("The Full Name of Ronak is %s\n\n", Ronak.Fav_character);


  printf ("The Roll No. of Mihir is %d\n", Mihir.Roll);
  printf ("The Marks of Mihir is %d\n", Mihir.Marks);
  printf ("The Full Name of Mihir is %s\n", Mihir.Name);
  printf ("The Full Name of Mihir is %s\n\n", Mihir.Fav_character);

  printf ("The Roll No. of Prakash is %d\n", Prakash.Roll);
  printf ("The Marks of Prakash is %d\n", Prakash.Marks);
  printf ("The Full Name of Prakash is %s\n", Prakash.Name);
  printf ("The Full Name of Prakash is %s\n\n", Prakash.Fav_character);

  return 0;
}
