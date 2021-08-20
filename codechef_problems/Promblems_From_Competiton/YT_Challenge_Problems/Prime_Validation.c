#include <stdio.h>

int main()
{
    int n, m, count = 0;
    printf("Enter the Number : \t");
    scanf("%d", &n);

    m = n / 2;

    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }

    if (count == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}