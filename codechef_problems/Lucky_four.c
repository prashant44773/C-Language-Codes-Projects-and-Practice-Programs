
//SubTask 1.......................................................................//
// Learned From Codechef soluions of another Programmer ............................//

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//    int T ;
//    scanf("%d",&T);
//    while(T--)
//    {
//       int n , i , count = 0 , Y; 
//       scanf("%d",&n);

//       for(i=0 ; i < 10 ; i++)
//       {
//           Y = n%10 ;
//           if ( Y == 4)
//           {
//               count++ ;
//           }
//           n = n/10  ;
//       }
      
//       printf("%d\n",count) ;
//    }
    
//     return 0;
// }


/*


// SubTask 2................................................................//
// This one i solved on my own but the codechef compiler doesn't accept it, i guess this has to be fixed.....................//

#include<stdio.h>
#include<string.h>

int main()
{
    int T ;
    scanf("%d",&T); 
    while(T--)
    {
       int n , i ;
       int count = 0 ;
       char str[10] ;
       scanf("%d",&n);

     for( i = 0 ; n > 0 ;i++)
     {
         str[i] = n%10  + '0'  ;
         n = n/10  ;

     }
     
     for(i  = 0 ; i < 10 ; i++)
     {
         if (str[i] == 4)
         {
             count++ ;
         }
         else
         {
             count = count ;
         }
     }  
      
      printf("%d\n",count);

    }

    return 0;

}   



*/

/*



// solution From A codechef Programmer................................................................////


#include <stdio.h>

int main(void) {
int t,n;
scanf("%d",&t);
while(t>0)
{
    scanf("%d",&n);
    int flag = 0;
    while (n>0)
    {
        int rem = n %10;
        if(rem==4)
        flag++;
        n = n/10;
        
    }
    printf("%d\n",flag);
    t--;
}
	return 0;
}



*/




// finally I Solved This Problem on My own....................//

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int T ;
//     printf("Enter the number of Test Cases : \n");
//     scanf("%d", &T);
//     while(T--)
//     {
//     int n  ;
//     printf("Enter an Integer : \n");
//     scanf("%d", &n) ;
//     char str[10] ;        // we created a string here to store the integer.........in form of character Array....to check its Every Elements 
//     int count = 0;

// //     Then we used this loop to take out every integer from the Number(By using '%' operator) to convert it to a string...and stored this sring into an character array. 

// //     This function str[i] is used to store the last digit of the integer into a the string....then we can extract the elements of the string by using character Array.

// //    //.................... Example of character Array........................//
// //     char string[8] = "Prashant" ;
// //     // The above string can be also written as below : 
// //     string[0] = "P" ;
// //     string[1] = "r" ;
// //     string[2] = "a" ;
// //     .
// //     .
// //     .
// //     .
// //     string[8] = "\0" ;   // The last Element of an string must be a "Null Character"  : 



//     for(int i=0 ; i < 10 ; i++)  
//     {
//        str[i] = n%10 + '0' ;
//        n = n / 10 ;
//     }
    
//     for(int j=0 ; j < 10 ; j++)
//     {
//        if(str[j] == '4')
//        {
//            count++ ;
//        }
//        else
//        {
//            count = count ;
//        } 
//     }
    
//      printf("%d\n",count) ;

//     } 

//     return 0;
// }