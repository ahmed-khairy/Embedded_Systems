#include<stdio.h>
int fibSeries(int *a, int *b, int *sum, int n) {
	for (int i = 2; i < n; i++) {
		*sum = *a + *b;
		printf("%d ", *sum);
		*a = *b, *b = *sum;
	}
}
