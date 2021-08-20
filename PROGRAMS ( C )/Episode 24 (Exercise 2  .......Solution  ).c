/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int  Num ;
   int Variable ;
    
   float  km_To_miles     =  1/1.609    ;
   float  inches_To_Foot  = 1/12      ;
   float  cm_To_inches    = 1/2.54    ;
   float  pounds_To_kgs   = 1/2.204   ;
   float  inches_To_meter = 1/39.37   ;
   
   float    num1 , num2 ;
   
           
            
   while(1)    
   {
           printf("Select any Quantity that you want to convert\n      1. km into miles\n      2. inches into\n      3. cm into inches\n      4. pounds into kgs\n      5. inches into meter\n     ****Enter 0 To  Exit From Program****\n\n ");
           scanf("%d",&Variable);
            
            
            
      switch(Variable)
         
           {
               case 1 :
                {
                    printf("Enter the value that you want to convert into miles\n");
                    scanf("%f",&num1);
                    num2 = num1*km_To_miles ;
                    printf("%f km   is   %f miles\n\n",num1,num2);
                    break;
                }
               case 2 :
                {
                    printf("Enter the value that you want to convert into foot\n");
                    scanf("%f",&num1);
                    num2 = num1*inches_To_Foot ;
                    printf("%f inches   is   %f foot\n\n",num1,num2);
                    break;
                }  
               case 3 :
                {
                    printf("Enter the value that you want to convert into inches\n");
                    scanf("%f",&num1);
                    num2 = num1*cm_To_inches  ;
                    printf("%f cm   is   %f inches\n\n",num1,num2);
                    break;
                } 
               case 4 :
                {
                    printf("Enter the value that you want to convert into kgs\n");
                    scanf("%f",&num1);
                    num2 = num1*pounds_To_kgs ;
                    printf("%f pounds   is   %f kgs\n\n",num1,num2);
                    break;
                }
               case 5 :
                {
                    printf("Enter the value that you want to convert into meter\n");
                    scanf("%f",&num1);
                    num2 = num1*inches_To_meter  ;
                    printf("%f inches  is   %f meter\n\n",num1,num2);
                    break;
                }
               case 0 :
                {
                    printf("Exited from the function\n\n\n");
                    goto end;
                }
               
               
               
           }
            
      
    }
         end :  
    return 0;
}
