/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 8/9/2023
 *Program function: program swapping between two numbers order
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, x;
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	num1 += num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("num1 : %d\n",num1);
	printf("num2 : %d\n",num2);
	return 0;
}
