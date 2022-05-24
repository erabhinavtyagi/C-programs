/*Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. Initialize union/structures members and print.*/


#include<stdio.h>

struct employee
{
 int id;
 char name[20];
};

union student
{
 int id;
 char name[20];
};

void main()
{
	struct employee emp;
	union student std;

	printf("Size of Structure is %ld bytes\n", sizeof(emp));
	printf("Size of Union is %ld bytes\n", sizeof(std));
	

}
