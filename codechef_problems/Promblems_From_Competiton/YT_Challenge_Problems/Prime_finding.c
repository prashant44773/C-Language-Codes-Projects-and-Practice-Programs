#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the Number :\t");
    scanf("%d", &n);

    printf("The Prime Numbers are : \n");

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }

    }

    return 0;
}