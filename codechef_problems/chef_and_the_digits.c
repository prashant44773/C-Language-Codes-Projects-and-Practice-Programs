// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int T;
//     printf("Enter the Number of Test Cases : \n");
//     scanf("%d", &T);

//     while (T--)
//     {
//         int n, remainder, new = 0;

//         int digit_1 = 0, digit_0 = 0;

//         printf("Enter the Number : \n");
//         scanf("%d", &n);

//         while (n != 0)
//         {
//             remainder = n % 10; // Extract the last digit

//             if (remainder == 1)
//             {
//                 digit_1++;
//             }
//             else
//             {
//                 digit_0++;
//             }

//             new = new * 10 + remainder; // Form the new number

//             n = n / 10; // Remove the last digit
//         }

//         if (digit_1 == 1 || digit_0 == 1)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }

//     // printf("The Repeatation of number 0 in integer is %d\n", digit_0);

//     // printf("The Repeatation of number 1 in integer is %d\n", digit_1);

//     return 0;
// }

//.................................................................................................................//

//.................................................................................................................//

//..........................................code submitted at Codechef............................................//

//..........................................Errror :- Time Limit Exceeded............................................//

// #include <stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);

//     while (T--)
//     {
//         int n, remainder, new = 0;

//         int digit_1 = 0, digit_0 = 0;

//         scanf("%d", &n);

//         while (n != 0)
//         {
//             remainder = n % 10;

//             if (remainder == 1)
//             {
//                 digit_1++;
//             }
//             else
//             {
//                 digit_0++;
//             }

//             n = n / 10;
//         }

//         if (digit_1 == 1 || digit_0 == 1)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }

//.............................................Another Attempt...........................................//

#include <stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char str[1000001];

        int remainder;

        int digit_1 = 0, digit_0 = 0;

        printf("Enter the Number  :  \n");
        scanf("%s", &str);

        int length = strlen(str);

        for (int i = 0; i < length; i++)
        {
            if (str[i] == '1')
            {
                digit_1++;
            }
            else if (str[i] == '0')
            {
                digit_0++;
            }
        }

        if (digit_1 == 1 || digit_0 == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
