//Write a program to read the Roll No, name and marks of a student and store it in to a binary file and read student records. 
//and print on standard output (use fwrite and fread library functions).

#include <stdio.h>

struct student
{
   char name[10];
   int roll;
   int marks;
};

int main(){
    struct student stud1[5], stud2[5]; 		// Two records are formed.  
    FILE *fptr;
    int i;

    fptr = fopen("file.txt","wb");		// file.txt is opened in binary write mode
    for(i = 0; i < 5; ++i)
    {
        fflush(stdin);
        printf("Enter Name: ");
        scanf("%s",stud1[i].name);

        printf("Enter Roll_number: "); 
        scanf("%d", &stud1[i].roll);
	
	printf("Enter Marks: ");
	scanf("%d", &stud1[i].marks);

    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);
    
    printf("\n\n");
    fptr = fopen("file.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < 5; ++i)
    {
        printf("Name: %s\nRoll NUmber: %d\nMarks: %d\n", stud2[i].name, stud2[i].roll, stud2[i].marks);
    }
    fclose(fptr);
}
