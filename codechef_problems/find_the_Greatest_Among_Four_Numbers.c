#include<stdio.h>


int main()
{   
    int Num1 , Num2 , Num3 , Num4 , R1 , R2 , Final = 0 ;

    printf("\nEnter Four Number To Find The Greatest Among Them\n\n");

    printf("Enter The First Number\n");
    scanf("%d",&Num1);

    printf("Enter The First Number\n");
    scanf("%d",&Num2);

    printf("Enter The First Number\n");
    scanf("%d",&Num3);

    printf("Enter The First Number\n");
    scanf("%d",&Num4);

     // to check Which Number is Greater Among them

    if(Num1 > Num2)
    {
       R1 = Num1 ;
    }
    else
    {
       R1 = Num2 ; 
    }
    
    // to check Which Number is Greater Among them

    if(Num3 > Num4)
    {
       R2 = Num3 ;
    }
    else
    {
       R2 = Num4 ; 
    }

    if(R1 > R2)
    {
       Final = R1 ;
       printf("The Greatest Number Among Them is %d", Final);
    }
    else
    {
       Final = R2 ;
       printf("The Greatest Number Among Them is %d", Final);
    }

     

    return 0;
}