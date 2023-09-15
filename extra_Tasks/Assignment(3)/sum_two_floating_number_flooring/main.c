/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 15, 2023
 *  Program function: program to add two floating numbers, Determine the integer floor of the sum.
 *  Notes : truncated float value, anything after the decimal point is dropped.
 */

#include<stdio.h>
#include"sum.h"
int main() {
	float a, b;
	int result;
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	result = sum(a, b);
	printf("The result is : %d\n", result);
	return 0;
}
