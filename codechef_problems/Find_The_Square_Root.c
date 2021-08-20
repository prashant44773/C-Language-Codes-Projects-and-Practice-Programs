#include<stdio.h>
#include<math.h>

int main()
{
   int num , S;
   printf("Enter the number to find its Square Root  :  \n");
   scanf("%d", &num);

   S = sqrt(num); 

   printf("The Square Root of %d is :  %d \n",num,S);



    return 0 ;
}