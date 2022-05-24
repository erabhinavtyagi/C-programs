//Write a C program to print the transpose and inverse matrices of a given matrix.

#include<stdio.h>

int
main ()
{
  int i, j, a[3][3], b[3][3],trans[3][3];
  float c[3][3],inv[3][3],det;

//--------------Input by user----------
  printf ("Enter elements of 3x3 matrix:\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("a[%d][%d]: ", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }
//-------------Transpose of Matrix--------------
  printf ("\n1. Transpose of Given Matrix.\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  trans[i][j] = a[j][i];
	  printf ("\t %d", trans[i][j]);
	}

      printf ("\n");
    }
  printf ("\n");

//-------------Determinant of Matrix---------

  det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))
    - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])))
    + (a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));

  printf ("2. Determinent of the matrix is %.2f\n\n", det);

//-----------Adjoint of Matrix (i.e cofactors and transpose of matrix a)---------------
//....Cofactors....

  b[0][0] = (a[1][1] * a[2][2] - a[2][1] * a[1][2]);

  b[0][1] = (a[1][2] * a[2][0] - a[1][0] * a[2][2]);

  b[0][2] = (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

  b[1][0] = (a[2][1] * a[0][2] - a[0][1] * a[2][2]);

  b[1][1] = (a[0][0] * a[2][2] - a[2][0] * a[0][2]);

  b[1][2] = (a[2][0] * a[0][1] - a[0][0] * a[2][1]);

  b[2][0] = (a[0][1] * a[1][2] - a[1][1] * a[0][2]);

  b[2][1] = (a[1][0] * a[0][2] - a[0][0] * a[1][2]);

  b[2][2] = (a[0][0] * a[1][1] - a[1][0] * a[0][1]);

//----------Printing Adjoint after saving cofactors in c[] and taking transpose of it.
  printf ("3. Adjoint of Matrix a[] is :\n");

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  c[i][j] = b[j][i];
	  printf ("\t%.2f", c[i][j]);
	}
      printf ("\n");
    }
  printf ("\n");

//------------INVERSE OF MATRIX a[]--------------       
  printf ("4.INVERSE OF MATRIX a[] is: \n ");
  printf("Determinant : %.2f\n",det); 
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  inv[i][j] =(c[i][j])/det;
	  printf("\t%.2f", inv[i][j]);
	}
      printf ("\n");
    }
  printf ("\n");

  return 0;
}
