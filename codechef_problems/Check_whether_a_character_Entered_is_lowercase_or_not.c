#include <stdio.h>
#include <string.h>

int main()
{
    printf("\nEnter The Character which you want to check whether it is Lower case or Not.\n");

    char Ltr[5];
    gets(Ltr);

    char Str[26] = "abcdefghijklmnopqrstuvwxyz";

    int Score = 0;

    int Length2 = strlen(Ltr);
    int Length1 = strlen(Str);

    for (int i = 0; i < Length2; i++)
    {
        for (int j = 0; j < Length1; j++)
        {
            if (Ltr[i] == Str[j] && Str[j] != '\0')
            {
               Score ++ ; 
            }
            
        }
    }

    // To check does we got a Match between the Ltr[i] and Str[j]......//   
    if(Score > 1)
    {
        printf("The Entered Character has a Lower Case Letter.\n");
    }
    else
    {
        printf("The Entered Character Does Not has a Lower Case Letter.\n");
    }
    return 0;
}