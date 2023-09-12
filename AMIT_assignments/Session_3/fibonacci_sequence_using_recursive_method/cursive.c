#include<stdio.h>
int fibSeries(int *a, int *b, int *sum, int *i, int n) {
	if (*i < n) {
		*sum = *a + *b;
		printf("%d ", *sum);
		*a = *b, *b = *sum, *i += 1;
		fibSeries(a, b, sum, i, n);
	} else {
		return 0;

	}
}
