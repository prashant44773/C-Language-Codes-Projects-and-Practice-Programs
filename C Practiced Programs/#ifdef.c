#include<stdio.h>

#define MAX 65

int main()
{

    #ifdef MAX
    printf("Function is Defined ");
    
    #else 
    printf("Function is Not Defined");
    

    #endif 

    return 0 ;
}