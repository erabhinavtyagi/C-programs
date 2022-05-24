/* Develop a C program to calculate simple interest using the formula I=PTR/100.*/


#include <stdio.h>

int
main ()
{
  float p, r, t, si;

  printf ("Principle: ");
  scanf ("%f", &p);

  printf ("Rate of Interest: ");
  scanf ("%f", &r);

  printf ("Time: ");
  scanf ("%f", &t);

  si = (p * r * t) / 100;
  printf ("Simple Interest is %.2f \n", si);

  return 0;

}
