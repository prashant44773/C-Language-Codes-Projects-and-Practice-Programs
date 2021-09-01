#include <stdio.h>

int main()
{
    int t, n;

    int long arr[5005];
    
    printf("Enter the Number of Test Cases : \t");
    scanf("%d", &t);

    while (t--)
    {
        printf("Enter the Number of Rounds  : \t");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("Enter the %d Element : \t",i);
            scanf("%ld", &arr[i]);
            printf("\n");
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp;

                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        
        for (int r = 0; r < n; r++)
        {
            printf("%ld ", arr[r]);
        }


        int long min  , ans ;

        min = arr[1] - arr[0];


        for(int r = 1 ; r < n ; r++)
        {
            if(arr[r] - arr[r-1] < min)
            {
                min = arr[r] - arr[r-1];
            }
        }

        ans = min ;

        printf("%ld\n",ans);



    }

    return 0;
}




//............................Solved Problem =================//......submitted at codechef..........//......


// #include <stdio.h>

// int main()
// {
//     int t, n;

//     int long arr[5005];
    
//     scanf("%d", &t);

//     while (t--)
//     {
//         scanf("%d", &n);

//         for (int i = 0; i < n; i++)
//         {
//             scanf("%ld", &arr[i]);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[i] < arr[j])
//                 {
//                     int temp;

//                     temp = arr[j];
//                     arr[j] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }


//         int long min  , ans ;

//         min = arr[1] - arr[0];


//         for(int r = 2 ; r < n ; r++)
//         {
//             if(arr[r] - arr[r-1] < min)
//             {
//                 min = arr[r] - arr[r-1];
//             }
//         }

//         ans = min ;

//         printf("%ld\n",ans);



//     }

//     return 0;
// }

