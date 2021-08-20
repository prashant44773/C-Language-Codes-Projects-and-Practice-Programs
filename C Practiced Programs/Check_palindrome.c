#include <stdio.h>

/*


int Palindrome(int n)
{
  int reversed = 0 , remainder ;

  while (n != 0)
  {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n = n / 10;
  }
  

    return 1 ;
  
  
}

int main()
{
  int X ;

  printf("Enter A Number To know its a palindrome or not\n");
  scanf("%d",&X);
  Palindrome(X);

  if( Palindrome == 1)
  {
    printf("The Entered number is a Palindrome");
  }
  else
  {
    printf("The Entered number is a Not Palindrome");
  }
  return 0;
}


*/

// Trying to write this program again cause i couldn't solve it that time........

/*
int main()
{
  int T ;
  scanf("%d", &T);
  while(T--)
  {
     int N , reversed_num ;
     scanf("%d", &N);
     while(N != 0)
     {
       reversed_num = reversed_num*10 + N%10;
       N = N/10 ;
     }      
     
     if(reversed_num == N) 
      {
          printf("It is Palindrome");
      }  
     else
      {
          printf("It is Not an Palindrome");   
      }  

  }

  return 0;
}

*/

/*

////////////................ test program for codechef...................////////////////

#include <stdio.h>

int main()
{

  int Palindrome(int n)
 {
  int reversed = 0 , remainder ;

  while (n != 0)
   {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n = n / 10;
   }
      return 1 ;
 }    


 int T ;
 scanf("%d",&T);
 while(T--)
{
  int X ;
  scanf("%d",&X);
  Palindrome(X);

  if( Palindrome == 1)
  {
    printf("wins\n");
  }
  else
  {
    printf("loses\n");
  }
  
}
  return 0 ;
}

*/

//............................Finally Solved The Problem...........................//


#include <stdio.h>

int main()
{
/*
  int Palindrome (int n)
 {
  int reversed = 0  ;

  while (n != 0)
   {
    n % 10;
    reversed = reversed * 10 + n%10 ;
    n = n / 10;
   }
     
  if( reversed == n)
  {
    printf("wins\n");
  }
  else
  {
    printf("loses\n");
  }
  
           
 }    
*/

 int T ;
 scanf("%d",&T);
 while(T--)
{
  int X , reversed = 0 , Org ; 
  scanf("%d",&X);
  Org = X ;
//  Palindrome(X);
  while (X != 0)
   {
    reversed = reversed * 10 + X%10 ;
    X = X / 10;
   }
     
  if( reversed == Org)
  {
    printf("wins\n");
  }
  else
  {
    printf("loses\n");
  }

}
  return 0 ;
}

