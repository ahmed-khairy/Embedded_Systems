#include<stdio.h>
#include "STD.h"
#include"SDBAPP.h"
#include"SDB.h"

uint32 id;	//variable for holding student id
uint8 *id_num, id_numbers;//pointer to the number of id's and the variable to store the number
uint32 id_list[max];	//array of id's with max
uint32 *id_list_ptr;	//pointer to the array of id's elements
void SDB_APP() {
	uint8 choise;	//variable to get the choise
	printf("\n------------------------------------------\n");
	printf(
			"\n* To add entry, enter\t\t\t\t: 1\
			\n* To get used size in database, enter \t\t: 2\
			\n* To read student data, enter \t\t\t: 3\
			\n* To get the list of all student IDs, enter\t: 4\
			\n* To check is ID is existed, enter\t\t: 5\
			\n* To delete student data, enter \t\t: 6\
			\n* To check is database is full, enter\t\t: 7\
			\n* To exit enter\t\t\t\t\t: 0\n");//printing the choises to the user
	printf("\n------------------------------------------\n");
	fflush(stdin);	//clearing the stdin buffer
	printf("\tYour choise\t\t\t\t--> ");
	if (scanf("%d", &choise)) {	//accepting choise from user
		switch (choise) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			SDB_action(choise);	//if the choise from 1 to 7 it will accept it
			break;
		case 0:		//if the choise 0 it will exit the super loop
			break;
		default:
			printf("\n Wrong choise!!!\n");//other wise it will show an error to user
			SDB_APP();	//return to the same function to repeat the process
		}
	} else {
		printf("\n Wrong choise!!!\n");//other wise it will show an error to user
		SDB_APP();	//return to the same function to repeat the process
	}
}

void SDB_action(uint8 choice) {
	switch (choice) {
	case 1:
		if (SDB_AddEntry())
			printf("\n New entry was added successfully\n");//calling function for adding new entry and print message if the entry was added
		else
			printf("\n Error adding new entry!!!\n");//giving error in case of failed of added
		SDB_APP();	//return to function to show choises again
		break;
	case 2:
		if (SDB_GetUsedSize())//calling function to get the used size of the database
			printf("\n Number of students in database is \t\t: %hhu\n",
					SDB_GetUsedSize());	//print the number of students in the database if the function executed successfully without any problems
		else
			printf("\n Database is empty!!!\n");
		SDB_APP();	//return to function to show choises again
		break;
	case 3:
		printf("\n Please enter student id\t\t\t: ");	//get id of student to read it's data
		if (scanf("%hhu", &id)) {
			if (SDB_ReadEntry(id))//if student was found on database return 1, otherwise return 0
				printf("\n Data was found\n");
			else
				printf("\n Data wasn't found!!!\n");
		} else
			printf("\nWrong student id!!!\n");
		SDB_APP();
		break;
	case 4:
		id_list_ptr = id_list;		//assign address of id list to pointer
		id_num = &id_numbers;		//assign address of id numbers to pointer
		SDB_GetList(id_num, id_list_ptr);	//call get list function
		SDB_APP();
		break;
	case 5:
		printf("\n Please enter student id: ");
		if (scanf("%hhu", &id)) {
			if (SDB_IsIdExist(id))
				printf("\n Data was found\n");
			else
				printf("\n Data wasn't found!!!\n");
		} else
			printf("\n Wrong student id!!!\n");
		SDB_APP();
		break;
	case 6:
		if (SDB_GetUsedSize() > min) {
			printf("\n Please enter student id: ");
			if (scanf("%hhu", &id))
				SDB_DeletEntry(id);
			else
				printf(" Wrong id!!!\n");
		} else
			printf(
					"\n Minimum students in Database shouldn't be less than 3 students\n");
		SDB_APP();
		break;
	case 7:
		if (SDB_ISFULL())
			printf("\n Database is full\n");
		else
			printf("\n Database isn't full\n");
		SDB_APP();
		break;
	}
}
