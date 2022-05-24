/*    3. Define a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.
*/

#include<stdio.h>

typedef struct complex_num
{				//Structure Prototype

  float real;			//structure member1
  float img;			//structure member2
} complx;			// Object created "complex"

int
main ()
{

  complx c1, c2, sum, diff;	// four instances created c1,c2,sum,diff.

//----------------------INPUT BY USER-------------------

  printf ("Enter value of First Complex Number: ");
  scanf ("%f %f", &c1.real, &c1.img);

  printf ("Enter value of Second Complex Number: ");
  scanf ("%f %f", &c2.real, &c2.img);

  printf ("Complex No.1 = %.2f +j %.2f\n", c1.real, c1.img);
  printf ("Complex No.2 = %.2f +j %.2f\n", c2.real, c2.img);

//----------------------Addition & Subtraction of input complex numbers-------------------
  sum.real = (c1.real) + (c2.real);
  sum.img = (c1.img) + (c2.img);
  diff.real = (c1.real) - (c2.real);
  diff.img = (c1.img) - (c2.img);

  printf ("Sum of Complex Numbers is %.2f +j %.2f \n", sum.real, sum.img);
  printf ("Difference of Complex Numbers is %.2f +j %.2f \n", diff.real,
	  diff.img);

  return 0;
}
