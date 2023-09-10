/*
 * main.c
 *
 *  Created on: Sep 9, 2023
 *      Author: lt16096124s3
 */
#include <stdio.h>
#include "file1.h"
int main() {
	int x = 5;
	int *ptrX = &x;
	*ptrX = 10;
	printf("&p : %x before calling function\n", &x);
	printData(x, ptrX);

	return 0;
}
