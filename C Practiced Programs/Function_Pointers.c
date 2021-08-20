#include<stdio.h>
#include<stdlib.h> 

int sum(int x , int v)
{
  return x + v ;
}


int main()
{
   printf("The sum of two numbers is %d\n",sum(50,50));
   int (*fptr)(int  , int ) ;
   fptr = &sum ;
   int d = (*fptr)(4,7);
   printf(" The Value of  d is %d\n",d);

    return 0;
}