/*Write a program to print out all rotations of a string typed in. 
 For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.*/

#include<stdio.h>

int
main ()
{
  char str[10], temp;
  int i, j, l = 0;

//-------Input via user----------------
  
  printf ("Enter a String to rotate: ");
  gets(str);
  puts(str);

//--------Length of String---------------   
  for (i = 0; str[i] != '\0'; i++)
    {
      l++;
    }
  printf ("string length is %d\n", l);

//----------Rotation--------------------  
  for (j = 0; j < l; j++)
    {
      temp = str[0];

      for (i = 0; i < l; i++)
	{
	  str[i] = str[i + 1];
	}

      str[l - 1] = temp;

      printf ("%s\t", str);
    }

  printf ("\n");
  return 0;
}
