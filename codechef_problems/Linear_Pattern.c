// #include <stdio.h>

// // int main()
// // {
// //     int t ;
// //     printf("\nEnter the Number of Test Cases : \t");
// //     scanf("%d",&t);

// //     printf("\n");

// //     while (t--)
// //     {
// //         int arr[] = {10,2,20,4,30,6,40,8,50};

// //         int a ;
// //         printf("\nEnter the length of Pattterns : \t");
// //         scanf("%d",&a);

// //         for(int i=0 ; i < a ; i++)
// //         {
// //             printf("%d ",arr[i]);
// //         }

// //     }

// //     return 0 ;
// // }

// //.....................................Without For loop.............................//

// int main()
// {

//     int arr[] = {10, 2, 20, 4, 30, 6, 40, 8, 50};

//     int a;
//     printf("\nEnter the length of Pattterns : \t");
//     scanf("%d", &a);

//     switch (a)
//     {
//     case 1:
//           {
//               printf("10");
//               break;
//           }    
//     case 2 :
//          {
//              printf("10 2");
//              break;
//          }
//     case 3 :
//          {
//              printf("10 2 20");
//              break;
//          }
//     case 4 :
//          {
//              printf("10 2 20 4");
//              break;
//          } 
//     case 5 :
//          {
//              printf("10 2 20 4 30");
//              break;
//          }      
//     case 6 :
//          {
//              printf("10 2 20 4 30 6");
//              break;
//          }   
//     case 7 :
//          {
//              printf("10 2 20 4 30 6 40");
//              break;
//          }   
//     case 8 :
//          {
//              printf("10 2 20 4 30 6 40 8");
//              break;
//          } 
//     case 9 :
//          {
//              printf("10 2 20 4 30 6 40 8 50");
//              break;
//          }                             
//     }

//     return 0;
// }




// //....................................with the help of Function..........................................//



// // #include<stdio.h>

// // int func(int b)
// // {
// //     int arr[] = {10,2,20,4,30,6,40,8,50};
    
// //     for(int i=0 ; i < b ; i++)
// //         {
// //             printf("%d ",arr[i]);
// //         }
    
// // }

// // int main()
// // {
    
// //         int a ;
// //         scanf("%d",&a);
        
// //         func(a);


// //     return 0 ;
// // }




// #include<stdio.h>

// int main()
// {
//     int n  ,  arr[9] = {10,2,20,4,30,6,40,8,50};
//     printf("Enter the Number : \t");
//     scanf("%d",&n);

//     for(int i=0 ; i < 9 ; i++)
//     {
//         if(arr[i] == n)
//         {
//             printf(" %d",arr[i]);
//             break;
//         }

//         printf("%d ",arr[i]);

//     }




//     return 0 ;
// }

#include<stdio.h>


int main()
{
    int n;
    printf("Enter the Number : \t");
    scanf("%d",&n);

    int num1 = 2 , num2 = 10 , j=0;

    for(j=0 ; j<n/2 ; j++)
    {
        printf("%d ",num2);

        printf("%d ",num1);

        num1 = num1 + 2; 

        num2 = num2 + 10; 
    }

    // 10,2,20,4,30,6,40,8,50,


    // for(int i=0 ; i < n ; i++);
    // {
    //     printf("%d ",num1);
    //     // printf("%d %d ", );
    // }


    return 0;
}