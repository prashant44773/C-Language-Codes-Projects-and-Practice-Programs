#include <stdio.h>
#include<string.h>

int main()
{
    char var[10];


    //......This is showing Runtime Error .......//


    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the %dth Element of Array\n", i);
    //     scanf("%d", var[i]);
    // }

    printf("Enter the String  : \n");
    scanf("%[^\n]%*c",&var);

    int length = 0 ; 
    length = strlen(var) ;

      printf("The length of the string is : %d",length) ;

      printf("%c",var[4]) ;
  
    return 0;
}