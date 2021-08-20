#include <stdio.h>
#include <string.h>

int main()
{
    // int Take ;
    // printf("Enter The Number Of Elements  : \n");
    // scanf("%d", &Take);
    // getchar();

    //.........................................Solving USing {  gets  ,  Sterev  }  Functions..............................//

    // char Num[100] ;

    // printf("Enter the String : \n");

    // gets(Num) ;

    // strrev(Num) ;
    // printf("Entered Number is : %s\n", Num);

    //.........................................Solvingn USing  Only  { Sterev  }  Function  and also using special {{   scanf("%[^\n]%*c")  }} which replaces { gets } Function..............................//
    //......................................... {{   scanf("%[^\n]%*c")  }}  This scanf also takes ( space ) in Input ..............................//

    // char num[100] ;

    // printf("Enter the  String  : \n");

    // scanf("%[^\n]%*c", num) ;

    // strrev(num) ;

    // printf("The Entered String is : %s\n", num);

    //.........................................Solvingn USing Without Library  Function..............................//

    char num[100];

    char str[100];

    printf("Enter the  String  : \n");

    scanf("%[^\n]%*c", num);

    int Length, count, j = 0, temp;

    Length = strlen(num);

    count = Length;

    printf("The Value of Count is %d\n", count) ;

    printf("The Entered String is  : %s\n", num) ;    

     for (int j = Length; j >= 0; j--)
    {
        printf("%c", num[j]);
    }

    // for (int i = 0; i < count; i++)
    // {
    //     temp = num[count];

    //     num[count] = str[i];

    //     str[i] = temp;

    //     count--;
    // }

    // for (int j = 0; j < Length; j++)
    // {
    //     printf("%c\n", str[j]);
    // }
    // for( int i = 0 ; i < count ; i++ )
    // {
    //     printf("The value of the %dth Element ,The Value this Stores is  %s\n",i+1,str[i]) ;
    // }

    // printf ("Entered String  is  : %s\n", num);

    // printf("The LEngth of the String is  : %d\n", Length);

    // printf("The Reversed String is  :  %s\n", str);

    return 0;
}










//..........................................................................................................................//


//..................The code that I submittted at Codechef..................//



// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int Take ;
//     scanf("%d", &Take);

//      char num[100];
   
//     scanf("%[^\n]%*c", num);

//     int Length, count, j = 0, temp;

//     Length = strlen(num);

//      for (int j = Length; j >= 0; j--)
//         printf("%c", num[j]);
//   return 0 ;    
// }