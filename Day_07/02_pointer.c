/*    2. Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable.
    Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.
*/

#include<stdio.h>

int main()
{
	int num, *ptr;

	printf("Enter Value of NUM: ");			// Input by user
	scanf("%d",&num);
	
	*ptr= num;					// Assigned Value of num to pointer variable

	printf("Value of num is %d\n", *ptr);		// Printing value of num through pointer.

}

