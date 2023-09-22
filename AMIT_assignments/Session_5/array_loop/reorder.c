#include<stdio.h>
#include"printnumbers.h"

void reorderNumbers(int arr[], int arr_size) {
	int i, j, temp, temp2, newarr[arr_size];
	for (i = 0; i < arr_size; i++) {
		temp = arr[i];
		for (j = i; j < arr_size; j++) {
			if (temp > arr[j]) {
				temp2 = temp;
				temp = arr[j];
				arr[j] = temp2;
			}
		}
		newarr[i] = temp;
	}
	for (i = 0; i < arr_size; i++)
		arr[i] = newarr[i];
	printf("\n");
	printNumbers(arr, arr_size);
}
