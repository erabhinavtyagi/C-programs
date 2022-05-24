/* C program contains the following declarations and initial assignments: 

int  i= 8, j = 5; 
float  x = 0.005,  y = 0.01; 
char c = ‘c’, d = ‘d’; 
Determine the value of each of the following expressions. 
    • (3*i*j)%(2*d) 
    • (i*j)%(c+2*d) / (x*y) 
    • 5 * (i + j) > 'c' 
    • 2*x+ (y== 0) 
    • (x > y) && (i > 0) || (j < 5)*/



#include<stdio.h>

int
main ()
{
  int i = 8, j = 5;
  float x = 0.005, y = 0.01;
  char c = 'c', d = 'd';
  printf ("Ascii value of 'c': %d \n", c);
  printf ("Ascii value of 'd': %d \n", d);
  printf ("Expression 1: %d \n", (3 * i * j) % (2 * d));
  printf ("Expression 2: %.2f \n", (i * j) % (c + 2 * d) / (x * y));
  printf ("Expression 3: %d \n", (5 * (i + j) > 'c'));
  printf ("Expression 4: %.2f \n", (2 * x + (y == 0)));
  printf ("Expression 5: %d \n", (x > y) && (i > 0) || (j < 5));

  return 0;
}
