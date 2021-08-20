#include <stdio.h>

int main()
{
    int a, b, var , div = 0;
    printf("Enter the Numerator Integer : \t");
    scanf("%d", &a);

    printf("Enter the Denominator Integer : \t");
    scanf("%d", &b);

    int count = 0;

    for (int i = a ; i > 0 ; i--)
    {
        count++;

        a-- ;

        if( a % b == 0)
        {
            div = a ;
            break ;
        }
    }

    printf("\nThe value of Div is : %d\n",div);
    // printf("The value of a is : %d\n",a);
    // printf("The value of b is : %d\n",b);
    
    printf("\nThe Value of Count is : %d\n",count);


    return 0;
}