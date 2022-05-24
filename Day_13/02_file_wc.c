/*    2. Write a menu driven C program to implement “wc” (i.e NO. of lines, No. of characters and No. of words in given text file) utility of Linux.  
    Take file as an input and print the following:
    a) Number of characters
    b) Number of lines
    c) Number of words */

#include<stdio.h>

int
main ()
{
  int ch_count = 0, line_count = 0, word_count = 0, choice;
  char ch;

  FILE *fp;

  fp = fopen ("wordcount.txt", "r");	//make a seperate file "wordcount.txt" and Read the Test content from it.

  if (fp == NULL)		// Show error if previous step is not done i.e wordcount.txt file is not made.
    {
      perror ("FILE NOT FOUND.");
      return (-1);
    }
  else				// If file is opened properly then ask for NO. of counts.
    {
      printf ("Select the Following Option-------\n"
	      "1 - Number of Characters\n"
	      "2 - Number of Words\n" 
	      "3 - Number of Lines\n");
      scanf ("%d", &choice);
    }

    {
      switch (choice)		// switch to desired case as per choice of user.
	{
	case 1:		// CASE 1 - To count the characters in the file.
	  {
	    while ((ch = fgetc (fp)) && ch != EOF)

	      if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		ch_count++;
	  }
	  printf ("Number of Characters : %d\n", ch_count);
	  break;

	case 2:		// CASE 2: To count total number of words
	  while ((ch = fgetc (fp)) && ch != EOF)

	    if ((ch == ' ') || (ch == '\t') || (ch == '\n') || (ch == '\0'))
	      {
		word_count++;
	      }
	  printf ("Numbers of Words : %d\n", word_count);
	  break;

	case 3:		// CASE 3: To count total number of lines
	  while ((ch = fgetc (fp)) && ch != EOF)

	    if ((ch == '\n') || (ch == '\0'))
	      {
		line_count++;
	      }
	  printf ("Numbers of lines : %d\n", line_count);
	  break;
	}			//switch closed
    }
  fclose (fp);			//file closed
  return 0;
}
