/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/4/2023
 *Session : c programming > session 2 > control flow > ASG_2-1
 *Program function: calculator asks the user to enter a mathematical operator and two number
 *and display the result
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculator_using_modular.h"
int main() {
	signed int num1, num2, result;
	unsigned char op;
	printf("Calculator\n\n");
	printf("Please choose one of the following operator : + - * / : ");
	scanf("%c", &op);
	printf("\nPlease enter first number : ");
	scanf("%d", &num1);
	printf("Please enter first number : ");
	scanf("%d", &num2);
	calculate(op,num1,num2);

	return 0;
}
