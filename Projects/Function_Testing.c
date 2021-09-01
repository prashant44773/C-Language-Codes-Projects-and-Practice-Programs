#include<stdio.h>
#include <stdlib.h>
#include <conio.h>



int Fruit_X ;

int Fruit_Y ;


int fruit() //.............Fruit Generation.............//
{

again1:

    Fruit_X = rand() % 35;  //% verticle;

    if (Fruit_X == 0)
    {
        goto again1;
    }

again2:

    Fruit_Y = rand() % 60 ; //% horizontal;

    if (Fruit_Y == 0)
    {
        goto again2;
    }
}



int main()
{
    fruit();
    fruit();
    fruit();
    fruit();
    fruit();

    printf("The Value of Fruit_X is :  %d\n",Fruit_X);

    printf("The Value of Fruit_Y is :  %d\n",Fruit_Y);

    return 0 ;
}