/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/4/2023
 *Session : c programming > session 2 > control flow > ASG_2-2
 *Program function: ask user to input number and check if the number is armstrong number
 *Notes : Armstrong number is a number that is equal to the sum of cubes of its digits
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, original_num, a, b, c, i, sum;
	printf("enter the number= ");
	scanf("%d", &number);
	original_num = number;
	a = number % 10;
	number /= 10;
	b = number % 10;
	number /= 10;
	c = number % 10;
	a = a * a * a;
	b = b * b * b;
	c = c * c * c;
	sum = a + b + c;
	(sum == original_num) ?
			printf("%d IS an Armstrong number", original_num) :
			printf("%d ISN'T an Armstrong number", original_num);
	return 0;
}
