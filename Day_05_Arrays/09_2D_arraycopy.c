//Write a C program to copy the elements of one 2-D array to another 2-D array.


#include<stdio.h>

int
main ()
{
  int a[3][3], b[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

//Shifting array elements from Array b to Array a.
  for (int i = 0; i < 3; i++) 		//three rows
    {
      for (int j = 0; j < 3; j++)	//three coloumns	
	{
	  a[i][j] = b[i][j];
	  printf ("After copy: a[%d][%d]= %d\n", i, j, a[i][j]);
	}
    }
  return 0;
}
