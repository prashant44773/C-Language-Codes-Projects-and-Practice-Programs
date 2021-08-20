/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
  int  num;
  float num1, num2, num3, num4 ; 
  
  label1 :
  {
    printf("******Select Any Other Quantity That You Want To Convert****** \n\n ");  
    
  }
  
  
  
  printf("Select which type of quantity you want to Convert\n");

  printf("1. Convert km into miles\n");
  
  printf("2. Convert inches into foot\n");
  
  printf("3. Convert kg into pounds\n");
  
  printf("4. Convert inches into meter\n\n");
  
  printf("Enter  0  to Exit From the Loop\n");
  
  scanf("%d\n",&num);
  
  
  
  switch(num) 
{  
  
case 1:
   {
       printf("Enter The Value That You Want To Convert into miles\n");
       scanf("%f\n",&num1);
       printf("%f km  is Equals to %f miles\n\n\n\n",num1,num1/1.6213);
       goto label1;
       break;
   }

case 2:
   {
       printf("Enter The Value That You Want To Convert into foot\n");
       scanf("%f\n",&num2);
       printf("%f inches  is Equals to %f foot\n\n\n\n",num2,num2/12);
       goto label1;  
       break;
   }

case 3:
   {
       printf("Enter The Value That You Want To Convert into pounds\n");
       scanf("%f\n",&num3);
       printf("%f kg  is Equals to %f pounds\n\n\n\n",num3,num3*2.204); 
       goto label1; 
       break;
   }

case 4:
   {
       printf("Enter The Value That You Want To Convert into meter\n");
       scanf("%f\n",&num4);
       printf("%f inches  is Equals to  %f meter\n\n\n\n",num4,num4/39.37);
       goto label1;   
       break;
   }
case 0:
   {
       break;
   }

}
  return 0;
}
