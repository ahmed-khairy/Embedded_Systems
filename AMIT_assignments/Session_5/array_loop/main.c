/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: get 5 numbers using array then print, get max and get min of them
 *  Notes : 
 */

#include<stdio.h>
#include"getmax.h"
#include"getmin.h"
#include"getnumbers.h"
#include"printnumbers.h"
#include"reorder.h"

int main() {
	int arr_size = 5;
	int arr_1[arr_size];
	getNumbers(arr_1, arr_size);
	getMax(arr_1, arr_size);
	getMin(arr_1, arr_size);
	printNumbers(arr_1, arr_size);
	reorderNumbers(arr_1, arr_size);

	return 0;
}
