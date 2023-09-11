/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 11, 2023
 *  Program function: program that ask you to enter a value of a variable int x.
 *  Pass the address of x to a function called edit.
 *  Increment the value of x by 1 inside the function.
 *  Print the value of x in the main function before and after calling the function edit.
 */
#include <stdio.h>
#include "file1.h"
int main() {
	int x;
	printf("Enter the value of X\n");
	scanf("%x", &x);
	printf("Before calling edit x = %p\n", x);
	edit(&x);
	printf("After calling edit x = %p\n", x);
	return 0;
}
