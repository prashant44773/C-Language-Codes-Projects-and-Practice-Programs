#include <stdio.h>
#include <conio.h>

int main()
{
  int x,y,z ;  // As per Matrix Multiplication rule Condition : (THe column of first matrix should br equal to the row of second matrix)

  printf("\nEnter the Number of Rows and Colums \n");

  printf("Enter no. of Rows for First Matrix\n");
  scanf("%d",&x);
  getchar();

  printf("Enter no. of Coloums for First Matrix\n");
  scanf("%d",&y);
  getchar();

  printf("Enter no. of Coloums for Second Matrix\n");
  scanf("%d",&z);
  getchar();



  int a[x][y], b[y][z], R[x][z]; // Here a & b are matrix ,, and  R is their Resultant.
  int Sum;

  // To Take Input for Matrix a :

  printf("Enter the Input for Matrix a\n\n");

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      printf("Enter the a[%d][%d]th Matrix\n", i, j);
      scanf("%d", &a[i][j]);
      //   getchar();
    }
  }

  // To Take Input for Matrix b :

  printf("Enter the Input for Matrix b\n\n");

  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < z; j++)
    {
      printf("Enter the a[%d][%d]th Matrix\n", i, j);
      scanf("%d", &b[i][j]);
      //   getchar();
    }
  }

  // Calculating The Resultant(R)  for Matrix a & b  :

  printf("The Resultant  Matrix of a & b\n\n");

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < z; j++)
    {

      for (int k = 0; k < y; k++)
      {

        Sum += a[i][k] * b[k][j];
        //   Sum = 0;
      }

      R[i][j] = Sum;
    }
  }

  // Printing the Resultant Matrix of a &  b :

 // printf("Printing the Resultant for Matrix a & b\n\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {

      printf("%d\n", R[i][j]);
    }
  }

  return 0;
}
