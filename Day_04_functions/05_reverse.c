//Reverse an integer number using Recursion

#include<stdio.h>

int rev (int);

int
main ()
{
  int n, r;
  printf ("Enter a number:");
  scanf ("%d", &n);

  r = rev (n);
  printf ("After Reversing: %d \n", r);
}

int rem, sum = 0;

int
rev (int num)
{
//      int rem,sum=0;
  if (num)
    {
      rem = num % 10;
      sum = sum * 10 + rem;
      rev (num / 10);
      printf ("rem = %d, sum= %d\n", rem, sum);
      //      printf("%d\n",rev(num/10));
    }
  else
    return sum;

  return sum;

}
