/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 8/9/2023
 *Program function: program that print factorial of specific number
 */

#include <stdio.h>
#include <stdlib.h>

void factorial_print(int num);
int main(void) {
	int num;
	printf("Enter any number to get factorial : ");
	scanf("%d", &num);
	factorial_print(num);
	return 0;
}
void factorial_print(int num) {
	int x = num;
	int fact = 1;
	for (int i = num; i >= 1; i--) {
		fact *= num;
		num--;
	}
	printf("Factorial of %d = %d\n", x, fact);
}
