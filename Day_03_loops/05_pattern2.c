/*    5. Write a C program to display the pattern like right angle triangle as shown pattern below.

1
22
333
4444
*/

#include<stdio.h>

int
main ()
{
  int i, j, n = 4;

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%d", i);
	}
      printf ("\n");
    }
}
