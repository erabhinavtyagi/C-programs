//Value and Address of all Array Elements.

#include<stdio.h>

int
main ()
{
  int a[6] = { 10, 20, 30, 23, 12, 43 };
//print value and  address of elements with array index.
  for (int i = 0; i < 6; i++)
    {
      printf ("a[%d] = %d Address: %p\n", i, a[i], &a[i]);
    }
  return 0;
}
