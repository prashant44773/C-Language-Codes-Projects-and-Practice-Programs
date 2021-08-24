// #include <stdio.h>

// int main()
// {
//     int num1, num2, gcd, lcm, small, count = 1;

//     printf("Enter the First Integers\n");
//     scanf("%d\n", &num1);
//     getchar();

//     printf("Enter the Second Integers\n");
//     scanf("%d\n", &num2);
//     getchar();

//???????????????.............IT Did Not worked .......................//>>>>>>>>>>>>>....................//

// for (int i = 0; i <= num1 && i <= num2 ; i++)
// {

//     // Check if i is a Factor of both intgers .......//
//     if (num1 % i == 0 && num2 % i == 0)
//     {
//         gcd = i;
//     }
// }

// >>>>>>>>>>>>>.........................It didnt worked .............................>>>>>>>//

// while (num1 != num2)
// {
//     if( num1 > num2)
//     {
//         num1 = num1 - num2 ;
//     }
//     else
//     {
//         num2 = num2 - num1 ;
//     }
// }

// gcd = num1 ;

///>...........................Another Approach ............................//

// if (num1 > num2)
// {
//     small = num2;
// }
// else
// {
//     small = num1;
// }

//  small = (num1 < num2) ? num1 : num2;

// while(count <= small)
// {
//     if ( num1 % count == 0 && num2 % count == 0 )
//     {
//         gcd = count ;
//     }
//     count++ ;

// }

//............................................another approach..........................................//

// int remainder , denominator , numerator ;

// if (num1>num2)
// {
//     numerator=num1;
//     denominator=num2;
// }
// else
// {
//     numerator=num2;
//     denominator=num1;
// }
// remainder=numerator%denominator;
// while(remainder!=0)
// {
//     numerator=denominator;
//     denominator=remainder;
//     remainder=numerator%denominator;
// }
// gcd = denominator;

//............................................another approach..........................................//

//............................................another approach..........................................//

//     int hcf ;

//     hcf = num1 < num2 ? num1 : num2 ;

//     for (  hcf = num1 < num2 ? num1 : num2  ;  hcf > 1  ;  hcf-- )
//     {
//         if ( num1 % hcf == 0  &&  num2 % hcf == 0 )
//         {
//             break ;
//         }
//     }

//     lcm = (num1 * num2) / hcf;

//     printf("The Lcm is : %d\nThe Hcf is :  %d", lcm, hcf );

//     return 0;
// }

//.............................finally solved it but codechef isn't Accepting it............//

// #include <stdio.h>

// int main()
// {
//     int num1 , num2 , lcm , hcf ;

//     scanf("%d %d", &num1 , &num2);

//     hcf = num1 < num2 ? num1 : num2 ;

//     while ( hcf > 1 )
//     {
//         if ( num1 % hcf == 0  &&  num2 % hcf == 0 )
//         {
//             break ;
//         }

//          hcf-- ;
//     }

//     lcm = (num1 * num2) / hcf;

//     printf("%d %d", hcf , lcm );

//     return 0;
// }

//.....................without using loop........................//

// solving using recursion

#include <stdio.h>

int gcd(int a, int b)
{
    if (a == b)
    {
        return a;
    }

    if (a % b == 0)
    {
        return b;
    }

    if (b % a == 0)
    {
        return a;
    }

    if (a > b)
    {
        gcd(a % b, b);
    }
    else
    {
        gcd(a, b % a);
    }
}

int main()
{
    int num1 , num2 , hcf , lcm;

    printf("Enter the First Integers\n");
    scanf("%d\n", &num1);
    getchar();

    printf("Enter the Second Integers\n");
    scanf("%d\n", &num2);
    getchar();

    hcf = gcd(num1 , num2);

    lcm =  (num1*num2)/hcf ;

    printf("hcf : %d\tlcm : %d",hcf,lcm);


    return 0;
}