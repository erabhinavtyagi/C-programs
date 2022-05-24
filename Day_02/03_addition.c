/*Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.( a+=b is same as a=a+b)*/

#include<stdio.h>
int
main ()
{
  int a, b, c, d;
  printf ("Enter the Value of A= ");
  scanf ("%d", &a);
  printf ("Enter the Value of B= ");
  scanf ("%d", &b);
  c = a + b;
  d = (a += b);
  printf ("Sum of a+=b is %d \n ", c);
  printf ("Sum of a=a+b is %d \n ", d);
  return 0;
}
