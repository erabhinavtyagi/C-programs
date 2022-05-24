// Sorting the Elements of 1D array.

#include<stdio.h>

int
main ()
{
  int a[5], i, j, temp;

  printf ("Enter Elements of Array:");

  for (i = 0; i < 5; i++)	// Take Input from user
    {
      scanf ("%d", &a[i]);
    }

  printf ("After Sorting the Elements of Array.\n");

  for (i = 0; i < 5; ++i)	
    {
      for (j = i + 1; j < 5; ++j)
	{
	  if (a[i] > a[j])	// shifting greater value from a[i] to a[j] via temporary variable.
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
    }

  for (i = 0; i < 5; ++i)	// Printing all sorted values.	
    {
      printf ("a[%d] : %d\n", i, a[i]);
    }
  return 0;
}
