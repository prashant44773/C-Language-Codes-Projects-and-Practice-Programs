#include<stdio.h>

int main()
{
    int l, r;

    printf("Enter the Starting Number is : \t");
    scanf("%d", &l);

    printf("Enter the Ending Number is : \t");
    scanf("%d", &r);

    for (int i = l ; i < r ; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}