/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 11, 2023
 *  Program function: program to Display Fibonacci Sequence Usingthe Recursion Method
 */

#include<stdio.h>
#include"cursive.h"

int main() {
	int a, b, sum, n, i;
	a = 0, b = 1, sum = 0, i = 2;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("%d %d ", a, b);
	fibSeries(&a, &b, &sum, &i, n);
	return 0;
}
