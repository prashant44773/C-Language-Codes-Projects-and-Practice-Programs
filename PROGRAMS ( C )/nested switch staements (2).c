/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int   Roll_NO, Marks;
   
   printf("Enter Your Roll NO  :-   ");
   scanf("%d",&Roll_NO);
   
   switch(Roll_NO)
   {
       case 13 :
       printf("Your marks are 33\n");
       printf("Write YOur MarkS  Here ");
       scanf("%d",&Marks);
       switch(Marks)
       {
        case 33:   
       printf("You have Passed the Exam !  ");
       }
       break;
   
       case 24 :
       printf("Your MarkS are 48\n");
       printf("Write your MarkS Here ");
       scanf("%d",&Marks);
       switch(Marks)
       {
        case 48 :
        printf("Keep up the good Work");
       }
       break;
      
      case 30 :
      printf("your marks are 85\n");
      printf("Write Your MarKS Here ");
      scanf("%d",&Marks);
      switch(Marks)
      {
      case 85:      
      printf("You Are Doing Great ");      
      }
      break;
      
       default :
       printf("Your Roll NO Is not matching with given data");
      }
    return 0;
}
