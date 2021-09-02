#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//..............Global Variables.............//

int i, j;

int horizontal = 60;

int verticle = 35;

//.......................................//

// snakes starting position

int Snake_X, Snake_Y;

// int Snake_X = 13;

// int Snake_Y = 30;

//.........................................//

// Fruit's Co-Ordinate

int Fruit_X, Fruit_Y;

//.........Score Variables..........//

int GameOver = 0;

//.........Movement Related Variables.........//

int move = 0;

//...........................................//

int fruit() //.............Fruit Generation.............//
{

again1:

    Fruit_X = rand() % 25 + 5;  //% verticle;

    if (Fruit_X == 0)
    {
        goto again1;
    }

again2:

    Fruit_Y = rand() % 45 + 10 ; //% horizontal;

    if (Fruit_Y == 0)
    {
        goto again2;
    }
}

int generate() // it starts the snake and fruits position in the begginig...........
{

    Snake_X = 18;

    Snake_Y = 30;

    fruit();
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
                printf("!");
            }
            else
            {
                if (i == Snake_X && j == Snake_Y)
                {
                    printf("D>");
                }
                else if (i == Fruit_X && j == Fruit_Y)
                {
                    printf("F");
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

void KEY_Buttons()
{

    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
        {
            move = 1; // Upwrad Movement
            break;
        }
        case 'a':
        {
            move = 2; // Left Movement
            break;
        }
        case 's':
        {
            move = 3; // Downward Movement
            break;
        }
        case 'd':
        {
            move = 4; // Right Movement
            break;
        }
        case 'q':
        {
            GameOver = 1; // GameOver
        }
            // default :
            // {
            //     exit(0);
            // }
        }
    }
}

void Hit_Wall() // if snake hits the wall then the game is over
{
    if (Snake_X < 0 || Snake_X > verticle || Snake_Y < 0 || Snake_Y > horizontal)
    {
        GameOver = 1;
    }
}

void Movements()
{

    // if (GameOver == 1)
    // {
    //     exit(0);
    // }

    switch (move)
    {
    case 1:
    {
        Snake_X--; // done
        break;
    }
    case 2:
    {
        Snake_Y--;
        break;
    }
    case 3:
    {
        Snake_X++; // done
        break;
    }
    case 4:
    {
        Snake_Y++;
        break;
    }
    }

    if(Snake_X == Fruit_X  &&   Snake_Y == Fruit_Y)
    {
        fruit();
        fruit();
    }
}

int main()
{

    generate();
    while (GameOver != 1)
    {

        Walls();
        KEY_Buttons();
        Hit_Wall();
        Movements();
        
        for (int r = 0; r < 10000; r++)
        {
            for (int y = 0; y < 2000; y++)
            {
            }
        }
    }

    // for (int i = 0; i < 500; i++)
    // {
    //     for (int j = 0; j < 300; j++)
    //     {
    //         for(int r=0 ; r < 100 ; r++)
    //         {

    //         }
    //     }
    // }

    //..............................................................

        // if (Snake_X == Fruit_X && Snake_Y == Fruit_Y)
        // {
        //     fruit();
        //     fruit();
        // }

        //..............................................................




    return 0;
}