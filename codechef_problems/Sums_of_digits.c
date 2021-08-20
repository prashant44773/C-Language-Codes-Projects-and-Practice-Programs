#include <stdio.h>

int main()
{
    int T ;
    scanf("%d", &T);

    while (T--)
    {
        int n, r, Sum = 0;
        scanf("%d", &n);

        while (n != 0)
        {

            r = n % 10;
            Sum = Sum + r;
            n = n / 10;
        }
        printf("%d\n", Sum);
        
    }

    return 0;
}