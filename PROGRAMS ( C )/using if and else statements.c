/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,max;
     
    printf("Enter two numbers  ");
    scanf("%d  %d",&num1,&num2);
    
    if(num1 > num2)
       max=num1;
    
    else
    max=num2;
    {
        printf("%d is max",max);
    }
    

    
    
    
    return 0;
}
