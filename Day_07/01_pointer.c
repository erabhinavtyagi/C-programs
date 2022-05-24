/*    1. Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float.
 *    Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.
*/

#include<stdio.h>

int main()
{
	int id;
	char name;
	float marks;
	double dub; 

//-------------Take Input from user-------------
	
	printf("Enter an Integer Value: ");
	scanf("%d",&id);
	
	printf("Enter a Float Value: ");
	scanf("%f",&marks);
	
	printf("Enter a Double Value: ");
	scanf("%lf",&dub);
	
	printf("Enter a Character Value: ");
	scanf("  %c",&name);			//space is given before %c because of bug in c. It will not take input if space is not given.
						// and will accept enter button as input.

//--------------Print address and values--------
	printf("\n");
	printf("\n Value of Character Name is %c and it's Address is %p.\n", name, &name);	
	printf("\n Value of Integer Id is %d and it's Address is %p.\n", id, &id);	
	printf("\n Value of Float Marks is %f and it's Address is %p.\n", marks, &marks);	
	printf("\n Value of Double Dub is %lf and it's Address is %p.\n", dub, &dub);	
}
