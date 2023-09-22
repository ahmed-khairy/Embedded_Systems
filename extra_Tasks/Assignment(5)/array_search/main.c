/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: get 5 numbers using array then print and get the index of the input number
 *  Notes : 
 */

#include<stdio.h>
#include"getindex.h"
#include"getnumbers.h"
#include"printnumbers.h"

int main() {
	int arr_size = 5, number;
	int arr[arr_size];
	getNumbers(arr, arr_size);
	printNumbers(arr, arr_size);
	printf("Enter number : ");
	scanf("%d", &number);
	getindex(arr, arr_size, number);
	return 0;
}
