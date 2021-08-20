#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *read;

char acc_num[20];
char get_password[20];

 char TOK_acc[50]; // Stores Account Number from user..//

 char pas_GBL[20]; // Stores Password from user...//

int MatchedAcc ;
int MatchedPass ;



void Get_Acc_and_Pass(); // reads Passwords from files

void Tokenacc(char string[80]); // assigns account number to global variable

void Tokenpass(char string[80]); // assigns Password to global variable

void Password_Function(int x);

void menu();

void menu()
{
    printf("lonewolf");
}

//..............................................Token To GET ACCount Number................................................//

void Tokenacc(char strg[200])
{

    char str[50], str1[10], str2[10];

    int i = 0, j = 0, z = 0, x = 0;

    char *Token_acc = strtok(strg, " ");

    // Token to get Account Number ;

    while (Token_acc != NULL)
    {
        i++;
        // printf("\t%s\n",Token_acc);

        // printf("%s\n",Token_acc);

        if (i == 3)
        {
            strcpy(str, Token_acc);
        }

        Token_acc = strtok(NULL, " ");
    }

    char *ptr = strtok(str, ":");

    while (ptr != NULL)
    {
        j++;
        // if (i == 3)
        // {
        strcpy(str1, ptr);
        // }

        ptr = strtok(NULL, " ");
    }

    char *tsr = strtok(str1, "        ");

    while (tsr != NULL)
    {
        z++;
        strcpy(str2, str1);

        tsr = strtok(NULL, "        ");
    }

    char *dar = strtok(str2, "\0");

    while (dar != NULL)
    {
        x++;
        strcpy(acc_num, str2);

        dar = strtok(NULL, " ");
    }
    

    //...............................comparing account numbers....................................//

    int count = 0, result;

    for (int r = 1; r < strlen(acc_num); r++)
    {
        // printf("The %d character is : \n",r);
        // printf("%c \t %c\n",acc_num[r],number[r-1]);

        // result = strcmp(&acc_num[r],&number[r-1]);

        // printf("The value of Compfunc at %d iteration is %d\n",r, result);
        if (strcmp(&acc_num[r], &TOK_acc[r - 1]) == 0)
        {
            count++;
        }
    }

   
    if (strlen(acc_num) == count + 1)
    {
        // printf("\nAccount Number MATCHED\n\n");
        MatchedAcc = 1 ;
    }
    else
    {
        MatchedAcc = 0 ;
        // printf("\nACCount NUMBER DIDN'T MATCHED\n");
    }
}


//.........................................................................................................................//


//............................................Token to get Password From File.............................................//

void Tokenpass(char string[80])
{
    int j = 0;

    // Token to get Password ;

    char *Token_pass = strtok(string, " ");

    while (Token_pass != NULL)
    {
        j++;

        // printf("\t%s\n", Token_pass);

        if (j == 3)
        {
            strcpy(get_password, Token_pass);
        }

        Token_pass = strtok(NULL, " ");
    }


    //...............................Comparing Passwords....................................//

    int count = 0, result;

    for (int r = 1; r < strlen(get_password); r++)
    {
        // printf("The %d character is : \n",r);
        // printf("%c \t %c\n",get_password[r],pas[r - 1]);


        if (strcmp(&get_password[r], &pas_GBL[r - 1]) == 0)
        {
            count++;
        }
    }

   
    if (strlen(get_password) == count + 1)
    {
        MatchedPass = 1 ;
        // printf("\nPAssword MATCHED\n\n");
    }
    else
    {
        MatchedPass = 0 ;
        // printf("\nPASSWORD DIDN'T MATCHED\n");
    }
}

//...........................................................................................................................//

//.......................................................Password Function..................................................//

void Password_Function(int x)
{
    Get_Acc_and_Pass();

    int a, b, pass_count = 4;
    char anum[10];
    char pass[10];

    system("cls");

reset:

    if (pass_count == 0)
    {
        system("cls");
        menu();
    }

    printf("\n\t\tPlease Enter Your Account Number  :  \t");
    scanf("%s", anum);
    printf("\n\t\tEnter Your Password  : \t");
    scanf("%s", pass);

    strcpy(TOK_acc,anum);

    strcpy(pas_GBL,pass);

    Get_Acc_and_Pass();

    if ( MatchedAcc == 1 && MatchedPass == 1)
    {
        printf("\n\t\tCorrect PAssword\n");
        // if (x == 1)
        // {
        //     View_Account();
        // }
        // else if (x == 2)
        // {
        //     func_modify();
        // }
        // else if (x == 3)
        // {
        //     Transaction();
        // }
    }
    else
    {
        printf("\n\t\tIncorrect Password\n");
        pass_count--;

        int count = 4;

    Invalid:

        printf("\n\t\tPlease  Press 1  to Try Again  | OR |   Press 0  to Exit\n");
        scanf("%d", &a);
        if (a == 1)
        {
            switch (pass_count)
            {
            case 3:
            {
                system("cls");
                printf("\n\t\tYou have %d Trials Left\n\n", pass_count);
                goto reset;
            }

            case 2:
            {
                system("cls");
                printf("\n\t\tYou have %d Trials Left\n\n", pass_count);
                goto reset;
            }

            case 1:
            {
                system("cls");
                printf("\n\t\tYou have %d Trials Left\n\n", pass_count);
                goto reset;
            }
            default:
            {
                break;
            }
            }
        }
        else if (a == 0)
        {
            menu();
        }
        else
        {
            system("cls");
            printf("\n\t\tInvalid Input Please Choose Valid Option : \n\n");
            printf("\t\tYou Still Have %d  Trials Left", count - 1);
            count--;
            if (count == 0)
            {
                system("cls");
                printf("\n\t\tYou Have Used All of Your Trials Please Try Again Later\n");
                printf("\n\t\tPlease  Press 1  to go back to Menu  :  \t");
                scanf("%d", &b);

                if (b == 1)
                {
                    system("cls");
                    menu();
                }
                else
                {
                    system("cls");
                    menu();
                }
            }
            goto Invalid;
        }
    }
}

//..............................................................................................................................//

//.......................................GET ACCOUNT NUMBER and PASSWORD From Files..............................................//

void Get_Acc_and_Pass()
{

    char String[200]; // Extracts the Account number

    char Stringpass[200]; // Extracts the Password

    read = fopen("Modified.txt", "r");

    fscanf(read, "%[^\n]%*c", String);
    fscanf(read, "%[^\n]%*c", Stringpass);

    fclose(read);

    system("cls");

    Tokenacc(String);

    Tokenpass(Stringpass);

}


//.................................................................................................................................//


int main()
{
    // Get_Acc_and_Pass();
    Password_Function(1);

    return 0;
}