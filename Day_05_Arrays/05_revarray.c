// Reversing the Elements of 1D array.

#include<stdio.h>

int
main ()
{
  int a[5], x[5], i, j;

  printf ("Enter Elements of Array:");

  for (i = 0; i < 5; i++)	// Take Input from user
    {
      scanf ("%d", &a[i]);
    }

  printf ("After Reversing the Elements of Array.\n");

  for (j = 0; j < 5; j++)	//Saving data of last index of a[i] into first index of another array x. 
    {
      x[j] = a[i - 1];
      printf ("a[%d] : %d \n", j, x[j]);
      i--;
    }

  return 0;
}
