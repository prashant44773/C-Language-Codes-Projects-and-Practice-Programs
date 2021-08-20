#include<stdio.h>

int main()
{
    int n ;
    printf("Enter the No. OF Elements\n");
    scanf("%d", &n);
    getchar();
    int temp , a[n] ;
    for(int i=0 ; i < n ; i++)
    {   
        printf("Enter the Number  :  \n");
        scanf("%d",&a[i]) ;
    }

    for(int i=0 ; i < n ; i++)
    {
      for(int j=i+1 ; j < n ; j++)
      {
          if( a[i] > a[j] )
          {
             // wrong one in many attempts //     
          /*  a[j] = temp ;   */       
          /*  temp = a[i] ;   */      
          /* a[i] = a[j] ;   */       

        // Finally solved it after spending some Hours................................................................//

           temp = a[j] ;
           a[j] = a[i] ;
           a[i] = temp ;

          }
      }

    }
    printf("The Answers are   : \n");
    for(int i=0 ; i < n ; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0 ;
}




//  Problem submited at  Codechef.....................


// #include<stdio.h>

// int main()
// {
//     int n  ;
//     scanf("%d",&n);
//     int  a[n] ;
//     int temp ;
//     for(int i=0 ; i < n ; i++)
//     {   
//         scanf("%d",&a[i]) ;
//     }
//     for(int i=0 ; i < n ; i++)
//     {
//       for(int j=i+1 ; j < n ; j++)
//       {
//           if( a[i] > a[j] )
//           {
//            temp = a[j] ;
//            a[j] = a[i] ;
//            a[i] = temp ;
//           }
//       }
//     }
//     for(int i=0 ; i < n ; i++)
//     {
//         printf("%d\n",a[i]);
//     }