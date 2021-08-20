#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Ed( int x1 , int y1 , int x2 , int y2 )
{
    int D  ,  F ;

    D =  (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1) ;

    F = D * D ;

    return F ;
//   return sqrt(D) ;
}

float AOC( int x1 , int y1 , int x2 , int y2, float (*Eod)( int x1 , int y1 , int x2 , int y2)  )
{
  return Eod( x1, y1, x2, y2)  ;
} 

int main()
{ 
    printf("Enter the Values of x1 , y1 , x2 , y2  :  \n");

    int v1 , t1 , v2 , t2 ;
    int  AOCF;

    printf("Enter the Values of x1 :  \n");
    scanf("%d",&v1);  
    getchar();
    printf("Enter the Values of y1 :  \n");
    scanf("%d",&t1);  
    getchar();
    printf("Enter the Values of x2 :  \n");
    scanf("%d",&v2);   
    getchar();
    printf("Enter the Values of y2 :  \n");
    scanf("%d",&t2);  
    getchar();

    AOCF = AOC( v1 , t1 , v2 , t2 , Ed);
    printf("The Area of Circle is %d",AOCF);

    return 0;
}