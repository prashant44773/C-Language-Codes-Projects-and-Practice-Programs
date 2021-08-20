/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter the first number   :  ");
    scanf("%d",&a);
    
    printf("\nEnter the second number  :  ");
    scanf("%d",&b);
    
    printf("\nEnter the Third number   :  ");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
       { 
        printf("\n Greatest number is %d",a);
       } 
       
        else
       {
        printf("\n Greatest number is %d",c);
       }

    }
    
    else if(b>c)
    
    {
       printf("\n Greatest number is %d",b);
    }
    
    else
    {
        printf("\n Greatest number is %d",c);
    }
   
   
    return 0;
}
