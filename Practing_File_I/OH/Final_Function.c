#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Password[10] = "lonewolf";

char num_acc[10] = "acc1234";

char String_Password1[10];

char String_Password2[10];

FILE *modi;

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

// char Mod_citizenNumber[6];

void func_modify(); // Modify Account Program

void update_changes(int count_Name, int count_add, int count_birth, int count_phone, int count_CTN, int count_Password); // this will upload later Modifications in account

void M_Name();
void M_Address();
void M_Birth_Date();
void M_Phone_Number();
void M_Citizenship();

void Create_Password();

// void Get_Acc_and_Pass();

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

    modi = fopen("Final_test_File.txt", "r");

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

    printf("\nThe Number that is stored in Varis : %Lf\n", var);
    printf("\nThe Number that is stored in Var_Final is : %.Lf\n", var_final);
    //......................................................................................//

    //...........................To decide which information should be modified..................//

    //.........................to assign the variables to be modified........................//

    system("cls");

    modi = fopen("Modified.txt", "w+");

    fprintf(modi, "%s", string1_acno); // prints Account Number

    if (count_Password == 1)
    {
        fprintf(modi, "%s", str_Account_Password_GLOBAL); // prints Modified Password
        fprintf(modi, "%s\n", String_Password1);
    }
    else
    {
        printf("Password Printed as it was before\n");
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
        printf("NAMe printed as it was before : \n"); // prints the same data from File
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
        printf("Adress printed as it was before : \n"); // prints the same data from File
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
        printf("Birth date printed as it was before : \n"); // prints the same data from File
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
        printf("Phone Number printed as it was before : \n"); // prints the same data from File
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
        printf("Citizenship Number printed as it was before : \n"); // prints the same data from File
        fprintf(modi, "%s", string7_citizenship);
    }

    fprintf(modi, "%s\n", string8_AccountType);

    fprintf(modi, "%s", string9_Amount);

    fprintf(modi, "\t\t\t\t\t\t%.2f", store);

    printf("\n\n\t\tFunction Execution was Successful\n");

    //............................................................................................//
}

//.......................................................................................................//

//........................................Create Password Function............................................//

void Create_Password()
{
    char tsr1[10], tsr2[10];
    system("cls");

again1:
again2:

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
            printf("\n\t\tYour Account Number : \t%s\n\n\t\tYour Account Password :\t%s\n", num_acc, String_Password1);
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

    // for(int j = 0 ; j < t ; j++)
    // {
    //     printf("\n\t\tThe %d Element of Arrray stores this character :  %c\n\n",j,array[j]);
    // }

    // printf("\n\n\t\tThis is the String Length of the above loop : %d",strlen(array));

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

int main()
{
    func_modify();
    // M_Name();
    // M_Address();
    // M_Phone_Number();
    // M_Citizenship();
    // M_Birth_Date();

    // update_changes(0,0,0,0,0,0);

    return 0;
}