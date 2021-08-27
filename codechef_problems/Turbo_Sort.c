#include<stdio.h>

int main()
{
    int t , arr[1000001];
    printf("Enter the Number of elemente : \t");
    scanf("%d",&t);

    printf("Enter the elements : \t");

    for(int i=1 ; i <= t ; i++)
    {
        scanf("%d",arr[i]);
    }

    for(int j=1 ; j <= t ; j++)
    {
        for(int r=j ; r <= t ; r++)
        {
            if (arr[j] > arr[r])
            {
                int temp;

                temp = arr[r];
                arr[r] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The Sorted Elements are  : \t");

    for(int y=1 ; y <= t ; y++)
    {
        printf(" %d",arr[y]);
    }


    return 0 ;
}