#include <stdio.h>

// int main()
// {
//     int t ;
//     printf("\nEnter the Number of Test Cases : \t");
//     scanf("%d",&t);

//     printf("\n");

//     while (t--)
//     {
//         int arr[] = {10,2,20,4,30,6,40,8,50};

//         int a ;
//         printf("\nEnter the length of Pattterns : \t");
//         scanf("%d",&a);

//         for(int i=0 ; i < a ; i++)
//         {
//             printf("%d ",arr[i]);
//         }

//     }

//     return 0 ;
// }

//.....................................Without For loop.............................//

int main()
{

    int arr[] = {10, 2, 20, 4, 30, 6, 40, 8, 50};

    int a;
    printf("\nEnter the length of Pattterns : \t");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
          {
              printf("10");
              break;
          }    
    case 2 :
         {
             printf("10 2");
             break;
         }
    case 3 :
         {
             printf("10 2 20");
             break;
         }
    case 4 :
         {
             printf("10 2 20 4");
             break;
         } 
    case 5 :
         {
             printf("10 2 20 4 30");
             break;
         }      
    case 6 :
         {
             printf("10 2 20 4 30 6");
             break;
         }   
    case 7 :
         {
             printf("10 2 20 4 30 6 40");
             break;
         }   
    case 8 :
         {
             printf("10 2 20 4 30 6 40 8");
             break;
         } 
    case 9 :
         {
             printf("10 2 20 4 30 6 40 8 50");
             break;
         }                             
    }

    return 0;
}




//....................................with the help of Function..........................................//



// #include<stdio.h>

// int func(int b)
// {
//     int arr[] = {10,2,20,4,30,6,40,8,50};
    
//     for(int i=0 ; i < b ; i++)
//         {
//             printf("%d ",arr[i]);
//         }
    
// }

// int main()
// {
    
//         int a ;
//         scanf("%d",&a);
        
//         func(a);


//     return 0 ;
// }