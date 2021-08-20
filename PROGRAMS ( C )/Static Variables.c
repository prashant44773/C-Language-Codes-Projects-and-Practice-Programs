/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*
int RTN()
{
    return 45 ;
}                       */


//  int Num = 666;                      // It is a global variable since it is Defined outside the main function.


int
Func1 (int Num)
{

//  printf ("The Value of Variable inside function is %d\n", Num);


//  printf ("The Adress of Variable inside function is %d\n", &Num);

  static int MyVar = 5 /*RTN() */ ;	//  Static  Variable don't  Accept Fuctions,It Only Accepts constants and values as Integers......../ 

  printf ("The Value of Variable inside function is %d\n", MyVar);
  MyVar++;

  return Num * 100;

}


int
main ()
{
  int Num = 20;
  int Val;
  int *Pointer;

  Pointer = &Num;

//  printf ("The Value of Variable inside Main is %d\n", Func1 (Num));
//  printf ("The Adress of Variable inside function is %d\n", Pointer);

  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);
  Val = Func1 (Num);


  return 0;
}
