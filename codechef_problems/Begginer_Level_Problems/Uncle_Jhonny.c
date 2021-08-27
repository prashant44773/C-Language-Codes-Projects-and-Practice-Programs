// #include<stdio.h>

// int main()
// {
//     int t ;
//     printf("Enter the Number of Test cases : \t");
//     scanf("%d",&t);

//     while(t--)
//     {
//         int n , arr[110] , k , uncjhon;   

//         int index;

//         printf("Enter the Value of N : \t");
//         scanf("%d",&n);

//         printf("\n");

//         for(int i=0 ; i < n ; i++)
//         {
//             printf("Enter the %d Element  ",i);
//             scanf("%d", &arr[i]);
//             printf("\n");
//         }

//         printf("Enter the position of Uncle jhonny Song : \t");
//         scanf("%d",&k);

//         printf("\nThe integer at Kth Position is :  %d\n",arr[k]);

//         uncjhon = arr[k];

//         printf("The Sorted Array is : \t");

//         for(int i=0 ; i < n ; i++)
//         {
//             for(int j=i ; j < n ; j++ )
//             {
//                 if (arr[i] > arr[j])
//                 {
//                     int temp;

//                     temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }
//             }
//         }

//         for(int i=0 ; i < n ; i++)
//         {
//             printf("%d ",arr[i]);
//         }

//         for(int t=0 ; t < n ; t++)
//         {
//             if(arr[t] == uncjhon)
//             { 
//                 index = t;
//                 printf("\nThe value of i is %d\tthe value of k is %d\n",t,k);
//                 printf("\nthe value of arr[i] is %d\tthe  value of uncle jhon is %d\n\n",arr[t],uncjhon);
//                 break;
//             }
//         }

//         printf("\nThe Position of uncle jhonny is :\t%d",index);

//         printf("\nThe value of uncjhon is %d",uncjhon);

//         printf("\n");

//     }


//     return 0 ;
// }


















#include<stdio.h>

int main()
{
    int t ;
    scanf("%d",&t);

    while(t--)
    {
        int n , arr[110] , k , uncjhon;   

        int index;

        scanf("%d",&n);

        for(int i=0 ; i < n ; i++)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%d",&k);

        uncjhon = arr[k];

        for(int i=0 ; i < n ; i++)
        {
            for(int j=i ; j < n ; j++ )
            {
                if (arr[i] > arr[j])
                {
                    int temp;

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for(int t=0 ; t < n ; t++)
        {
            if(arr[t] == uncjhon)
            { 
                index = t;
                break;
            }
        }

        printf("%d\n",index);

    }


    return 0 ;
}

