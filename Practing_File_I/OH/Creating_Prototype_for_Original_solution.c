#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *new_acc;

FILE *view;

FILE *trans;

FILE *modi;

FILE *read;

//..................................................................................................................//

//.............................Functions Used in this Program..............................//

//...............Primary Functions..............//
void menu();
void New_Account();
void View_Account();
void func_modify();
void Transaction();

//...............Secondary Function............//

char name_and_address_Function();

void Password_Function(int x);

void Create_Password();

void goback();

float deposite(int c);
float withdraw(int c);
float Transfer(int c);

float Get_Amount();
float Update_Amount(float variable);

float Simple_Interest(float value, int rate, int time);

void M_Name();
void M_Address();
void M_Birth_Date();
void M_Phone_Number();
void M_Citizenship();

void update_changes(int count_Name, int count_add, int count_birth, int count_phone, int count_CTN, int count_Password); // this will upload later Modifications in account


void Get_Acc_and_Pass(); // reads Passwords from files

void Tokenacc(char string[80]); // assigns account number to global variable

void Tokenpass(char string[80]); // assigns Password to global variable


//.....................................................................................//

//..............................Global Variables Set_1..........................//

char Account_type1[20] = "Savings"; // I will be using This Strings throughout the program......................//

char Account_type2[20] = "Current";

char Account_type3[20] = "Fixed";

char Account_type4[20] = "Invalid Option";

char String_Acc[10];

char String_Password1[10];

char String_Password2[10];


//..................................Variables to compare and get Password from file........................//


char acc_num[20];
char get_password[20];

 char TOK_acc[50]; // Stores Account Number from user..//

 char pas_GBL[20]; // Stores Password from user...//

int MatchedAcc ;
int MatchedPass ;

//.....................................................................................//

//..............................Global Variables Set_2..........................//

//....................Multiple Functions that will help me print the data in a way as i wanted to print in to File.........//

char str_name_GLOBAL[100] = "Name of the Account Holder  : \t";
char str_add_GLOBAL[100] = "Address of the Acccont Holder  : \t";
char str_cit_number_GLOBAL[100] = "Citizen Ship Number  : \t";
char str_Birth_date_GLOBAL[100] = "Birth Date :   \tDay \tMonth\tYear";
char str_phone_number_GLOBAL[100] = "Phone Number  :\t";
char str_Account_Type_GLOBAL[100] = "Account Type  :\t";
char str_Account_Number_GLOBAL[100] = "Account Number :\t";
char str_Account_Password_GLOBAL[100] = "PASSWORD : \t";
char str_Amount_add_GLOBAL[50] = "\nAvailable Balance  :\t";

//..............................This Stores Name and Adress of Customer............................//

char storeFun[100];
char str_addFun[100];

//........................................................................................//

//.......................varaibles to calculate interest in savings account.....................//
int sav_rate = 5;
int sav_time = 1;

//.......................varaibles to calculate interest in Fixed account.......................//
int fix_rate = 8;
int fix_time = 1;
//..................................................................................................................//

//.......................................Structures....................................//

struct Acoount
{
    char name[50];
    char address[100];
    char citizanship_number[6];
    long double phone_Number;
    char Assigned_Account_Type[20];
    int age;

    struct date
    {
        int day, month, year;

    } dob;

    struct transec
    {
        float deposite;

        float withdraw;
    } tran;

} new, modify, Transcact;

//.............................................................................................//


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


//.......................................GET ACCOUNT NUMBER and PASSWORD From Files..............................................//

void Get_Acc_and_Pass()
{

    char String[200]; // Extracts the Account number

    char Stringpass[200]; // Extracts the Password

    read = fopen("Account.txt", "r");

    fscanf(read, "%[^\n]%*c", String);
    fscanf(read, "%[^\n]%*c", Stringpass);

    fclose(read);

    system("cls");

    Tokenacc(String);

    Tokenpass(Stringpass);

}


//.................................................................................................................................//


//............................................GoBack to Menu function.........................................//

void goback()
{
    int z;
    printf("\n\n\t\tPlease Enter 1 to Go back to Menu\n");
    printf("\t\tEnter Your Choice : \t");
    scanf("%d", &z);

    if (z == 1)
    {
        menu();
    }
    else
    {
        menu();
    }
}

//.............................................................................................................//

//.......................................Name and Address Functions............................................//

char name_and_address_Function()
{

    printf("\n\t\tEnter Your Name : \t");
    scanf(" %[^\n]%*c", storeFun); // I changed variaable name and scanf not printing problem solved.........//
    printf("\n");

    printf("\n\t\tEnter Your Address : \t");
    scanf("%[^\n]%*c", &str_addFun);
    getchar(); // these   " scanf("%[^\n]%*c")  " wasn't working before it was skipping itself in terminal ....but finally after trying to solve it i have spent hours on it and finally solved it ...and i just have to add a " space " before the format Specifier like this " scanf("%[^\n]%*c") "....and i got the results...Finally..!
    printf("\n");
}

//..................................................................................................................//

//........................................Create Password Function............................................//

void Create_Password()
{
    char tsr1[10], tsr2[10] ,tsr_acc[20];
    system("cls");

again1:
again2:
    
    printf("Enter Generated Account Number : \t");
    scanf("%s", tsr_acc);

    strcpy(acc_num, tsr_acc);

    printf("\n\t\tCreate Password \n\n\t\tMax 10 Characters  OR  Minimum 6 Characters\n");

    printf("\n\t\tEnter Your Password : \t");
    scanf("%s", tsr1);

    printf("\n\t\tRe-Enter Your Password : \t");
    scanf("%s", tsr2);

    if (strlen(tsr1) > 5 && strlen(tsr2) > 5)
    {
        if (strcmp(tsr1, tsr2) == 0)
        {
            strcpy(String_Password1, tsr1);

            strcpy(String_Password2, tsr2);

            system("cls");
            printf("\n\t\tYour Password Has Been Created Successfully!\n\n");
            printf("\n\t\tYour Account Number : \t%s\n\n\t\tYour Account Password :\t%s\n", tsr_acc, String_Password1);
        }
        else
        {
            system("cls");
            printf("\n\t\tEntered And Re-Entered Passwords Didn't Matched\n\n");
            goto again2;
        }
    }
    else
    {
        system("cls");
        printf("\n\t\tPlease Create Password Of Atleast 6 and Maxixmum 10 Characters\n\n");
        goto again1;
    }
}

//..........................................................................................................................//



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
        if (x == 1)
        {
            View_Account();
        }
        else if (x == 2)
        {
            func_modify();
        }
        else if (x == 3)
        {
            Transaction();
        }
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



//..................................Creating Accont Funtion............................//

void New_Account()
{

    // FILE *new_acc;
    int var, var1, pass;
    char str_name[100], str_add[100], str_citizenNumber[6];

    char store[100];

restart:
    system("cls");
    printf("\n\t\tSelect The Account Type :  \n\t\t1. Savings \n\t\t2. Current \n\t\t3. Fixed\n\n\t\tEnter Your Choice : \t");
    scanf("%d", &var);
    //..........................................................................//

    if (var == 1)
    {
        strcpy(new.Assigned_Account_Type, Account_type1);
        pass = 5 ;
    }
    else if (var == 2)
    {
        strcpy(new.Assigned_Account_Type, Account_type2);
        pass = 4 ;
    }
    else if (var == 3)
    {
        strcpy(new.Assigned_Account_Type, Account_type3);
        pass = 6 ;
    }
    else if (var > 3)
    {
        system("cls");

        printf("\n\t\t%s\n", Account_type4);
        printf("\n\t\tPlease  Press 1  to Try Again  | OR |   Press 0  to Exit\n");
        scanf("%d", &var1);
        if (var1 == 1)
        {
            system("cls");
            goto restart;
        }
        else
        {
            menu();
        }
    }

    system("cls");

    name_and_address_Function();

    printf("\n\t\tEnter Your Birth Date : \n\t\t");
    printf("\n\t\tEnter Day : \t");
    scanf("%d", &new.dob.day);
    printf("\n\t\tEnter Month : \t");
    scanf("%d", &new.dob.month);
    printf("\n\t\tEnter Year : \t");
    scanf("%d", &new.dob.year);

    printf("\n\t\tEnter Your Phone Number : \t");
    scanf("%Lf", &new.phone_Number);
    printf("\n");

    getchar();
    printf("\n\t\tEnter Your CitizenShip Number : \t");
    gets(str_citizenNumber);
    printf("\n");

    Create_Password(); //..............This function creates the Password............//

    new.tran.deposite = deposite(pass); //..........it stores the deposited Amount.............//

    new_acc = fopen("Account.txt", "w");

    //...............writing it properly......................................//

    strcpy(new.name, storeFun); // Copying the content of user input string into File Storing String........
    strcpy(new.address, str_addFun);
    strcpy(new.citizanship_number, str_citizenNumber);

    //....................................Implying Another Approach.........................................//

    //....................................Adding Account Number and Password in File........................//

    fprintf(new_acc, "%s", str_Account_Number_GLOBAL); // prints Account Number and Password
    fprintf(new_acc, "%s\n", acc_num);

    fprintf(new_acc, "%s", str_Account_Password_GLOBAL); // prints Account Number and Password
    fprintf(new_acc, "%s\n", String_Password1);

    //......................................................................................................//

    fprintf(new_acc, "%s", str_name_GLOBAL); // prints name
    fprintf(new_acc, "%s\n", new.name);

    fprintf(new_acc, "%s", str_add_GLOBAL); // prints address
    fprintf(new_acc, "%s\n", new.address);

    fprintf(new_acc, "%s \n\t\t\t\t", str_Birth_date_GLOBAL); // prints birth date
    fprintf(new_acc, "%d\t", new.dob.day);
    fprintf(new_acc, "\t  %d\t", new.dob.month);
    fprintf(new_acc, "\t%d\n", new.dob.year);

    fprintf(new_acc, "%s\n", str_phone_number_GLOBAL); // prnts phone number
    fprintf(new_acc, "%.Lf\n", new.phone_Number);

    fprintf(new_acc, "%s", str_cit_number_GLOBAL); // prints citizenship number
    fprintf(new_acc, "%s\n", new.citizanship_number);

    fprintf(new_acc, "%s", str_Account_Type_GLOBAL); //  prints Account types
    fprintf(new_acc, "%s\n", new.Assigned_Account_Type);

    fprintf(new_acc, "%s\n", str_Amount_add_GLOBAL); // prints amount to be stored
    fprintf(new_acc, "\t\t\t\t\t\t%.2f", new.tran.deposite);

    fclose(new_acc);

    system("cls");
    printf("\n\n\t\t\tAccount Creted Succesfully\n");
    goback();
}

//................................................................................................................................//

//..................................Check Accont details Funtion............................//

void View_Account()
{

    char string1_acno[100], string2_pass[100], string3_name[100], string4_add[300];

    char string5_birth[100], string6_phone[100], string7_citizenship[100], string8_AccountType[100];

    char string9_Amount[100];

    char skipline_1[100], skipline_2[100], skipline_3[100];

    int a, b, c;

    long double var, var_final;

    float store;

    // FILE *view ;

    view = fopen("Account.txt", "r");

    while (fgets(string1_acno, "100", view) == NULL)
    {
    }

    while (fgets(string2_pass, "100", view) == NULL)
    {
    }

    while (fgets(string3_name, "100", view) == NULL)
    {
    }

    while (fgets(string4_add, "300", view) == NULL)
    {
    }

    while (fgets(string5_birth, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%d %d %d", &a, &b, &c) == EOF)
    {
    }

    while (fgets(skipline_1, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fscanf(view, "%Lf", &var) == EOF)
    {
    } // using it to skip the lines in File

    while (fgets(string6_phone, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%Lf", &var_final) == EOF)
    {
    }

    while (fgets(skipline_2, "100", view) == NULL)
    {
    } //  using it to skip the lines in File

    while (fgets(string7_citizenship, "100", view) == NULL)
    {
    }

    while (fgets(string8_AccountType, "100", view) == NULL)
    {
    }

    while (fgets(skipline_3, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fgets(string9_Amount, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%f", &store) == NULL)
    {
    }

    fclose(view);

    system("cls");
    printf("\n\t\t%s\t\t%s\n\t\t%s", string1_acno, string2_pass, string3_name);
    printf("\t\t%s\t\t%s", string4_add, string5_birth);
    printf("\t\t\t\t%d\t%d\t%d", a, b, c);
    printf("\n\t\t%s", string6_phone);
    printf("\t\t%.Lf", var_final);
    printf("\n\t\t%s", string7_citizenship);
    printf("\t\t%s", string8_AccountType);
    printf("\n\t\t%s", string9_Amount);
    printf("\t\t\t\t\t%.2f\n\n", store);

    goback();
}

//................................................................................................................................//

//......................................................................................................................//

//..............................................Get Amount from Files..............................................//

float Get_Amount()
{

    char string1_acno[100], string2_pass[100], string3_name[100], string4_add[300];

    char string5_birth[100], string6_phone[100], string7_citizenship[100], string8_AccountType[100];

    char string9_Amount[100];

    char skipline_1[100], skipline_2[100], skipline_3[100];

    int a, b, c;

    long double var, var_final;

    float store;

    // FILE *view ;

    view = fopen("Account.txt", "r");

    while (fgets(string1_acno, "100", view) == NULL)
    {
    }

    while (fgets(string2_pass, "100", view) == NULL)
    {
    }

    while (fgets(string3_name, "100", view) == NULL)
    {
    }

    while (fgets(string4_add, "300", view) == NULL)
    {
    }

    while (fgets(string5_birth, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%d %d %d", &a, &b, &c) == EOF)
    {
    }

    while (fgets(skipline_1, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fscanf(view, "%Lf", &var) == EOF)
    {
    } // using it to skip the lines in File

    while (fgets(string6_phone, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%Lf", &var_final) == EOF)
    {
    }

    while (fgets(skipline_2, "100", view) == NULL)
    {
    } //  using it to skip the lines in File

    while (fgets(string7_citizenship, "100", view) == NULL)
    {
    }

    while (fgets(string8_AccountType, "100", view) == NULL)
    {
    }

    while (fgets(skipline_3, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fgets(string9_Amount, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%f", &store) == NULL)
    {
    }

    fclose(view);

    system("cls");

    return store;
}

//..................................................................................................................//

//..............................................Update Amount After Transactions........................................//

float Update_Amount(float variable)
{
    Transcact.tran.deposite = variable;

    //.....................Reading Variables..................//

    char string1_acno[100], string2_pass[100], string3_name[100], string4_add[300];

    char string5_birth[100], string6_phone[100], string7_citizenship[100], string8_AccountType[100];

    char string9_Amount[100];

    char skipline_1[100], skipline_2[100], skipline_3[100];

    int a, b, c;

    long double var, var_final;

    float store;

    //................................................//

    view = fopen("Account.txt", "r");

    while (fgets(string1_acno, "100", view) == NULL)
    {
    }

    while (fgets(string2_pass, "100", view) == NULL)
    {
    }

    while (fgets(string3_name, "100", view) == NULL)
    {
    }

    while (fgets(string4_add, "300", view) == NULL)
    {
    }

    while (fgets(string5_birth, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%d %d %d", &a, &b, &c) == EOF)
    {
    }

    while (fgets(skipline_1, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fscanf(view, "%Lf", &var) == EOF)
    {
    } // using it to skip the lines in File

    while (fgets(string6_phone, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%Lf", &var_final) == EOF)
    {
    }

    while (fgets(skipline_2, "100", view) == NULL)
    {
    } //  using it to skip the lines in File

    while (fgets(string7_citizenship, "100", view) == NULL)
    {
    }

    while (fgets(string8_AccountType, "100", view) == NULL)
    {
    }

    while (fgets(skipline_3, "100", view) == NULL)
    {
    } // using it to skip the lines in File

    while (fgets(string9_Amount, "100", view) == NULL)
    {
    }

    while (fscanf(view, "%f", &store) == NULL)
    {
    }

    fclose(view);
    //................................................//
    system("cls");

    // Replacing "store" variable with "Transact.trans.deposite"

    //................................................//

    trans = fopen("Account.txt", "w+");

    fprintf(trans, "%s", string1_acno);

    fprintf(trans, "%s", string2_pass);

    fprintf(trans, "%s", string3_name);

    fprintf(trans, "%s", string4_add);

    fprintf(trans, "%s", string5_birth);

    fprintf(trans, "\t\t\t\t%d\t\t  %d\t\t%d\n", a, b, c);

    fprintf(trans, "%s", string6_phone);

    fprintf(trans, "%.Lf\n", var_final);

    fprintf(trans, "%s", string7_citizenship);

    fprintf(trans, "%s\n", string8_AccountType);

    fprintf(trans, "%s", string9_Amount);

    fprintf(trans, "\t\t\t\t\t\t%.2f", Transcact.tran.deposite);

    fclose(trans);

    system("cls");

    printf("\n\n\t\tYour Transaction was Successfull\n\n");
    goback();
}

//.....................................................................................................................//

//........................>>>>>>>>>>>>>>>>>>>>..................>>>>>>>>>>>>>>>>>>>................................//

//...............................................Deposite Function................................................//

float deposite(int c)
{
    float var, result, dep, interest;
    system("cls");

    switch (c)
    {
    case 1: // 1 is for current account deposite
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t");
        scanf("%f", &var);
        dep = Get_Amount();
        result = dep + var;
        Update_Amount(result);
        break;
    }
    case 2: // 2 is for savings account deposite
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t");
        scanf("%f", &var);
        interest = Simple_Interest(var, sav_rate, sav_time);
        dep = Get_Amount();
        result = dep + interest;
        Update_Amount(result);
        break;
    }
    case 3: // 3 is for Fixed account deposite
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t");
        scanf("%f", &var);
        interest = Simple_Interest(var, fix_rate, fix_time);
        dep = Get_Amount();
        result = dep + interest;
        Update_Amount(result);
        break;
    }
    case 4: // 4 is for current account deposite for New Account Creator
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t"); 
        scanf("%f", &var);
        // dep = Get_Amount();
        result =  var;
        return result ;
        break;
    }
    case 5: // 5 is for savings account deposite for New Account Creator
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t");
        scanf("%f", &var);
        interest = Simple_Interest(var, sav_rate, sav_time);
        // dep = Get_Amount();
        result = interest;
        return result ;
        break;
    }
    case 6: // 6 is for Fixed account deposite for New Account Creator
    {
        printf("\n\t\tEnter the Amount to be Deposited :\t");
        scanf("%f", &var);
        interest = Simple_Interest(var, fix_rate, fix_time);
        // dep = Get_Amount();
        result =  interest;
        return result ;
        break;
    }
    }
}

//.............................................................................................................//

//...............................................Withdraw Function................................................//

float withdraw(int c)
{
    int back;
    float var, result, check;

    float num1, num2, num3, num4, num5;

    system("cls");
    view = fopen("Final_test_File.txt", "r");
    switch (c)
    {
    case 1: // 1 is for current account deposite
    {
        printf("\n\t\tEnter the Amount to be Withdraw :\t");
        scanf("%f", &var);

        check = Get_Amount();

        if (check >= var) // Check if the balance is sufficient enough or Not
        {
            result = check - var;
            Update_Amount(result); // Assign varible
            printf("\n\t\tGenerating Reciept......Please Wait\n");
            goback();
        }
        else
        {
            printf("\n\t\tInsufficient Balance\n");
            printf("Please Enter 1 to go back to Main Menu \t");
            scanf("%d", &back);

            if (back == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        break;
    }
    case 2: // 2 is for savings account deposite
    {
        printf("\n\t\tEnter the Amount to be Withdraw :\t");
        scanf("%f", &var);

        check = Get_Amount();

        if (check >= var) // Check if the balance is sufficient enough or Not
        {
            result = check - var; // Assign varible
            Update_Amount(result);
            goback();
        }
        else
        {
            printf("\n\t\tInsufficient Balance\n");
            printf("Please Enter 1 to go back to Main Menu \t");
            scanf("%d", &back);

            if (back == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        break;
    }
    }
}

//.............................................................................................................//

//...............................................Withdraw Function................................................//

float Transfer(int c)
{

    int back;
    float var, result, check;
    system("cls");

    switch (c)
    {
    case 1: // 1 is for current account deposite
    {
        printf("\n\t\tEnter the Amount to be Transfered :\t");
        scanf("%f", &var);

        check = Get_Amount();

        if (check >= var) // Check if the balance is sufficient enough or Not
        {
            result = check - var;
            Update_Amount(result); // assign variable
            printf("\n\t\tGenerating Reciept......Please Wait\n");
            goback();
        }
        else
        {
            printf("\n\t\tInsufficient Balance\n");
            printf("Please Enter 1 to go back to Main Menu \t");
            scanf("%d", &back);

            if (back == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        break;
    }
    case 2: // 2 is for savings account deposite
    {
        printf("\n\t\tEnter the Amount to be Transfered :\t");
        scanf("%f", &var);

        check = Get_Amount();

        if (check >= var) // Check if the balance is sufficient enough or Not
        {
            result = check - var;
            Update_Amount(result); // assign variable
            printf("\n\t\tGenerating Reciept......Please Wait\n");
            goback();
        }
        else
        {
            printf("\n\t\tInsufficient Balance\n");
            printf("Please Enter 1 to go back to Main Menu \t");
            scanf("%d", &back);

            if (back == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        break;
    }
    }
}

//.............................................................................................................//

//...........................................Calculate Simple Interest.........................................//

float Simple_Interest(float value, int rate, int time)
{
    float num, Result, var;

    num = value * rate * time;

    var = num / 100;

    Result = value + var;

    return Result;
}

//.............................................................................................................//

//..............................................Transaction function...........................................//

void Transaction()
{

    int w, s, m;
go:
    system("cls");
    printf("\n\t\tSelect Your Account Type\n");
    printf("\n\t\t1. Current\n\t\t2. Savings\n\t\t3. Fixed\n\n\t\tEnter Your Choice :\t");
    scanf("%d", &w);

    switch (w)
    {
    case 1: // current account Operations
    {
    tac:
        system("cls");
        printf("\n\t\t1. Deposite\n\t\t2. Withdraw\n\t\t3. Transfer\n\n\t\tEnter Your Choice :\t");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
        {
            deposite(1);
            break;
        }
        case 2:
        {
            withdraw(1);
            break;
        }
        case 3:
        {
            Transfer(1);
            break;
        }
        default:
        {
            system("cls");
            printf("\n\t\tInvalid Input....Please Enter Valid Option\n");
            printf("\n\n\t\tEnter 1 to try again  OR  Enter 0 to go back to Main menu\n");
            scanf("%d", &m);

            if (m == 1)
            {
                goto tac;
            }
            else if (m == 0)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        }
        break;
    }
    case 2: // Savings account Operations
    {
    tic:
        system("cls");
        printf("\n\t\t1. Deposite\n\t\t2. Withdraw\n\t\t3. Transfer\n\n\t\tEnter Your Choice :\t");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
        {
            deposite(2);
            break;
        }
        case 2:
        {
            withdraw(2);
            break;
        }
        case 3:
        {
            Transfer(2);
            break;
        }
        default:
        {
            system("cls");
            printf("\n\t\tInvalid Input....Please Enter Valid Option\n");
            printf("\n\n\t\tEnter 1 to try again  OR  Enter 0 to go back to Main menu\n");
            scanf("%d", &m);

            if (m == 1)
            {
                goto tic;
            }
            else if (m == 0)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        }
        break;
    }
    case 3: // Fixed account Operations
    {
    stay:
        system("cls");
        printf("\n\t\t1. Deposite\n\n\t\tEnter Your Choice :\t");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
        {
            deposite(3);
            break;
        }

        default:
        {
            system("cls");
            printf("\n\t\tYou Can Only Deposite Cash in Fixed Account\n");
            printf("\n\n\t\tEnter 1 to try again  OR  Enter 0 to go back to Main menu\n");
            scanf("%d", &m);

            if (m == 1)
            {
                goto stay;
            }
            else if (m == 0)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        }
        break;
    }
    default:
    {
        goto go;
    }
    }
}

//.............................................................................................................................//

//...............................................................................................................................//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//

//..................................................Modify Function............................................................//

//..................................................................................................//

void update_changes(int count_Name, int count_add, int count_birth, int count_phone, int count_CTN, int count_Password)
{
    system("cls");
    //..................Variables to Read Data From File Usingc the below code......................//

    char string1_acno[100], string2_pass[100], string3_name[100], string4_add[300];

    char string5_birth[100], string6_phone[100], string7_citizenship[100], string8_AccountType[100];

    char string9_Amount[100];

    char skipline_1[100], skipline_2[100], skipline_3[100];

    int a, b, c;

    long double var, var_final;

    float store;

    // FILE *view ;

    modi = fopen("Account.txt", "r");

    while (fgets(string1_acno, "100", modi) == NULL)
    {
    }

    while (fgets(string2_pass, "100", modi) == NULL)
    {
    }

    while (fgets(string3_name, "100", modi) == NULL)
    {
    }

    while (fgets(string4_add, "300", modi) == NULL)
    {
    }

    while (fgets(string5_birth, "100", modi) == NULL)
    {
    }

    while (fscanf(modi, "%d %d %d", &a, &b, &c) == EOF)
    {
    }

    while (fgets(skipline_1, "100", modi) == NULL)
    {
    } // using it to skip the lines in File

    while (fscanf(modi, "%Lf", &var) == EOF)
    {
    } // using it to skip the lines in File

    while (fgets(string6_phone, "100", modi) == NULL)
    {
    }

    while (fscanf(modi, "%Lf", &var_final) == EOF)
    {
    }

    while (fgets(skipline_2, "100", modi) == NULL)
    {
    } //  using it to skip the lines in File

    while (fgets(string7_citizenship, "100", modi) == NULL)
    {
    }

    while (fgets(string8_AccountType, "100", modi) == NULL)
    {
    }

    while (fgets(skipline_3, "100", modi) == NULL)
    {
    } // using it to skip the lines in File

    while (fgets(string9_Amount, "100", modi) == NULL)
    {
    }

    while (fscanf(modi, "%f", &store) == NULL)
    {
    }

    fclose(modi);

    //......................................................................................//

    //...........................To decide which information should be modified..................//

    //.........................to assign the variables to be modified........................//

    system("cls");

    modi = fopen("Account.txt", "w+");

    fprintf(modi, "%s", string1_acno); // prints Account Number

    if (count_Password == 1)
    {
        fprintf(modi, "%s", str_Account_Password_GLOBAL); // prints Modified Password
        fprintf(modi, "%s\n", String_Password1);
    }
    else
    {
        // printf("Password Printed as it was before\n");
        fprintf(modi, "%s", string2_pass);
    }

    if (count_Name == 1)
    {
        printf("succesfully modified NAME\n");
        fprintf(modi, "%s", str_name_GLOBAL); // prints modified name
        fprintf(modi, "%s\n", modify.name);
    }
    else
    {
        // printf("NAMe printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string3_name);
    }

    if (count_add == 1)
    {
        printf("Address has been successfully Modified \n");
        fprintf(modi, "%s", str_add_GLOBAL); // prints  modified address
        fprintf(modi, "%s\n", modify.address);
    }
    else
    {
        // printf("Adress printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string4_add);
    }

    if (count_birth == 1)
    {
        fprintf(modi, "%s \n\t\t\t\t", str_Birth_date_GLOBAL); // prints modified birth date
        fprintf(modi, "%d\t", modify.dob.day);
        fprintf(modi, "\t  %d\t", modify.dob.month);
        fprintf(modi, "\t%d\n", modify.dob.year);
    }
    else
    {
        // printf("Birth date printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string5_birth);
        fprintf(modi, "\t\t\t\t%d\t\t  %d\t\t%d\n", a, b, c);
    }

    if (count_phone == 1)
    {
        fprintf(modi, "%s\n", str_phone_number_GLOBAL); // prints modified phone number
        fprintf(modi, "%.Lf\n", modify.phone_Number);
    }
    else
    {
        // printf("Phone Number printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string6_phone);
        fprintf(modi, "%.Lf\n", var_final);
    }

    if (count_CTN == 1)
    {
        fprintf(modi, "%s", str_cit_number_GLOBAL); // prints modified citizenship number
        fprintf(modi, "%s\n", modify.citizanship_number);
    }
    else
    {
        // printf("Citizenship Number printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string7_citizenship);
    }

    fprintf(modi, "%s\n", string8_AccountType);

    fprintf(modi, "%s", string9_Amount);

    fprintf(modi, "\t\t\t\t\t\t%.2f", store);

    fclose(modi);

    printf("\n\n\t\tYour Data Has been Updated Successfully\n");

    goback();

    //............................................................................................//
}

//.......................................................................................................//

//...................................................................................................//

void M_Name()
{
    char str[50];
    printf("\n\t\tEnter Your New Name : \t");
    scanf(" %[^\n]%*c", modify.name);

    printf("\n\t\t%s\t", modify.name);
}

void M_Address()
{
    printf("\n\t\tEnter Your New Address : \t");
    scanf(" %[^\n]%*c", modify.address);

    printf("\nThis is the Address : %s\n", modify.address);
}

void M_Birth_Date()
{
    printf("\n\t\tEnter Your New Birth Date : \n\t\t");
    printf("\n\t\tEnter Day : \t");
    scanf("%d", &modify.dob.day);
    printf("\n\t\tEnter Month : \t");
    scanf("%d", &modify.dob.month);
    printf("\n\t\tEnter Year : \t");
    scanf("%d", &modify.dob.year);

    printf("\n%d\t", modify.dob.day);
    printf("%d\t", modify.dob.month);
    printf("%d\n", modify.dob.year);
}

void M_Phone_Number()
{
    printf("\n\t\tEnter Your New Phone Number : \t");
    scanf("%Lf", &modify.phone_Number);

    printf("\n%Lf\n", modify.phone_Number);
}

void M_Citizenship()
{
    printf("\n\t\tEnter Your New CitizenShip Number : \t");
    scanf("%s", modify.citizanship_number);

    printf("\n%s\n", modify.citizanship_number);
}
//........................................................................................................................//

//....................................................Modify function....................................................................//

void func_modify()
{

    int t;
    char array[6], arrName[100], str[6];

    int count_Namex = 0, count_addx = 0, count_birthx = 0, count_phonex = 0, count_CTNx = 0, count_Passwordx = 0;

    system("cls");
    printf("\n\n\t\tHow Many Details You Want to Modify\n\n\t\t1. NAME \n\t\t2. Address \n\t\t3. Birth Date \n\t\t4. Phone Number");
    printf("\n\t\t5. Citizenship Number \n\t\t6. Password \n\n\t\tEnter Your Choice : \t");
    scanf("%d", &t);

    system("cls");
    printf("\n\n\t\tEnter the code 'N' For NAME , 'A' for Adress , 'B' for Birth Date , 'P' for Phone Number , 'C' for Citizenship Number , 'Z' for Password\n\n\t\t1. NAME \n\t\t2. Address \n\t\t3. Birth Date \n\t\t4. Phone Number");
    printf("\n\t\t5. Citizenship Number \n\t\t6. Password\n");

    printf("\n\n\t\tEnter Your Choice : \t");
    scanf("%s", array);

    system("cls");

    
    for (int r = 0; r < strlen(array); r++)
    {
        if (array[r] == 'N')
        {
            count_Namex++;
            array[r] = 'X';
        }
        else if (array[r] == 'A')
        {
            count_addx++;
            array[r] = 'X';
        }
        else if (array[r] == 'B')
        {
            count_birthx++;
            array[r] = 'X';
        }
        else if (array[r] == 'P')
        {
            count_phonex++;
            array[r] = 'X';
        }
        else if (array[r] == 'C')
        {
            count_CTNx++;
            array[r] = 'X';
        }
        else if (array[r] == 'Z')
        {
            count_Passwordx++;
            array[r] = 'X';
        }
    }

    if (count_Namex == 1)
    {
        M_Name();
    }

    if (count_addx == 1)
    {
        M_Address();
    }

    if (count_birthx == 1)
    {
        M_Birth_Date();
    }

    if (count_phonex == 1)
    {
        M_Phone_Number();
    }

    if (count_CTNx == 1)
    {
        M_Citizenship();
    }

    if (count_Passwordx == 1)
    {
        Create_Password();
    }

    update_changes(count_Namex, count_addx, count_birthx, count_phonex, count_CTNx, count_Passwordx);
}

//............................................................................................................................//

//.........................................The First Function to display on screen ............................................//

void menu()
{
come:
    system("cls");
    int num;
    printf("\n\n\tWelcome to Bank Management System\n");
    printf("\n\n\t     Welcome to Main Menu\n");
    printf("\n\n\t\tPress the Key\n");
    printf("\n\t\t1.New Account\n\t\t2.Check Account\n\t\t3.Modify Account\n\t\t4.Transaction\n");
    printf("\n\t\tEnter Your Choice :  ");
    scanf("%d", &num);
    system("cls");

    switch (num)
    {
    case 1:
    {
        New_Account();
        break;
    }
    case 2:
    {
        Password_Function(1);
        View_Account();
        // 1 is for View_Account();
        break;
    }
    case 3:
    {
        Password_Function(2);
        func_modify();
        // 2 is for Modify_Account();
        break;
    }
    case 4:
    {
        Password_Function(3);
        Transaction();
        // 3 is for Transaction();
        break;
    }
    default:
    {
        goto come;
        break;
    }
    }
}

//.............................................................................................................................................//

int main() //...............Main Functions.............//
{
    menu();
    // New_Account() ;
    // Password_Function();
    // Create_Password();
    // View_Account();
    // func_modify();

    return 0;
}