/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int   a = 45;
    int *ptra = &a ;
    int *ptra2 = NULL ;
    printf("The address of  pointer is  %p \n\n",&ptra);
   
    printf("The Value of pointer is  %d \n\n",*ptra);
    
    printf("The address of Null pointer is  %p \n\n",&ptra2);
   
    return 0;
}
