//Upper case to Lowercase: Convert a string from Upper case to Lowercase using pointers. Write a separate function to do the conversion. 
//Do not use intrinsic functions. 

#include <stdio.h>

char lower (char *);

void
main ()
{
  char str[] = "WHAT A WONDERFUL DAY";
  printf("Before conversion: %s\n", str);
  
  lower (str);
  printf ("After Upper to Lowercase Conversion: %s\n", str);
}

char
lower (char *str)
{
  for (int i = 0; *(str + i) != '\0'; i++)	// *(str+i) is same as str[i] and can be used interchangebly.
    {
     if (*(str + i) >= 'A' && *(str + i) <= 'Z')	// checked that input characters are in Range of Uppercase letters. 
	{
	  *(str + i) += 32;	// Ascii value is increased by 32. As difference between Uppercase (A-Z) and lowecase(a-z) is of 32.
	}
    
     //If Condition is also used to skip Ascii value of "space" i.e 32 because it was making the value'@' by doing +32. 

//      printf ("*(str+%d): %c\n", i, *(str + i)); // Print characters one by one.
    }
}
