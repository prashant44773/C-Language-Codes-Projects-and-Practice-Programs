#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Num, guess, count = 0;
    srand(time(0));

    Num = rand() % 100 + 1; // Generates a random number from between 0 and 100 .....We want Numbers between 1 to 100 ...so we are adding (+ 1).........//

    do
    {
        printf("\nEnter the Number that you guessed :  \n");
        scanf("%d",&guess);

        if (guess > Num)
        {
            printf("The Guessed Number is High\n");
        }
        else if (guess < Num)
        {
            printf("The Guessed Number is Low\n");
        }
        else
        {
            printf("You Guessed  The Number in %d Attempts", count);
        }

        count++;

    } while (Num != guess);


    return 0;
}
