//03. Write a program to demonstrate integer, float, character and string constants.


#include <stdio.h>
#define PI 3.14

int
main ()
{
  float area;
  const int radius = 10;
  const char newline = '\n';
  const char SHAPE[] = "circle";

  area = 2 * PI * radius;	// Constant value of PI is used.
  printf ("area of %s is: %.2f", SHAPE, area);	// Constant value of SHAPE is used.
  printf ("%c", newline);	// Constant value of newline is used.

  return 0;
}
