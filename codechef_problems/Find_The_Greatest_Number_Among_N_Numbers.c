#include<stdio.h>

int main()
{
    int N  , start = 0 , Final ;
    printf("Enter The Elements of Array\n");
    scanf("%d", &N);

    int Array[N] ;

    for ( int i = 0; i < N ; i++ )
    {
        printf("Enter The  %d Elements of Array  : \n", i);
        scanf("%d\n",&Array[i]);
    }

    for( int i = 0; i < N ; i++ )
    {
        if( Array[start] < Array[i])
        {
            start = i ;
            continue ;
        }
    }

    Final = Array[start] ;

    printf("The Largest Number Among the Entered Number is %d\n", Final);

    

    return 0 ;
}