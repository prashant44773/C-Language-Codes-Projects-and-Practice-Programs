
// Program to find the sum of the first and last digit :

#include <stdio.h>

int main()
{   
    int T ;
    scanf("%d", &T);
    while(T--)
    {
       int N , Lastdigit , firstdigit , sum ;
       scanf("%d", &N) ;

       Lastdigit =  N % 10  ;   // To extract the last digit

       while(N>10)      // To extract the first digit 
       {
          N = N / 10 ;
       } 

       firstdigit = N ;

       sum = firstdigit+Lastdigit ;

       printf("%d\n",sum) ;

    }
   

    return 0;
}



// Solution that i uploaded on codechef after resolution  :
/*

#include <stdio.h>

int main()
{   int T ;
    scanf("%d", &T);
    while(T--)
    {
       int N , Lastdigit , firstdigit , sum ;
       scanf("%d", &N) ;
       Lastdigit =  N % 10  ;   
       while(N>9)       
       {
          N = N / 10 ;
       } 
       firstdigit = N  ;
       sum = firstdigit+Lastdigit ;
       printf("%d\n",sum) ;
    }
    return 0;
}

*/