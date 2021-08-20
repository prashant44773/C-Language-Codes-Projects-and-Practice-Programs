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
    
    else
    {
        printf("%d is Greater",num2);
    }
    

    
    
    
    return 0;
}
