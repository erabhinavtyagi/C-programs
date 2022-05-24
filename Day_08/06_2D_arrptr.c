//Write a C program to print all elements of two dimensional array using pointers.


#include<stdio.h>

int
main ()
{
  int a[2][3] = { {10, 20, 30},
  {40, 50, 60}
  };


  for (int i = 0; i < 2; i++)	// Loop for 2 rows i= 0 to 1
    {
      for (int j = 0; j < 3; j++)	//Loop for 3 columns j = 0 to 2
	{
	  printf ("a[%d][%d] = %d \n", i, j, *(*(a + i) + j));
	  // *(a+i) is base address of row & *(*(a+i)+j) is value of corresponding element in that row.
	}
    }

}
