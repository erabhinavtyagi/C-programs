/*    2. Write a C program to perform the following operations on two strings without using string library functions.
            ▪ Concatenate two strings
            ▪ Find the length of each string
            ▪ Compare two strings
            ▪ Copy string
            ▪ Reverse the string
USE MAKEFILE FOR COMPILATION */

#include <stdio.h>

/*#include"03_len.c"
#include"03_concat.c"
#include"03_copy.c"
#include"03_compare.c"
#include"03_rev.c"
*/

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
