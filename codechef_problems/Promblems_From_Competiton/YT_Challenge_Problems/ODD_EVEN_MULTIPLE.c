#include <stdio.h>

int check(int t)
{
    int d ;

    if (t % 3 != 0)
    {
        return -1;
    }
    else
    {
        d = t/3 ;

        if (d%2==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
}

int main()
{
    int n, var;
    printf("\nEnter the  Number : \t");
    scanf("%d", &n);

    var = check(n);

    printf("\nThe Function Returned : %d\n", var);

    return 0;
}