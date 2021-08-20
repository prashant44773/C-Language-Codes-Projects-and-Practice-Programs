#include<stdio.h>

int main()
{
   int n ;
   printf("Enter the no. of Test Cases : \n");
   scanf("%d", &n);

   int Var , Reverse = 0, Remainder ;
       

   for (int i = 0 ; i < n ; i++ )
   {
       printf("Enter the number that u want to Reverse : \n");
       scanf("%d", &Var);
       
       while (Var != 0) // we are using this loop unti the number is fully reversed ......we need multiple interation to get the number fully reversed......//

       {

       Remainder = Var % 10 ;  // "%" operator is used to extract the last digit..................//

       Reverse = Reverse * 10 + Remainder ;  // we are multiplying the reverse by 10 so we can add the remainder in to reversed no................//
       // example........
       // input 543  .....with the % operator we eill get Last digit and we will multiply the last digit by 10 to add the second last digit to the first last digit.....// 
       
       
       Var = Var / 10 ;       // we are using "/" this division operator to remove last digit..............////////////////
       
       
       }

        printf("\nThe Reversed Number is : %d\n", Reverse);

        Reverse = 0 ;  // Assigning the reverse with Zero because it is stroing the previous value.......// 

   
   }



   return 0;

}


   //...........................................................................................................

   // Anothr Approach.........by using the Function method.......//

   //...........................................................................................................

   //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//



//    int Reverse_The_Number(int Var1)
// {
    
//     int  Reverse1 = 0, Remainder1 ;
    

//     while (Var1 != 0) // we are using this loop unti the number is fully reversed ......we need multiple interation to get the number fully reversed......//

//        {

//        Remainder1 = Var1 % 10 ;  // "%" operator is used to extract the last digit..................//

//        Reverse1 = Reverse1 * 10 + Remainder1 ;  // we are multiplying the reverse by 10 so we can add the remainder in to reversed no................//
//        // example........
//        // input 543  .....with the % operator we eill get Last digit and we will multiply the last digit by 10 to add the second last digit to the first last digit.....// 
       
       
//        Var1 = Var1 / 10 ;       // we are using "/" this division operator to remove last digit..............////////////////
       
       
//        }

//        return Reverse1 ;



// }


// int main()
// {

//     int Num ;
//     printf("Enter the Number that you want to Reverse :  \n");
//     scanf("%d", &Num);

//     printf("The Reversed Number is  %d: \n",Reverse_The_Number(Num));

//     return 0 ;
// }