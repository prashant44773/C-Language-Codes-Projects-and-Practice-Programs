#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char box[11] = {'*','1', '2', '3', '4', '5', '6', '7', '8', '9'};
int count = 0;
int compcount = 0;
int mode = 0;
int playersturn = 0;

char player1;
char player2;
char computer;

void greet();
void create_board();
void Players();
// void Computer();
void Select_Character();
void play();
int score();
void declare_winner(int v);
int Random_value();



int Random_value()
{
    int ran;
    srand(time(0));

    ran = rand()%9 + 1;

    return ran;
}


void greet()
{
    system("cls");
    int choice = 0;
    printf("     WELCOME TO THE GAME");
    printf("\n\n        TIC TAC TOE    \n\n\n");

    printf("    1. Play\n");
    // printf("    2. Double Player\n");

    printf("\n    Enter Your Choice  :   ");
    scanf("%d", &choice);
    getchar();

    mode = choice;

    Select_Character();
}

void Select_Character()
{
    char ch;
    system("cls");

    printf("\n     Select Your Sign Player_1   'X'  or  'O'  \n");
    scanf("%c", &ch);
    getchar();

    if (mode == 1)
    {
        player1 = ch;

        if (player1 == 'x' || player1 == 'X')
        {
            player1 = 'X';
        }
        else
        {
            player1 = 'O';
        }

        if (ch == 'o' || ch == 'O')
        {
            player2 = 'X';
        }
        else
        {
            player2 = 'O';
        }
    }
    else
    {
        if (ch == 'o' || ch == 'O')
        {
            computer = 'X';
        }
        else
        {
            computer = 'O';
        }
    }
}

void Players()
{
    int p1 = 1, p2 = 2, player;
    char mark;

    if (count % 2 == 0)
    {
        printf("\n\n    Player %d  Turn  :  ", p1);
        scanf("%d", &player);
        mark = player1;
        playersturn = 1;
    }
    else
    {
        printf("\n\n    Player %d  Turn  :  ", p2);
        scanf("%d", &player);
        mark = player2;
        playersturn = 2;
    }

    count++;

    if (player == 1 && box[1] == '1')
    {
        box[1] = mark;
    }
    else if (player == 2 && box[2] == '2')
    {
        box[2] = mark;
    }
    else if (player == 3 && box[3] == '3')
    {
        box[3] = mark;
    }
    else if (player == 4 && box[4] == '4')
    {
        box[4] = mark;
    }
    else if (player == 5 && box[5] == '5')
    {
        box[5] = mark;
    }
    else if (player == 6 && box[6] == '6')
    {
        box[6] = mark;
    }
    else if (player == 7 && box[7] == '7')
    {
        box[7] = mark;
    }
    else if (player == 8 && box[8] == '8')
    {
        box[8] = mark;
    }
    else if (player == 9 && box[9] == '9')
    {
        box[9] = mark;
    }
    else
    {
        printf("\n      Invalid Input    \n");
    }

}



// void Computer()
// {
//      int p1 = 1, p2 = 2, player;
//     char mark;

//     if (compcount % 2 == 0)
//     {
//         printf("\n\n    Player %d  Turn  :  ", p1);
//         scanf("%d", &player);
//         mark = player1;
//         playersturn = 1;
//     }
//     else
//     {
//         printf("\n\n    Player %d  Turn  :  ", p2);
//         scanf("%d", &player);
//         mark = player2;
//         playersturn = 2;
//     }

//     compcount++;

// }




void create_board()
{
    system("cls");
    printf("\n\n     Player_1 sign is  [%c]      Player_2 sign is  [%c]\n\n", player1, player2);

    printf("             |        |        \n");
    printf("        %c    |   %c    |   %c   \n", box[1], box[2], box[3]);
    printf("     ________|________|________\n");
    printf("             |        |        \n");
    printf("        %c    |   %c    |   %c   \n", box[4], box[5], box[6]);
    printf("     ________|________|________\n");
    printf("             |        |        \n");
    printf("        %c    |   %c    |   %c   \n", box[7], box[8], box[9]);
    printf("             |        |        \n");
}



int score()
{
    if(box[1] == box[2]  &&  box[2] == box[3]){return 1;}
    if(box[4] == box[5]  &&  box[5] == box[6]){return 1;}
    if(box[1] == box[4]  &&  box[4] == box[7]){return 1;}
    if(box[3] == box[6]  &&  box[6] == box[9]){return 1;}
    if(box[7] == box[8]  &&  box[8] == box[9]){return 1;}
    if(box[1] == box[5]  &&  box[5] == box[9]){return 1;}
    if(box[3] == box[5]  &&  box[5] == box[7]){return 1;}
    else{return 0;}
    
}



void declare_winner(int v)
{
    if(v == 1)
    {
        printf("\n\n    The Winner of this Match is Player_%d\n",1);
    }
    else if(v == 2)
    {
        printf("\n\n    The Winner of this Match is Player_%d\n",2);
    }
    else
    {
        printf("\n\n    This Match is a Tie\n");
    }

}



void play()
{
    int result=0 ;

    greet();

    if (mode == 1)
    {
        while (result != 1)
        {
            create_board();
            Players();
            result = score();

            // if(result == 1)
            // {
            //     break;
            // }

            // if(i >= 9)
            // {
            //     break;
            // }

        }
    }
    // else
    // {
    //     while(i != 9)
    //     {
    //         // will write later
    //         // printf("Runing computer version\n");
    //         // gameover++;
    //     }
    // }
    create_board();
    // if(i  > 5)
    // {
    //     playersturn = 5;
    // }
    declare_winner(playersturn);
}

int main()
{

    play();
    // create_board()/;

    // printf("The value of ran is  %d",Random_value());

    return 0;
}