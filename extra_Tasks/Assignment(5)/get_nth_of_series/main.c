/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: get nth of series 1,3,5,7,9 ,....
 *  Notes : 
 */

#include<stdio.h>
#include"get_nth.h"
int n;
int main() {
	printf(
			"Enter nth to compute term of the arithmetic series: 1, 3, 5, 7, 9, \n");
	scanf("%d", &n);
	get_nth();

	return 0;
}
