/*
 * file1.c
 *
 *  Created on: Sep 9, 2023
 *      Author: lt16096124s3
 */
#include <stdio.h>
void printData(int x, char *ptrX) {
	printf("x = %x *ptrx = %x\n", x, *ptrX);
	*(ptrX++);
	printf("x = %x *ptrX after *(ptrX++)  = %x\n", x, *ptrX);
	(*ptrX)++;
	printf("x = %x *ptrX after (*ptrX)++  = %x\n", x, *ptrX);

}
