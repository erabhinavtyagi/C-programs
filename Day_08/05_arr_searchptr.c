//C program to search element in array (1-D)using pointers

#include<stdio.h>

int
main ()
{
  int a[10] = { 12, 32, 43, 65, 34, 14, 89, 36, 76, 54 };

  int *ptr = a;			// Assign ptr to array

  for (int i = 0; i < 10; i++)
    {
      if (*(ptr + i) == 34)
	printf ("34 is found at location a[%d] Address: %p \n", i, ptr + i);
    }

}
