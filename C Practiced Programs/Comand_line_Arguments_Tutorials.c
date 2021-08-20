#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The number of arguments this one is :  %d \n",argc); 

    for (int i = 0; i < argc; i++)
    {
        printf("The number of Arguments this one is  %d  and the value of this argument is %s\n",i,argv[i]);
    }
    
 
    
    return 0;
}
