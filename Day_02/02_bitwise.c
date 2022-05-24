//Write a program to demonstrate bitwise operators.

#include<stdio.h>
int
main ()
{
  int a = 10, b = 20;
  printf ("Bitwise OR = %d \n", a | b);
  printf ("Bitwise AND = %d \n", a & b);
  printf ("Bitwise XOR = %d \n", a ^ b);
  printf ("Shift-Right A=  0000 1010 to 4 = %d \n", a >> 4);
  printf ("Shift-Left A=   0000 1010 to 4 = %d \n", a << 4);
  printf ("Invert A = 0000 1010 = %d \n", ~a);
  return 0;
}
