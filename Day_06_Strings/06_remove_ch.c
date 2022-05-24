//Write a C program to remove characters in a given string except alphabets.

#include<stdio.h>

int
main ()
{
  char a[1000];

// Get Input Via User
  printf ("Enter String: ");
  fgets (a, 1000, stdin);
  puts (a);

// Check for Ascii value of Alphabets i.e both uppercase and lowercase. If it matches with condition then print it, otherwise skip it. 
  for (int i = 0; a[i] != '\0'; i++)
    {
      if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
	{
	  printf ("%c", a[i]);
	}
      else
	continue;
    }
  printf ("\n");
}
