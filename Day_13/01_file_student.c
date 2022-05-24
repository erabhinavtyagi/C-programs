// 1. Write a program to read the Roll No, name and marks of a student and store it in a text file.
//If the file already exists, add information to it.


#include<stdio.h>

int
main ()
{
  {
    FILE *fp;
    char name[10];
    int roll, marks;

    /* opening file for reading */
    fp = fopen ("student.txt", "a+");	//open or create the file and write the text from the end of pointer.

    if (fp == NULL)		// If file pointer not found or empty then show error.
      {
	perror ("Error opening file");
	return (-1);
      }
    else
      {					// Values to enter in file.
	printf ("Name of Student: ");
	scanf ("%s", name);
	printf ("Roll Number: ");
	scanf ("%d", &roll);
	printf ("Marks: ");
	scanf ("%d", &marks);
      }
      { 
	fprintf (fp, "%s %d %d \n", name, roll, marks);		// Values Appended in file.
      }



    fclose (fp); 	//File closed.

    return (0);
  }

}
