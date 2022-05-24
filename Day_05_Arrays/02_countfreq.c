// Count Frequency of an element in an Integer type 1D Array.

#include<stdio.h>

int
main ()
{
  int a[10], i, j, n, count = 0;
  printf ("Enter Array Elements: ");
//Input Array Elements through user.
  for (i = 0; i < 10; i++)
    {
      scanf ("%d", &a[i]);
    }
//Enter number whose frquency to check.
  printf ("Enter a number to find its frequency in Array.\n");
  scanf ("%d", &n);

  for (j = 0; j < 10; j++)
    {
      printf ("a[%d] : %d\n", j, a[j]);
      {
	if (a[j] == n)
	  count++; // Incremenent or count the frequency of the number.
      }
    }
  printf ("%d occured %d times in the array.\n", n, count);
}
