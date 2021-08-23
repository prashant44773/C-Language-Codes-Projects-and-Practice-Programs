// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char var[10];

//     //......This is showing Runtime Error .......//

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("Enter the %dth Element of Array\n", i);
//     //     scanf("%d", var[i]);
//     // }

//     printf("Enter the String  : \n");
//     scanf("%[^\n]%*c",&var);

//     int length = 0 ;
//     length = strlen(var) ;

//       printf("The length of the string is : %d",length) ;

//       printf("%c",var[4]) ;

//     return 0;
// }

#include <stdio.h>

int main()
{
  int t , temp;

  int arr[5] ;
  
  printf("Enter the Number of Testcases : \t");
  scanf("%d", &t);

  while (t--)
  {

    for(int r=0 ; r < 5 ; r++)
    {
      printf("\nEnter the %d Element :\t",r+1);
      scanf("%d",&arr[r]);
    }


    for(int i=0 ; i < 5 ; i++)
    {
      for(int j=i+1 ; j < 5 ; j++)
      {
          if(arr[i] > arr[j])
          {
            temp = arr[i];

            arr[i] = arr[j];

            arr[j] = temp;
          }
      }
    }

    printf("The Sorted Array is : \t");
    // for(int y=0 ; y < 5 ; y++)
    // {
    //   printf("%d ",arr[y]);
    // }

    printf("%d",arr[2]);

  }
  return 0;
}
