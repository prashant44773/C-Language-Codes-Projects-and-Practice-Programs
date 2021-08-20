#include <stdio.h>

// void update(int *a,int *b) {

//    if( *a > *b)
//    {
//        *a -= *b ;
//    }
//    else
//    {
//        *b -= *a ;
//    }

//     // Complete this function
// }

//.....................creating the function to test the pointers....that i created .......//

int Test(int *pointer1, int *pointer2)
{
    int derefernce1, derefernce2;

    derefernce1 = *(pointer1) + *(pointer2) ;
    
    if(*(pointer1) > *(pointer2))
    {
        derefernce2 =   *(pointer1) - *(pointer2) ;
    }
    else
    {
        derefernce2 =   *(pointer2) - *(pointer1) ;
    }

    // *pointer1 = derefernce1 ;

    // *pointer2 = derefernce2 ;

    return pointer1 , pointer2 ;
}

int main()
{
    //     int a, b;
    //     int *pa = &a, *pb = &b;

    //     scanf("%d %d", &a, &b);
    //     update(pa, pb);
    //     printf("%d\n%d", a, b);

    // Practice statements....................//

    int a, b;

    printf("Enter the First Integer : \n");
    scanf("%d\n", &a);
    getchar();

    printf("Enter the second Integer : \n");
    scanf("%d\n", &b);
    getchar();

    // Declaring pointers.....//

    int *var1, *var2;

    int derefernce1, derefernce2;

    var1 = &a;

    var2 = &b;

    derefernce1 = *(var1);

    derefernce2 = *(var2);

    printf("The Value that first pointer stores is %d\n", var1);
    printf("The Value that first pointer stores is %d\n", var2);

    printf("\n\n");

    printf("The Sum of Pointers is  : %d\nThe Diference of Pointers is :  %d\n",Test(var1,var2));

    // printf("Valuse stored in first deferencing operator : %d\n", derefernce1 + derefernce2);

    // if (derefernce1 > derefernce2)
    // {
    //     printf("Valuse stored in second deferencing operator : %d\n", derefernce1 - derefernce2);
    // }
    // else
    // {
    //     printf("Valuse stored in second deferencing operator : %d\n", derefernce2 - derefernce1);
    // }
    return 0;
}
