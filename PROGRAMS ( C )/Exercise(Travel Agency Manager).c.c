/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/






#include <stdio.h>

struct Employee
{


  char Name[50];

  char License_No[70];

  char Route[90];

  int Km;



} e1, e2, e3;


int
main ()
{
 
// The Program Lines for first Driver : 

  printf ("Enter the following Information About The First Driver\n");

  printf ("Enter your Name  \n");
  e1.Name;
  scanf ("%s", e1.Name);
  printf ("Enter your License_No :  \n");
  e1.License_No;
  scanf ("%s", e1.License_No);
  printf ("Enter the route from which you Travel\n");
  e1.Route;
  scanf ("%s", e1.Route);
  printf("Enter how many Kilometers You have Traveled During Working hours\n");
  e1.Km;
  scanf ("%d", &e1.Km);
  printf("\n");
  
// The Program Lines for Second Driver : 

  printf ("Enter the following Information About The Second Driver\n");

  printf ("Enter your Name  \n");
  e2.Name;
  scanf ("%s", e2.Name);
  printf ("Enter your License_No :  \n");
  e2.License_No;
  scanf ("%s", e2.License_No);
  printf ("Enter the route from which you Travel\n");
  e2.Route;
  scanf ("%s", e2.Route);
  printf("Enter how many Kilometers You have Traveled During Working hours\n");
  e2.Km;
  scanf ("%d", &e2.Km);
  printf("\n");
  
// The Program Lines for Third Driver :

   printf ("Enter the following Information About The Third Driver\n");

  printf ("Enter your Name  \n");
  e3.Name;
  scanf ("%s", e3.Name);
  printf ("Enter your License_No :  \n");
  e3.License_No;
  scanf ("%s", e3.License_No);
  printf ("Enter the route from which you Travel\n");
  e3.Route;
  scanf ("%s", e3.Route);
  printf("Enter how many Kilometers You have Traveled During Working hours\n");
  e3.Km;
  scanf ("%d", &e3.Km);
  printf("\n");

//Final Printing Program Lines For The Code :
  printf("***************************************************************************************************************************************************\n\n");

// Code For First Driver : 
  printf ("*********The Details of the First Driver*********\n\n");
  printf ("Driver's  Name is  %s\n", e1.Name);
  printf ("Driver's  License_No  is  %s\n", e1.License_No);
  printf ("Driver's  Traveling Route  is  %s\n", e1.Route);
  printf ("Driver's  Traveled  %d Kilometers During Working hours.\n", e1.Km);
  printf("\n\n");
  
// Code For Second Driver : 
  printf ("*********The Details of the Second Driver*********\n\n");
  printf ("Driver's  Name is  %s\n", e2.Name);
  printf ("Driver's  License_No  is  %s\n", e2.License_No);
  printf ("Driver's  Traveling Route  is  %s\n", e2.Route);
  printf ("Driver's  Traveled  %d Kilometers During Working hours.\n", e2.Km);
  printf("\n\n");
  
// Code For Third Driver : 
  printf ("*********The Details of the Third Driver*********\n\n");
  printf ("Driver's  Name is  %s\n", e3.Name);
  printf ("Driver's  License_No  is  %s\n", e3.License_No);
  printf ("Driver's  Traveling Route  is  %s\n", e3.Route);
  printf ("Driver's  Traveled  %d Kilometers During Working hours.\n", e3.Km);
  printf("\n\n");
  
  return 0;
}

