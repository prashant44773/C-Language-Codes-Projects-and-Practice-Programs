#include<stdio.h>  

int main()
{
  FILE *Ttr = NULL ;
  char Strg[99] ;
/*
// ********Reading A File*********

  Ttr = fopen("Myfile.txt","r");
  fscanf(Ttr,"%s",Strg);

  printf("The Content this Fike HOLDS is ************* %s *************",Strg);

 */
/*
// ********Writing A File*********

  char Strg1[99] = "Thie program is inspired By Codewithharry" ;
  Ttr = fopen("Myfile.txt","w");
  fprintf(Ttr,"%s",Strg1);

  printf("The Content this Fike HOLDS is ************* %s *************",Strg1);

*/
  
 // ********Writing A File IN Append Mode*********

  char Strg2[99] = "Thie program is inspired By Codewithharry" ;
  Ttr = fopen("Myfile.txt","a");
  fprintf(Ttr,"%s",Strg2);

  printf("The Content this Fike HOLDS is ************* %s *************",Strg2);
 
    return 0 ; 
}