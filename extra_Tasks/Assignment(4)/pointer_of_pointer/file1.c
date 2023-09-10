/*
 * file1.c
 *
 *  Created on: Sep 9, 2023
 *      Author: lt16096124s3
 */
#include <stdio.h>
void printData(int x, int *ptrX, int **ptrX2) {

	printf("ptrX1 : %p\n", ptrX);
	printf("ptrX2 : %p\n", ptrX2);

	printf("*ptrX1 : %d\n", *ptrX);
	printf("*ptrX2 : %p\n", *ptrX2);

	printf("**ptrX2 : %d\n", **ptrX2);


}
