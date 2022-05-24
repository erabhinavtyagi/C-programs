//Find Greatest number from all Elements in 1D Array.

#include<stdio.h>

int
main ()
{
  int b, i, j, a[5];
//Taking input through user.
  printf ("Enter Array elements: ");
  for (j = 0; j < 5; j++)
    {
      scanf ("%d", &a[j]);
    }
//check the values of current and next element and saving greater of these in variable "b". 
  for (i = 0; i < 4; i++)
    {
      if (a[i + 1] > a[i])
	b = a[i + 1];
    }

  printf ("Greatest Number is %d.\n", b);
  return 0;
}
