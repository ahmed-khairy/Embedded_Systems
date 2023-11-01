#include<stdio.h>
#include"printnumbers.h"
void reverseArray(int arr[], int arr_size) {
	int i,temp;
	printf("Reverse of array: ");

	for (i = 0; i < arr_size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[arr_size - 1 - i];
		arr[arr_size - 1 - i] = temp;
	}
	printNumbers(arr, arr_size);
	printf("\n");

}
