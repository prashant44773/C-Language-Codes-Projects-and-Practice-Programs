#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\nEnter The Number Whose Table you wnat to print\n");
    scanf("%d", &a);
    getchar();

    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}