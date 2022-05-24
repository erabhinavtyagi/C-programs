//Write a C Program to display three-dimensional array elements with addresses.

//a[i][j][k] : i---> Number of Rows   
//	       j---> Number of column
//	       k---> Number of Elements in each column 

#include<stdio.h>
int
main ()
{
  int i, j, k;
  int a[3][4][5] = {
    {{1, 2, 3, 4, 5}, {5, 6, 7, 8, 45}, {9, 10, 11, 12, 23},
     {12, 13, 23, 34, 45}},
    {{13, 14, 15, 16, 56}, {17, 18, 19, 76, 20}, {21, 22, 34, 23, 24},
     {12, 43, 45, 65, 34}},
    {{11, 12, 13, 14, 15}, {15, 16, 17, 18, 45}, {19, 10, 11, 12, 23},
     {12, 13, 23, 34, 45}}
  };
  for (i = 0; i < 3; i++)			// Number of rows
    {
      for (j = 0; j < 4; j++)			// Number of columns
	{
	  for (k = 0; k < 5; k++)		// number of elements in each column
	    {
	      printf ("a[%d][%d][%d]: %d\t Address: %p \n", i, j, k,
		      a[i][j][k], &a[i][j][k]); 
	    }
	}
      printf ("\n");
    }
  return 0;
}
