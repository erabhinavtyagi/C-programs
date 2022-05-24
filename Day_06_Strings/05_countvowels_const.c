//Write a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string.

#include<stdio.h>
#include<ctype.h>

int
main ()
{
  char a[20];
  int vowel = 0, cons = 0, dig = 0, ch = 0, len = 0;

//--------Input via user-----------

  printf ("Enter a String:");
  fgets (a, 20, stdin);
  puts (a);

//--------- First change all string characters to lowercase or uppercase to avoid confusion among uppercase and lowercase letters.
  for (int i = 0; a[i] != '\0'; i++)
    {
      ch = a[i];
      a[i] = putchar (tolower (ch));
      len++;
    }

//---------Count till \0 all vowels, consonants, digits and other characters.
  for (int i = 0; a[i] != '\0'; i++)
    {
      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o'
	  || a[i] == 'u')
	{
	  ++vowel;
	}
      else if (a[i] > 'a' && a[i] <= 'z')
	{
	  ++cons;
	}
      else if (a[i] >= '0' && a[i] <= '9')
	{
	  ++dig;
	}
      else
	{
	  ch = len - (vowel + cons + dig);
	}
    }

//--------- Printing the values------------------
 
  printf ("Vowels : %d\n", vowel);
  printf ("Consonants : %d\n", cons);
  printf ("Digit : %d\n", dig);
  printf ("Remaining Characters: %d\n", ch);
  return 0;
}
