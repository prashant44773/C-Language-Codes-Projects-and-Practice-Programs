/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int var[8] = {4,7,5,9,6,1,3,2};
    
  //  These Three Functions Print OR Gives The Same Output :
    
      printf(" A.  the adress of var is %d\n",&var[0]);
    
      printf(" A.  the adress of var is %d\n",var);        
    
      printf(" A.  The value of arr is %d\n",var+1);        
    
    
    // these three functions print the same value with (*) function:
    
      printf(" B.  the adress of var is %d\n",*(&var[0]));
    
      printf(" B.  the adress of var is %d\n",*(var));        
    
    
    
      printf(" B.  The value of arr is %d",*(var+1));
    
    
    
    
    return 0;
}
