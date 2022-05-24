//8. Write a C program to find reverse of a string using pointers.

#include<stdio.h>

int len (char *);
char *rev (char *);

void
main ()
{
  char str[] = "what a wonderful day!";

  printf ("Before Reversing: %s \n", str);

  //rev(str);     
  printf ("\nIn Main After Reversing: %s \n", rev (str));
}

//-------Count length of string--------- 
int
len (char *str)
{
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++)
    {
      len++;
    }
  return len;
}

//--------Reversing the string--------
char *
rev (char *str)
{
  int i = 0, j, l = 0;

  l = len (str);		// length = length of string i.e 21   "What_a_wonderful_day!" 
  printf ("length IN FUNCTION : %d. \n", l);

  j = l - 1;			// Last index value assigned to j.

  while (i < j)
    {
      char temp = str[i];	// swapping the values through temp.
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
    }
  printf ("In Function := %s \n", str);
  return str;
}
