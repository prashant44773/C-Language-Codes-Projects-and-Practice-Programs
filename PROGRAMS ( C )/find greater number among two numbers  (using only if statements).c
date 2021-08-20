/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2;
     
    printf("Enter two numbers  ");
    scanf("%d  %d",&num1,&num2);
    
    if(num1 > num2)
    {
        printf("%d is Greater",num1);
    }
    
    if(num2 > num1)
    {
        printf("%d is Greater",num2);
    }
    
    if(num1 == num2)
    {
        printf("both %d and %d  are equal",num1,num2);
    }
    
    
    
    return 0;
}
