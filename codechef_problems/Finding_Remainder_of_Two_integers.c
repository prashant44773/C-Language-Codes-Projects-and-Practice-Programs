#include <stdio.h>

int main()
{
    int T, A, B, R;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d \n %d", &A, &B);
        R = A % B;
        printf("%d", R);
    }
    return 0;
}