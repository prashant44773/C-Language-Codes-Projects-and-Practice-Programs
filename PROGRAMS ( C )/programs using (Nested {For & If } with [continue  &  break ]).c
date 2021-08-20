/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int  i, age;
  
   printf("Enter A Number Less than 20 :-    ");
   scanf("%d",&i);
   
   for(i=0 ; i< 20; i++)
 {  
   printf("%d\n Enter Your Age  ",i);
   scanf("%d",&age);
 
   if(age<18)
   {
       continue;
   }
   printf("You have successfully croseed the continue statement\n");
   printf("You have successfully croseed the continue statement\n");
   printf("You have successfully croseed the continue statement\n");
   printf("You have successfully croseed the continue statement\n");
  
}
    return 0;
}
