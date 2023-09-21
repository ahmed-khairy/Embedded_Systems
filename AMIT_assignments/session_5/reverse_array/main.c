/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: reverse array
 *  Notes : 
 */

#include<stdio.h>
#include"getnumbers.h"
#include"printnumbers.h"
#include "reversing.h"
int main() {
	int arr_size = 5;
	int arr_1[arr_size];
	getNumbers(arr_1, arr_size);
	printNumbers(arr_1, arr_size);
	reverseArray(arr_1, arr_size);

	return 0;
}
