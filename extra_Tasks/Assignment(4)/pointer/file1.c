/*
 * file1.c
 *
 *  Created on: Sep 9, 2023
 *      Author: lt16096124s3
 */
#include <stdio.h>
void printData(int x, int *ptrX) {
	printf("x = %d ptrx = %p *ptrx = %d &ptrx = %p\n", x, ptrX,
			*ptrX, &ptrX);
}

