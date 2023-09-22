/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: program to Display Fibonacci Sequence Using the Iterative method(while)
 */

#include<stdio.h>

#include "iterative.h"

int main() {
	int a, b, sum, n, i;
	a = 0, b = 1, sum = 0, i = 2;
	printf("Please Enter your preferred number of elements here: ");
	scanf("%d", &n);
	printf("The Fibonacci Series will be: %d %d ", a, b);
	fibSeries(&a, &b, &sum, &i, n);
	return 0;
}
