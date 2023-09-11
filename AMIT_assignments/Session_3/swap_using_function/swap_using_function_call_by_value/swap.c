#include<stdio.h>

void swap(int *x, int *y) {
	printf("before swapping\nx = %d\ty = %d\n", *x, *y);
	*x += *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("after swapping\nx = %d\ty = %d\n", *x, *y);
}
