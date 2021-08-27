// #include<stdio.h>

// int main()
// {
//     int t ;
//     int arr[1001];
//     printf("Enter the Number of elements : \t");
//     scanf("%d",&t);

//     // printf("Enter the elements : \t");

//     for(int i=0 ; i < t ; i++)
//     {
//         printf("enter the %d eleemnt : ",i);
//         scanf("%d",&arr[i]);
//     }

//     for(int j=0 ; j < t ; j++)
//     {
//         for(int r=j ; r < t ; r++)
//         {
//             if (arr[j] > arr[r])
//             {
//                 int temp;

//                 temp = arr[r];
//                 arr[r] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("The Sorted Elements are  : \n");

//     for(int y=0 ; y < t ; y++)
//     {
//         printf("%d\n",arr[y]);
//     }


//     return 0 ;
// }






//.............................................................................//



#include<stdio.h>

int main()
{
    int t ;
    int arr[1001];

    scanf("%d",&t);

    for(int i=0 ; i < t ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0 ; j < t ; j++)
    {
        for(int r=j ; r < t ; r++)
        {
            if (arr[j] > arr[r])
            {
                int temp;

                temp = arr[r];
                arr[r] = arr[j];
                arr[j] = temp;

            }
        }

        printf("%d\n",arr[j]);
    }


    // for(int y=0 ; y < t ; y++)
    // {
    //     printf("%d\n",arr[y]);
    // }


    return 0 ;
}


