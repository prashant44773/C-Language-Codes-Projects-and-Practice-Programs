// #include <stdio.h>
// #include <string.h>



// int main()
// {

//    // char str[100];

//    // char content[100];

//    // int num ;

//    // printf("Enter the String : :  \n");
//    // gets(str);

//    // FILE *ptr;

//    // ptr = fopen("file1.txt", "a");
//    // fprintf(ptr, "%s", str);
//    // fclose(ptr);

//    // ptr = fopen("file1.txt", "r");
//    // fscanf(ptr, "%[^\n]s", content) ;

//    // printf("The Content of the string is  :  %s", content);
//    // fclose(ptr);
//    char str[10];

//    printf("\n\t\tEnter Your Phone Number : \t");
//    scanf("%Lf", &new.phone_Number);
//    getchar();
//    printf("\n");

//    printf("\n\t\tEnter Your CitizenShip Number : \t");
//    gets(str);
//    // scanf("%f",&new.citizanship_number);
//    getchar();
//    printf("\n");

//    strcmp(new.citizanship_number, str);

//    printf("The number is : %.Lf \nThe Citizenship number is %s\n", new.phone_Number, new.citizanship_number);
//    return 0;
// }




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>


int main()
{
    int var ;
    int num ;
    char str[400] , trr[100] , trr1[100] ,trr2[100] , str1[150] = "The Content Of the String is Lonewolf\n" , str3[100];
    // printf("Enter the Content that you want to Store : \t");
    // gets(str);

    printf("Enter The Value of Integer That You Want to Store : \t\n");
    scanf("%d",&var) ;

    FILE *pst ;

    pst = fopen("test_File.txt","w") ;
    while(fprintf(pst,"%s\n",str1) == EOF)
    {
        printf("\n\tInformation Saved Succesfully\n");
    }
     while(fprintf(pst,"The Value of text is :  \n%d",var) == '\0')                                       // Individually storing Integer
    {
        printf("\n\tInformation Saved Succesfully\n");
    }
    fclose(pst);

    pst = fopen("test_File.txt","r");
    while(fgets(trr,"100",pst) == EOF)
    {
       printf("\n\tInformation Extracted Succesfully\n");
    }

    //............................................................Running to skip the lines that comes after the 1st lines so the we can Directly read the integers as it is not reading the integer from the same lines where string is present //
    while(fgets(trr1,"100",pst) == EOF)
    {
       printf("\n\tInformation Extracted Succesfully\n");
    }
    while(fgets(trr2,"100",pst) == EOF)
    {
       printf("\n\tInformation Extracted Succesfully\n");
    }
    //............................................................
    // int num = getw(pst) ;
    // fscanf(pst,"%d",&num) ;
    while(fscanf(pst,"%d",&num) == EOF )
    {
        printf("\n\tInformation Extracted Succesfully\n");
        break;
    }

    fclose(pst);

    printf("\nThe Content of the String is : %s\n",trr);
    printf("The Content of the String is : %s\n",trr1);
    printf("The Integer Value Stored in is %d\n",num);
}