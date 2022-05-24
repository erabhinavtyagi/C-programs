//01. Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.

#include <stdio.h>
#include<stdlib.h>
int
main (int argc, char *argv[])
{
  int i, min, max;
  int arr[10];
  printf ("Program name is %s\n", argv[0]);
  printf ("argument count is %d\n", argc);

  for (i = 1; i < argc; i++)
    {
      printf ("argument %d  supplied is %s\n", i, argv[i]);
      arr[i] = atoi (argv[i]);
    }

//-------------Find Greatest Integer--------
  max = arr[1];

  for (i = 1; i < argc; i++)
    {
      if (max < arr[i])
	max = arr[i];
    }
  printf ("%d is greatest integer.\n", max);

//------------Find Smallest Integer---------
  min = arr[1];
  for (i = 1; i < argc; i++)
    {
      if (min > arr[i])
	min = arr[i];
    }

  printf ("%d is smallest integer.\n", min);
}


// TAKE OUTPUT AS : ./filename arg1 arg2 arg3 arg4 ..... so on and press enter.
// For eg. : ./file1 10 21 73 42 59
