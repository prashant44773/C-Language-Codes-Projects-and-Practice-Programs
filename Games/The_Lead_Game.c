// #include <stdio.h>

// int main()
// {
//     int N, P1 = 1, P2 = 2;
//     printf("Enter The Number of Rounds : \n");
//     scanf("%d", &N);

//     int player1[N], player2[N];

//     int Difference[N], Lead, Start = 0 ;

//     for (int i = 0; i < N; i++)
//     {
//         printf("Round : %d \n", i);

//         printf("Enter The Score of Player_1 : \n");
//         scanf("%d", &player1[i]);
//         getchar();

//         printf("Enter The Score of Player_2 : \n");
//         scanf("%d", &player2[i]);
//         getchar();

//         printf("\n\n");
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (player1[i] > player2[i])
//         {
//             Difference[i] = player1[i] - player2[i];
//         }
//         else if (player2[i] > player1[i])
//         {
//             Difference[i] = player2[i] - player1[i];
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (Difference[Start] < Difference[i])
//         {
//             Start = i;
//             continue;
//         }
//     }

//     Lead = Difference[Start]; // the output that we wanted....

//     // printf("The Value of Start is %d \nThe Maxixmum Difference is %d \n",Start,Lead) ;

//     if (player1[Start] > player2[Start])
//     {
//         printf("The Score of Player 1  is %d \nHe Lead The Game with a Score of %d \n", player1[Start], Lead);
//     }
//     else if (player2[Start] > player1[Start])
//     {
//         printf("The Score of Player 2  is %d \nHe Lead The Game with a Score of %d \n", player2[Start], Lead);
//     }

   
    
//     if( 1 > 0)
//     {
//     printf("\nThe Score of Player 1 is %d \n"),player1[Start];
//     printf("\nThe Score of Player 2 is %d \n"),player2[Start];
//     }

//     return 0 ;
// }



// Anotehr trial for submissions......//



#include <stdio.h>

int main()
{
    int N, P1 = 1, P2 = 2;
    printf("Enter The Number of Rounds : \n");
    scanf("%d", &N);

    int Difference[N], Lead, Start = 0  ;

    int player1[N], player2[N];

    for (int i = 0 ; i < N ; i++)
    {                                  // loop Starts
        printf("Round : %d \n", i);

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

    // Another Solving Loop.....//

    for (int j = 0; j < N ; j++)
    {
        if (Difference[Start] < Difference[j])
        {
            Start = j;
            //continue;
        }
    }

    Lead = Difference[Start]; // the output that we wanted....

    // printf("The Value of Start is %d \nThe Maxixmum Difference is %d \n",Start,Lead) ; // The Sorted Answer...................//

    // if (player1[Start] > player2[Start])
    // {
    //     printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P1, Lead);
    // }
    // else if (player2[Start] > player1[Start])
    // {
    //     printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P2, Lead);
    // }

    //..........................The modified Answer is like this ...............................//

    if (player1[Start] > player2[Start]) //...................Final Sorted Answer.................//
    {
        printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P1 , player1[Start] - player2[Start]);
    }
    else if (player2[Start] > player1[Start])
    {
        printf("The Player who Won is %d \nHe Lead The Game with a Score of %d \n", P2, player2[Start] - player1[Start]);
    }
    
    
    return 0;
}




//..............................>>>>>>>>>>>>>>>>>>>>>>>>...............the Soltion that i subitted at Codechef .............>>>>>>>>>>>>>.........//

////////////////////////////////////////////////////........................................//////////////////////////////////


#include <stdio.h>

int main()
{
    int N, P1 = 1, P2 = 2;
    
    scanf("%d", &N);

    int Difference[N], Start = 0  ;

    int player1[N], player2[N];

    for (int i = 0 ; i < N ; i++)
    {                                  
        
        scanf("%d", &player1);
        
        scanf("%d", &player2);


        if (player1 > player2)
        {
            Difference[i] = player1 - player2;
        }
        else if (player2 > player1)
        {
            Difference[i] = player2 - player1;
        }
        

    }                                  
    
    for (int j = 0; j < N ; j++)
    {
        if (Difference[Start] < Difference[j])
        {
            Start = j;
        }
    }

    
    if (player1[Start] > player2[Start]) //...................Final Sorted Answer.................//
    {
        printf("%d %d\n", P1 , player1[Start] - player2[Start]);
    }
    else if (player2[Start] > player1[Start])
    {
        printf("%d %d\n", P2, player2[Start] - player1[Start]);
    }
    
    
    return 0;
}
