#include<stdio.h>
#include<string.h>

int main()
{

    int n  , i ;
    scanf("%d", &n) ;
    char str[10] ;
    int count = 0;

    for(i=0 ; i < 10 ; i++)  
    {
       str[i] = n%10 + '0' ;
       n = n / 10 ;
    }

    
    // I used This to solve a codechef Problem......//
    
    // for(int j=0 ; j < 10 ; j++)
    // {
    //    if(str[j] == '4')
    //    {
    //        count++ ;
    //    }
    //    else
    //    {
    //        count = count ;
    //    } 
    // }
    
    //  printf("%d\n",count) ;


    // From here i am using as converting a Integer into String probleml.............//




    // continue......; 

    // First Attempt.........// To convert Integer into String

    // for( i=0 ;  i != '\0' ; i++)
    // {
    //     printf("%d",str[i]) ;
    // }
   
   
    // Another attempt to convert Integer into String.........//
       
    // i = 0 ;
    // while(str[i] < str[10])
    // {
    //     if ( str[i] == '\0' )
    //     {
    //         break ;
    //     }
    //     else
    //     {
    //         printf("%d",str[i]) ;
    //     }


    // }
  

    // Another Attempt..................//

    //  for (i=0 ; i != '\0' ; i++)
    //  {
    //      if ( str[i] == '\0' )
    //     {
    //         break ;
    //     }
    //     else
    //     {
    //         printf("%d",str[i]) ;
    //     }
    //  }

    

    // Another Attempt By using Switch........To convert Integer into String......//

    // i = 0 ;
    // switch(str[i])
    // {
    // case 1 :    
        
    //  if ( str[i] == '\0' )
    //     {
    //         break ;
    //     }
    //     else
    //     {
    //         printf("%d",str[i]) ;
    //         i++ ;
    //     }
    // }




    strrev(str) ;  // This is a fuctions that we use to reverse a string.............//

    // My most of Solutions Didn't work ....... so i coundn't solve it now but i wil solve it in no-Time until i found its solution
    // until then i am Printing it with those zero's.......
    printf("The Integer HAs Been Converted into String  :  %s\n",str);
    

    return 0;
}