//    4. Write a program to read ‘n’ number of strings using two-dimensional character array, sort them and display the sorted list of strings on the screen. (use strcmp and strcpy library functions) 

#include<stdio.h>
#include<string.h>

int
main ()
{

  int i;
  char str[5][10];		// 2D-Array stores "5" strings & each string have "10" characters 

//-----------INPUT FROM USER----------------------------        

  printf ("Enter Words which are to be arranged in Alphabetical Order: ");
  for (i = 0; i < 5; i++)
    {
      scanf ("%s", str[i]);
    }

  printf ("Entered Strings are: ");
  for (i = 0; i < 5; i++)
    {
      printf ("%s\t", str[i]);
    }
  printf ("\n");

//---------Sorting Process-------------------
  printf ("After Sorting: ");
  int j,k;
  char temp[10];
  for (i = 0; i < 5; i++)
    {
      for (j =i+1; j < 5; j++)
	{
	  k = strcasecmp (str[i], str[j]);		//Comparing the present string with next string by ignoring their cases.
	  if (k >0)
	    {
	      strcpy (temp, str[i]);			// swaping the strings using String copy function.
	      strcpy (str[i], str[j]);
	      strcpy (str[j], temp);
	    }
	}
	  printf ("%s\t", str[i]);			// Final sorted Output
    }
  printf ("\n");
    return 0;
}
