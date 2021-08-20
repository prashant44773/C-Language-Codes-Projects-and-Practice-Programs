#include <stdio.h>

int main()
{
    int a, b, c, second_largest = 0;
    // printf("Enter First Integer :  \n");
    scanf("%d\n", &a);

    // printf("Enter Second Integer :  \n");
    scanf("%d\n", &b);

    // printf("Enter Third Integer :  \n");
    scanf("%d\n", &c);
   

    if (a > b && a > c)
    {
        if (b > c)
        {
            second_largest = b;
        }
        else
        {
            second_largest = c;
        }
    }

    else if (b > c && b > a)
    {
        if (c > a)
        {
            second_largest = c;
        }
        else
        {
            second_largest = a;
        }
    }

    else if (c > a && c > b)
    {
        if (a > b)
        {
            second_largest = a;
        }
        else
        {
            second_largest = b;
        }
    }

    printf("The Second Largest Number is : %d\n", second_largest);

    return 0;
}



//.................................THe code that i subbmited at codechef ....................///




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..............//


#include <stdio.h>

int main()
{
    int a, b, c, second_largest = 0;
    
    scanf("%d\n", &a);

    scanf("%d\n", &b);

    scanf("%d\n", &c);
   

    if (a > b && a > c)
    {
        if (b > c)
        {
            second_largest = b;
        }
        else
        {
            second_largest = c;
        }
    }

    else if (b > c && b > a)
    {
        if (c > a)
        {
            second_largest = c;
        }
        else
        {
            second_largest = a;
        }
    }

    else if (c > a && c > b)
    {
        if (a > b)
        {
            second_largest = a;
        }
        else
        {
            second_largest = b;
        }
    }

    printf("%d\n", second_largest);

    return 0;
}