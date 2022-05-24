//9.Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int
main ()
{
  char *ptr, a[] = "What a Wonderful Day!";
  int l, i, vowels = 0, cons = 0, other = 0;

  l = strlen (a);		//Length of String

  for (i = 0; i < l; i++)	// Uppercase to lowercase---- to check only lowercase string.   
    {
      a[i] = tolower (a[i]);
    }

  ptr = a;			// Pointer assigned to array 

  printf ("String is: %s\n", ptr);

  for (i = 0; i < l; i++)	//checking for vowels, consonants and other characters and incrementing the count value.
    {
      if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i'
	  || *(ptr + i) == 'o' || *(ptr + i) == 'u')
	{
	  vowels++;
	}

      else if (a[i] > 'a' && a[i] <= 'z')
	{
	  cons++;
	}
      else
	other++;
    }
//.....................Printing Output----------------
  printf ("Vowels = %d\n", vowels);
  printf ("Consonants = %d\n", cons);
  printf ("Special characters = %d\n", other);
}
