/*     2. Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using
          pointers.
	  Hint: a[i] = *(a+i)
*/

#include<stdio.h>

int
main ()
{
  int a[5] = { 11, 43, 21, 46, 67 };
  int b[5];

  int *ptr1 = a;

  for (int i = 0; i < 5; i++)
    {
      //Printing Values & addresses of a[] through Pointer by incrementing indexes
      printf ("Value PTR[%d] : %d at Address: %p\n  ", i, *(ptr1 + i),
	      (ptr1 + i));
    }
  printf ("\n");

//Copying elements of a[] to b[] via ptr1.      
  for (int j = 0; j < 5; j++)
    {
      b[j] = *(ptr1 + j);
      printf ("After Copying Value of b[%d]: %d at Address : %p\n ", j, b[j],
	      &b[j]);
    }
}
