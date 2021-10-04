// #include <stdio.h>

// int main()
// {
//     int t;
    
//     printf("Enter the Number of  Test Cases  :  \t");
//     scanf("%d", &t);

//     while (t--)
//     {
//         int a, b, c, d, e;

//         int add1, add2, small;

//         printf("Enter the Value of a : \t");
//         scanf("%d",&a);
        
//         printf("Enter the Value of b : \t");
//         scanf("%d",&b);

//         printf("Enter the Value of c : \t");
//         scanf("%d",&c);

//         printf("Enter the Value of d : \t");
//         scanf("%d",&d);

//         printf("Enter the Value of a : \t");
//         scanf("%d",&e);


//         if(a+b+c <= d)
//         {
//             printf("Yes\n");
//         }
//         else if (a < b && a < c)
//         {
//             small = a;
//             add1 = b;
//             add2 = c;

//             if(add1 + add2 <= d)
//             {
//                 if(small <= e)
//                 {
//                     printf("Yes\n");
//                 }
//                 else
//                 {
//                     printf("No\n");
//                 }
//             }
//         }
//         else if (b < c && b < c)
//         {
//             small = b;
//             add1 = c;
//             add2 = c;

//             if(add1 + add2 <= d)
//             {
//                 if(small <= e)
//                 {
//                     printf("Yes\n");
//                 }
//                 else
//                 {
//                     printf("No\n");
//                 }
//             }
//         }
//         else if (c < a && c < b)
//         {
//             small = c;
//             add1 = b;
//             add2 = a;

//             if(add1 + add2 <= d)
//             {
//                 if(small <= e)
//                 {
//                     printf("Yes\n");
//                 }
//                 else
//                 {
//                     printf("No\n");
//                 }
//             }
//         }
//         else
//         {
//             if(a+b <= d)
//             {
//                 if(c <= e)
//                 {
//                     printf("Yes\n");
//                 }
//             }
//             else if(a+c <= d)
//             {
//                 if(b <= e)
//                 {
//                     printf("Yes\n");
//                 }
//             }
//             else if(c+b <= d)
//             {
//                 if(a <= e)
//                 {
//                     printf("Yes\n");
//                 }
//             }
//             else
//             {
//                 printf("No\n");
//             }
//         }
    
//     }

//     return 0;
// }





#include<stdio.h>

int main()
{
    int a , b , c , d , e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a+b+c <= d)
    {
        printf("Yes\n");
    }
    else if (a+b <= d)
    {
        if(c <= e)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if (a+c <= d)
    {
        if(b <= e)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if(b+c <= d)
    {
        if(a <= e)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    


    return 0 ;
}