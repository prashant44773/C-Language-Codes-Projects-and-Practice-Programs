// this problem is all about : Program to find the duplicate characters in a string...........// like repeating charaters in a string...//

#include <stdio.h>
#include <string.h>

// I havn't solved this problem....Yet...//

int main()
{
   int T ;
   printf("Enter the number of TEST cases\n");
   scanf("%d",&T);  
   while(T--)
   {

    printf("Enter the string\n");

    char string[50]  ; //= "The Power Of Now";
    gets(string);
    getchar();

    int count = 0, dcount ;
    int i;
    // we are using this two Loops to find the duplicate characters in the string......//

    for (i = 0; i < strlen(string); i++)
    {
        for (int j = i ; j < strlen(string); j++)
        {
            if (string[i] == string[j+1] )
            {
                count++;
                string[j] = '$';
            }
            else
            {
                count= count;
            }
            
        }
    }
    
    dcount = count;

    //  printf("The Value of count %d\nThe Value of dcount %d\n", count, dcount);
    
    if(dcount > 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
   }

    return 0;
}