

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

//Calculate size of structure
#define SIZE_STRUCTURE(x) sizeof(x)

//Size of the student name
#define NAME_SIZE    40

//Size of the address
#define ADDRESS_SIZE  80


//structure template
typedef struct
{
	int age;
	int roll_number;
	char *name;
	char *address;

}sStudentInfo;


//To clear input buffer
void ClearNewLines(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

//Function to write information into the structure
sStudentInfo* writeStudentInfo(void)
{
	sStudentInfo *writeInfo = NULL; //declare pointer to structure

	int studentAge = 0; //declare var to store student age

	int studentRollNumber = 0; //declare var to store student roll number

	char studentName[NAME_SIZE] = { 0 }; //declare array to store student name

	char studentAddress[ADDRESS_SIZE] = { 0 }; //declare array to store student Address


	writeInfo = malloc(SIZE_STRUCTURE(sStudentInfo));//Allocate memory for structure pointer
	if (writeInfo == NULL)
		return NULL;

	printf("Enter the Age: "); //Enter Age of the student
	scanf("%d", &studentAge);

	ClearNewLines(); //Clear new Line

	writeInfo->age = studentAge; // Write age


	printf("\nEnter the roll number: ");//Enter roll number of the student
	scanf("%d", &studentRollNumber);

	ClearNewLines(); //Clear new Line

	writeInfo->roll_number = studentRollNumber;



	printf("\nEnter the name: ");//Enter name of the student
	fgets(studentName, NAME_SIZE, stdin);


	writeInfo->name = malloc(NAME_SIZE);
	if (writeInfo->name == NULL)
		return NULL;

	strncpy(writeInfo->name, studentName, NAME_SIZE);


	printf("\nEnter the address: "); //Enter addressof the student
	fgets(studentAddress, ADDRESS_SIZE, stdin);


	writeInfo->address = malloc(ADDRESS_SIZE);
	if (writeInfo->address == NULL)
		return NULL;

	strncpy(writeInfo->address, studentAddress, ADDRESS_SIZE);


	return writeInfo;
}

//Main function
int main()
{
	sStudentInfo *pTomInfo = NULL;

	pTomInfo = writeStudentInfo();
	if (pTomInfo == NULL)
	{
		printf("Fail to write student info\n");
		return 0;
	}

	printf("\n\n\n\n\n\n<!****  Read Information of student  ****!>\n\n\n\n\n\n");

	printf("Age: %d\n", pTomInfo->age); //Print Age of the student

	printf("Roll number: %d\n", pTomInfo->roll_number);//Print roll number of the student

	printf("Name: %s\n", pTomInfo->name);//Print name of the student

	printf("Address: %s\n", pTomInfo->address);//Print address of the student

	free(pTomInfo->name); //free allocated memory for name
	pTomInfo->name = NULL; //Avoid to make dangling pointer

	free(pTomInfo->address); //free allocated memory for address
	pTomInfo->address = NULL; //Avoid to make dangling pointer

	free(pTomInfo); //free allocated memory for structure
	pTomInfo = NULL; //Avoid to make dangling pointer

	return 0;
}


