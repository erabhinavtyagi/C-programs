// Remove Duplicate Elements in the Integer Array.


#include<stdio.h>

int
main ()
{
  int a[10], i, j, dup;

  printf ("Enter Elements of Array: ");

  for (i = 0; i < 10; i++)	//INPUT ELEMENTS
    {
      scanf ("%d", &a[i]);
    }

  for (j = 0; j < 10; j++)	//PRINT ELEMENTS
    {
      printf ("a[%d] : %d\n", j, a[j]);
    }

  printf ("AFTER REMOVING DUPLICATE VALUES.\n");
  for (j = 0; j < 10; j++)
    {
      if (a[j] == a[j + 1])	//if current and next element is same then skip to the next element in array.
	{
	  continue;
	}
      printf ("a[%d]: %d\n", j, a[j]); // Print all values remaining after removing Duplicate Elements.
    }

}
