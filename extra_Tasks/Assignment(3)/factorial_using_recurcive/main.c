/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 8/9/2023
 *Program function: program that calculate factorial using recursive call
 */
#include <stdio.h>
#include <stdlib.h>
#include "factorial_using_recurcive.h"
int main(void) {
	signed short int num;
	printf("Enter any number to get its factorial : ");
	scanf("%hd", &num);
	printf("\nThe factorial number of %hd is %hd\n", num, getFactorial(num));
	return 0;
}
