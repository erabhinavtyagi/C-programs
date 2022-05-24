/*Write a program to find whether given number is palindrome or not. */

#include<stdio.h>

int
main ()
{
  int num, i, pal = 0, temp;

  printf ("Enter a Number: ");
  scanf ("%d", &num);

  temp = num;

  while (num > 0)
    {
      i = num % 10;
      printf ("Ist= %d \t", i);

      pal = pal * 10 + i;
      printf ("IInd= %d \t", pal);

      num = num / 10;
      printf ("IIIrd = %d \n", num);;
    }

  if (pal == temp)
    {
      printf ("%d is a Palindrome.\n", temp);
    }
  else
    {
      printf ("%d is not a Palindrome.\n", temp);
    }

}
