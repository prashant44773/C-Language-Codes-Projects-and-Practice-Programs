#include <stdio.h>

int main()
{
    int T;
    printf("Enter Number of Test Cases : \t");
    scanf("%d", &T);

    while (T--)
    {
        int A1, A2, A3, A4;
        // printf("Enter Four Numbers : \t");
        // scanf("%d %d %d %d", &A1, &A2, &A3, &A4);

        printf("Enter First Number : \t");
        scanf("%d",&A1);

        printf("Enter Second Number : \t");
        scanf("%d",&A2);

        printf("Enter Third Number : \t");
        scanf("%d",&A3);

        printf("Enter Fourth Number : \t");
        scanf("%d",&A4);

        if (A1 == A2 && A1 == A3 && A1 == A4) // if 4 Integers  are same
        {
            printf("0\n");
        }
        // else if (A1 == A2 && A1 == A3) // if 3 Integers are same
        // {
        //     printf("1\n");
        // }
        // else if (A1 == A2 && A1 == A4) // if 3 Integers are same
        // {
        //     printf("1\n");
        // }
        // else if (A1 == A3 && A1 == A4) // if 3 Integers are same
        // {
        //     printf("1\n");
        // }
        
        //............................................................
        else if(  (  (A1 != A2) && (A1 != A3) && (A1 != A4)  )  &&  (  (A2 != A1) && (A2 != A3) && (A2 != A4)  )  &&  (  (A3 != A1) && (A3 != A2) && (A3 != A4)  )  &&  (  (A4 != A1) && (A4 != A3) && (A4 != A2)   ) )
        {
            printf("2\n");
        }
        //............................................................

        // else if ( (A1 != A2) && (A1 != A3) && (A1 != A4) )   
        // {
        //     printf("2\n");
        // }
        // else if ( (A2 != A1) && (A2 != A3) && (A2 != A4) )
        // {
        //     printf("2\n");
        // }
        // else if ( (A3 != A1) && (A3 != A2) && (A3 != A4) )
        // {
        //     printf("2\n");
        // }
        // else if ( (A4 != A1) && (A4 != A3) && (A4 != A2) )
        // {
        //     printf("2\n");
        // }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}