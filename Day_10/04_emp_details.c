/*     4. Write a program to read and print an Employee’s details using Structure.
Use array of structures and pointer to the array of structures concepts. */

#include<stdio.h>

#define N 3			// N = No. of employee record

struct employee
{
  int id;
  char name[20];
  char dept[10];
  int salary;
} emp[N];			// N no. of objects are created.

void get_detail (struct employee *);
void print_detail (struct employee *);

int
main ()
{
  get_detail (emp);		// Function called for getting employee details.
  print_detail (emp);		// printing details using function

  return 0;
}

//-------------------FUNCTION TO GET THE DETAILS OF EMPLOYEE FROM USER------------------

void
get_detail (struct employee *ptr)
{
  for (int i = 1; i <= N; i++)
    {
      printf ("Enter Detail of Employee[%d] : \n", i);

      printf ("Enter Id : ");
      scanf ("%d", &ptr->id);

      printf ("Enter Name : ");
      scanf ("%s", ptr->name);

      printf ("Enter Department : ");
      scanf ("%s", ptr->dept);

      printf ("Enter Salary : ");
      scanf ("%d", &ptr->salary);

      ptr++;			//increment the pointer when first record is written.
      printf ("\n");
    }
  printf ("\n\n");
}

//-----------------FUNCTION TO PRINT DETAILS OF THE EMPLOYEE-----------------------------

void
print_detail (struct employee *ptr)
{
  for (int i = 1; i <= N; i++)
    {
      printf ("DETAIL OF EMPLOYEE[%d] :\n\n", i);
      printf ("NAME: %s\n", ptr->name);
      printf ("ID: %d\n", ptr->id);
      printf ("DEPARTMENT: %s\n", ptr->dept);
      printf ("SALARY: %d\n", ptr->salary);

      ptr++;			//Pointer is incremented to write next record.  
      printf ("\n");
    }
  printf ("\n");
}
