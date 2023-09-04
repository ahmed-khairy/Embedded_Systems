/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/4/2023
 *Session : c programming > session 1 > hello c > ASG_1-2
 *Program function: how to set,clear or toggle a specific bit(user defined) in any number(user defined)
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, nth, result, x, op;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf(
			"Choose your operation by writing the equavilent number \
    		1(set) 2(clear) 3(toggle)\n");
	scanf("%d", &op);
	printf("Enter nth bit to set, clear or toggle : ");
	scanf("%d", &nth);
	switch (op) {
	case 1:
		x = 1 << nth;
		result = number | x;
		printf("set bit %d in %d result : %d\n", nth, number, result);
		break;
	case 2:
		x = ~(1 << nth);
		result = number & x;
		printf("clear bit %d in %d result : %d\n", nth, number, result);
		break;
	case 3:
		x = 1 << nth;
		result = number ^ x;
		printf("toggle bit %d in %d result : %d\n", nth, number, result);
		break;
	default:
		printf("you choose a wrong number\n");
		break;
	}

	return 0;
}
