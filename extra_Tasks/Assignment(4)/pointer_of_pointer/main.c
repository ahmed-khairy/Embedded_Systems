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
	int *ptr1 = &x;
	int **ptr2 = &ptr1;
	printData(x, ptr1, ptr2);
	return 0;
}
