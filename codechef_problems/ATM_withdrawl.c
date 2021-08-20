
// Initial Solution............. 

#include <stdio.h>
int main()
{
    int A;
    float R, M , withdrawl;
    scanf("%d", &A);
    scanf("%f", &M);
    R = A % 5;
    if (R == 0 && M-A > 0)
    {
        withdrawl = A - 0.50;
        printf("%f", withdrawl);
    }
    else if (M-A < 0)
    {
        printf("%f", M);
    }
    return 0;
}


// Final Solution (Modified with help of online Answers)
/*


#include <stdio.h>
int main()
{
    int A;
    float  M ;
    scanf("%d", &A);
    scanf("%f", &M);
    if (A % 5 == 0  &&  A<=M-0.50)
    {
        printf("%.2f", M - A - 0.50);
    }
    else 
    {
        printf("%.2f", M);
    }
    return 0;
}

*/