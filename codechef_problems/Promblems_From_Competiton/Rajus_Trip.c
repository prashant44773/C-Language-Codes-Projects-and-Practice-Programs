#include<stdio.h>

int main()
{
   int Num ;
   printf("Enter the Number :  \n");
   scanf("%d",&Num);

   if (Num % 5 == 0 || Num % 6 == 0)
   {
       printf("YES\n");
   }
   else
   {
       printf("No\n");
   }



    return 0 ;
}



//..................................Problem that I submitted at Codechef........Successfully............//




// #include<stdio.h>

// int main()
// {
   
//    int Num , count = 0 ;
//    scanf("%d",&Num);

//    if (Num % 5 == 0 || Num % 6 == 0)
//    {
//        count++ ;
//    }
//    else
//    {
//        count = count ;
//    }
   
   
//    if(count == 1)
//    {
//    printf("YES");
//    }
//    else
//    {
//     printf("NO");
//    }
//     return 0 ;
// }