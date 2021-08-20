/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int main ()
{
  int  num, num1, num2, num3, num4 ;
  
  printf("Select which type of quantity you want to Convert\n");

  printf("1. Convert km into miles\n");
  
  printf("2. Convert inches into foot\n");
  
  printf("3. Convert kg into pounds\n");
  
  printf("4. Convert inches into meter\n");
  
  printf("Enter 0 To Exit From Program\n"); 
  
  scanf("%d\n",&num);

if (num == 1)
   {
       printf("Enter The Value That You Want To Convert into miles\n");
       scanf("%d\n",&num1);
       printf("%d km  is Equals to %d miles\n",num1,num1/1.6213);
   }

else if(num == 2)
   {
       printf("Enter The Value That You Want To Convert into foot\n");
       scanf("%d\n",&num2);
       printf("%d inches  is Equals to %d foot\n",num2,num2/12);
   }

else if(num == 3)
   {
       printf("Enter The Value That You Want To Convert into pounds\n");
       scanf("%d\n",&num3);
       printf("%d kg  is Equals to %d pounds\n",num3,num3*2.204);  
   }

else if(num == 4)
   {
       printf("Enter The Value That You Want To Convert into meter\n");
       scanf("%d\n",&num4);
       printf("%d inches  is Equals to  %d meter\n",num4,num4/39.37);
   }


  return 0;
}
