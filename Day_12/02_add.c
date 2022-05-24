/*    2. Write a program to perform addition of two int or char or float numbers.
    • If we need to do the addition of two integers then it should compile the code related to the addition of integers.
    • If we need to do the addition of two float then it should compile the code related to the addition of float numbers.
    • Use conditional compilation */



#include<stdio.h>

#define SUMFLOAT(a,b)(a+b)

int main()
{
	float a,b;
	int c,d;
#ifdef SUMFLOAT
	{
	printf("Enter two Float Values:\n");
	scanf("%f %f", &a,&b);
	printf("SUM of two Float numbers is %.2f\n", SUMFLOAT(a,b));
	}
#endif
#define SUMINT(c,d)(c+d)

#ifdef SUMINT
	{
//	int a,b;
	printf("Enter two Integer Values:\n");
	scanf("%d %d",&c,&d);
	printf("SUM of two integers is %d\n",SUMINT(c,d));
	}
#endif

return 0;
}
