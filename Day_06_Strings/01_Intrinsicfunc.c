/* Write a C program to perform the following operations on two strings using intrinsic functions.
    • Concatenate two strings
    • Find the length of each string
    • Compare two strings
    • Copy string
    • Find whether string1 is the subset of the second string or not(strstr)*/

#include<stdio.h>
#include<string.h>

int
main ()
{
  char a[50], b[50], c[50];
  char *p;

//.........Get Input via user

  printf ("Enter First String: ");
//      fgets(a,50,stdin);
  scanf ("%[^\n]%*c", a);			

  printf ("Enter Second String: ");
//      fgets(b,50,stdin);
  scanf ("%[^\n]%*c", b);

  printf ("STRING 1: %s\n", a);
  printf ("STRING 2: %s\n", b);

//---------- OUTPUT-------------------- 
  strcat (c, a);	// Using Concatenating function to copy elements from Array 'a' to Array 'c'. To Save a same copy in array 'a'as well.
  p = strstr (a, b);	// Calling subset function and saving the integer value in variable p.

  {
    printf ("Length of %s & %s : %ld and %ld \n", a, b, strlen (a),	//string length
	    strlen (b));

    printf ("Comparision %s & %s : %d \n", a, b, strcmp (a, b));	//string compare

    printf ("COPY STRING : %s \n", strcpy (a, b));			//string copy

    printf ("Concatenated String is %s. \n", strcat (c, b));		//string concatenate

// Prints the Subset result.
    if (p)
      {
	printf ("String found\n");
	printf ("First occurrence of string '%s' in '%s' is '%s'", b, a, p);
      }
    else
      printf ("String not found\n");

  }

  return 0;
}
