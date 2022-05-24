//    3. Write a C program to demonstrate double pointer. (Practice all double pointer programs covered in class ppt)


#include<stdio.h>

int main()
{
int i =23;		// Initializing the memory location "i" with value 23.

int *ptr = NULL;
int **ptr1 = NULL;	// Declaring "pointer variable *ptr" and "pointer to pointer variable **ptr".

ptr = &i;		// Assigning Address of variable i to *ptr.
ptr1 = &ptr;		// Assigning Address of *ptr to **ptr.

printf ("Value of i = %d\n",i);		
printf("Value of Single Pointer *ptr = %d\n",*ptr);		// Value at location address held by *ptr.
printf("Value of Double Pointer **ptr1 = %d\n",**ptr1);		// value at address location **ptr ---> *ptr-----> i=23
}
