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
struct student {
	char name[10];
	int age;
	int degree;
	int section;
};

int main() {
	int i;
	struct student data[5] = { { "Ahmed", 31, 1, 1 }, { "Mohamed", 25, 2, 2 }, {
			"Khairy", 33, 3, 3 }, { "Fathy", 31, 1, 1 }, { "Sayed", 25, 1, 1 } };
	struct student *ptr;
	ptr = &data;
	print(ptr);

	return 0;

}

