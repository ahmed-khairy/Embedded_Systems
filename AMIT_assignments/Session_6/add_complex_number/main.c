/*
 * main.c
 *
 *  Author : Ahmed khairy
 *  Created on: Sep 22, 2023
 *  Program function: adding complex numbers
 *  Notes : 
 */

typedef struct complex_number {
	int r;
	int i;
} cmplxNum;

#include<stdio.h>
#define addingComplex(x,y) (float)x+y

int main() {
	cmplxNum num1, num2, result;
	printf(
			"for 1st complex number\nEnter real and imaginary part respectively:\n");
	scanf("%d", &num1.r);
	scanf("%d", &num1.i);

	printf(
			"for 2nd complex number\nEnter real and imaginary part respectively:\n");
	scanf("%d", &num2.r);
	scanf("%d", &num2.i);

	result.r = addingComplex(num1.r, num2.r);
	result.i = addingComplex(num1.i, num2.i);

	printf("Sum = %0.1f + %0.1fi\n", (float) result.r, (float) result.i);
	return 0;
}
