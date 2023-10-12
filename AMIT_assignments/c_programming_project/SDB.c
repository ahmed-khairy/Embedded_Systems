#include "SDB.h"
#include <stdio.h>
#include<string.h>
student Mydata[max];
student *data_ptr[max];

bool SDB_ISFULL() {
	//check the database is full or not
	int i, count = 0;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) {
			count++;	//if pointer point to data it increment the counter
		}
	}
	if (count == max)	//after counting it check the value if it has the max value
		return 1;		//return 1 if full
	else
		return 0;		//return 0 if not full
}

uint8 SDB_GetUsedSize() {
	uint8 counter = 0;
	int i;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) {
			counter++;	//if pointer point to data it increment the counter
		}
	}
	return counter;		//return the counter which has the size of the database
}

bool SDB_AddEntry() {
	bool found = 0;
	int i;
	for (i = 0; i < max; i++) {
		if (!data_ptr[i]) {		//it keep incrementing until empty position
			printf("\n* Student number\t\t\t\t: %d\n", i + 1);		//the first empty position in pointer array
			data_ptr[i] = &Mydata[i];	//point to that data to reserve a new position
			printf("* Enter student ID\t\t\t\t: ");
			if (scanf("%d", &data_ptr[i]->Student_ID)) {	//getting student id and check if it as a number
				printf("* Enter student year\t\t\t\t: ");
				if (scanf("%d", &data_ptr[i]->Student_year)) {	//getting student year and check if it as a number
					printf("* Enter course1 ID\t\t\t\t: ");
					if (scanf("%d", &data_ptr[i]->Course1_ID)) {	//getting course 1 id and check if it as a number
						printf("* Enter course1 grade\t\t\t\t: ");
						if (scanf("%d", &data_ptr[i]->Course1_grade)) {	//getting course 1 grade and check if it as a number
							printf("* Enter course2 id\t\t\t\t: ");
							if (scanf("%d", &data_ptr[i]->Course2_ID)) {	//getting course 2 id and check if it as a number
								printf("* Enter course2 grade\t\t\t\t: ");
								if (scanf("%d", &data_ptr[i]->Course2_grade)) {	//getting course 2 grade and check if it as a number
									printf("* Enter course3 id\t\t\t\t: ");
									if (scanf("%d", &data_ptr[i]->Course3_ID)) {	//getting course 3 id and check if it as a number
										printf(
												"* Enter course3 grade\t\t\t\t: ");
										if (scanf("%d",
												&data_ptr[i]->Course3_grade)) {		//getting course 3 grade and check if it as a number
											found = 1;
											printf(
													"\n------------------------------------------\n");
											break;
										} else {
											printf(
													"\n------------------------------------------\n");
											printf(
													"\n Wrong data entry course3 grade!!\n");	//if error in data remove pointer data and break
											data_ptr[i] = NULL;
											break;
										}
									} else {
										printf(
												"\n------------------------------------------\n");
										printf(
												"\n Wrong data in course3 id!!\n");	//if error in data remove pointer data and break
										data_ptr[i] = NULL;
										break;
									}
								} else {
									printf(
											"\n------------------------------------------\n");
									printf(
											"\n Wrong data in course2 grade!!\n");	//if error in data remove pointer data and break
									data_ptr[i] = NULL;
									break;
								}
							} else {
								printf(
										"\n------------------------------------------\n");
								printf("\n Wrong data in course2 id!!\n");	//if error in data remove pointer data and break
								data_ptr[i] = NULL;
								break;
							}
						} else {
							printf(
									"\n------------------------------------------\n");
							printf("\n Wrong data in course1 grade!!\n");	//if error in data remove pointer data and break
							data_ptr[i] = NULL;
							break;
						}
					} else {
						printf(
								"\n------------------------------------------\n");
						printf("\n Wrong data in course1 id!!\n");	//if error in data remove pointer data and break
						data_ptr[i] = NULL;
						break;
					}
				} else {
					printf("\n------------------------------------------\n");
					printf("\n Wrong data in student year!!\n");	//if error in data remove pointer data and break
					data_ptr[i] = NULL;
					break;
				}
			} else {
				printf("\n------------------------------------------\n");
				printf("\n Wrong data in student id!!\n");	//if error in data remove pointer data and break
				data_ptr[i] = NULL;
				break;
			}
		}	//end of finding empty positions
	}
	if (found)	//if all data was valid it return 1
		return 1;
	else if (i == max) {	//if database was full it return 0
		printf("\n!!Database is full!!\n");
		return 0;
	} else
		return 0;
}

void SDB_DeletEntry(uint32 id) {
	bool found = 0;
	int i;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) {	//if pointer found any data
			if (data_ptr[i]->Student_ID == id) {	//check if pointer points to student id
				data_ptr[i] = NULL;	//remove pointer data
				printf("\n Student entry was deleted\n");
				break;
			}
		}
	}
	if (i == max) {	//if iterator reaches to max then the student id wasn't found
		printf("\n Student entry wasn't found!!!\n");
	}
}

bool SDB_ReadEntry(uint32 id) {
	bool found = 0;
	int i;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) {	//if pointer found any data
			if (data_ptr[i]->Student_ID == id) {	//check if the student id in database
				printf("Student id \t\t\t\t\t: %d\n", data_ptr[i]->Student_ID);	//print all student data
				printf("Student year \t\t\t\t\t: %d\n",
						data_ptr[i]->Student_year);
				printf("Student course1 id \t\t\t\t: %d\n",
						data_ptr[i]->Course1_ID);
				printf("Student course1 grade \t\t\t\t: %d\n",
						data_ptr[i]->Course1_grade);
				printf("Student course2 id \t\t\t\t: %d\n",
						data_ptr[i]->Course2_ID);
				printf("Student course2 grade2 \t\t\t\t: %d\n",
						data_ptr[i]->Course2_grade);
				printf("Student course3 id \t\t\t\t: %d\n",
						data_ptr[i]->Course3_ID);
				printf("Student course3 grade \t\t\t\t: %d\n",
						data_ptr[i]->Course3_grade);
				found = 1;
				break;
			}
		}
	}
	if (found)
		return 1;		//return 1 if data was found
	else
		return 0;	//return 0 if data was not found
}

void SDB_GetList(uint8 *count, uint32 *list) {
	int i;
	bool found = 0;
	*count = 0;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) { //if pointer found data
			found = 1;
			*(list + i) = data_ptr[i]->Student_ID;	//assign data to list
			*count += 1;	//increment the counter
		} else
			break;
	}
	if (!found)	//if database was empty it will print error
		printf(" Database is empty!!!\n");
	else {
		printf(" Number of students\t\t\t\t: %d\n", *count);	//printing number of students
		for (i = 0; i < *count; i++)
			printf(" STudent id %d \t\t\t\t\t: %d\n", i + 1, *data_ptr[i]);	//print elements of id list
	}
}

bool SDB_IsIdExist(uint32 id) {
	int i;
	for (i = 0; i < max; i++) {
		if (data_ptr[i]) {
			if (data_ptr[i]->Student_ID == id)	//check if this student id in database
				return 1;
		}
	}
	return 0;
}

