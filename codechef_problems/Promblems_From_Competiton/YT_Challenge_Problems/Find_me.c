// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int count = 0 ;
//     char N , K ;
//     char integer[100];

//     printf("Enter First Integers : \n");
//     scanf("%c", &N);
//     getchar() ;

//     printf("Enter Second Integers : \n");
//     scanf("%c",&K);
//     getchar() ;

//     printf("Enter the numbers to be stored in Integers : \n");
//     scanf("%[^\n]%*c", &integer);
//     getchar();

//     for (int i = 0; i < strlen(integer); i++)
//     {
//         if (integer[i] == K)
//         {
//             count++;
//             break;
//         }
//     }

//     printf("The Numbers that were stored in integers are : : %s \n", integer);
//     printf("The Value of count is : %d\n",count) ;

//     int x = 1 , y = -1 ;

//     if(count >= 1 )
//     {
//         printf("%d",x);
//     }
//     else
//     {
//         printf("%d",y);
//     }

//     return 0;
// }

//>>>>>>>>>>>>>......................Another Approach.......................>>>>>>>>>>>>>//

//................................Solving it By Applyimg Typecasting........................//

#include <stdio.h>
#include <string.h>

int main()
{
    int n, k;
    printf("Enter the first integer :  \n");
    scanf("%d", &n);

    printf("Enter the Second integer :  \n");
    scanf("%d", &k);

    int T = n * 2;

    int integer[T];

    for (int i = 0; i < T; i++)
    {
        printf("Enter the %dth Element :  \n", i);
        scanf("%d", &integer[i]);
    }

    int count = 0 ;

    for (int j = 0; j < T; j++)
    {
        if (integer[j] == k)
        {
            count++;
            break;
        }
    }

    if (count >= 1)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }

    return 0;
}




//...................I cant Beleive the Above code worked.............hahahahahahahhahahahaahahaha.........................................//