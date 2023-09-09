/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 8/9/2023
 *Program function: program that calculate factorial using recursive call
 */

#include <stdio.h>
#include <stdlib.h>

int getFactorial(int num);
int main(void) {
	signed short int num;
	printf("Enter any number to get its factorial : ");
	scanf("%hd", &num);
	printf("\nThe factorial number of %hd is %hd\n", num, getFactorial(num));
	return 0;
}
int getFactorial(int num) {
	if (num == 0 || num == 1) {
		return 1;
	} else {
		return (num * getFactorial(num - 1));
	}
}
