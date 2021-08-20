#include <stdio.h>

int main()
{
    int N, P1 = 1, P2 = 2;
    printf("Enter The Number of Rounds : \n");
    scanf("%d", &N);

    int Difference[N], Lead, Start = 0 , T=0;

    int player1[N], player2[N];

    while (T = N)
    {                                  // loop Starts
        int i = T;

        printf("Round : %d \n", N);

        printf("Enter The Score of Player_1 : \n");
        scanf("%d", &player1);
        getchar();

        printf("Enter The Score of Player_2 : \n");
        scanf("%d", &player2);
        getchar();

        printf("\n\n");

        if (player1 > player2)
        {
            Difference[i] = player1 - player2;
        }
        else if (player2 > player1)
        {
            Difference[i] = player2 - player1;
        }
    }                                  // Loop Falls

    for (int j = 0; j < N; j++)
    {
        if (Difference[Start] < Difference[j])
        {
            Start = j;
            continue;
        }
    }

    Lead = Difference[Start]; // the output that we wanted....

    // printf("The Value of Start is %d \nThe Maxixmum Difference is %d \n",Start,Lead) ;

    if (player1[Start] > player2[Start])
    {
        printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P1, Lead);
    }
    else if (player2[Start] > player1[Start])
    {
        printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P2, Lead);
    }

    return 0;
}
