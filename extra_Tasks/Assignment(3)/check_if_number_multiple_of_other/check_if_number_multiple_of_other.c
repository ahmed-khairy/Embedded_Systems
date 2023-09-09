#include <stdio.h>
void check(int num1, int num2) {
	int test = num1 / num2;
	(test == num2) ?
			printf("Number %d IS multiple of %d\n", num1, num2) :
			printf("Number %d ISN'T multiple of %d\n", num1, num2);
}
