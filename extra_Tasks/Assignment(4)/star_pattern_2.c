/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/4/2023
 *Session : 
 *Program function: drawing a pattern from * each line has number of starts according to it's number
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int r, c, i;
	printf("Enter numbers of rows : ");
	scanf("%d", &r);
	for (c = 0; c <= r; c++) {
		for (i = 1; i <= r - c; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
