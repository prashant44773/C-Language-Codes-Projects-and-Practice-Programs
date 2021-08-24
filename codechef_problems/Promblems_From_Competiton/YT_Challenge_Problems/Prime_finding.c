#include <stdio.h>

int main()
{
    int n = 8 , count = 0 , success = 0;
    printf("Enter the Number :\t");
    scanf("%d", &n);

    printf("\nThe Prime Numbers are : \n");

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
            // success++ ;
            printf("%d ", i);
        }

        count = 0;

    }

    // printf("The value of success is :\t%d",success);

    return 0;
}