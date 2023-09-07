/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 7/9/2023
 *Program function: program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula:
 *F = C x 9/5 + 32
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c, f;
	printf("Enter temperature in Celsius degree: ");
	if (scanf("%f", &c) == 1) {
		f = c * 9 / 5 + 32;
		printf("degrees Fahrenheit = %0.1f X 9/5 +32 = %0.1f\n", c, f);
	} else {
		printf("Invalid Celsius degree!!\n ");
	}
	return 0;
}
