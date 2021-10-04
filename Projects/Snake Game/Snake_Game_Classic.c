#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//..............Global Variables.............//

int i, j;

int horizontal = 60;

int verticle = 35;

int Score = 0; // It stores the score of Player

// int checkScore;

static int BestScore;

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

//........count tails to be Attached as it Eats fruits.........//

int counttail = 0;

//...........................................//

//........Store the Positions of tails which are about to be attached behind the snake.......//

int tailX[100];

int tailY[100];

//......................................................//

//......................................................//

//...........Functions To Store  Best Scores of Game...........//

void Update_Score()
{
    FILE *str;

    str = fopen("Snake_Score_Stores.txt", "w+");

    fprintf(str, "%d", BestScore);

    fclose(str);
}

void Check_Score()
{
    FILE *ptr;

    ptr = fopen("Snake_Score_Stores.txt", "r");

    while (fscanf(ptr, "%d", &BestScore) != EOF)
    {
    }

    fclose(ptr);
}

//............................................................//

//......................................................//

//......................................................//

int fruit() //.............Fruit Generation.............//
{

again1:

    Fruit_X = rand() % 25 + 5; //% verticle;

    if (Fruit_X == 0)
    {
        goto again1;
    }

again2:

    Fruit_Y = rand() % 45 + 10; //% horizontal;

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
                printf("#");
            }
            else
            {
                if (i == Snake_X && j == Snake_Y)
                {
                    printf("O");
                }
                else if (i == Fruit_X && j == Fruit_Y)
                {
                    printf("F");
                }
                else
                {
                    int ch = 0;

                    //............Code To Print The Tail of the Snake.............//

                    for (int t = 0; t < counttail; t++)
                    {
                        if (i == tailX[t] && j == tailY[t])
                        {
                            printf("o");
                            ch = 1;
                        }
                    }

                    if (ch == 0)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n");
    }

    printf("\nScore = %d\n", Score);

    // if(Score > BestScore)
    // {
    //     BestScore = Score;
    // }
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
    //...........Logic To Add Tails In Snake.............//

    int prevX = tailX[0];

    int prevY = tailY[0];

    int Prev2X, Prev2Y;

    tailX[0] = Snake_X;

    tailY[0] = Snake_Y;

    //.......Initiating The Looop........//

    for (int a = 1; a < counttail; a++)
    {
        //......................//
        Prev2X = tailX[a];

        Prev2Y = tailY[a];

        //......................//
        tailX[a] = prevX;

        tailY[a] = prevY;

        //......................//
        prevX = Prev2X;

        prevY = Prev2Y;
    }

    //...................................................//

    //...............Coding to End the Game as the Snake touches Itself..................//

    for (int p = 1; p < counttail; p++)
    {
        if (Snake_X == tailX[p] && Snake_Y == tailY[p])
        {
            GameOver = 1;
        }
    }

    //...................................................................................//

    //...................................................//

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

    if (Snake_X == Fruit_X && Snake_Y == Fruit_Y)
    {
        Score++; // It Counts the Score of the Player

        counttail++; // It counts the Number of Times , The Friut had been Eaten by Snake....and Incraeses its Tail

        fruit();
        fruit();
    }
}

void StartGame()
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
            for (int y = 0; y < 5000; y++)
            {
                //     // for ( i = 0; i < 400; i++)
                //     // {

                //     // }
            }
        }
    }
}

int main()
{
    system("cls");

    int var, retry = 0;

    printf("\n\n\n\n\t\t\t\t\t");

    printf("    Welcome To The Snake Game\n\n\n\n\t\t\t\t\tPress the Key Below Keys To Continue\n\n\n\t\t\t\t\t");

    printf(" 1. Start \n\n\n\n\t\t\t\t\t Best Score = 10");

    printf("\n\n\t\t\t\t\t Enter Your Choice  :\t");
    scanf("%d", &var);

    if (var == 1)
    {
        StartGame();
    }

str:

    //..........Coding to Update Best Score..............//

    Check_Score();

    // BestScore = checkScore;

    if (Score > BestScore)
    {
        BestScore = Score;

        Update_Score();
    }

    //..................................................//

    if (retry == 1)
    {

        counttail = 0;

        Score = 0;

        StartGame();
    }

    system("cls");

    printf("\n\n\n\t\t\t\t\tYour Score is %d", Score);

    printf("\n\n\t\t\t\t\tBest Score is %d", BestScore);

    printf("\n\n\t\t\t\t\tPress 0 To Play Again  \t");
    scanf("%d", &var);

    if (var == 0)
    {
        GameOver = 0;

        retry = 1;

        goto str;
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

    
    return 0;
}