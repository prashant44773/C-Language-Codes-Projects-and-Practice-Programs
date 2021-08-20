/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
  float  num;
  
  printf("Select which type of quantity you want to Convert\n");

  printf("1. Convert km into miles\n");
  
  printf("2. Convert inches into foot\n");
  
  printf("3. Convert kg into pounds\n");
  
  printf("4. Convert inches into meter\n");
  
  printf("Enter 0 To Exit From Program\n"); 
  
  scanf("%f\n",&num);

if (num == 1)
   {
       printf("Enter The Value That You Want To Convert into miles\n");
       scanf("%f\n",&num);
       printf("%f km  is Equals to %f miles\n",num,num/0.6213);
   }

else if(num == 2)
   {
       printf("Enter The Value That You Want To Convert into foot\n");
       scanf("%f\n",&num);
       printf("%f inches  is Equals to %f foot\n",num,num/12);
   }

else if(num == 3)
   {
       printf("Enter The Value That You Want To Convert into pounds\n");
       scanf("%f\n",&num);
       printf("%f kg  is Equals to %d pounds\n",num,num*2.204);  
   }

else if(num == 4)
   {
       printf("Enter The Value That You Want To Convert into meter\n");
       scanf("%f\n",&num);
       printf("%f inches  is Equals to  %f meter\n",num,num/39.37);
   }


  return 0;
}
