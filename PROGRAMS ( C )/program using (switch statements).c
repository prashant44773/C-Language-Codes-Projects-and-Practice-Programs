/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int   Marks;
   
   printf("Enter your marks");
   scanf("%d",&Marks);
   
   switch(Marks)
   {
       case 33 :
       printf("You have Passed the Exam !  ");
       break;
       
       case 45 :
       printf("keep up the Good Work  !");
       break;
       
       case 65 :
       printf("You are Doing Good ! ");
       break;
       
       case 80 :
       printf("You are doing a Great Job !");
       break;
       
       
   }
    return 0;
}
