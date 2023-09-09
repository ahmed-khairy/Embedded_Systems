/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/9/2023
 *Program function: check if the first number multiple of the second
 */
#include <stdio.h>
#include <stdlib.h>
#include "check_if_number_multiple_of_other.h"

int main() {
	signed int num1, num2, result;
	printf("\nPlease enter first number : ");
	scanf("%d", &num1);
	printf("Please enter first number : ");
	scanf("%d", &num2);
	check(num1,num2);
	return 0;
}
