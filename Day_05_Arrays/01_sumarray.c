// Sum of all Array Elements.

#include<stdio.h>

int
main ()
{
  int a[6] = { 10, 20, 30, 23, 12, 43 }, sum = 0;

//adding all elements i.e a[0] to a[5]
  for (int i = 0; i < 6; i++)
    {
      printf ("a[%d] = %d\n", i, a[i]);
      sum = sum + a[i];
    }
//printing sum of all elements
  printf ("Sum of Array Elements : %d\n ", sum);
  return 0;
}
