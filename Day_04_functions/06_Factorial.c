// Factorial of a number using recursion.


#include<stdio.h>

int fact (int);

int
main ()
{
  int num, f;
  printf ("Enter a number to find Factorial: ");
  scanf ("%d", &num);

  f = fact (num);
  printf ("Factorial for %d is %d.\n", num, f);

}

int
fact (int n)
{
  int prod = 1;

  if (n == 0)
    return 1;
  else
    prod = n * fact (n - 1);
  return prod;

}
