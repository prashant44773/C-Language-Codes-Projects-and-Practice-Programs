#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number : \n");
    scanf("%d", &num);

    num = num / 10; // To remove the last the digit.....//

    num = num % 10; // To Extract the last digit..........//

    //    if (num == 7)
    //    {
    //       printf("YES\n");
    //    }
    //    else
    //    {
    //       printf("NO\n");
    //    }

    if (num == 7)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    printf("The Second Last Digit is : %d\n", num);

    return 0;
}