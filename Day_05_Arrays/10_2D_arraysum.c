// Write a C program to sum two 2-D matrices.


#include<stdio.h>

int
main ()
{
  int sum[3][3],
    a[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 },
    b[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

  
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  sum[i][j] = a[i][j] + b[i][j]; 	//Adding array "a" & "b" and saving the sum in Array "sum". 
	  printf ("After Addition: Sum[%d][%d] = %d\n", i, j, sum[i][j]);
	}
    }
  return 0;
}
