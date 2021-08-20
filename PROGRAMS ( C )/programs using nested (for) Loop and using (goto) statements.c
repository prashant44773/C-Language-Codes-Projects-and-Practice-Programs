/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
int i,j,num;


for( j=0; j<8; j++ )
{
printf("%d\n",j);


for(i=0 ; i<8 ; i++ )
{
    printf("Enter a Number :-   OR Enter 0 To Exit\n");
    scanf("%d",&num);
    
    if( num==0 )
    {
      goto end ;
    }
    
}

}


end:
  return 0;
}
