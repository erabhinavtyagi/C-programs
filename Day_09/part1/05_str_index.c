// 5. Write a C program with a function any (s1, s2). This function returns the first location (index of location) in the string s1 which
// matches with any string in s2 otherwise return NULL. Do not use string library functions (strstr).

#include<stdio.h>

int
main ()
{
  char str1[] = "abhinav", str2[] = "n";
  int i;
  char *ptr = NULL;
  ptr = str1;

  printf ("Entered strings are: %s and %s\n", str1, str2);

  for (i = 0; str1[i] != '\0'; i++)
    {
      if (*str2 == *(ptr + i))
	printf ("String 2 is found at index location str1[%d].\n", i);
    }
}
