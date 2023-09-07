/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 7/9/2023
 *Program function: program that takes two integers from the user and print the results of this equation:
 *Result = ((num1 + num2) * 3) – 10
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, result;
	printf("Enter first and second number : ");
	if (scanf("%d", &num1) != 1 || scanf("%d", &num2) != 1) {
		printf("invalid number(s)");
	} else {
		result = ((num1 + num2) * 3) - 10;
		printf("\nResult of ((%d + %d) * 3) - 10 = %d", num1, num2, result);
	}
	return 0;
}
