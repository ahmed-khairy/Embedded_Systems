#include<stdio.h>
void prime(int num) {
	if (num == 2) {
		printf("%d is a Prime number.\n", num);
	} else if (num < 2 || num % 2 == 0 || num % 3 == 0) {
		printf("%d is NOT a Prime number.\n", num);
	} else {
		int x = 0, i = 1;
		while (num >= i) {
			if (num % i == 0) {
				x++;
			}
			i++;
		}
		if (x == 2) {
			printf("%d is a Prime number.\n", num);
		} else {
			printf("%d is NOT a Prime number.\n", num);
		}

	}
}
