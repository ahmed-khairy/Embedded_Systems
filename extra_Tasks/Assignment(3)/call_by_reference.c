/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 8/9/2023
 *Program function: program that swap between two numbers using function
 */

#include <stdio.h>
#include <stdlib.h>

//function declaration
void swap(int *num1, int *num2);
void myPrint(void);
void myPrint2(int, int);
//int myPrint3(void);
int myPrint4(int num1, int num2);

int main(void) {
	int var1, var2;
	myPrint();
	scanf("%d %d", &var1, &var2);
	myPrint2(var1, var2);
	swap(&var1, &var2);

	return 0;
}

//function definition
void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;

	num1 = num2;

	*num2 = temp;
	printf("\nTest %d %d\n", *num1, *num2);

	myPrint4(*num1, *num2);
}
void myPrint(void) {
	printf("Enter number 1, number 2 : ");
}
void myPrint2(int x, int y) {
	printf("Number 1 = %d , Number 2 = %d\n", x, y);

}
int myPrint4(int num1, int num2) {
	printf("Number 1 = %d , Number 2 = %d\n", num1, num2);
	return 0;

}
