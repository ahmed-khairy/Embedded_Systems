#include<stdio.h>
void getMin(int arr[], int arr_size) {
	int i, x = 0, min = arr[0];
	for (i = 1; i < arr_size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			x = i;
		}
	}
	printf("The minmum Number is %d in position %d", min, x);
	printf("\n");
}
