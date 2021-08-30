#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if(b > a && b > c)
        {
            printf("b");
        }

        if(c > a && c > b)
        {
            printf("c");
        }

        if(a > b && a > c)
        {
            printf("a");
        }
    }
    return 0;
}