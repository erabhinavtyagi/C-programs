// 2. Write a program to read (from standard input) the Roll No, name and marks of a student and store it in a text file
// (Note: Provide text file name through command line).
//If the file already exists, add information to it.


#include<stdio.h>

int
main (int argc, char *argv[])
//int main()
{
  FILE *fp = NULL;
  fp = fopen (argv[1], "a+");

//FILE *fp = fopen("student.txt","a+");
  int roll, marks;
  char name[10];
  char c;

  if (fp == NULL)
    {
      perror ("FILE NOT FOUND.\n");
      return (-1);
    }
  else
    {
      printf ("Enter Name: ");
      scanf ("%s", name);
      printf ("Enter Roll No: ");
      scanf ("%d", &roll);
      printf ("Enter Marks: ");
      scanf ("%d", &marks);
    }

  fprintf (fp, "%s %d %d\n", name, roll, marks);

  fclose (fp);
  return 0;
}
