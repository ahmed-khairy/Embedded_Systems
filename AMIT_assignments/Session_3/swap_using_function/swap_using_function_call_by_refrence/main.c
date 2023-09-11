/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 11, 2023
 *  Program function: program that takes from user two numbers and pass them to avoid
 *  function called swap.
 *  This function receive the two numbers in two variables x and y and print the two
 *  variables then swap their values and Print x and y again after swapping.
 *  Notes : Do not use a third variable inside the function.
 */

#include<stdio.h>
#include"swap.h"
int main() {
	int x, y;
	printf("Enter first Number :\n");
	scanf("%d", &x);
	printf("Enter second Number :\n");
	scanf("%d", &y);
	swap(x, y);
	return 0;
}
