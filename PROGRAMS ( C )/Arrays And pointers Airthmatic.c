/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a=45;
    
    int *ptra = &a;
    
    printf("the Adress of a  is  %d \n",&ptra);
   
    printf("the Adress of a  is  %d \n",ptra++);
    
    printf("The Adrresss of pointer is  %d \n ",&ptra-2);
    
    return 0;
}
