//    5. Write a C program to demonstrate functionality of the fseek library function. (Use SEEK_SET, SEEK_CUR, SEEK_END. )


#include <stdio.h>
       
int
main ()
{

  FILE *fptr;
  fptr = fopen ("wordcount.txt", "r");
  
  fseek (fptr, 0, SEEK_END);			//Using the fseek function to move the file pointer to the end

  printf ("Position of file pointer is : ");	//Print the position of file pointer
  printf ("%ld \n", ftell (fptr));

  fseek (fptr, 20, SEEK_SET);			// Move the file position 20 characters ahead
  int ch;

// printing the resulting file
  printf ("Remaining Text after the 20 characters in a file is:\n ");
  while ((ch = fgetc (fptr)) != EOF)
  putchar (ch);

  return 0;
}
