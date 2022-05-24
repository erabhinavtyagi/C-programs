//SWAP FUNCTION

#include<stdio.h>

void swap (int *, int *);	//Function Declaration

void
main ()
{
  int a = 10, b = 20;

  printf ("Before Swapping: a= %d b= %d\n", a, b);
  swap (&a, &b);
  printf ("After Swapping: a= %d b= %d\n", a, b);
}

void
swap (int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  printf ("IN FUNCTION VALUE OF temp= %d\t, x= %d\t, y= %d\n", temp, *x, *y);
}
