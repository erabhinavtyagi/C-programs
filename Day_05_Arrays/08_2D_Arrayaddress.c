//Write a C Program to display two-dimensional array elements with addresses.

#include<stdio.h>

int
main ()
{
  int a[3][2] = { 10, 20, 21, 23, 32, 12 };	//Row1 {10,20}, Row2{21,23}, Row3{32,12}
  int i, j;

//Printing all two values of each of three rows with their address and index.  
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 2; j++)
	{
	  printf ("a[%d][%d]: %d\t Address : %p\n", i, j, a[i][j], &a[i][j]);
	}
    }
  return 0;
}
