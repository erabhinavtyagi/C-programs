/*Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement. */

#include<stdio.h>

int
main ()
{
  int n, i, sum = 0;

  printf ("Enter any number: ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      if (i % 5 != 0)
	{
	  sum = sum + i;
	}
      else
	continue;
    }
  printf ("sum of all numbers till %d is %d.\n", n, sum);
  return 0;

}
