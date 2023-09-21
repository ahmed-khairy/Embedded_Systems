#include<stdio.h>
#include"printnumbers.h"
void reverseArray(int arr[], int arr_size) {
	int i, x,newarr[5];
	printf("Reverse of array: ");

	for (i = 0; i < arr_size; i++) {
		x = arr[i];
		newarr[arr_size - i - 1] = x;
	}
	printNumbers(newarr,arr_size);
	printf("\n");

}
