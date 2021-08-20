#include <stdio.h>

int main()
{
   int Y ;
   scanf("%d", &Y);

  while(Y--)
  {  
    int x, y, Sum;

    scanf("%d", &x);
    
    getchar();
    scanf("%d", &y);
    getchar();
    Sum = x + y;
    printf("%d", Sum);
  }

    return 0;
}