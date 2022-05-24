//    1. Write a program to perform the swap operation. Write a swap function and use call by reference.


#include<stdio.h>

int swap (int *, int *);
void
main ()
{
  int a, b;

  //------Input by user------------ 
  printf ("Enter two numbers: ");
  scanf ("%d %d", &a, &b);

  //------Swapping Operation
  printf ("Before Swapping: a= %d\t b=%d\n", a, b);

  swap (&a, &b);
  printf ("After Swapping: a= %d\t b=%d\n", a, b);
}

//------SWAP FUNCTION----------
int
swap (int *c, int *d)
{
  int temp;
  temp = *c;
  *c = *d;
  *d = temp;

  printf ("IN FUNCTION : a= %d\t b = %d\n", *c, *d);
}
