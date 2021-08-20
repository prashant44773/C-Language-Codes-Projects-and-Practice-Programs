/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int  i, age;
   printf("YOUR AGE SHOULD BE ABOVE 18 OR 18 TO VOTE\n");
   printf("Enter Your Voter ID  :-    ");
   scanf("%d",&i);
   
   for(i=18 ; i<80 ; i++)
 {  
   printf("%d\n Enter Your Age",i);
   scanf("%d",&age);
 
   if(age>18)
   {
       break;
   }
}
    return 0;
}
