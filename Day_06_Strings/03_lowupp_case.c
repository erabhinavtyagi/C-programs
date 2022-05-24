//Write a program to convert lower case string to upper case string and vice versa. 

#include<stdio.h>

char upper (char *);
char lower (char *);

int
main ()
{
  char a[100];

//---------- Getting Input through User.------------------

  printf ("Enter a String value:");
  fgets (a, 100, stdin);

//---------- Calling functions and printing their output------------
  upper (a); 
  printf ("\nConversion to upper string : %s \n", a);

  lower (a);
  printf ("Conversion to lower string: %s \n", a);
}

//---------- Function Upper: To convert lowercase to uppercase--------- 
char
upper (char *b)
{
  for (int i = 0; b[i] != '\0'; i++)
    {
      if (b[i] >= 'a' && b[i] <= 'z')
	b[i] = b[i] - 32;			// changing to Uppercase letters by changing Ascii value
    }
  return b;
}

//--------- Function Lower: To convert uppercase to lowercase----------
char
lower (char *b)
{
  for (int i = 0; b[i] != '\0'; i++)
    {
      if (b[i] >= 'A' && b[i] <= 'Z')		// changing to lowercase letters by changing Ascii values
	b[i] = b[i] + 32;
    }
  return b;
}
