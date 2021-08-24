#include <stdio.h>

int main()
{
    int a, b, var , div = 0;
    printf("Enter the Numerator Integer : \t");
    scanf("%d", &a);

    printf("Enter the Denominator Integer : \t");
    scanf("%d", &b);

    int count = 0 , i = 0;

    while(i = 1)
    {
        count++;

        if( a % b == 0)
        {
            i = 1;
            div = a ;
            break ;
        }

        a-- ;
    }

    printf("\nThe value of Div is : %d\n",div);
    

    printf("\nThe Value of Count is : %d\n",count);


    return 0;
}



// #include <stdio.h>

// int main()
// {
//     int a, b, var , div = 0;
    
//     scanf("%d", &a);
    
//     scanf("%d", &b);

//     int count = 0 , i = 0;

//     while(i = 1)
//     {
//         a-- ;

//         if( a % b == 0)
//         {
//             i = 1;
//             div = a ;
//             break ;
//         }
//     }

//     printf("%d\n",div);

//     return 0;
// }