#include<stdio.h>
void getMax(int arr[], int arr_size) {
	int i, x = 0, max = arr[0];
	for (i = 1; i < arr_size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			x = i;
		}
	}
	printf("The maximum Number is %d in position %d", max, x);
	printf("\n");
	printf("\n");
}
