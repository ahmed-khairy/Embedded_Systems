/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 15, 2023
 *  Program function: program to detect prime numbers
 */

#include<stdio.h>

#include "prime.h"
int main() {
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	prime(num);
	return 0;
}
