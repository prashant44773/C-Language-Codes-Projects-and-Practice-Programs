#include<stdio.h>

int main()
{
    
      int i , j , k ;

      printf("Enter The First Angle : \n");
      scanf("%d", &i );

      printf("Enter The First Angle : \n");
      scanf("%d", &j );

      printf("Enter The First Angle : \n");
      scanf("%d", &k );

      printf("\nfirst Angle : %d\nSecond Angle : %d\nThird Angle : %d\n",i,j,k) ;

      if( i+j+k == 180 )
      {
          printf("\nYES.......It's a Triangle");
      }
      else
      {
          printf("\nNO........It's Not a Triangle");
      }

    return 0;
}




//*************Solution That I Submitted at CodeChef************//


// #include<stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//       int i , j , k ;
//       scanf("%d", &i );
//       scanf("%d", &j );
//       scanf("%d", &k );
     
//       if( i+j+k == 180 )
//       {
//           printf("YES\n");
//       }
//       else
//       {
//           printf("NO\n");
//       }

//     }

//     return 0;
// }