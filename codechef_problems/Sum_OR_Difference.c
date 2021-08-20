

// Take two Numbers from the user and Print their Difference , But if the first is gretaer than the second then their sum.....................//

#include<stdio.h>

int main()
{
    int x , y ;
    printf("Enter Two Numbers to either Print their Difference or Sum : \n\n");
    
    printf("Enter the First Number : \n");
    scanf("%d", &x);
    getchar();

    printf("Enter the First Number : \n");
    scanf("%d", &y);
    getchar();

    if( x-y > 0 )
    {
        printf("The Difference between the Two Number is : %d",x-y);
    }
    else
    {
        printf("The sum of the Two Number is : %d",x+y);
    }


    return 0;
}




// The code that i submitted at codechef.....//

// #include<stdio.h>

// int main()
// {
//     int x , y ;
//     scanf("%d", &x);
//     getchar();
//     scanf("%d", &y);
//     getchar();

//     if( x-y > 0 )
//     {
//         printf("%d",x-y);
//     }
//     else
//     {
//         printf("%d",x+y);
//     }


//     return 0;
// }