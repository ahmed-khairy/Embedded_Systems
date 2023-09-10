/*
 * main.c
 *
 *  Created on: Sep 9, 2023
 *      Author: lt16096124s3
 */
#include <stdio.h>
#include "file1.h"
int main() {
	long int x = 0x44332211;
	char *ptrX = (char *)&x;
	printData(x, ptrX);

	return 0;
}
