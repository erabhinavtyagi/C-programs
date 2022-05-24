//Lower case to Uppercase: Convert a string from Lower case to Uppercase using pointers. Write a separate function to do the conversion. 
//Do not use intrinsic functions. 

#include <stdio.h>

char upper (char *);
void
main ()
{
  char str[] = "what a wonderful day";
  printf("Before conversion: %s\n", str);
  
  upper (str);
  printf ("After Upper to Lowercase Conversion: %s\n", str);
}

char
upper (char *str)
{
  for (int i = 0; *(str + i) != '\0'; i++)	// *(str+i) is same as str[i] and can be used interchangebly.
    {
     if (*(str + i) >= 'a' && *(str + i) <= 'z')	// checked that input characters are in Range of Uppercase letters. 
	{
	  *(str + i) -= 32;	// Ascii value is increased by 32. As difference between Uppercase (A-Z) and lowecase(a-z) is of 32.
	}
    
     //If Condition is also used to skip Ascii value of "space" i.e 32 because it was making the value 'NULL' by doing -32. 

//      printf ("*(str+%d): %c\n", i, *(str + i)); // Print characters one by one.
    }
}
