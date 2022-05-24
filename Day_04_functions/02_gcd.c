// GCD of tWo numbers.

#include<stdio.h>
int gcd (int, int);

int
main ()
{
  int a, b, GCD;
  printf ("Enter two numbers : ");
  scanf ("%d %d", &a, &b);
  {
    GCD = gcd (a, b);
    printf ("GCD of %d and %d is %d.\n", a, b, GCD);
  }
}

int
gcd (int x, int y)
{
while (y != 0)  
    {  
        if ( x > y) /* if x is greater than y, the if block is executed. */  
        {  
            x = x - y;  
        }  
        else  
        {  
            y = y - x;  
        }  
    }  
    return x;  
}  
