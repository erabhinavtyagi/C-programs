/*    A  C program contains the following declaration 
int x[8]= {10,20,30,40,50,60,70,80}; 
What is the value of x? (and understand)
What is the value of (x+2)? (and understand)
What is the value of *x? 
What is the value of (*x+2)? 
What is the value of *(x+2)?.*/

#include <stdio.h>

int
main ()
{
  int x[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };
  int *ptr = x;			//Intializing pointer to array.

  printf ("Value of x is %p \n", ptr);
  printf ("Value of (x+2) is %p \n", ptr + 2);
  printf ("Value of *x is %d \n", *ptr);
  printf ("Value of (*x+2) is %d \n", (*ptr + 2));
  printf ("Value of *(x+2) is %d \n", *(ptr + 2));

}
