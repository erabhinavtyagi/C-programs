// 01. Write a program to find the volume of a sphere using macros. Pass the radius as the argument to the macro.

#include<stdio.h>

#define PI 3.14					// Value of Pi is defined
#define SPHERE(r) ((4.0/3)* PI *r*r*r)		// Macro of Sphere function is defined. Type Casting is also done to convert it into float.

int main()
{
printf("Volume of Sphere with radius 3 is : %.2f\n",SPHERE(3));
}
