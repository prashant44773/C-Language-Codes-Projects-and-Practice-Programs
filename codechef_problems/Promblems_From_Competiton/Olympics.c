#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int g1, s1, b1, g2, s2, b2, team1, team2;

        // printf("\nEnter Six Integers :\t");

        scanf("%d %d %d", &g1, &s1, &b1);
        scanf("%d %d %d", &g2, &s2, &b2);

        team1 = g1 + s1 + b1;

        team2 = g2 + s2 + b2;

        if (team1 > team2)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }

    //    printf("\nThe Value Stored in : %d %d %d %d %d %d\n",g1,s1,b1,g2,s2,b2);

    return 0;
}