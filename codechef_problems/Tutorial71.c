
//   Comandline Calculator.........................................//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char * Operation ;
    int Num1 , Num2 ;

    Operation = argv[1]  ;
    Num1 = atoi(argv[2]) ;
    Num2 = atoi(argv[3]) ;
/*
 printf("The operation is %s\n", Operation);
 printf("The Num1 is %d\n", Num1);
 printf("The Num2 is %d\n", Num2);
*/

 if(strcmp(Operation,"add") == 0) 
 {
     printf("The Addition  is  %d", Num1 + Num2 ); 
 }   
 else if(strcmp(Operation,"sub") == 0) 
 {
     printf("The Subtraction is  %d", Num1 - Num2 ); 
 }    
 else if(strcmp(Operation,"multiply") == 0) 
 {
     printf("The Multiplication  is  %d", Num1 * Num2 ); 
 } 
 else if(strcmp(Operation,"divide") == 0) 
 {
     printf("The Division  is  %d", Num1 / Num2 ); 
 }

   
    return 0;
}
