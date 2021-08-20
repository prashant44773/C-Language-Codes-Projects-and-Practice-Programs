#include <stdio.h>
#include<conio.h>

#define Num 91


int main()
{

#if Num >= 35   
    printf("You Passed \n");

#elif Num >= 70 
    printf("You Did Well\n");

#elif Num >= 85
    printf("You Rock \n");
#else
    printf("Please Enter Your Marks \n");

#endif

    return 0;
}