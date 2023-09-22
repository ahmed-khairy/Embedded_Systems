/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: students database
 *  Notes :
 */

#include<stdio.h>
#include "structPrint.h"
struct mark {
	int arabic;
	int english;
	int math;
	int science;
};
struct student {
	char name[10];
	int roll;
	struct mark marks;
};

int main() {
	int i;
	struct student data[5] = { { "Ahmed", 1, 44, 45, 50, 50 }, { "Mohamed", 2,
			50, 45, 50, 50 }, { "Khairy", 1, 44, 45, 50, 30 }, { "Fathy", 1, 44,
			40, 50, 50 }, { "Sayed", 2, 33, 45, 50, 50 } };
	struct student *ptr;
	ptr = &data;
	print(ptr);

	return 0;

}

