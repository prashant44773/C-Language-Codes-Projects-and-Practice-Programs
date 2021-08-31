#include <stdio.h>
#include <stdlib.h>

//..............Global Variables.............//

int i, j ;


int horizontal = 60;

int verticle = 25;

// snakes starting position

int Snake_X, Snake_Y;

// Fruit's Co-Ordinate

int Fruit_X, Fruit_Y;

//.........Score Variables..........//

int GameOver;

//...........................................//

int generate()
{

    GameOver = 0;

    Snake_X = verticle / 2;

    Snake_Y = horizontal / 2;

    //.............Fruit Generation.............//

again1:

    Fruit_X = rand() % verticle;

    if (Fruit_X == 0)
    {
        goto again1;
    }

again2:

    Fruit_Y = rand() % horizontal;

    if (Fruit_Y == 0)
    {
        goto again2;
    }
}

void Walls()
{
    system("cls");

    for (i = 0; i < verticle; i++)
    {
        for (j = 0; j < horizontal; j++)
        {
            if (i == 0 || j == 0 || i == verticle - 1 || j == horizontal - 1)
            {
                printf("#");
            }
            else
            {
                if (i == Snake_X && j == Snake_Y)
                {
                    printf(">");
                }
                else if (i == Fruit_X && j == Fruit_Y)
                {
                    printf("O");
                }
                else
                {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
}

int main()
{
    while (1)
    {

        generate();
        Walls();

        // for(int i=0 ; i < 1000 ; i++)
        // {
        //     for(int j=0 ; j < 1000 ; j++)
        //     {
        //         for(int r=0 ; r < 100 ; r++)
        //         {

        //         }
        //     }
        // }
    }
    return 0;
}