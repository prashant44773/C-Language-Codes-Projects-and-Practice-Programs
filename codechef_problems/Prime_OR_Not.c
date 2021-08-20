
/*

#include<stdio.h>

int main()
{
int T ;
scanf("%d",&T);
while(T--)
{
   int N ;
   int Count = 1 ;

   scanf("%d",&N);
   getchar() ;

   for(int i=2; i <= N/2 ; i++)
   {
       if(N%i == 0)
       {
          Count = 0 ;
       }
       
   }  
   
   if(N == 1 || Count == 0)
   {
       printf("NO\n");
   }
   else
   {
      printf("YES\n");
   }
     printf("\n");
}

return 0;
}
*/


// Secondary Solution from codechef.........

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count==2)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}


