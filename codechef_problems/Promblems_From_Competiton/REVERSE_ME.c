#include <stdio.h>

int main()
{
    int n, arr[100001];
    printf("Enter the Number of Integers : \t");
    scanf("%d", &n);

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe Reversed Numbers Are : \t");

    for (int i = n-1 ; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}