//Write a program in C to store "n" elements(read from standard input) in an array and print the elements using pointer.

#include<stdio.h>

int
main ()
{
  int size, a[size];

  printf ("Enter the size of Array:");
  scanf ("%d", &size);

//----------Input Value of Array From User as per the size declared by user---------------
  printf ("Enter Values of Array: ");
  for (int i = 0; i < size; i++)
    {
      scanf ("%d", &a[i]);
    }

//----------Assigning pointer to array.------------------------

  int *ptr = a;

//------------Output-------------
  for (int j = 0; j < size; j++)
    {
      printf ("a[%d] : %d\n", j, *(ptr + j));
    }
}
