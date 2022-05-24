/*    2. Write a C program to perform the following operations on two strings without using string library functions.
            ▪ Concatenate two strings
            ▪ Find the length of each string
            ▪ Compare two strings
            ▪ Copy string
            ▪ Reverse the string
 */

#include <stdio.h>

int len (char *);
void concat (char *, char *);
char copy (char *, char *);
int cmp (char *, char *);
char rev (char *);

int
main ()
{
  char str1[1000], str2[1000];
  int d;

  //Input by User
  printf ("Enter First String : ");
  scanf ("%[^\n]%*c", str1);
  printf ("Enter Second String : ");
  scanf ("%[^\n]%*c", str2);

  //Length of String
  printf ("\n\n01. Length of String1 is %d \t", len (str1));
  printf ("Length of String2 is %d \n", len (str2));

  // Concatenation of Strings.
  concat (str1, str2);
  printf ("02. Concatenated String is %s\n", str1);

  //String Comparision
  d = cmp (str1, str2);
  if (d == 0)
    {
      printf ("03. Given strings are same.\n");
    }
  else
    {
      printf ("03. Given strings are different.\n");
    }

  //String Reversing
  rev (str1);
  printf ("04. After Reversing the String 1: %s\n", str1);

  // Copy String2 to string1
  copy (str1, str2);
  printf ("05. After copying String2 to string1: %s\n\n", str1);

}

/*-------------------------FUNCTIONS----------------------------------*/

// FUNCTION 1:TO FIND LENGTH OF A STRING. I have used this function in other functions as well where length of string is to be find.
int
len (char *c)
{
  int i, len = 0;
  for (i = 0; c[i] != '\0'; i++)
    len++;
  return len;
}

// FUNCTION 2 : CONCATATENATION OF TWO STRINGS.
void
concat (char *c, char *d)
{
  int i, l;
  l = len (c);			//Calling length function to determine length of string.
  // Insert the second string in the first string
  for (i = 0; d[i] != '\0'; i++)
    {
      c[i + l] = d[i];
    }
  c[i + l] = '\0';
}

// FUNCTION 3 : COPY CONTENTS OF STR2 TO STR1.
char
copy (char *c, char *d)
{
  int i;
  for (i = 0; c[i] != '0'; i++)
    {
      c[i] = d[i];
    }
  c[i] = '\0';
}

// FUNCTION 4 : COMPARE BOTH STRINGS. 
int
cmp (char *c, char *d)
{
  int l1, l2, flag = 0;
  l1 = len (c);
  l2 = len (d);

  if (l1 != l2)		//if length of both strings are not same then obviously they are different.
    {
      return (1);
    }
  else
    {
      for (int i = 0; i < l1; i++)	//if length of both is same and any element in array c and array d differs then came out of loop.
	{
	  if (c[i] != d[i])
	    {
	      flag = 1;
	      break;
	    }
	}

      if (flag == 0)			// If Elements of both arrays are same then don't change the flag. And return 0 for true.
	{
	  return (0);
	}
      else
	{
	  return (1);
	}
    }
}

// FUNCTION 5: REVERSING STRING1.

char
rev (char *c)
{
  int i,l;
  l = len (c);
  char temp;
  for (i = 0; i < l / 2; i++)
    {
      temp = c[i];
      c[i] = c[l - i - 1];
      c[l - i - 1] = temp;
    }
}
